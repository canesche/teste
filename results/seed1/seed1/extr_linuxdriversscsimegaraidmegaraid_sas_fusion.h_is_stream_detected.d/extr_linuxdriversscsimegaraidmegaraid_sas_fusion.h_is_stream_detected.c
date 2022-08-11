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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int* bytes; } ;
struct RAID_CONTEXT_G35 {TYPE_1__ u; } ;

/* Variables and functions */
 int STREAM_DETECT_MASK ; 

__attribute__((used)) static inline bool is_stream_detected(struct RAID_CONTEXT_G35 *rctx_g35)
{
	return ((rctx_g35->u.bytes[1] & STREAM_DETECT_MASK));
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
          int _len_rctx_g350 = 1;
          struct RAID_CONTEXT_G35 * rctx_g35 = (struct RAID_CONTEXT_G35 *) malloc(_len_rctx_g350*sizeof(struct RAID_CONTEXT_G35));
          for(int _i0 = 0; _i0 < _len_rctx_g350; _i0++) {
              int _len_rctx_g35__i0__u_bytes0 = 1;
          rctx_g35[_i0].u.bytes = (int *) malloc(_len_rctx_g35__i0__u_bytes0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rctx_g35__i0__u_bytes0; _j0++) {
            rctx_g35[_i0].u.bytes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_stream_detected(rctx_g35);
          printf("%d\n", benchRet); 
          free(rctx_g35);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rctx_g350 = 65025;
          struct RAID_CONTEXT_G35 * rctx_g35 = (struct RAID_CONTEXT_G35 *) malloc(_len_rctx_g350*sizeof(struct RAID_CONTEXT_G35));
          for(int _i0 = 0; _i0 < _len_rctx_g350; _i0++) {
              int _len_rctx_g35__i0__u_bytes0 = 1;
          rctx_g35[_i0].u.bytes = (int *) malloc(_len_rctx_g35__i0__u_bytes0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rctx_g35__i0__u_bytes0; _j0++) {
            rctx_g35[_i0].u.bytes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_stream_detected(rctx_g35);
          printf("%d\n", benchRet); 
          free(rctx_g35);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rctx_g350 = 100;
          struct RAID_CONTEXT_G35 * rctx_g35 = (struct RAID_CONTEXT_G35 *) malloc(_len_rctx_g350*sizeof(struct RAID_CONTEXT_G35));
          for(int _i0 = 0; _i0 < _len_rctx_g350; _i0++) {
              int _len_rctx_g35__i0__u_bytes0 = 1;
          rctx_g35[_i0].u.bytes = (int *) malloc(_len_rctx_g35__i0__u_bytes0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rctx_g35__i0__u_bytes0; _j0++) {
            rctx_g35[_i0].u.bytes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_stream_detected(rctx_g35);
          printf("%d\n", benchRet); 
          free(rctx_g35);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
