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
struct context_handle_entry {scalar_t__ magic; } ;
typedef  struct context_handle_entry* NDR_CCONTEXT ;

/* Variables and functions */
 scalar_t__ NDR_CONTEXT_HANDLE_MAGIC ; 

__attribute__((used)) static struct context_handle_entry *get_context_entry(NDR_CCONTEXT CContext)
{
    struct context_handle_entry *che = CContext;

    if (che->magic != NDR_CONTEXT_HANDLE_MAGIC)
        return NULL;
    return che;
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
          int _len_CContext0 = 1;
          struct context_handle_entry * CContext = (struct context_handle_entry *) malloc(_len_CContext0*sizeof(struct context_handle_entry));
          for(int _i0 = 0; _i0 < _len_CContext0; _i0++) {
            CContext[_i0].magic = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct context_handle_entry * benchRet = get_context_entry(CContext);
          printf("%ld\n", (*benchRet).magic);
          free(CContext);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_CContext0 = 65025;
          struct context_handle_entry * CContext = (struct context_handle_entry *) malloc(_len_CContext0*sizeof(struct context_handle_entry));
          for(int _i0 = 0; _i0 < _len_CContext0; _i0++) {
            CContext[_i0].magic = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct context_handle_entry * benchRet = get_context_entry(CContext);
          printf("%ld\n", (*benchRet).magic);
          free(CContext);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_CContext0 = 100;
          struct context_handle_entry * CContext = (struct context_handle_entry *) malloc(_len_CContext0*sizeof(struct context_handle_entry));
          for(int _i0 = 0; _i0 < _len_CContext0; _i0++) {
            CContext[_i0].magic = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct context_handle_entry * benchRet = get_context_entry(CContext);
          printf("%ld\n", (*benchRet).magic);
          free(CContext);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
