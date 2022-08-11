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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int uint8_t ;
struct TYPE_7__ {TYPE_2__* priv_data; } ;
struct TYPE_5__ {int state64; int frame_start_found; } ;
struct TYPE_6__ {TYPE_1__ pc; } ;
typedef  TYPE_1__ ParseContext ;
typedef  TYPE_2__ HEVCParserContext ;
typedef  TYPE_3__ AVCodecParserContext ;

/* Variables and functions */
 int END_NOT_FOUND ; 
 int HEVC_NAL_BLA_W_LP ; 
 int HEVC_NAL_CRA_NUT ; 
 int HEVC_NAL_EOB_NUT ; 
 int HEVC_NAL_RASL_R ; 
 int HEVC_NAL_SEI_PREFIX ; 
 int HEVC_NAL_VPS ; 
 int START_CODE ; 

__attribute__((used)) static int hevc_find_frame_end(AVCodecParserContext *s, const uint8_t *buf,
                               int buf_size)
{
    HEVCParserContext *ctx = s->priv_data;
    ParseContext       *pc = &ctx->pc;
    int i;

    for (i = 0; i < buf_size; i++) {
        int nut;

        pc->state64 = (pc->state64 << 8) | buf[i];

        if (((pc->state64 >> 3 * 8) & 0xFFFFFF) != START_CODE)
            continue;

        nut = (pc->state64 >> 2 * 8 + 1) & 0x3F;
        // Beginning of access unit
        if ((nut >= HEVC_NAL_VPS && nut <= HEVC_NAL_EOB_NUT) || nut == HEVC_NAL_SEI_PREFIX ||
            (nut >= 41 && nut <= 44) || (nut >= 48 && nut <= 55)) {
            if (pc->frame_start_found) {
                pc->frame_start_found = 0;
                return i - 5;
            }
        } else if (nut <= HEVC_NAL_RASL_R ||
                   (nut >= HEVC_NAL_BLA_W_LP && nut <= HEVC_NAL_CRA_NUT)) {
            int first_slice_segment_in_pic_flag = buf[i] >> 7;
            if (first_slice_segment_in_pic_flag) {
                if (!pc->frame_start_found) {
                    pc->frame_start_found = 1;
                } else { // First slice of next frame found
                    pc->frame_start_found = 0;
                    return i - 5;
                }
            }
        }
    }

    return END_NOT_FOUND;
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
          int buf_size = 100;
          int _len_s0 = 1;
          struct TYPE_7__ * s = (struct TYPE_7__ *) malloc(_len_s0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__priv_data0 = 1;
          s[_i0].priv_data = (struct TYPE_6__ *) malloc(_len_s__i0__priv_data0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__priv_data0; _j0++) {
            s[_i0].priv_data->pc.state64 = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].priv_data->pc.frame_start_found = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buf0 = 1;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hevc_find_frame_end(s,buf,buf_size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].priv_data);
          }
          free(s);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int buf_size = 255;
          int _len_s0 = 65025;
          struct TYPE_7__ * s = (struct TYPE_7__ *) malloc(_len_s0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__priv_data0 = 1;
          s[_i0].priv_data = (struct TYPE_6__ *) malloc(_len_s__i0__priv_data0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__priv_data0; _j0++) {
            s[_i0].priv_data->pc.state64 = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].priv_data->pc.frame_start_found = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buf0 = 65025;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hevc_find_frame_end(s,buf,buf_size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].priv_data);
          }
          free(s);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int buf_size = 10;
          int _len_s0 = 100;
          struct TYPE_7__ * s = (struct TYPE_7__ *) malloc(_len_s0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__priv_data0 = 1;
          s[_i0].priv_data = (struct TYPE_6__ *) malloc(_len_s__i0__priv_data0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__priv_data0; _j0++) {
            s[_i0].priv_data->pc.state64 = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].priv_data->pc.frame_start_found = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buf0 = 100;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hevc_find_frame_end(s,buf,buf_size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].priv_data);
          }
          free(s);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
