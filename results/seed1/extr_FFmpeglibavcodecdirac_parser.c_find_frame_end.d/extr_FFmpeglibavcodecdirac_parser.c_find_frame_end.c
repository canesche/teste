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
typedef  int uint32_t ;
struct TYPE_3__ {int state; int is_synced; int header_bytes_needed; int sync_offset; } ;
typedef  TYPE_1__ DiracParseContext ;

/* Variables and functions */
 int DIRAC_PARSE_INFO_PREFIX ; 

__attribute__((used)) static int find_frame_end(DiracParseContext *pc,
                          const uint8_t *buf, int buf_size)
{
    uint32_t state = pc->state;
    int i = 0;

    if (!pc->is_synced) {
        for (i = 0; i < buf_size; i++) {
            state = (state << 8) | buf[i];
            if (state == DIRAC_PARSE_INFO_PREFIX) {
                state                   = -1;
                pc->is_synced           = 1;
                pc->header_bytes_needed = 9;
                pc->sync_offset         = i;
                break;
            }
        }
    }

    if (pc->is_synced) {
        pc->sync_offset = 0;
        for (; i < buf_size; i++) {
            if (state == DIRAC_PARSE_INFO_PREFIX) {
                if ((buf_size - i) >= pc->header_bytes_needed) {
                    pc->state = -1;
                    return i + pc->header_bytes_needed;
                } else {
                    pc->header_bytes_needed = 9 - (buf_size - i);
                    break;
                }
            } else
                state = (state << 8) | buf[i];
        }
    }
    pc->state = state;
    return -1;
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
          int _len_pc0 = 1;
          struct TYPE_3__ * pc = (struct TYPE_3__ *) malloc(_len_pc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pc0; _i0++) {
            pc[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
        pc[_i0].is_synced = ((-2 * (next_i()%2)) + 1) * next_i();
        pc[_i0].header_bytes_needed = ((-2 * (next_i()%2)) + 1) * next_i();
        pc[_i0].sync_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 1;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = find_frame_end(pc,buf,buf_size);
          printf("%d\n", benchRet); 
          free(pc);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int buf_size = 255;
          int _len_pc0 = 65025;
          struct TYPE_3__ * pc = (struct TYPE_3__ *) malloc(_len_pc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pc0; _i0++) {
            pc[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
        pc[_i0].is_synced = ((-2 * (next_i()%2)) + 1) * next_i();
        pc[_i0].header_bytes_needed = ((-2 * (next_i()%2)) + 1) * next_i();
        pc[_i0].sync_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 65025;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = find_frame_end(pc,buf,buf_size);
          printf("%d\n", benchRet); 
          free(pc);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int buf_size = 10;
          int _len_pc0 = 100;
          struct TYPE_3__ * pc = (struct TYPE_3__ *) malloc(_len_pc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pc0; _i0++) {
            pc[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
        pc[_i0].is_synced = ((-2 * (next_i()%2)) + 1) * next_i();
        pc[_i0].header_bytes_needed = ((-2 * (next_i()%2)) + 1) * next_i();
        pc[_i0].sync_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 100;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = find_frame_end(pc,buf,buf_size);
          printf("%d\n", benchRet); 
          free(pc);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
