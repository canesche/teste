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
typedef  int /*<<< orphan*/  RDebug ;

/* Variables and functions */

__attribute__((used)) static char *r_debug_native_reg_profile(RDebug *dbg) {
#if __WINDOWS__
/*_______
 |   |   |
 |___|___|
 |   |   |
 |___|___|
*/
	if (dbg->bits & R_SYS_BITS_64) {
#include "reg/windows-x64.h"
	} else {
#include "reg/windows-x86.h"
	}
#elif (__OpenBSD__ || __NetBSD__)
/*                           __.--..__
       \-/-/-/    _ __  _.--'  _.--'
  _  \'       \   \\  ''      `------.__
  \\/      __)_)   \\      ____..---'
  //\       o  o    \\----'
     / <_/      3    \\
      \_,_,__,_/      \\
*/
#if __i386__
#include "reg/netbsd-x86.h"
#elif __x86_64__
#include "reg/netbsd-x64.h"
#else
#error "Unsupported BSD architecture"
#endif

#elif __KFBSD__ || __FreeBSD__
/*
    /(       ).
    \ \__   /|
    /  _ '-/ |
   (/\/ |    \
   / /  | \   )
   O O _/     |
  (__)  __   /
    \___/   /
      `----'
*/
#if __i386__ || __i386
#include "reg/kfbsd-x86.h"
#elif __x86_64__ || __amd64__
#include "reg/kfbsd-x64.h"
#elif __aarch64__
#include "reg/kfbsd-arm64.h"
#else
#error "Unsupported BSD architecture"
#endif

#else
#warning Unsupported Kernel
	return NULL;
#endif
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
          int _len_dbg0 = 1;
          int * dbg = (int *) malloc(_len_dbg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dbg0; _i0++) {
            dbg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = r_debug_native_reg_profile(dbg);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(dbg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dbg0 = 65025;
          int * dbg = (int *) malloc(_len_dbg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dbg0; _i0++) {
            dbg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = r_debug_native_reg_profile(dbg);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(dbg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dbg0 = 100;
          int * dbg = (int *) malloc(_len_dbg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dbg0; _i0++) {
            dbg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = r_debug_native_reg_profile(dbg);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(dbg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
