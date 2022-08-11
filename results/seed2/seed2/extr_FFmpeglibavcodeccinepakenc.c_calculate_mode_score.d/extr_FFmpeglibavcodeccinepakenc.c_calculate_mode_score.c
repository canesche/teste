// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
");

}


// ------------------------------------------------------------------------- //

#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int v1_size; int v4_size; int mode; } ;
typedef  TYPE_1__ strip_info ;
struct TYPE_7__ {int v1_error; void* best_encoding; int v4_error; int skip_error; } ;
typedef  TYPE_2__ mb_info ;
typedef  int int64_t ;
struct TYPE_8__ {scalar_t__ pix_fmt; int w; int lambda; TYPE_2__* mb; } ;
typedef  TYPE_3__ CinepakEncContext ;

/* Variables and functions */
 scalar_t__ AV_PIX_FMT_RGB24 ; 
 int CHUNK_HEADER_SIZE ; 
 void* ENC_SKIP ; 
 void* ENC_V1 ; 
 void* ENC_V4 ; 
 int FF_LAMBDA_SCALE ; 
 int MB_AREA ; 
#define  MODE_MC 130 
#define  MODE_V1_ONLY 129 
#define  MODE_V1_V4 128 

__attribute__((used)) static int64_t calculate_mode_score(CinepakEncContext *s, int h,
                                    strip_info *info, int report,
                                    int *training_set_v1_shrunk,
                                    int *training_set_v4_shrunk)
{
    // score = FF_LAMBDA_SCALE * error + lambda * bits
    int x;
    int entry_size = s->pix_fmt == AV_PIX_FMT_RGB24 ? 6 : 4;
    int mb_count   = s->w * h / MB_AREA;
    mb_info *mb;
    int64_t score1, score2, score3;
    int64_t ret = s->lambda * ((info->v1_size ? CHUNK_HEADER_SIZE + info->v1_size * entry_size : 0) +
                               (info->v4_size ? CHUNK_HEADER_SIZE + info->v4_size * entry_size : 0) +
                               CHUNK_HEADER_SIZE) << 3;

    switch (info->mode) {
    case MODE_V1_ONLY:
        // one byte per MB
        ret += s->lambda * 8 * mb_count;

        // while calculating we assume all blocks are ENC_V1
        for (x = 0; x < mb_count; x++) {
            mb   = &s->mb[x];
            ret += FF_LAMBDA_SCALE * mb->v1_error;
            // this function is never called for report in MODE_V1_ONLY
            // if (!report)
            mb->best_encoding = ENC_V1;
        }

        break;
    case MODE_V1_V4:
        // 9 or 33 bits per MB
        if (report) {
            // no moves between the corresponding training sets are allowed
            *training_set_v1_shrunk = *training_set_v4_shrunk = 0;
            for (x = 0; x < mb_count; x++) {
                int mberr;
                mb = &s->mb[x];
                if (mb->best_encoding == ENC_V1)
                    score1 = s->lambda * 9 + FF_LAMBDA_SCALE * (mberr = mb->v1_error);
                else
                    score1 = s->lambda * 33 + FF_LAMBDA_SCALE * (mberr = mb->v4_error);
                ret += score1;
            }
        } else { // find best mode per block
            for (x = 0; x < mb_count; x++) {
                mb     = &s->mb[x];
                score1 = s->lambda * 9 + FF_LAMBDA_SCALE * mb->v1_error;
                score2 = s->lambda * 33 + FF_LAMBDA_SCALE * mb->v4_error;

                if (score1 <= score2) {
                    ret += score1;
                    mb->best_encoding = ENC_V1;
                } else {
                    ret += score2;
                    mb->best_encoding = ENC_V4;
                }
            }
        }

        break;
    case MODE_MC:
        // 1, 10 or 34 bits per MB
        if (report) {
            int v1_shrunk = 0, v4_shrunk = 0;
            for (x = 0; x < mb_count; x++) {
                mb = &s->mb[x];
                // it is OK to move blocks to ENC_SKIP here
                // but not to any codebook encoding!
                score1 = s->lambda * 1 + FF_LAMBDA_SCALE * mb->skip_error;
                if (mb->best_encoding == ENC_SKIP) {
                    ret += score1;
                } else if (mb->best_encoding == ENC_V1) {
                    if ((score2 = s->lambda * 10 + FF_LAMBDA_SCALE * mb->v1_error) >= score1) {
                        mb->best_encoding = ENC_SKIP;
                        ++v1_shrunk;
                        ret += score1;
                    } else {
                        ret += score2;
                    }
                } else {
                    if ((score3 = s->lambda * 34 + FF_LAMBDA_SCALE * mb->v4_error) >= score1) {
                        mb->best_encoding = ENC_SKIP;
                        ++v4_shrunk;
                        ret += score1;
                    } else {
                        ret += score3;
                    }
                }
            }
            *training_set_v1_shrunk = v1_shrunk;
            *training_set_v4_shrunk = v4_shrunk;
        } else { // find best mode per block
            for (x = 0; x < mb_count; x++) {
                mb     = &s->mb[x];
                score1 = s->lambda * 1 + FF_LAMBDA_SCALE * mb->skip_error;
                score2 = s->lambda * 10 + FF_LAMBDA_SCALE * mb->v1_error;
                score3 = s->lambda * 34 + FF_LAMBDA_SCALE * mb->v4_error;

                if (score1 <= score2 && score1 <= score3) {
                    ret += score1;
                    mb->best_encoding = ENC_SKIP;
                } else if (score2 <= score3) {
                    ret += score2;
                    mb->best_encoding = ENC_V1;
                } else {
                    ret += score3;
                    mb->best_encoding = ENC_V4;
                }
            }
        }

        break;
    }

    return ret;
}


// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          int h = 100;
          int report = 100;
          int _len_s0 = 1;
          struct TYPE_8__ * s = (struct TYPE_8__ *) malloc(_len_s0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].pix_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].lambda = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__mb0 = 1;
          s[_i0].mb = (struct TYPE_7__ *) malloc(_len_s__i0__mb0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__mb0; _j0++) {
            s[_i0].mb->v1_error = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].mb->v4_error = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].mb->skip_error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_info0 = 1;
          struct TYPE_6__ * info = (struct TYPE_6__ *) malloc(_len_info0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].v1_size = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].v4_size = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_training_set_v1_shrunk0 = 1;
          int * training_set_v1_shrunk = (int *) malloc(_len_training_set_v1_shrunk0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_training_set_v1_shrunk0; _i0++) {
            training_set_v1_shrunk[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_training_set_v4_shrunk0 = 1;
          int * training_set_v4_shrunk = (int *) malloc(_len_training_set_v4_shrunk0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_training_set_v4_shrunk0; _i0++) {
            training_set_v4_shrunk[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = calculate_mode_score(s,h,info,report,training_set_v1_shrunk,training_set_v4_shrunk);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].mb);
          }
          free(s);
          free(info);
          free(training_set_v1_shrunk);
          free(training_set_v4_shrunk);
        
        break;
    }
    // big-arr
    case 1:
    {
          int h = 255;
          int report = 255;
          int _len_s0 = 65025;
          struct TYPE_8__ * s = (struct TYPE_8__ *) malloc(_len_s0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].pix_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].lambda = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__mb0 = 1;
          s[_i0].mb = (struct TYPE_7__ *) malloc(_len_s__i0__mb0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__mb0; _j0++) {
            s[_i0].mb->v1_error = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].mb->v4_error = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].mb->skip_error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_info0 = 65025;
          struct TYPE_6__ * info = (struct TYPE_6__ *) malloc(_len_info0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].v1_size = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].v4_size = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_training_set_v1_shrunk0 = 65025;
          int * training_set_v1_shrunk = (int *) malloc(_len_training_set_v1_shrunk0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_training_set_v1_shrunk0; _i0++) {
            training_set_v1_shrunk[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_training_set_v4_shrunk0 = 65025;
          int * training_set_v4_shrunk = (int *) malloc(_len_training_set_v4_shrunk0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_training_set_v4_shrunk0; _i0++) {
            training_set_v4_shrunk[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = calculate_mode_score(s,h,info,report,training_set_v1_shrunk,training_set_v4_shrunk);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].mb);
          }
          free(s);
          free(info);
          free(training_set_v1_shrunk);
          free(training_set_v4_shrunk);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int h = 10;
          int report = 10;
          int _len_s0 = 100;
          struct TYPE_8__ * s = (struct TYPE_8__ *) malloc(_len_s0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].pix_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].lambda = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__mb0 = 1;
          s[_i0].mb = (struct TYPE_7__ *) malloc(_len_s__i0__mb0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__mb0; _j0++) {
            s[_i0].mb->v1_error = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].mb->v4_error = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].mb->skip_error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_info0 = 100;
          struct TYPE_6__ * info = (struct TYPE_6__ *) malloc(_len_info0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].v1_size = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].v4_size = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_training_set_v1_shrunk0 = 100;
          int * training_set_v1_shrunk = (int *) malloc(_len_training_set_v1_shrunk0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_training_set_v1_shrunk0; _i0++) {
            training_set_v1_shrunk[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_training_set_v4_shrunk0 = 100;
          int * training_set_v4_shrunk = (int *) malloc(_len_training_set_v4_shrunk0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_training_set_v4_shrunk0; _i0++) {
            training_set_v4_shrunk[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = calculate_mode_score(s,h,info,report,training_set_v1_shrunk,training_set_v4_shrunk);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].mb);
          }
          free(s);
          free(info);
          free(training_set_v1_shrunk);
          free(training_set_v4_shrunk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
