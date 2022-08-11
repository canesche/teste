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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {void* debug; } ;
struct TYPE_7__ {TYPE_1__ dch; } ;
struct TYPE_10__ {TYPE_4__* hscx; TYPE_2__ isac; } ;
struct inf_hw {TYPE_5__ ipac; } ;
struct TYPE_8__ {void* debug; } ;
struct TYPE_9__ {TYPE_3__ bch; } ;

/* Variables and functions */
 void* debug ; 

__attribute__((used)) static void
_set_debug(struct inf_hw *card)
{
	card->ipac.isac.dch.debug = debug;
	card->ipac.hscx[0].bch.debug = debug;
	card->ipac.hscx[1].bch.debug = debug;
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
          int _len_card0 = 1;
          struct inf_hw * card = (struct inf_hw *) malloc(_len_card0*sizeof(struct inf_hw));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
              int _len_card__i0__ipac_hscx0 = 1;
          card[_i0].ipac.hscx = (struct TYPE_9__ *) malloc(_len_card__i0__ipac_hscx0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_card__i0__ipac_hscx0; _j0++) {
              }
          }
          _set_debug(card);
          free(card);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_card0 = 65025;
          struct inf_hw * card = (struct inf_hw *) malloc(_len_card0*sizeof(struct inf_hw));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
              int _len_card__i0__ipac_hscx0 = 1;
          card[_i0].ipac.hscx = (struct TYPE_9__ *) malloc(_len_card__i0__ipac_hscx0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_card__i0__ipac_hscx0; _j0++) {
              }
          }
          _set_debug(card);
          free(card);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_card0 = 100;
          struct inf_hw * card = (struct inf_hw *) malloc(_len_card0*sizeof(struct inf_hw));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
              int _len_card__i0__ipac_hscx0 = 1;
          card[_i0].ipac.hscx = (struct TYPE_9__ *) malloc(_len_card__i0__ipac_hscx0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_card__i0__ipac_hscx0; _j0++) {
              }
          }
          _set_debug(card);
          free(card);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
