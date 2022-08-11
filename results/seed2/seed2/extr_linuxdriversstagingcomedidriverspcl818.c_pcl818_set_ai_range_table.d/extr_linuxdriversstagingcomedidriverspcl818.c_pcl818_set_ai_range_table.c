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
struct pcl818_board {scalar_t__ is_818; int /*<<< orphan*/ * ai_range_type; } ;
struct comedi_subdevice {int /*<<< orphan*/ * range_table; } ;
struct comedi_device {struct pcl818_board* board_ptr; } ;
struct comedi_devconfig {int* options; } ;

/* Variables and functions */
 int /*<<< orphan*/  range718_bipolar0_5 ; 
 int /*<<< orphan*/  range718_bipolar1 ; 
 int /*<<< orphan*/  range718_unipolar1 ; 
 int /*<<< orphan*/  range718_unipolar2 ; 
 int /*<<< orphan*/  range_bipolar10 ; 
 int /*<<< orphan*/  range_bipolar2_5 ; 
 int /*<<< orphan*/  range_bipolar5 ; 
 int /*<<< orphan*/  range_pcl818l_h_ai ; 
 int /*<<< orphan*/  range_unipolar10 ; 
 int /*<<< orphan*/  range_unipolar5 ; 
 int /*<<< orphan*/  range_unknown ; 

__attribute__((used)) static void pcl818_set_ai_range_table(struct comedi_device *dev,
				      struct comedi_subdevice *s,
				      struct comedi_devconfig *it)
{
	const struct pcl818_board *board = dev->board_ptr;

	/* default to the range table from the boardinfo */
	s->range_table = board->ai_range_type;

	/* now check the user config option based on the boardtype */
	if (board->is_818) {
		if (it->options[4] == 1 || it->options[4] == 10) {
			/* secondary range list jumper selectable */
			s->range_table = &range_pcl818l_h_ai;
		}
	} else {
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
			s->range_table = &range718_bipolar1;
			break;
		case 4:
			s->range_table = &range718_bipolar0_5;
			break;
		case 6:
			s->range_table = &range_unipolar10;
			break;
		case 7:
			s->range_table = &range_unipolar5;
			break;
		case 8:
			s->range_table = &range718_unipolar2;
			break;
		case 9:
			s->range_table = &range718_unipolar1;
			break;
		default:
			s->range_table = &range_unknown;
			break;
		}
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
              int _len_dev__i0__board_ptr0 = 1;
          dev[_i0].board_ptr = (struct pcl818_board *) malloc(_len_dev__i0__board_ptr0*sizeof(struct pcl818_board));
          for(int _j0 = 0; _j0 < _len_dev__i0__board_ptr0; _j0++) {
            dev[_i0].board_ptr->is_818 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__board_ptr_ai_range_type0 = 1;
          dev[_i0].board_ptr->ai_range_type = (int *) malloc(_len_dev__i0__board_ptr_ai_range_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__board_ptr_ai_range_type0; _j0++) {
            dev[_i0].board_ptr->ai_range_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
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
          pcl818_set_ai_range_table(dev,s,it);
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
              int _len_dev__i0__board_ptr0 = 1;
          dev[_i0].board_ptr = (struct pcl818_board *) malloc(_len_dev__i0__board_ptr0*sizeof(struct pcl818_board));
          for(int _j0 = 0; _j0 < _len_dev__i0__board_ptr0; _j0++) {
            dev[_i0].board_ptr->is_818 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__board_ptr_ai_range_type0 = 1;
          dev[_i0].board_ptr->ai_range_type = (int *) malloc(_len_dev__i0__board_ptr_ai_range_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__board_ptr_ai_range_type0; _j0++) {
            dev[_i0].board_ptr->ai_range_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
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
          pcl818_set_ai_range_table(dev,s,it);
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
              int _len_dev__i0__board_ptr0 = 1;
          dev[_i0].board_ptr = (struct pcl818_board *) malloc(_len_dev__i0__board_ptr0*sizeof(struct pcl818_board));
          for(int _j0 = 0; _j0 < _len_dev__i0__board_ptr0; _j0++) {
            dev[_i0].board_ptr->is_818 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__board_ptr_ai_range_type0 = 1;
          dev[_i0].board_ptr->ai_range_type = (int *) malloc(_len_dev__i0__board_ptr_ai_range_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__board_ptr_ai_range_type0; _j0++) {
            dev[_i0].board_ptr->ai_range_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
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
          pcl818_set_ai_range_table(dev,s,it);
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
