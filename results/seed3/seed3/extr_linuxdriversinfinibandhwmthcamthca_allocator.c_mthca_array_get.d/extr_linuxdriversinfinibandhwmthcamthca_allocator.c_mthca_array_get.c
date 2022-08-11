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
struct mthca_array {TYPE_1__* page_list; } ;
struct TYPE_2__ {void** page; } ;

/* Variables and functions */
 int MTHCA_ARRAY_MASK ; 
 int PAGE_SHIFT ; 

void *mthca_array_get(struct mthca_array *array, int index)
{
	int p = (index * sizeof (void *)) >> PAGE_SHIFT;

	if (array->page_list[p].page)
		return array->page_list[p].page[index & MTHCA_ARRAY_MASK];
	else
		return NULL;
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
          int index = 100;
          int _len_array0 = 1;
          struct mthca_array * array = (struct mthca_array *) malloc(_len_array0*sizeof(struct mthca_array));
          for(int _i0 = 0; _i0 < _len_array0; _i0++) {
              int _len_array__i0__page_list0 = 1;
          array[_i0].page_list = (struct TYPE_2__ *) malloc(_len_array__i0__page_list0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_array__i0__page_list0; _j0++) {
              int _len_array__i0__page_list_page0 = 1;
          array[_i0].page_list->page = (void **) malloc(_len_array__i0__page_list_page0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_array__i0__page_list_page0; _j0++) {
          }
          }
          }
          void * benchRet = mthca_array_get(array,index);
          for(int _aux = 0; _aux < _len_array0; _aux++) {
          free(array[_aux].page_list);
          }
          free(array);
        
        break;
    }
    // big-arr
    case 1:
    {
          int index = 255;
          int _len_array0 = 65025;
          struct mthca_array * array = (struct mthca_array *) malloc(_len_array0*sizeof(struct mthca_array));
          for(int _i0 = 0; _i0 < _len_array0; _i0++) {
              int _len_array__i0__page_list0 = 1;
          array[_i0].page_list = (struct TYPE_2__ *) malloc(_len_array__i0__page_list0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_array__i0__page_list0; _j0++) {
              int _len_array__i0__page_list_page0 = 1;
          array[_i0].page_list->page = (void **) malloc(_len_array__i0__page_list_page0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_array__i0__page_list_page0; _j0++) {
          }
          }
          }
          void * benchRet = mthca_array_get(array,index);
          for(int _aux = 0; _aux < _len_array0; _aux++) {
          free(array[_aux].page_list);
          }
          free(array);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int index = 10;
          int _len_array0 = 100;
          struct mthca_array * array = (struct mthca_array *) malloc(_len_array0*sizeof(struct mthca_array));
          for(int _i0 = 0; _i0 < _len_array0; _i0++) {
              int _len_array__i0__page_list0 = 1;
          array[_i0].page_list = (struct TYPE_2__ *) malloc(_len_array__i0__page_list0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_array__i0__page_list0; _j0++) {
              int _len_array__i0__page_list_page0 = 1;
          array[_i0].page_list->page = (void **) malloc(_len_array__i0__page_list_page0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_array__i0__page_list_page0; _j0++) {
          }
          }
          }
          void * benchRet = mthca_array_get(array,index);
          for(int _aux = 0; _aux < _len_array0; _aux++) {
          free(array[_aux].page_list);
          }
          free(array);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
