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
struct TYPE_2__ {scalar_t__ opcode; int rs; int rt; } ;
union mips_instruction {TYPE_1__ i_format; } ;

/* Variables and functions */
 scalar_t__ sd_op ; 
 scalar_t__ sw_op ; 

__attribute__((used)) static inline int is_ra_save_ins(union mips_instruction *ip)
{
	/* sw / sd $ra, offset($sp) */
	return (ip->i_format.opcode == sw_op || ip->i_format.opcode == sd_op)
		&& ip->i_format.rs == 29 && ip->i_format.rt == 31;
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
          int _len_ip0 = 1;
          union mips_instruction * ip = (union mips_instruction *) malloc(_len_ip0*sizeof(union mips_instruction));
          for(int _i0 = 0; _i0 < _len_ip0; _i0++) {
            ip[_i0] = 0;
          }
          int benchRet = is_ra_save_ins(ip);
          printf("%d\n", benchRet); 
          free(ip);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ip0 = 65025;
          union mips_instruction * ip = (union mips_instruction *) malloc(_len_ip0*sizeof(union mips_instruction));
          for(int _i0 = 0; _i0 < _len_ip0; _i0++) {
            ip[_i0] = 0;
          }
          int benchRet = is_ra_save_ins(ip);
          printf("%d\n", benchRet); 
          free(ip);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ip0 = 100;
          union mips_instruction * ip = (union mips_instruction *) malloc(_len_ip0*sizeof(union mips_instruction));
          for(int _i0 = 0; _i0 < _len_ip0; _i0++) {
            ip[_i0] = 0;
          }
          int benchRet = is_ra_save_ins(ip);
          printf("%d\n", benchRet); 
          free(ip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
