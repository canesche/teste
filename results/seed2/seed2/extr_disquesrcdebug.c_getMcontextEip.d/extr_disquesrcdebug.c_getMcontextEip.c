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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__* gregs; } ;
struct TYPE_5__ {TYPE_1__ uc_mcontext; } ;
typedef  TYPE_2__ ucontext_t ;

/* Variables and functions */

__attribute__((used)) static void *getMcontextEip(ucontext_t *uc) {
#if defined(__APPLE__) && !defined(MAC_OS_X_VERSION_10_6)
    /* OSX < 10.6 */
    #if defined(__x86_64__)
    return (void*) uc->uc_mcontext->__ss.__rip;
    #elif defined(__i386__)
    return (void*) uc->uc_mcontext->__ss.__eip;
    #else
    return (void*) uc->uc_mcontext->__ss.__srr0;
    #endif
#elif defined(__APPLE__) && defined(MAC_OS_X_VERSION_10_6)
    /* OSX >= 10.6 */
    #if defined(_STRUCT_X86_THREAD_STATE64) && !defined(__i386__)
    return (void*) uc->uc_mcontext->__ss.__rip;
    #else
    return (void*) uc->uc_mcontext->__ss.__eip;
    #endif
#elif defined(__linux__)
    /* Linux */
    #if defined(__i386__)
    return (void*) uc->uc_mcontext.gregs[14]; /* Linux 32 */
    #elif defined(__X86_64__) || defined(__x86_64__)
    return (void*) uc->uc_mcontext.gregs[16]; /* Linux 64 */
    #elif defined(__ia64__) /* Linux IA64 */
    return (void*) uc->uc_mcontext.sc_ip;
    #endif
#else
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
          int _len_uc0 = 1;
          struct TYPE_5__ * uc = (struct TYPE_5__ *) malloc(_len_uc0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_uc0; _i0++) {
              int _len_uc__i0__uc_mcontext_gregs0 = 1;
          uc[_i0].uc_mcontext.gregs = (long *) malloc(_len_uc__i0__uc_mcontext_gregs0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_uc__i0__uc_mcontext_gregs0; _j0++) {
            uc[_i0].uc_mcontext.gregs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * benchRet = getMcontextEip(uc);
          free(uc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_uc0 = 65025;
          struct TYPE_5__ * uc = (struct TYPE_5__ *) malloc(_len_uc0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_uc0; _i0++) {
              int _len_uc__i0__uc_mcontext_gregs0 = 1;
          uc[_i0].uc_mcontext.gregs = (long *) malloc(_len_uc__i0__uc_mcontext_gregs0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_uc__i0__uc_mcontext_gregs0; _j0++) {
            uc[_i0].uc_mcontext.gregs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * benchRet = getMcontextEip(uc);
          free(uc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_uc0 = 100;
          struct TYPE_5__ * uc = (struct TYPE_5__ *) malloc(_len_uc0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_uc0; _i0++) {
              int _len_uc__i0__uc_mcontext_gregs0 = 1;
          uc[_i0].uc_mcontext.gregs = (long *) malloc(_len_uc__i0__uc_mcontext_gregs0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_uc__i0__uc_mcontext_gregs0; _j0++) {
            uc[_i0].uc_mcontext.gregs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * benchRet = getMcontextEip(uc);
          free(uc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
