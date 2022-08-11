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
struct TYPE_2__ {scalar_t__ version; } ;
union ep_buffer_info {TYPE_1__ common; } ;
typedef  scalar_t__ u32 ;
struct epbuf_handler {union ep_buffer_info* info; } ;

/* Variables and functions */

bool fjes_hw_check_epbuf_version(struct epbuf_handler *epbh, u32 version)
{
	union ep_buffer_info *info = epbh->info;

	return (info->common.version == version);
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
          long version = 100;
          int _len_epbh0 = 1;
          struct epbuf_handler * epbh = (struct epbuf_handler *) malloc(_len_epbh0*sizeof(struct epbuf_handler));
          for(int _i0 = 0; _i0 < _len_epbh0; _i0++) {
              int _len_epbh__i0__info0 = 1;
          epbh[_i0].info = (union ep_buffer_info *) malloc(_len_epbh__i0__info0*sizeof(union ep_buffer_info));
          for(int _j0 = 0; _j0 < _len_epbh__i0__info0; _j0++) {
            epbh[_i0].info[_j0] = 0;
          }
          }
          int benchRet = fjes_hw_check_epbuf_version(epbh,version);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_epbh0; _aux++) {
          free(epbh[_aux].info);
          }
          free(epbh);
        
        break;
    }
    // big-arr
    case 1:
    {
          long version = 255;
          int _len_epbh0 = 65025;
          struct epbuf_handler * epbh = (struct epbuf_handler *) malloc(_len_epbh0*sizeof(struct epbuf_handler));
          for(int _i0 = 0; _i0 < _len_epbh0; _i0++) {
              int _len_epbh__i0__info0 = 1;
          epbh[_i0].info = (union ep_buffer_info *) malloc(_len_epbh__i0__info0*sizeof(union ep_buffer_info));
          for(int _j0 = 0; _j0 < _len_epbh__i0__info0; _j0++) {
            epbh[_i0].info[_j0] = 0;
          }
          }
          int benchRet = fjes_hw_check_epbuf_version(epbh,version);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_epbh0; _aux++) {
          free(epbh[_aux].info);
          }
          free(epbh);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long version = 10;
          int _len_epbh0 = 100;
          struct epbuf_handler * epbh = (struct epbuf_handler *) malloc(_len_epbh0*sizeof(struct epbuf_handler));
          for(int _i0 = 0; _i0 < _len_epbh0; _i0++) {
              int _len_epbh__i0__info0 = 1;
          epbh[_i0].info = (union ep_buffer_info *) malloc(_len_epbh__i0__info0*sizeof(union ep_buffer_info));
          for(int _j0 = 0; _j0 < _len_epbh__i0__info0; _j0++) {
            epbh[_i0].info[_j0] = 0;
          }
          }
          int benchRet = fjes_hw_check_epbuf_version(epbh,version);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_epbh0; _aux++) {
          free(epbh[_aux].info);
          }
          free(epbh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
