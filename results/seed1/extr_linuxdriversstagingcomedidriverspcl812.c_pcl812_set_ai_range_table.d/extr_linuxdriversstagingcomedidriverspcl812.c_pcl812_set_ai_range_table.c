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
struct pcl812_private {int range_correction; } ;
struct pcl812_board {int board_type; int /*<<< orphan*/ * rangelist_ai; } ;
struct comedi_subdevice {int /*<<< orphan*/ * range_table; } ;
struct comedi_device {struct pcl812_private* private; struct pcl812_board* board_ptr; } ;
struct comedi_devconfig {int* options; } ;

/* Variables and functions */
#define  BOARD_ACL8113 132 
#define  BOARD_ISO813 131 
#define  BOARD_PCL812 130 
#define  BOARD_PCL812PG 129 
#define  BOARD_PCL813B 128 
 int /*<<< orphan*/  range812_bipolar0_3125 ; 
 int /*<<< orphan*/  range812_bipolar0_625 ; 
 int /*<<< orphan*/  range812_bipolar1_25 ; 
 int /*<<< orphan*/  range_acl8113_1_2_ai ; 
 int /*<<< orphan*/  range_acl8113_1_ai ; 
 int /*<<< orphan*/  range_acl8113_2_2_ai ; 
 int /*<<< orphan*/  range_acl8113_2_ai ; 
 int /*<<< orphan*/  range_bipolar10 ; 
 int /*<<< orphan*/  range_bipolar2_5 ; 
 int /*<<< orphan*/  range_bipolar5 ; 
 int /*<<< orphan*/  range_iso813_1_2_ai ; 
 int /*<<< orphan*/  range_iso813_1_ai ; 
 int /*<<< orphan*/  range_iso813_2_2_ai ; 
 int /*<<< orphan*/  range_iso813_2_ai ; 
 int /*<<< orphan*/  range_pcl812pg2_ai ; 
 int /*<<< orphan*/  range_pcl813b2_ai ; 

__attribute__((used)) static void pcl812_set_ai_range_table(struct comedi_device *dev,
				      struct comedi_subdevice *s,
				      struct comedi_devconfig *it)
{
	const struct pcl812_board *board = dev->board_ptr;
	struct pcl812_private *devpriv = dev->private;

