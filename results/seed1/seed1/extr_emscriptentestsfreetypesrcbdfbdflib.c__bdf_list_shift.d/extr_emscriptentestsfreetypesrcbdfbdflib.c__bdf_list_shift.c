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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {unsigned long used; int /*<<< orphan*/ * field; } ;
typedef  TYPE_1__ _bdf_list_t ;

/* Variables and functions */

__attribute__((used)) static void
  _bdf_list_shift( _bdf_list_t*   list,
                   unsigned long  n )
  {
    unsigned long  i, u;


    if ( list == 0 || list->used == 0 || n == 0 )
      return;

    if ( n >= list->used )
    {
      list->used = 0;
      return;
    }

    for ( u = n, i = 0; u < list->used; i++, u++ )
      list->field[i] = list->field[u];
    list->used -= n;
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
          unsigned long n = 100;
          int _len_list0 = 1;
          struct TYPE_3__ * list = (struct TYPE_3__ *) malloc(_len_list0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            list[_i0].used = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_list__i0__field0 = 1;
          list[_i0].field = (int *) malloc(_len_list__i0__field0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_list__i0__field0; _j0++) {
            list[_i0].field[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          _bdf_list_shift(list,n);
          for(int _aux = 0; _aux < _len_list0; _aux++) {
          free(list[_aux].field);
          }
          free(list);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long n = 255;
          int _len_list0 = 65025;
          struct TYPE_3__ * list = (struct TYPE_3__ *) malloc(_len_list0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            list[_i0].used = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_list__i0__field0 = 1;
          list[_i0].field = (int *) malloc(_len_list__i0__field0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_list__i0__field0; _j0++) {
            list[_i0].field[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          _bdf_list_shift(list,n);
          for(int _aux = 0; _aux < _len_list0; _aux++) {
          free(list[_aux].field);
          }
          free(list);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long n = 10;
          int _len_list0 = 100;
          struct TYPE_3__ * list = (struct TYPE_3__ *) malloc(_len_list0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            list[_i0].used = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_list__i0__field0 = 1;
          list[_i0].field = (int *) malloc(_len_list__i0__field0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_list__i0__field0; _j0++) {
            list[_i0].field[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          _bdf_list_shift(list,n);
          for(int _aux = 0; _aux < _len_list0; _aux++) {
          free(list[_aux].field);
          }
          free(list);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
