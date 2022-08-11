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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int uint8_t ;
struct TYPE_3__ {size_t nal_pos; int nal_len; } ;
typedef  TYPE_1__ H264ConvertState ;

/* Variables and functions */
 int INT_MAX ; 

__attribute__((used)) static void convert_h264_to_annexb( uint8_t *p_buf, size_t i_len,
                                    size_t i_nal_size,
                                    H264ConvertState *state )
{
    if( i_nal_size < 3 || i_nal_size > 4 )
        return;

    /* This only works for NAL sizes 3-4 */
    while( i_len > 0 )
    {
        if( state->nal_pos < i_nal_size ) {
            unsigned int i;
            for( i = 0; state->nal_pos < i_nal_size && i < i_len; i++, state->nal_pos++ ) {
                state->nal_len = (state->nal_len << 8) | p_buf[i];
                p_buf[i] = 0;
            }
            if( state->nal_pos < i_nal_size )
                return;
            p_buf[i - 1] = 1;
            p_buf += i;
            i_len -= i;
        }
        if( state->nal_len > INT_MAX )
            return;
        if( state->nal_len > i_len )
        {
            state->nal_len -= i_len;
            return;
        }
        else
        {
            p_buf += state->nal_len;
            i_len -= state->nal_len;
            state->nal_len = 0;
            state->nal_pos = 0;
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
          unsigned long i_len = 100;
          unsigned long i_nal_size = 100;
          int _len_p_buf0 = 1;
          int * p_buf = (int *) malloc(_len_p_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_buf0; _i0++) {
            p_buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state0 = 1;
          struct TYPE_3__ * state = (struct TYPE_3__ *) malloc(_len_state0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].nal_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].nal_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          convert_h264_to_annexb(p_buf,i_len,i_nal_size,state);
          free(p_buf);
          free(state);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long i_len = 255;
          unsigned long i_nal_size = 255;
          int _len_p_buf0 = 65025;
          int * p_buf = (int *) malloc(_len_p_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_buf0; _i0++) {
            p_buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state0 = 65025;
          struct TYPE_3__ * state = (struct TYPE_3__ *) malloc(_len_state0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].nal_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].nal_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          convert_h264_to_annexb(p_buf,i_len,i_nal_size,state);
          free(p_buf);
          free(state);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long i_len = 10;
          unsigned long i_nal_size = 10;
          int _len_p_buf0 = 100;
          int * p_buf = (int *) malloc(_len_p_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_buf0; _i0++) {
            p_buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state0 = 100;
          struct TYPE_3__ * state = (struct TYPE_3__ *) malloc(_len_state0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].nal_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].nal_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          convert_h264_to_annexb(p_buf,i_len,i_nal_size,state);
          free(p_buf);
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
