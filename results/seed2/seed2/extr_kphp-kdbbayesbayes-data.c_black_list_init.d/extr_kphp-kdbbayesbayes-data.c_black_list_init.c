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
struct TYPE_3__ {int text_len; int /*<<< orphan*/ * next; int /*<<< orphan*/ * text; } ;
typedef  TYPE_1__ black_list ;

/* Variables and functions */

void black_list_init (black_list *bl) {
  bl->text_len = -1;
  bl->text = NULL;
  bl->next = NULL;
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
          int _len_bl0 = 1;
          struct TYPE_3__ * bl = (struct TYPE_3__ *) malloc(_len_bl0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_bl0; _i0++) {
            bl[_i0].text_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bl__i0__next0 = 1;
          bl[_i0].next = (int *) malloc(_len_bl__i0__next0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bl__i0__next0; _j0++) {
            bl[_i0].next[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bl__i0__text0 = 1;
          bl[_i0].text = (int *) malloc(_len_bl__i0__text0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bl__i0__text0; _j0++) {
            bl[_i0].text[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          black_list_init(bl);
          for(int _aux = 0; _aux < _len_bl0; _aux++) {
          free(bl[_aux].next);
          }
          for(int _aux = 0; _aux < _len_bl0; _aux++) {
          free(bl[_aux].text);
          }
          free(bl);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_bl0 = 65025;
          struct TYPE_3__ * bl = (struct TYPE_3__ *) malloc(_len_bl0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_bl0; _i0++) {
            bl[_i0].text_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bl__i0__next0 = 1;
          bl[_i0].next = (int *) malloc(_len_bl__i0__next0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bl__i0__next0; _j0++) {
            bl[_i0].next[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bl__i0__text0 = 1;
          bl[_i0].text = (int *) malloc(_len_bl__i0__text0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bl__i0__text0; _j0++) {
            bl[_i0].text[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          black_list_init(bl);
          for(int _aux = 0; _aux < _len_bl0; _aux++) {
          free(bl[_aux].next);
          }
          for(int _aux = 0; _aux < _len_bl0; _aux++) {
          free(bl[_aux].text);
          }
          free(bl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_bl0 = 100;
          struct TYPE_3__ * bl = (struct TYPE_3__ *) malloc(_len_bl0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_bl0; _i0++) {
            bl[_i0].text_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bl__i0__next0 = 1;
          bl[_i0].next = (int *) malloc(_len_bl__i0__next0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bl__i0__next0; _j0++) {
            bl[_i0].next[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bl__i0__text0 = 1;
          bl[_i0].text = (int *) malloc(_len_bl__i0__text0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bl__i0__text0; _j0++) {
            bl[_i0].text[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          black_list_init(bl);
          for(int _aux = 0; _aux < _len_bl0; _aux++) {
          free(bl[_aux].next);
          }
          for(int _aux = 0; _aux < _len_bl0; _aux++) {
          free(bl[_aux].text);
          }
          free(bl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
