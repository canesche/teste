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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ uint8_t ;
typedef  scalar_t__ uint32_t ;
struct ieee80211_radiotap_iterator {TYPE_2__* _vns; TYPE_1__* current_namespace; } ;
struct TYPE_4__ {int n_ns; TYPE_1__* ns; } ;
struct TYPE_3__ {scalar_t__ oui; scalar_t__ subns; } ;

/* Variables and functions */

__attribute__((used)) static void find_ns(struct ieee80211_radiotap_iterator *iterator,
		    uint32_t oui, uint8_t subns)
{
	int i;

	iterator->current_namespace = NULL;

	if (!iterator->_vns)
		return;

	for (i = 0; i < iterator->_vns->n_ns; i++) {
		if (iterator->_vns->ns[i].oui != oui)
			continue;
		if (iterator->_vns->ns[i].subns != subns)
			continue;

		iterator->current_namespace = &iterator->_vns->ns[i];
		break;
	}
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
          long oui = 100;
          long subns = 100;
          int _len_iterator0 = 1;
          struct ieee80211_radiotap_iterator * iterator = (struct ieee80211_radiotap_iterator *) malloc(_len_iterator0*sizeof(struct ieee80211_radiotap_iterator));
          for(int _i0 = 0; _i0 < _len_iterator0; _i0++) {
              int _len_iterator__i0___vns0 = 1;
          iterator[_i0]._vns = (struct TYPE_4__ *) malloc(_len_iterator__i0___vns0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_iterator__i0___vns0; _j0++) {
            iterator[_i0]._vns->n_ns = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iterator__i0___vns_ns0 = 1;
          iterator[_i0]._vns->ns = (struct TYPE_3__ *) malloc(_len_iterator__i0___vns_ns0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_iterator__i0___vns_ns0; _j0++) {
            iterator[_i0]._vns->ns->oui = ((-2 * (next_i()%2)) + 1) * next_i();
        iterator[_i0]._vns->ns->subns = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_iterator__i0__current_namespace0 = 1;
          iterator[_i0].current_namespace = (struct TYPE_3__ *) malloc(_len_iterator__i0__current_namespace0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_iterator__i0__current_namespace0; _j0++) {
            iterator[_i0].current_namespace->oui = ((-2 * (next_i()%2)) + 1) * next_i();
        iterator[_i0].current_namespace->subns = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          find_ns(iterator,oui,subns);
          for(int _aux = 0; _aux < _len_iterator0; _aux++) {
          free(iterator[_aux]._vns);
          }
          for(int _aux = 0; _aux < _len_iterator0; _aux++) {
          free(iterator[_aux].current_namespace);
          }
          free(iterator);
        
        break;
    }
    // big-arr
    case 1:
    {
          long oui = 255;
          long subns = 255;
          int _len_iterator0 = 65025;
          struct ieee80211_radiotap_iterator * iterator = (struct ieee80211_radiotap_iterator *) malloc(_len_iterator0*sizeof(struct ieee80211_radiotap_iterator));
          for(int _i0 = 0; _i0 < _len_iterator0; _i0++) {
              int _len_iterator__i0___vns0 = 1;
          iterator[_i0]._vns = (struct TYPE_4__ *) malloc(_len_iterator__i0___vns0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_iterator__i0___vns0; _j0++) {
            iterator[_i0]._vns->n_ns = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iterator__i0___vns_ns0 = 1;
          iterator[_i0]._vns->ns = (struct TYPE_3__ *) malloc(_len_iterator__i0___vns_ns0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_iterator__i0___vns_ns0; _j0++) {
            iterator[_i0]._vns->ns->oui = ((-2 * (next_i()%2)) + 1) * next_i();
        iterator[_i0]._vns->ns->subns = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_iterator__i0__current_namespace0 = 1;
          iterator[_i0].current_namespace = (struct TYPE_3__ *) malloc(_len_iterator__i0__current_namespace0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_iterator__i0__current_namespace0; _j0++) {
            iterator[_i0].current_namespace->oui = ((-2 * (next_i()%2)) + 1) * next_i();
        iterator[_i0].current_namespace->subns = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          find_ns(iterator,oui,subns);
          for(int _aux = 0; _aux < _len_iterator0; _aux++) {
          free(iterator[_aux]._vns);
          }
          for(int _aux = 0; _aux < _len_iterator0; _aux++) {
          free(iterator[_aux].current_namespace);
          }
          free(iterator);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long oui = 10;
          long subns = 10;
          int _len_iterator0 = 100;
          struct ieee80211_radiotap_iterator * iterator = (struct ieee80211_radiotap_iterator *) malloc(_len_iterator0*sizeof(struct ieee80211_radiotap_iterator));
          for(int _i0 = 0; _i0 < _len_iterator0; _i0++) {
              int _len_iterator__i0___vns0 = 1;
          iterator[_i0]._vns = (struct TYPE_4__ *) malloc(_len_iterator__i0___vns0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_iterator__i0___vns0; _j0++) {
            iterator[_i0]._vns->n_ns = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iterator__i0___vns_ns0 = 1;
          iterator[_i0]._vns->ns = (struct TYPE_3__ *) malloc(_len_iterator__i0___vns_ns0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_iterator__i0___vns_ns0; _j0++) {
            iterator[_i0]._vns->ns->oui = ((-2 * (next_i()%2)) + 1) * next_i();
        iterator[_i0]._vns->ns->subns = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_iterator__i0__current_namespace0 = 1;
          iterator[_i0].current_namespace = (struct TYPE_3__ *) malloc(_len_iterator__i0__current_namespace0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_iterator__i0__current_namespace0; _j0++) {
            iterator[_i0].current_namespace->oui = ((-2 * (next_i()%2)) + 1) * next_i();
        iterator[_i0].current_namespace->subns = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          find_ns(iterator,oui,subns);
          for(int _aux = 0; _aux < _len_iterator0; _aux++) {
          free(iterator[_aux]._vns);
          }
          for(int _aux = 0; _aux < _len_iterator0; _aux++) {
          free(iterator[_aux].current_namespace);
          }
          free(iterator);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
