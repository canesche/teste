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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  uint8_t ;
struct TYPE_5__ {int /*<<< orphan*/ * v4_codebook; } ;
typedef  TYPE_1__ strip_info ;
struct TYPE_6__ {scalar_t__ pix_fmt; } ;
typedef  TYPE_2__ CinepakEncContext ;

/* Variables and functions */
 scalar_t__ AV_PIX_FMT_RGB24 ; 

__attribute__((used)) static void decode_v4_vector(CinepakEncContext *s, uint8_t *data[4],
                             int linesize[4], int *v4_vector, strip_info *info)
{
    int i, x, y, entry_size = s->pix_fmt == AV_PIX_FMT_RGB24 ? 6 : 4;

    for (i = y = 0; y < 4; y += 2) {
        for (x = 0; x < 4; x += 2, i++) {
            data[0][x     +  y      * linesize[0]] = info->v4_codebook[v4_vector[i] * entry_size];
            data[0][x + 1 +  y      * linesize[0]] = info->v4_codebook[v4_vector[i] * entry_size + 1];
            data[0][x     + (y + 1) * linesize[0]] = info->v4_codebook[v4_vector[i] * entry_size + 2];
            data[0][x + 1 + (y + 1) * linesize[0]] = info->v4_codebook[v4_vector[i] * entry_size + 3];

            if (s->pix_fmt == AV_PIX_FMT_RGB24) {
                data[1][(x >> 1) + (y >> 1) * linesize[1]] = info->v4_codebook[v4_vector[i] * entry_size + 4];
                data[2][(x >> 1) + (y >> 1) * linesize[2]] = info->v4_codebook[v4_vector[i] * entry_size + 5];
            }
        }
    }
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
          int _len_s0 = 1;
          struct TYPE_6__ * s = (struct TYPE_6__ *) malloc(_len_s0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].pix_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 4;
          int ** data = (int **) malloc(_len_data0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            int _len_data1 = 1;
            data[_i0] = (int *) malloc(_len_data1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_data1; _i1++) {
              data[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_linesize0 = 4;
          int * linesize = (int *) malloc(_len_linesize0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_linesize0; _i0++) {
            linesize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_v4_vector0 = 1;
          int * v4_vector = (int *) malloc(_len_v4_vector0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_v4_vector0; _i0++) {
            v4_vector[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 1;
          struct TYPE_5__ * info = (struct TYPE_5__ *) malloc(_len_info0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__v4_codebook0 = 1;
          info[_i0].v4_codebook = (int *) malloc(_len_info__i0__v4_codebook0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_info__i0__v4_codebook0; _j0++) {
            info[_i0].v4_codebook[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          decode_v4_vector(s,data,linesize,v4_vector,info);
          free(s);
          for(int i1 = 0; i1 < _len_data0; i1++) {
            int _len_data1 = 1;
              free(data[i1]);
          }
          free(data);
          free(linesize);
          free(v4_vector);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].v4_codebook);
          }
          free(info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct TYPE_6__ * s = (struct TYPE_6__ *) malloc(_len_s0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].pix_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 65025;
          int ** data = (int **) malloc(_len_data0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            int _len_data1 = 1;
            data[_i0] = (int *) malloc(_len_data1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_data1; _i1++) {
              data[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_linesize0 = 65025;
          int * linesize = (int *) malloc(_len_linesize0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_linesize0; _i0++) {
            linesize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_v4_vector0 = 65025;
          int * v4_vector = (int *) malloc(_len_v4_vector0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_v4_vector0; _i0++) {
            v4_vector[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 65025;
          struct TYPE_5__ * info = (struct TYPE_5__ *) malloc(_len_info0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__v4_codebook0 = 1;
          info[_i0].v4_codebook = (int *) malloc(_len_info__i0__v4_codebook0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_info__i0__v4_codebook0; _j0++) {
            info[_i0].v4_codebook[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          decode_v4_vector(s,data,linesize,v4_vector,info);
          free(s);
          for(int i1 = 0; i1 < _len_data0; i1++) {
            int _len_data1 = 1;
              free(data[i1]);
          }
          free(data);
          free(linesize);
          free(v4_vector);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].v4_codebook);
          }
          free(info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct TYPE_6__ * s = (struct TYPE_6__ *) malloc(_len_s0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].pix_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 100;
          int ** data = (int **) malloc(_len_data0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            int _len_data1 = 1;
            data[_i0] = (int *) malloc(_len_data1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_data1; _i1++) {
              data[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_linesize0 = 100;
          int * linesize = (int *) malloc(_len_linesize0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_linesize0; _i0++) {
            linesize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_v4_vector0 = 100;
          int * v4_vector = (int *) malloc(_len_v4_vector0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_v4_vector0; _i0++) {
            v4_vector[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 100;
          struct TYPE_5__ * info = (struct TYPE_5__ *) malloc(_len_info0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__v4_codebook0 = 1;
          info[_i0].v4_codebook = (int *) malloc(_len_info__i0__v4_codebook0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_info__i0__v4_codebook0; _j0++) {
            info[_i0].v4_codebook[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          decode_v4_vector(s,data,linesize,v4_vector,info);
          free(s);
          for(int i1 = 0; i1 < _len_data0; i1++) {
            int _len_data1 = 1;
              free(data[i1]);
          }
          free(data);
          free(linesize);
          free(v4_vector);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].v4_codebook);
          }
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
