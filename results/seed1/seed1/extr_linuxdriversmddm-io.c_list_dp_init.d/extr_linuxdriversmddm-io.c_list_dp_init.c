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
struct page_list {int dummy; } ;
struct dpages {unsigned int context_u; struct page_list* context_ptr; int /*<<< orphan*/  next_page; int /*<<< orphan*/  get_page; } ;

/* Variables and functions */
 int /*<<< orphan*/  list_get_page ; 
 int /*<<< orphan*/  list_next_page ; 

__attribute__((used)) static void list_dp_init(struct dpages *dp, struct page_list *pl, unsigned offset)
{
	dp->get_page = list_get_page;
	dp->next_page = list_next_page;
	dp->context_u = offset;
	dp->context_ptr = pl;
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
          unsigned int offset = 100;
          int _len_dp0 = 1;
          struct dpages * dp = (struct dpages *) malloc(_len_dp0*sizeof(struct dpages));
          for(int _i0 = 0; _i0 < _len_dp0; _i0++) {
            dp[_i0].context_u = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dp__i0__context_ptr0 = 1;
          dp[_i0].context_ptr = (struct page_list *) malloc(_len_dp__i0__context_ptr0*sizeof(struct page_list));
          for(int _j0 = 0; _j0 < _len_dp__i0__context_ptr0; _j0++) {
            dp[_i0].context_ptr->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dp[_i0].next_page = ((-2 * (next_i()%2)) + 1) * next_i();
        dp[_i0].get_page = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pl0 = 1;
          struct page_list * pl = (struct page_list *) malloc(_len_pl0*sizeof(struct page_list));
          for(int _i0 = 0; _i0 < _len_pl0; _i0++) {
            pl[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          list_dp_init(dp,pl,offset);
          for(int _aux = 0; _aux < _len_dp0; _aux++) {
          free(dp[_aux].context_ptr);
          }
          free(dp);
          free(pl);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int offset = 255;
          int _len_dp0 = 65025;
          struct dpages * dp = (struct dpages *) malloc(_len_dp0*sizeof(struct dpages));
          for(int _i0 = 0; _i0 < _len_dp0; _i0++) {
            dp[_i0].context_u = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dp__i0__context_ptr0 = 1;
          dp[_i0].context_ptr = (struct page_list *) malloc(_len_dp__i0__context_ptr0*sizeof(struct page_list));
          for(int _j0 = 0; _j0 < _len_dp__i0__context_ptr0; _j0++) {
            dp[_i0].context_ptr->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dp[_i0].next_page = ((-2 * (next_i()%2)) + 1) * next_i();
        dp[_i0].get_page = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pl0 = 65025;
          struct page_list * pl = (struct page_list *) malloc(_len_pl0*sizeof(struct page_list));
          for(int _i0 = 0; _i0 < _len_pl0; _i0++) {
            pl[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          list_dp_init(dp,pl,offset);
          for(int _aux = 0; _aux < _len_dp0; _aux++) {
          free(dp[_aux].context_ptr);
          }
          free(dp);
          free(pl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int offset = 10;
          int _len_dp0 = 100;
          struct dpages * dp = (struct dpages *) malloc(_len_dp0*sizeof(struct dpages));
          for(int _i0 = 0; _i0 < _len_dp0; _i0++) {
            dp[_i0].context_u = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dp__i0__context_ptr0 = 1;
          dp[_i0].context_ptr = (struct page_list *) malloc(_len_dp__i0__context_ptr0*sizeof(struct page_list));
          for(int _j0 = 0; _j0 < _len_dp__i0__context_ptr0; _j0++) {
            dp[_i0].context_ptr->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dp[_i0].next_page = ((-2 * (next_i()%2)) + 1) * next_i();
        dp[_i0].get_page = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pl0 = 100;
          struct page_list * pl = (struct page_list *) malloc(_len_pl0*sizeof(struct page_list));
          for(int _i0 = 0; _i0 < _len_pl0; _i0++) {
            pl[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          list_dp_init(dp,pl,offset);
          for(int _aux = 0; _aux < _len_dp0; _aux++) {
          free(dp[_aux].context_ptr);
          }
          free(dp);
          free(pl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
