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
struct TYPE_5__ {TYPE_1__* table; } ;
typedef  TYPE_2__ stb_sdict ;
struct TYPE_4__ {void* v; } ;

/* Variables and functions */

void* stb_sdict_internal_value(stb_sdict *a, int n)
{
   return a->table[n].v;
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
          int n = 100;
          int _len_a0 = 1;
          struct TYPE_5__ * a = (struct TYPE_5__ *) malloc(_len_a0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              int _len_a__i0__table0 = 1;
          a[_i0].table = (struct TYPE_4__ *) malloc(_len_a__i0__table0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_a__i0__table0; _j0++) {
              }
          }
          void * benchRet = stb_sdict_internal_value(a,n);
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].table);
          }
          free(a);
        
        break;
    }
    // big-arr
    case 1:
    {
          int n = 255;
          int _len_a0 = 65025;
          struct TYPE_5__ * a = (struct TYPE_5__ *) malloc(_len_a0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              int _len_a__i0__table0 = 1;
          a[_i0].table = (struct TYPE_4__ *) malloc(_len_a__i0__table0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_a__i0__table0; _j0++) {
              }
          }
          void * benchRet = stb_sdict_internal_value(a,n);
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].table);
          }
          free(a);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n = 10;
          int _len_a0 = 100;
          struct TYPE_5__ * a = (struct TYPE_5__ *) malloc(_len_a0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              int _len_a__i0__table0 = 1;
          a[_i0].table = (struct TYPE_4__ *) malloc(_len_a__i0__table0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_a__i0__table0; _j0++) {
              }
          }
          void * benchRet = stb_sdict_internal_value(a,n);
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].table);
          }
          free(a);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
