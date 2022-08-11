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
typedef  int /*<<< orphan*/  lua_State ;
struct TYPE_2__ {size_t size; char const* s; } ;
typedef  TYPE_1__ LoadS ;

/* Variables and functions */

__attribute__((used)) static const char *getS (lua_State *L, void *ud, size_t *size) {
  LoadS *ls = (LoadS *)ud;
  (void)L;
  if (L == NULL && size == NULL) // direct mode check
    return NULL;
  if (ls->size == 0) return NULL;
  *size = ls->size;
  ls->size = 0;
  return ls->s;
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
          int _len_L0 = 1;
          int * L = (int *) malloc(_len_L0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_L0; _i0++) {
            L[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * ud;
          int _len_size0 = 1;
          unsigned long * size = (unsigned long *) malloc(_len_size0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = getS(L,ud,size);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(L);
          free(size);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_L0 = 65025;
          int * L = (int *) malloc(_len_L0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_L0; _i0++) {
            L[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * ud;
          int _len_size0 = 65025;
          unsigned long * size = (unsigned long *) malloc(_len_size0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = getS(L,ud,size);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(L);
          free(size);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_L0 = 100;
          int * L = (int *) malloc(_len_L0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_L0; _i0++) {
            L[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * ud;
          int _len_size0 = 100;
          unsigned long * size = (unsigned long *) malloc(_len_size0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = getS(L,ud,size);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(L);
          free(size);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
