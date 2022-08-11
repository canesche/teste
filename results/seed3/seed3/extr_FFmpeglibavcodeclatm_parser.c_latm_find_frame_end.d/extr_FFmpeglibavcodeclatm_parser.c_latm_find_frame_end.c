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
typedef  int uint32_t ;
struct TYPE_7__ {TYPE_2__* priv_data; } ;
struct TYPE_5__ {int frame_start_found; int state; } ;
struct TYPE_6__ {int count; TYPE_1__ pc; } ;
typedef  TYPE_1__ ParseContext ;
typedef  TYPE_2__ LATMParseContext ;
typedef  TYPE_3__ AVCodecParserContext ;

/* Variables and functions */
 int END_NOT_FOUND ; 
 int LATM_HEADER ; 
 int LATM_MASK ; 
 int LATM_SIZE_MASK ; 

__attribute__((used)) static int latm_find_frame_end(AVCodecParserContext *s1, const uint8_t *buf,
                               int buf_size)
{
    LATMParseContext *s = s1->priv_data;
    ParseContext *pc    = &s->pc;
    int pic_found, i;
    uint32_t state;

    pic_found = pc->frame_start_found;
    state     = pc->state;

    if (!pic_found) {
        for (i = 0; i < buf_size; i++) {
            state = (state<<8) | buf[i];
            if ((state & LATM_MASK) == LATM_HEADER) {
                i++;
                s->count  = -i;
                pic_found = 1;
                break;
            }
        }
    }

    if (pic_found) {
        /* EOF considered as end of frame */
        if (buf_size == 0)
            return 0;
        if ((state & LATM_SIZE_MASK) - s->count <= buf_size) {
            pc->frame_start_found = 0;
            pc->state             = -1;
            return (state & LATM_SIZE_MASK) - s->count;
        }
    }

    s->count             += buf_size;
    pc->frame_start_found = pic_found;
    pc->state             = state;

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
          int _len_s10 = 1;
          struct TYPE_7__ * s1 = (struct TYPE_7__ *) malloc(_len_s10*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
              int _len_s1__i0__priv_data0 = 1;
          s1[_i0].priv_data = (struct TYPE_6__ *) malloc(_len_s1__i0__priv_data0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s1__i0__priv_data0; _j0++) {
            s1[_i0].priv_data->count = ((-2 * (next_i()%2)) + 1) * next_i();
        s1[_i0].priv_data->pc.frame_start_found = ((-2 * (next_i()%2)) + 1) * next_i();
        s1[_i0].priv_data->pc.state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buf0 = 1;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = latm_find_frame_end(s1,buf,buf_size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s10; _aux++) {
          free(s1[_aux].priv_data);
          }
          free(s1);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int buf_size = 255;
          int _len_s10 = 65025;
          struct TYPE_7__ * s1 = (struct TYPE_7__ *) malloc(_len_s10*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
              int _len_s1__i0__priv_data0 = 1;
          s1[_i0].priv_data = (struct TYPE_6__ *) malloc(_len_s1__i0__priv_data0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s1__i0__priv_data0; _j0++) {
            s1[_i0].priv_data->count = ((-2 * (next_i()%2)) + 1) * next_i();
        s1[_i0].priv_data->pc.frame_start_found = ((-2 * (next_i()%2)) + 1) * next_i();
        s1[_i0].priv_data->pc.state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buf0 = 65025;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = latm_find_frame_end(s1,buf,buf_size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s10; _aux++) {
          free(s1[_aux].priv_data);
          }
          free(s1);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int buf_size = 10;
          int _len_s10 = 100;
          struct TYPE_7__ * s1 = (struct TYPE_7__ *) malloc(_len_s10*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
              int _len_s1__i0__priv_data0 = 1;
          s1[_i0].priv_data = (struct TYPE_6__ *) malloc(_len_s1__i0__priv_data0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s1__i0__priv_data0; _j0++) {
            s1[_i0].priv_data->count = ((-2 * (next_i()%2)) + 1) * next_i();
        s1[_i0].priv_data->pc.frame_start_found = ((-2 * (next_i()%2)) + 1) * next_i();
        s1[_i0].priv_data->pc.state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buf0 = 100;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = latm_find_frame_end(s1,buf,buf_size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s10; _aux++) {
          free(s1[_aux].priv_data);
          }
          free(s1);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
