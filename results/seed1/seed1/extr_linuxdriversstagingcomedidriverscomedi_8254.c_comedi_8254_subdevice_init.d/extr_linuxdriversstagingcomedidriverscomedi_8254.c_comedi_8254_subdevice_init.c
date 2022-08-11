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
struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; struct comedi_8254* private; int /*<<< orphan*/  insn_config; int /*<<< orphan*/  insn_write; int /*<<< orphan*/  insn_read; int /*<<< orphan*/ * range_table; int /*<<< orphan*/  type; } ;
struct comedi_8254 {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  COMEDI_SUBD_COUNTER ; 
 int SDF_READABLE ; 
 int SDF_WRITABLE ; 
 int /*<<< orphan*/  comedi_8254_insn_config ; 
 int /*<<< orphan*/  comedi_8254_insn_read ; 
 int /*<<< orphan*/  comedi_8254_insn_write ; 
 int /*<<< orphan*/  range_unknown ; 

void comedi_8254_subdevice_init(struct comedi_subdevice *s,
				struct comedi_8254 *i8254)
{
	s->type		= COMEDI_SUBD_COUNTER;
	s->subdev_flags	= SDF_READABLE | SDF_WRITABLE;
	s->n_chan	= 3;
	s->maxdata	= 0xffff;
	s->range_table	= &range_unknown;
	s->insn_read	= comedi_8254_insn_read;
	s->insn_write	= comedi_8254_insn_write;
	s->insn_config	= comedi_8254_insn_config;

	s->private	= i8254;
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
          int _len_s0 = 1;
          struct comedi_subdevice * s = (struct comedi_subdevice *) malloc(_len_s0*sizeof(struct comedi_subdevice));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].subdev_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].n_chan = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].maxdata = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__private0 = 1;
          s[_i0].private = (struct comedi_8254 *) malloc(_len_s__i0__private0*sizeof(struct comedi_8254));
          for(int _j0 = 0; _j0 < _len_s__i0__private0; _j0++) {
            s[_i0].private->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].insn_config = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].insn_write = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].insn_read = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__range_table0 = 1;
          s[_i0].range_table = (int *) malloc(_len_s__i0__range_table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__range_table0; _j0++) {
            s[_i0].range_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_i82540 = 1;
          struct comedi_8254 * i8254 = (struct comedi_8254 *) malloc(_len_i82540*sizeof(struct comedi_8254));
          for(int _i0 = 0; _i0 < _len_i82540; _i0++) {
            i8254[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          comedi_8254_subdevice_init(s,i8254);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].private);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].range_table);
          }
          free(s);
          free(i8254);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct comedi_subdevice * s = (struct comedi_subdevice *) malloc(_len_s0*sizeof(struct comedi_subdevice));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].subdev_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].n_chan = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].maxdata = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__private0 = 1;
          s[_i0].private = (struct comedi_8254 *) malloc(_len_s__i0__private0*sizeof(struct comedi_8254));
          for(int _j0 = 0; _j0 < _len_s__i0__private0; _j0++) {
            s[_i0].private->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].insn_config = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].insn_write = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].insn_read = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__range_table0 = 1;
          s[_i0].range_table = (int *) malloc(_len_s__i0__range_table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__range_table0; _j0++) {
            s[_i0].range_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_i82540 = 65025;
          struct comedi_8254 * i8254 = (struct comedi_8254 *) malloc(_len_i82540*sizeof(struct comedi_8254));
          for(int _i0 = 0; _i0 < _len_i82540; _i0++) {
            i8254[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          comedi_8254_subdevice_init(s,i8254);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].private);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].range_table);
          }
          free(s);
          free(i8254);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct comedi_subdevice * s = (struct comedi_subdevice *) malloc(_len_s0*sizeof(struct comedi_subdevice));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].subdev_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].n_chan = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].maxdata = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__private0 = 1;
          s[_i0].private = (struct comedi_8254 *) malloc(_len_s__i0__private0*sizeof(struct comedi_8254));
          for(int _j0 = 0; _j0 < _len_s__i0__private0; _j0++) {
            s[_i0].private->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].insn_config = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].insn_write = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].insn_read = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__range_table0 = 1;
          s[_i0].range_table = (int *) malloc(_len_s__i0__range_table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__range_table0; _j0++) {
            s[_i0].range_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_i82540 = 100;
          struct comedi_8254 * i8254 = (struct comedi_8254 *) malloc(_len_i82540*sizeof(struct comedi_8254));
          for(int _i0 = 0; _i0 < _len_i82540; _i0++) {
            i8254[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          comedi_8254_subdevice_init(s,i8254);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].private);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].range_table);
          }
          free(s);
          free(i8254);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
