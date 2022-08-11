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
typedef  scalar_t__ u_int ;
struct TYPE_5__ {scalar_t__ cmd; scalar_t__ cmdsize; } ;
typedef  TYPE_1__ kernel_segment_command_t ;
struct TYPE_6__ {scalar_t__ ncmds; } ;
typedef  TYPE_2__ kernel_mach_header_t ;

/* Variables and functions */
 scalar_t__ LC_SEGMENT_KERNEL ; 

kernel_segment_command_t *
firstsegfromheader(kernel_mach_header_t *header)
{
    u_int i = 0;
    kernel_segment_command_t *sgp = (kernel_segment_command_t *)
        ((uintptr_t)header + sizeof(*header));

    for (i = 0; i < header->ncmds; i++){
        if (sgp->cmd == LC_SEGMENT_KERNEL)
            return sgp;
        sgp = (kernel_segment_command_t *)((uintptr_t)sgp + sgp->cmdsize);
    }
    return (kernel_segment_command_t *)NULL;
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
          int _len_header0 = 1;
          struct TYPE_6__ * header = (struct TYPE_6__ *) malloc(_len_header0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_header0; _i0++) {
            header[_i0].ncmds = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_5__ * benchRet = firstsegfromheader(header);
          printf("%ld\n", (*benchRet).cmd);
          printf("%ld\n", (*benchRet).cmdsize);
          free(header);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_header0 = 65025;
          struct TYPE_6__ * header = (struct TYPE_6__ *) malloc(_len_header0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_header0; _i0++) {
            header[_i0].ncmds = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_5__ * benchRet = firstsegfromheader(header);
          printf("%ld\n", (*benchRet).cmd);
          printf("%ld\n", (*benchRet).cmdsize);
          free(header);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_header0 = 100;
          struct TYPE_6__ * header = (struct TYPE_6__ *) malloc(_len_header0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_header0; _i0++) {
            header[_i0].ncmds = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_5__ * benchRet = firstsegfromheader(header);
          printf("%ld\n", (*benchRet).cmd);
          printf("%ld\n", (*benchRet).cmdsize);
          free(header);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
