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

/* Type definitions */
typedef  int u32 ;
struct frame_info {int port; int tag_type; int vid; } ;

/* Variables and functions */
 int IFH_INJ_BYPASS ; 

__attribute__((used)) static int ocelot_gen_ifh(u32 *ifh, struct frame_info *info)
{
	ifh[0] = IFH_INJ_BYPASS;
	ifh[1] = (0xf00 & info->port) >> 8;
	ifh[2] = (0xff & info->port) << 24;
	ifh[3] = (info->tag_type << 16) | info->vid;

	return 0;
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
          int _len_ifh0 = 1;
          int * ifh = (int *) malloc(_len_ifh0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ifh0; _i0++) {
            ifh[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 1;
          struct frame_info * info = (struct frame_info *) malloc(_len_info0*sizeof(struct frame_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].port = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].tag_type = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].vid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ocelot_gen_ifh(ifh,info);
          printf("%d\n", benchRet); 
          free(ifh);
          free(info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ifh0 = 65025;
          int * ifh = (int *) malloc(_len_ifh0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ifh0; _i0++) {
            ifh[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 65025;
          struct frame_info * info = (struct frame_info *) malloc(_len_info0*sizeof(struct frame_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].port = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].tag_type = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].vid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ocelot_gen_ifh(ifh,info);
          printf("%d\n", benchRet); 
          free(ifh);
          free(info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ifh0 = 100;
          int * ifh = (int *) malloc(_len_ifh0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ifh0; _i0++) {
            ifh[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 100;
          struct frame_info * info = (struct frame_info *) malloc(_len_info0*sizeof(struct frame_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].port = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].tag_type = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].vid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ocelot_gen_ifh(ifh,info);
          printf("%d\n", benchRet); 
          free(ifh);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
