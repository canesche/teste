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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  size_t byte ;
struct TYPE_7__ {scalar_t__ io; } ;
struct TYPE_6__ {TYPE_1__* e_tbl; } ;
struct TYPE_5__ {int /*<<< orphan*/ * e; } ;
typedef  TYPE_2__* PISDN_ADAPTER ;
typedef  int /*<<< orphan*/  ENTITY ;
typedef  TYPE_3__ ADAPTER ;

/* Variables and functions */

ENTITY *entity_ptr(ADAPTER *a, byte e_no)
{
	PISDN_ADAPTER IoAdapter;
	IoAdapter = (PISDN_ADAPTER)a->io;
	return (IoAdapter->e_tbl[e_no].e);
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
          unsigned long e_no = 100;
          int _len_a0 = 1;
          struct TYPE_7__ * a = (struct TYPE_7__ *) malloc(_len_a0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].io = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = entity_ptr(a,e_no);
          printf("%d\n", (*benchRet)); 
          free(a);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long e_no = 255;
          int _len_a0 = 65025;
          struct TYPE_7__ * a = (struct TYPE_7__ *) malloc(_len_a0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].io = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = entity_ptr(a,e_no);
          printf("%d\n", (*benchRet)); 
          free(a);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long e_no = 10;
          int _len_a0 = 100;
          struct TYPE_7__ * a = (struct TYPE_7__ *) malloc(_len_a0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].io = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = entity_ptr(a,e_no);
          printf("%d\n", (*benchRet)); 
          free(a);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
