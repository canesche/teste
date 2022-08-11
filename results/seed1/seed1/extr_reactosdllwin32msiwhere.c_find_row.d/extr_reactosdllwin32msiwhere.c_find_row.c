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
typedef  size_t UINT ;
struct TYPE_5__ {size_t row_count; TYPE_1__** reorder; } ;
struct TYPE_4__ {size_t* values; } ;
typedef  TYPE_2__ MSIWHEREVIEW ;

/* Variables and functions */
 size_t ERROR_NO_MORE_ITEMS ; 
 size_t ERROR_SUCCESS ; 

__attribute__((used)) static inline UINT find_row(MSIWHEREVIEW *wv, UINT row, UINT *(values[]))
{
    if (row >= wv->row_count)
        return ERROR_NO_MORE_ITEMS;

    *values = wv->reorder[row]->values;

    return ERROR_SUCCESS;
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
          unsigned long row = 100;
          int _len_wv0 = 1;
          struct TYPE_5__ * wv = (struct TYPE_5__ *) malloc(_len_wv0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_wv0; _i0++) {
            wv[_i0].row_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wv__i0__reorder0 = 1;
          wv[_i0].reorder = (struct TYPE_4__ **) malloc(_len_wv__i0__reorder0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_wv__i0__reorder0; _j0++) {
            int _len_wv__i0__reorder1 = 1;
            wv[_i0].reorder[_j0] = (struct TYPE_4__ *) malloc(_len_wv__i0__reorder1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_wv__i0__reorder1; _j1++) {
                int _len_wv__i0__reorder__j0__values0 = 1;
          wv[_i0].reorder[_j0]->values = (unsigned long *) malloc(_len_wv__i0__reorder__j0__values0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_wv__i0__reorder__j0__values0; _j0++) {
            wv[_i0].reorder[_j0]->values[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_values0 = 1;
          unsigned long ** values = (unsigned long **) malloc(_len_values0*sizeof(unsigned long *));
          for(int _i0 = 0; _i0 < _len_values0; _i0++) {
            int _len_values1 = 1;
            values[_i0] = (unsigned long *) malloc(_len_values1*sizeof(unsigned long));
            for(int _i1 = 0; _i1 < _len_values1; _i1++) {
              values[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          unsigned long benchRet = find_row(wv,row,values);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_wv0; _aux++) {
          free(*(wv[_aux].reorder));
        free(wv[_aux].reorder);
          }
          free(wv);
          for(int i1 = 0; i1 < _len_values0; i1++) {
            int _len_values1 = 1;
              free(values[i1]);
          }
          free(values);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long row = 255;
          int _len_wv0 = 65025;
          struct TYPE_5__ * wv = (struct TYPE_5__ *) malloc(_len_wv0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_wv0; _i0++) {
            wv[_i0].row_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wv__i0__reorder0 = 1;
          wv[_i0].reorder = (struct TYPE_4__ **) malloc(_len_wv__i0__reorder0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_wv__i0__reorder0; _j0++) {
            int _len_wv__i0__reorder1 = 1;
            wv[_i0].reorder[_j0] = (struct TYPE_4__ *) malloc(_len_wv__i0__reorder1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_wv__i0__reorder1; _j1++) {
                int _len_wv__i0__reorder__j0__values0 = 1;
          wv[_i0].reorder[_j0]->values = (unsigned long *) malloc(_len_wv__i0__reorder__j0__values0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_wv__i0__reorder__j0__values0; _j0++) {
            wv[_i0].reorder[_j0]->values[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_values0 = 65025;
          unsigned long ** values = (unsigned long **) malloc(_len_values0*sizeof(unsigned long *));
          for(int _i0 = 0; _i0 < _len_values0; _i0++) {
            int _len_values1 = 1;
            values[_i0] = (unsigned long *) malloc(_len_values1*sizeof(unsigned long));
            for(int _i1 = 0; _i1 < _len_values1; _i1++) {
              values[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          unsigned long benchRet = find_row(wv,row,values);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_wv0; _aux++) {
          free(*(wv[_aux].reorder));
        free(wv[_aux].reorder);
          }
          free(wv);
          for(int i1 = 0; i1 < _len_values0; i1++) {
            int _len_values1 = 1;
              free(values[i1]);
          }
          free(values);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long row = 10;
          int _len_wv0 = 100;
          struct TYPE_5__ * wv = (struct TYPE_5__ *) malloc(_len_wv0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_wv0; _i0++) {
            wv[_i0].row_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wv__i0__reorder0 = 1;
          wv[_i0].reorder = (struct TYPE_4__ **) malloc(_len_wv__i0__reorder0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_wv__i0__reorder0; _j0++) {
            int _len_wv__i0__reorder1 = 1;
            wv[_i0].reorder[_j0] = (struct TYPE_4__ *) malloc(_len_wv__i0__reorder1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_wv__i0__reorder1; _j1++) {
                int _len_wv__i0__reorder__j0__values0 = 1;
          wv[_i0].reorder[_j0]->values = (unsigned long *) malloc(_len_wv__i0__reorder__j0__values0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_wv__i0__reorder__j0__values0; _j0++) {
            wv[_i0].reorder[_j0]->values[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_values0 = 100;
          unsigned long ** values = (unsigned long **) malloc(_len_values0*sizeof(unsigned long *));
          for(int _i0 = 0; _i0 < _len_values0; _i0++) {
            int _len_values1 = 1;
            values[_i0] = (unsigned long *) malloc(_len_values1*sizeof(unsigned long));
            for(int _i1 = 0; _i1 < _len_values1; _i1++) {
              values[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          unsigned long benchRet = find_row(wv,row,values);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_wv0; _aux++) {
          free(*(wv[_aux].reorder));
        free(wv[_aux].reorder);
          }
          free(wv);
          for(int i1 = 0; i1 < _len_values0; i1++) {
            int _len_values1 = 1;
              free(values[i1]);
          }
          free(values);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
