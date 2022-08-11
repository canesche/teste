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
       3            linked\n\
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
typedef  size_t u8 ;
struct ath6kl_sta {size_t aid; } ;
struct ath6kl {struct ath6kl_sta* sta_list; } ;

/* Variables and functions */
 size_t AP_MAX_NUM_STA ; 

struct ath6kl_sta *ath6kl_find_sta_by_aid(struct ath6kl *ar, u8 aid)
{
	struct ath6kl_sta *conn = NULL;
	u8 ctr;

	for (ctr = 0; ctr < AP_MAX_NUM_STA; ctr++) {
		if (ar->sta_list[ctr].aid == aid) {
			conn = &ar->sta_list[ctr];
			break;
		}
	}
	return conn;
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
          unsigned long aid = 100;
          int _len_ar0 = 1;
          struct ath6kl * ar = (struct ath6kl *) malloc(_len_ar0*sizeof(struct ath6kl));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
              int _len_ar__i0__sta_list0 = 1;
          ar[_i0].sta_list = (struct ath6kl_sta *) malloc(_len_ar__i0__sta_list0*sizeof(struct ath6kl_sta));
          for(int _j0 = 0; _j0 < _len_ar__i0__sta_list0; _j0++) {
            ar[_i0].sta_list->aid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ath6kl_sta * benchRet = ath6kl_find_sta_by_aid(ar,aid);
          printf("%lu\n", (*benchRet).aid);
          for(int _aux = 0; _aux < _len_ar0; _aux++) {
          free(ar[_aux].sta_list);
          }
          free(ar);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long aid = 255;
          int _len_ar0 = 65025;
          struct ath6kl * ar = (struct ath6kl *) malloc(_len_ar0*sizeof(struct ath6kl));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
              int _len_ar__i0__sta_list0 = 1;
          ar[_i0].sta_list = (struct ath6kl_sta *) malloc(_len_ar__i0__sta_list0*sizeof(struct ath6kl_sta));
          for(int _j0 = 0; _j0 < _len_ar__i0__sta_list0; _j0++) {
            ar[_i0].sta_list->aid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ath6kl_sta * benchRet = ath6kl_find_sta_by_aid(ar,aid);
          printf("%lu\n", (*benchRet).aid);
          for(int _aux = 0; _aux < _len_ar0; _aux++) {
          free(ar[_aux].sta_list);
          }
          free(ar);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long aid = 10;
          int _len_ar0 = 100;
          struct ath6kl * ar = (struct ath6kl *) malloc(_len_ar0*sizeof(struct ath6kl));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
              int _len_ar__i0__sta_list0 = 1;
          ar[_i0].sta_list = (struct ath6kl_sta *) malloc(_len_ar__i0__sta_list0*sizeof(struct ath6kl_sta));
          for(int _j0 = 0; _j0 < _len_ar__i0__sta_list0; _j0++) {
            ar[_i0].sta_list->aid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ath6kl_sta * benchRet = ath6kl_find_sta_by_aid(ar,aid);
          printf("%lu\n", (*benchRet).aid);
          for(int _aux = 0; _aux < _len_ar0; _aux++) {
          free(ar[_aux].sta_list);
          }
          free(ar);
        
        break;
    }
    // linked
    case 3:
    {
          unsigned long aid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ar0 = 1;
          struct ath6kl * ar = (struct ath6kl *) malloc(_len_ar0*sizeof(struct ath6kl));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
              int _len_ar__i0__sta_list0 = 1;
          ar[_i0].sta_list = (struct ath6kl_sta *) malloc(_len_ar__i0__sta_list0*sizeof(struct ath6kl_sta));
          for(int _j0 = 0; _j0 < _len_ar__i0__sta_list0; _j0++) {
            ar[_i0].sta_list->aid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ath6kl_sta * benchRet = ath6kl_find_sta_by_aid(ar,aid);
          printf("%lu\n", (*benchRet).aid);
          for(int _aux = 0; _aux < _len_ar0; _aux++) {
          free(ar[_aux].sta_list);
          }
          free(ar);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