	switch (board->board_type) {
	case BOARD_PCL812PG:
		if (it->options[4] == 1)
			s->range_table = &range_pcl812pg2_ai;
		else
			s->range_table = board->rangelist_ai;
		break;
	case BOARD_PCL812:
		switch (it->options[4]) {
		case 0:
			s->range_table = &range_bipolar10;
			break;
		case 1:
			s->range_table = &range_bipolar5;
			break;
		case 2:
			s->range_table = &range_bipolar2_5;
			break;
		case 3:
			s->range_table = &range812_bipolar1_25;
			break;
		case 4:
			s->range_table = &range812_bipolar0_625;
			break;
		case 5:
			s->range_table = &range812_bipolar0_3125;
			break;
		default:
			s->range_table = &range_bipolar10;
			break;
		}
		break;
	case BOARD_PCL813B:
		if (it->options[1] == 1)
			s->range_table = &range_pcl813b2_ai;
		else
			s->range_table = board->rangelist_ai;
		break;
	case BOARD_ISO813:
		switch (it->options[1]) {
		case 0:
			s->range_table = &range_iso813_1_ai;
			break;
		case 1:
			s->range_table = &range_iso813_1_2_ai;
			break;
		case 2:
			s->range_table = &range_iso813_2_ai;
			devpriv->range_correction = 1;
			break;
		case 3:
			s->range_table = &range_iso813_2_2_ai;
			devpriv->range_correction = 1;
			break;
		default:
			s->range_table = &range_iso813_1_ai;
			break;
		}
		break;
	case BOARD_ACL8113:
		switch (it->options[1]) {
		case 0:
			s->range_table = &range_acl8113_1_ai;
			break;
		case 1:
			s->range_table = &range_acl8113_1_2_ai;
			break;
		case 2:
			s->range_table = &range_acl8113_2_ai;
			devpriv->range_correction = 1;
			break;
		case 3:
			s->range_table = &range_acl8113_2_2_ai;
			devpriv->range_correction = 1;
			break;
		default:
			s->range_table = &range_acl8113_1_ai;
			break;
		}
		break;
	default:
		s->range_table = board->rangelist_ai;
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
          int _len_dev0 = 1;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__private0 = 1;
          dev[_i0].private = (struct pcl812_private *) malloc(_len_dev__i0__private0*sizeof(struct pcl812_private));
          for(int _j0 = 0; _j0 < _len_dev__i0__private0; _j0++) {
            dev[_i0].private->range_correction = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__board_ptr0 = 1;
          dev[_i0].board_ptr = (struct pcl812_board *) malloc(_len_dev__i0__board_ptr0*sizeof(struct pcl812_board));
          for(int _j0 = 0; _j0 < _len_dev__i0__board_ptr0; _j0++) {
            dev[_i0].board_ptr->board_type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__board_ptr_rangelist_ai0 = 1;
          dev[_i0].board_ptr->rangelist_ai = (int *) malloc(_len_dev__i0__board_ptr_rangelist_ai0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__board_ptr_rangelist_ai0; _j0++) {
            dev[_i0].board_ptr->rangelist_ai[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_s0 = 1;
          struct comedi_subdevice * s = (struct comedi_subdevice *) malloc(_len_s0*sizeof(struct comedi_subdevice));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__range_table0 = 1;
          s[_i0].range_table = (int *) malloc(_len_s__i0__range_table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__range_table0; _j0++) {
            s[_i0].range_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_it0 = 1;
          struct comedi_devconfig * it = (struct comedi_devconfig *) malloc(_len_it0*sizeof(struct comedi_devconfig));
          for(int _i0 = 0; _i0 < _len_it0; _i0++) {
              int _len_it__i0__options0 = 1;
          it[_i0].options = (int *) malloc(_len_it__i0__options0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_it__i0__options0; _j0++) {
            it[_i0].options[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          pcl812_set_ai_range_table(dev,s,it);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].private);
          }
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].board_ptr);
          }
          free(dev);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].range_table);
          }
          free(s);
          for(int _aux = 0; _aux < _len_it0; _aux++) {
          free(it[_aux].options);
          }
          free(it);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__private0 = 1;
          dev[_i0].private = (struct pcl812_private *) malloc(_len_dev__i0__private0*sizeof(struct pcl812_private));
          for(int _j0 = 0; _j0 < _len_dev__i0__private0; _j0++) {
            dev[_i0].private->range_correction = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__board_ptr0 = 1;
          dev[_i0].board_ptr = (struct pcl812_board *) malloc(_len_dev__i0__board_ptr0*sizeof(struct pcl812_board));
          for(int _j0 = 0; _j0 < _len_dev__i0__board_ptr0; _j0++) {
            dev[_i0].board_ptr->board_type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__board_ptr_rangelist_ai0 = 1;
          dev[_i0].board_ptr->rangelist_ai = (int *) malloc(_len_dev__i0__board_ptr_rangelist_ai0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__board_ptr_rangelist_ai0; _j0++) {
            dev[_i0].board_ptr->rangelist_ai[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_s0 = 65025;
          struct comedi_subdevice * s = (struct comedi_subdevice *) malloc(_len_s0*sizeof(struct comedi_subdevice));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__range_table0 = 1;
          s[_i0].range_table = (int *) malloc(_len_s__i0__range_table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__range_table0; _j0++) {
            s[_i0].range_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_it0 = 65025;
          struct comedi_devconfig * it = (struct comedi_devconfig *) malloc(_len_it0*sizeof(struct comedi_devconfig));
          for(int _i0 = 0; _i0 < _len_it0; _i0++) {
              int _len_it__i0__options0 = 1;
          it[_i0].options = (int *) malloc(_len_it__i0__options0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_it__i0__options0; _j0++) {
            it[_i0].options[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          pcl812_set_ai_range_table(dev,s,it);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].private);
          }
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].board_ptr);
          }
          free(dev);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].range_table);
          }
          free(s);
          for(int _aux = 0; _aux < _len_it0; _aux++) {
          free(it[_aux].options);
          }
          free(it);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__private0 = 1;
          dev[_i0].private = (struct pcl812_private *) malloc(_len_dev__i0__private0*sizeof(struct pcl812_private));
          for(int _j0 = 0; _j0 < _len_dev__i0__private0; _j0++) {
            dev[_i0].private->range_correction = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__board_ptr0 = 1;
          dev[_i0].board_ptr = (struct pcl812_board *) malloc(_len_dev__i0__board_ptr0*sizeof(struct pcl812_board));
          for(int _j0 = 0; _j0 < _len_dev__i0__board_ptr0; _j0++) {
            dev[_i0].board_ptr->board_type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__board_ptr_rangelist_ai0 = 1;
          dev[_i0].board_ptr->rangelist_ai = (int *) malloc(_len_dev__i0__board_ptr_rangelist_ai0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__board_ptr_rangelist_ai0; _j0++) {
            dev[_i0].board_ptr->rangelist_ai[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_s0 = 100;
          struct comedi_subdevice * s = (struct comedi_subdevice *) malloc(_len_s0*sizeof(struct comedi_subdevice));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__range_table0 = 1;
          s[_i0].range_table = (int *) malloc(_len_s__i0__range_table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__range_table0; _j0++) {
            s[_i0].range_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_it0 = 100;
          struct comedi_devconfig * it = (struct comedi_devconfig *) malloc(_len_it0*sizeof(struct comedi_devconfig));
          for(int _i0 = 0; _i0 < _len_it0; _i0++) {
              int _len_it__i0__options0 = 1;
          it[_i0].options = (int *) malloc(_len_it__i0__options0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_it__i0__options0; _j0++) {
            it[_i0].options[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          pcl812_set_ai_range_table(dev,s,it);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].private);
          }
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].board_ptr);
          }
          free(dev);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].range_table);
          }
          free(s);
          for(int _aux = 0; _aux < _len_it0; _aux++) {
          free(it[_aux].options);
          }
          free(it);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
