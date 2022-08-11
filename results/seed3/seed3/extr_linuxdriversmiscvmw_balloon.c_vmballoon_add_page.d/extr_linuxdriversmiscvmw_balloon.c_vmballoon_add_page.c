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
struct vmballoon {struct page* page; } ;
struct page {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void vmballoon_add_page(struct vmballoon *b, int idx, struct page *p)
{
	b->page = p;
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
          int idx = 100;
          int _len_b0 = 1;
          struct vmballoon * b = (struct vmballoon *) malloc(_len_b0*sizeof(struct vmballoon));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__page0 = 1;
          b[_i0].page = (struct page *) malloc(_len_b__i0__page0*sizeof(struct page));
          for(int _j0 = 0; _j0 < _len_b__i0__page0; _j0++) {
            b[_i0].page->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_p0 = 1;
          struct page * p = (struct page *) malloc(_len_p0*sizeof(struct page));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vmballoon_add_page(b,idx,p);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].page);
          }
          free(b);
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int idx = 255;
          int _len_b0 = 65025;
          struct vmballoon * b = (struct vmballoon *) malloc(_len_b0*sizeof(struct vmballoon));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__page0 = 1;
          b[_i0].page = (struct page *) malloc(_len_b__i0__page0*sizeof(struct page));
          for(int _j0 = 0; _j0 < _len_b__i0__page0; _j0++) {
            b[_i0].page->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_p0 = 65025;
          struct page * p = (struct page *) malloc(_len_p0*sizeof(struct page));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vmballoon_add_page(b,idx,p);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].page);
          }
          free(b);
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int idx = 10;
          int _len_b0 = 100;
          struct vmballoon * b = (struct vmballoon *) malloc(_len_b0*sizeof(struct vmballoon));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__page0 = 1;
          b[_i0].page = (struct page *) malloc(_len_b__i0__page0*sizeof(struct page));
          for(int _j0 = 0; _j0 < _len_b__i0__page0; _j0++) {
            b[_i0].page->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_p0 = 100;
          struct page * p = (struct page *) malloc(_len_p0*sizeof(struct page));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vmballoon_add_page(b,idx,p);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].page);
          }
          free(b);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
