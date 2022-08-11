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
struct comedi_8254 {int next_div1; int next_div2; unsigned int osc_base; } ;

/* Variables and functions */
#define  CMDF_ROUND_DOWN 130 
 unsigned int CMDF_ROUND_MASK ; 
#define  CMDF_ROUND_NEAREST 129 
#define  CMDF_ROUND_UP 128 
 unsigned int I8254_MAX_COUNT ; 

void comedi_8254_cascade_ns_to_timer(struct comedi_8254 *i8254,
				     unsigned int *nanosec,
				     unsigned int flags)
{
	unsigned int d1 = i8254->next_div1 ? i8254->next_div1 : I8254_MAX_COUNT;
	unsigned int d2 = i8254->next_div2 ? i8254->next_div2 : I8254_MAX_COUNT;
	unsigned int div = d1 * d2;
	unsigned int ns_lub = 0xffffffff;
	unsigned int ns_glb = 0;
	unsigned int d1_lub = 0;
	unsigned int d1_glb = 0;
	unsigned int d2_lub = 0;
	unsigned int d2_glb = 0;
	unsigned int start;
	unsigned int ns;
	unsigned int ns_low;
	unsigned int ns_high;

	/* exit early if everything is already correct */
	if (div * i8254->osc_base == *nanosec &&
	    d1 > 1 && d1 <= I8254_MAX_COUNT &&
	    d2 > 1 && d2 <= I8254_MAX_COUNT &&
	    /* check for overflow */
	    div > d1 && div > d2 &&
	    div * i8254->osc_base > div &&
	    div * i8254->osc_base > i8254->osc_base)
		return;

	div = *nanosec / i8254->osc_base;
	d2 = I8254_MAX_COUNT;
	start = div / d2;
	if (start < 2)
		start = 2;
	for (d1 = start; d1 <= div / d1 + 1 && d1 <= I8254_MAX_COUNT; d1++) {
		for (d2 = div / d1;
		     d1 * d2 <= div + d1 + 1 && d2 <= I8254_MAX_COUNT; d2++) {
			ns = i8254->osc_base * d1 * d2;
			if (ns <= *nanosec && ns > ns_glb) {
				ns_glb = ns;
				d1_glb = d1;
				d2_glb = d2;
			}
			if (ns >= *nanosec && ns < ns_lub) {
				ns_lub = ns;
				d1_lub = d1;
				d2_lub = d2;
			}
		}
	}

	switch (flags & CMDF_ROUND_MASK) {
	case CMDF_ROUND_NEAREST:
	default:
		ns_high = d1_lub * d2_lub * i8254->osc_base;
		ns_low = d1_glb * d2_glb * i8254->osc_base;
		if (ns_high - *nanosec < *nanosec - ns_low) {
			d1 = d1_lub;
			d2 = d2_lub;
		} else {
			d1 = d1_glb;
			d2 = d2_glb;
		}
		break;
	case CMDF_ROUND_UP:
		d1 = d1_lub;
		d2 = d2_lub;
		break;
	case CMDF_ROUND_DOWN:
		d1 = d1_glb;
		d2 = d2_glb;
		break;
	}

	*nanosec = d1 * d2 * i8254->osc_base;
	i8254->next_div1 = d1;
	i8254->next_div2 = d2;
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
          unsigned int flags = 100;
          int _len_i82540 = 1;
          struct comedi_8254 * i8254 = (struct comedi_8254 *) malloc(_len_i82540*sizeof(struct comedi_8254));
          for(int _i0 = 0; _i0 < _len_i82540; _i0++) {
            i8254[_i0].next_div1 = ((-2 * (next_i()%2)) + 1) * next_i();
        i8254[_i0].next_div2 = ((-2 * (next_i()%2)) + 1) * next_i();
        i8254[_i0].osc_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nanosec0 = 1;
          unsigned int * nanosec = (unsigned int *) malloc(_len_nanosec0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_nanosec0; _i0++) {
            nanosec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          comedi_8254_cascade_ns_to_timer(i8254,nanosec,flags);
          free(i8254);
          free(nanosec);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int flags = 255;
          int _len_i82540 = 65025;
          struct comedi_8254 * i8254 = (struct comedi_8254 *) malloc(_len_i82540*sizeof(struct comedi_8254));
          for(int _i0 = 0; _i0 < _len_i82540; _i0++) {
            i8254[_i0].next_div1 = ((-2 * (next_i()%2)) + 1) * next_i();
        i8254[_i0].next_div2 = ((-2 * (next_i()%2)) + 1) * next_i();
        i8254[_i0].osc_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nanosec0 = 65025;
          unsigned int * nanosec = (unsigned int *) malloc(_len_nanosec0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_nanosec0; _i0++) {
            nanosec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          comedi_8254_cascade_ns_to_timer(i8254,nanosec,flags);
          free(i8254);
          free(nanosec);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int flags = 10;
          int _len_i82540 = 100;
          struct comedi_8254 * i8254 = (struct comedi_8254 *) malloc(_len_i82540*sizeof(struct comedi_8254));
          for(int _i0 = 0; _i0 < _len_i82540; _i0++) {
            i8254[_i0].next_div1 = ((-2 * (next_i()%2)) + 1) * next_i();
        i8254[_i0].next_div2 = ((-2 * (next_i()%2)) + 1) * next_i();
        i8254[_i0].osc_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nanosec0 = 100;
          unsigned int * nanosec = (unsigned int *) malloc(_len_nanosec0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_nanosec0; _i0++) {
            nanosec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          comedi_8254_cascade_ns_to_timer(i8254,nanosec,flags);
          free(i8254);
          free(nanosec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
