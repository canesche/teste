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
struct kernel_sym {int address; } ;

/* Variables and functions */

__attribute__((used)) static int kernel_syms_cmp(const void *sym_a, const void *sym_b)
{
	return ((struct kernel_sym *)sym_a)->address -
	       ((struct kernel_sym *)sym_b)->address;
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
          int _len_sym_a0 = 1;
          const void * sym_a = (const void *) malloc(_len_sym_a0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_sym_a0; _i0++) {
            sym_a[_i0] = 0;
          }
          int _len_sym_b0 = 1;
          const void * sym_b = (const void *) malloc(_len_sym_b0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_sym_b0; _i0++) {
            sym_b[_i0] = 0;
          }
          int benchRet = kernel_syms_cmp(sym_a,sym_b);
          printf("%d\n", benchRet); 
          free(sym_a);
          free(sym_b);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sym_a0 = 65025;
          const void * sym_a = (const void *) malloc(_len_sym_a0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_sym_a0; _i0++) {
            sym_a[_i0] = 0;
          }
          int _len_sym_b0 = 65025;
          const void * sym_b = (const void *) malloc(_len_sym_b0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_sym_b0; _i0++) {
            sym_b[_i0] = 0;
          }
          int benchRet = kernel_syms_cmp(sym_a,sym_b);
          printf("%d\n", benchRet); 
          free(sym_a);
          free(sym_b);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sym_a0 = 100;
          const void * sym_a = (const void *) malloc(_len_sym_a0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_sym_a0; _i0++) {
            sym_a[_i0] = 0;
          }
          int _len_sym_b0 = 100;
          const void * sym_b = (const void *) malloc(_len_sym_b0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_sym_b0; _i0++) {
            sym_b[_i0] = 0;
          }
          int benchRet = kernel_syms_cmp(sym_a,sym_b);
          printf("%d\n", benchRet); 
          free(sym_a);
          free(sym_b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
