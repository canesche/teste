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
struct comedi_subdevice {TYPE_2__** range_table_list; } ;
struct TYPE_4__ {TYPE_1__* range; } ;
struct TYPE_3__ {scalar_t__ min; } ;

/* Variables and functions */

__attribute__((used)) static inline bool comedi_chan_range_is_bipolar(struct comedi_subdevice *s,
						unsigned int chan,
						unsigned int range)
{
	return s->range_table_list[chan]->range[range].min < 0;
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
          unsigned int chan = 100;
          unsigned int range = 100;
          int _len_s0 = 1;
          struct comedi_subdevice * s = (struct comedi_subdevice *) malloc(_len_s0*sizeof(struct comedi_subdevice));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__range_table_list0 = 1;
          s[_i0].range_table_list = (struct TYPE_4__ **) malloc(_len_s__i0__range_table_list0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__range_table_list0; _j0++) {
            int _len_s__i0__range_table_list1 = 1;
            s[_i0].range_table_list[_j0] = (struct TYPE_4__ *) malloc(_len_s__i0__range_table_list1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_s__i0__range_table_list1; _j1++) {
                int _len_s__i0__range_table_list__j0__range0 = 1;
          s[_i0].range_table_list[_j0]->range = (struct TYPE_3__ *) malloc(_len_s__i0__range_table_list__j0__range0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_s__i0__range_table_list__j0__range0; _j0++) {
            s[_i0].range_table_list[_j0]->range->min = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int benchRet = comedi_chan_range_is_bipolar(s,chan,range);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].range_table_list));
        free(s[_aux].range_table_list);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int chan = 255;
          unsigned int range = 255;
          int _len_s0 = 65025;
          struct comedi_subdevice * s = (struct comedi_subdevice *) malloc(_len_s0*sizeof(struct comedi_subdevice));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__range_table_list0 = 1;
          s[_i0].range_table_list = (struct TYPE_4__ **) malloc(_len_s__i0__range_table_list0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__range_table_list0; _j0++) {
            int _len_s__i0__range_table_list1 = 1;
            s[_i0].range_table_list[_j0] = (struct TYPE_4__ *) malloc(_len_s__i0__range_table_list1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_s__i0__range_table_list1; _j1++) {
                int _len_s__i0__range_table_list__j0__range0 = 1;
          s[_i0].range_table_list[_j0]->range = (struct TYPE_3__ *) malloc(_len_s__i0__range_table_list__j0__range0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_s__i0__range_table_list__j0__range0; _j0++) {
            s[_i0].range_table_list[_j0]->range->min = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int benchRet = comedi_chan_range_is_bipolar(s,chan,range);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].range_table_list));
        free(s[_aux].range_table_list);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int chan = 10;
          unsigned int range = 10;
          int _len_s0 = 100;
          struct comedi_subdevice * s = (struct comedi_subdevice *) malloc(_len_s0*sizeof(struct comedi_subdevice));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__range_table_list0 = 1;
          s[_i0].range_table_list = (struct TYPE_4__ **) malloc(_len_s__i0__range_table_list0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__range_table_list0; _j0++) {
            int _len_s__i0__range_table_list1 = 1;
            s[_i0].range_table_list[_j0] = (struct TYPE_4__ *) malloc(_len_s__i0__range_table_list1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_s__i0__range_table_list1; _j1++) {
                int _len_s__i0__range_table_list__j0__range0 = 1;
          s[_i0].range_table_list[_j0]->range = (struct TYPE_3__ *) malloc(_len_s__i0__range_table_list__j0__range0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_s__i0__range_table_list__j0__range0; _j0++) {
            s[_i0].range_table_list[_j0]->range->min = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int benchRet = comedi_chan_range_is_bipolar(s,chan,range);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].range_table_list));
        free(s[_aux].range_table_list);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
