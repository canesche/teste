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
struct atpic {int intr_raised; scalar_t__* acnt; int request; int aeoi; int rotate; int lowprio; int service; } ;

/* Variables and functions */

__attribute__((used)) static void
vatpic_pin_accepted(struct atpic *atpic, int pin)
{
	atpic->intr_raised = false;

	if (atpic->acnt[pin] == 0)
		atpic->request &= ~(1 << pin);

	if (atpic->aeoi == true) {
		if (atpic->rotate == true)
			atpic->lowprio = pin;
	} else {
		atpic->service |= (1 << pin);
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
          int pin = 100;
          int _len_atpic0 = 1;
          struct atpic * atpic = (struct atpic *) malloc(_len_atpic0*sizeof(struct atpic));
          for(int _i0 = 0; _i0 < _len_atpic0; _i0++) {
            atpic[_i0].intr_raised = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_atpic__i0__acnt0 = 1;
          atpic[_i0].acnt = (long *) malloc(_len_atpic__i0__acnt0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_atpic__i0__acnt0; _j0++) {
            atpic[_i0].acnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        atpic[_i0].request = ((-2 * (next_i()%2)) + 1) * next_i();
        atpic[_i0].aeoi = ((-2 * (next_i()%2)) + 1) * next_i();
        atpic[_i0].rotate = ((-2 * (next_i()%2)) + 1) * next_i();
        atpic[_i0].lowprio = ((-2 * (next_i()%2)) + 1) * next_i();
        atpic[_i0].service = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vatpic_pin_accepted(atpic,pin);
          for(int _aux = 0; _aux < _len_atpic0; _aux++) {
          free(atpic[_aux].acnt);
          }
          free(atpic);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pin = 255;
          int _len_atpic0 = 65025;
          struct atpic * atpic = (struct atpic *) malloc(_len_atpic0*sizeof(struct atpic));
          for(int _i0 = 0; _i0 < _len_atpic0; _i0++) {
            atpic[_i0].intr_raised = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_atpic__i0__acnt0 = 1;
          atpic[_i0].acnt = (long *) malloc(_len_atpic__i0__acnt0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_atpic__i0__acnt0; _j0++) {
            atpic[_i0].acnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        atpic[_i0].request = ((-2 * (next_i()%2)) + 1) * next_i();
        atpic[_i0].aeoi = ((-2 * (next_i()%2)) + 1) * next_i();
        atpic[_i0].rotate = ((-2 * (next_i()%2)) + 1) * next_i();
        atpic[_i0].lowprio = ((-2 * (next_i()%2)) + 1) * next_i();
        atpic[_i0].service = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vatpic_pin_accepted(atpic,pin);
          for(int _aux = 0; _aux < _len_atpic0; _aux++) {
          free(atpic[_aux].acnt);
          }
          free(atpic);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pin = 10;
          int _len_atpic0 = 100;
          struct atpic * atpic = (struct atpic *) malloc(_len_atpic0*sizeof(struct atpic));
          for(int _i0 = 0; _i0 < _len_atpic0; _i0++) {
            atpic[_i0].intr_raised = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_atpic__i0__acnt0 = 1;
          atpic[_i0].acnt = (long *) malloc(_len_atpic__i0__acnt0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_atpic__i0__acnt0; _j0++) {
            atpic[_i0].acnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        atpic[_i0].request = ((-2 * (next_i()%2)) + 1) * next_i();
        atpic[_i0].aeoi = ((-2 * (next_i()%2)) + 1) * next_i();
        atpic[_i0].rotate = ((-2 * (next_i()%2)) + 1) * next_i();
        atpic[_i0].lowprio = ((-2 * (next_i()%2)) + 1) * next_i();
        atpic[_i0].service = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vatpic_pin_accepted(atpic,pin);
          for(int _aux = 0; _aux < _len_atpic0; _aux++) {
          free(atpic[_aux].acnt);
          }
          free(atpic);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
