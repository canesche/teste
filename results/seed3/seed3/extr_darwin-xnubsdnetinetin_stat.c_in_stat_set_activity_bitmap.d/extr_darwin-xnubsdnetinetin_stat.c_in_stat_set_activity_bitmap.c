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
typedef  int uint64_t ;
typedef  int u_int64_t ;
struct TYPE_3__ {scalar_t__ start; int* bitmap; } ;
typedef  TYPE_1__ activity_bitmap_t ;

/* Variables and functions */
 int IN_STAT_ACTIVITY_BITMAP_FIELD_SIZE ; 
 int IN_STAT_ACTIVITY_BITMAP_TOTAL_SIZE ; 
 int IN_STAT_ACTIVITY_TIME_SEC_SHIFT ; 
 int IN_STAT_ACTIVITY_TOTAL_TIME ; 
 int IN_STAT_SET_MOST_SIGNIFICANT_BIT ; 

void
in_stat_set_activity_bitmap(activity_bitmap_t *activity, uint64_t now)
{
	uint64_t elapsed_time, slot;
	uint64_t *bitmap;
	if (activity->start == 0)
		activity->start = now;
	elapsed_time = now - activity->start;

	slot = elapsed_time >> IN_STAT_ACTIVITY_TIME_SEC_SHIFT;
	if (slot < IN_STAT_ACTIVITY_BITMAP_TOTAL_SIZE) {
		if (slot < IN_STAT_ACTIVITY_BITMAP_FIELD_SIZE) {
			bitmap = &activity->bitmap[0];
		} else {
			bitmap = &activity->bitmap[1];
			slot -= IN_STAT_ACTIVITY_BITMAP_FIELD_SIZE;
		}
		*bitmap |= (((u_int64_t) 1) << slot);
	} else {
		if (slot >= (IN_STAT_ACTIVITY_BITMAP_TOTAL_SIZE * 2)) {
			activity->start = now - IN_STAT_ACTIVITY_TOTAL_TIME;
			activity->bitmap[0] = activity->bitmap[1] = 0;
		} else {
			uint64_t shift =
			    slot - (IN_STAT_ACTIVITY_BITMAP_TOTAL_SIZE - 1);
			/*
			 * Move the start time and bitmap forward to
			 * cover the lost time
			 */
			activity->start +=
			    (shift << IN_STAT_ACTIVITY_TIME_SEC_SHIFT);
			if (shift > IN_STAT_ACTIVITY_BITMAP_FIELD_SIZE) {
				activity->bitmap[0] = activity->bitmap[1];
				activity->bitmap[1] = 0;
				shift -= IN_STAT_ACTIVITY_BITMAP_FIELD_SIZE;
				if (shift == IN_STAT_ACTIVITY_BITMAP_FIELD_SIZE)
					activity->bitmap[0] = 0;
				else
					activity->bitmap[0] >>= shift;
			} else {
				uint64_t mask_lower, tmp;
				uint64_t b1_low, b0_high;

				/*
				 * generate a mask with all of lower
				 * 'shift' bits set
				 */
				tmp = (((uint64_t)1) << (shift - 1));
				mask_lower = ((tmp - 1) ^ tmp);
				activity->bitmap[0] >>= shift;
				b1_low = (activity->bitmap[1] & mask_lower);

				b0_high = (b1_low <<
				    (IN_STAT_ACTIVITY_BITMAP_FIELD_SIZE -
				     shift));
				activity->bitmap[0] |= b0_high;
				activity->bitmap[1] >>= shift;
			}
		}
		activity->bitmap[1] |= IN_STAT_SET_MOST_SIGNIFICANT_BIT;
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
          int now = 100;
          int _len_activity0 = 1;
          struct TYPE_3__ * activity = (struct TYPE_3__ *) malloc(_len_activity0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_activity0; _i0++) {
            activity[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_activity__i0__bitmap0 = 1;
          activity[_i0].bitmap = (int *) malloc(_len_activity__i0__bitmap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_activity__i0__bitmap0; _j0++) {
            activity[_i0].bitmap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          in_stat_set_activity_bitmap(activity,now);
          for(int _aux = 0; _aux < _len_activity0; _aux++) {
          free(activity[_aux].bitmap);
          }
          free(activity);
        
        break;
    }
    // big-arr
    case 1:
    {
          int now = 255;
          int _len_activity0 = 65025;
          struct TYPE_3__ * activity = (struct TYPE_3__ *) malloc(_len_activity0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_activity0; _i0++) {
            activity[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_activity__i0__bitmap0 = 1;
          activity[_i0].bitmap = (int *) malloc(_len_activity__i0__bitmap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_activity__i0__bitmap0; _j0++) {
            activity[_i0].bitmap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          in_stat_set_activity_bitmap(activity,now);
          for(int _aux = 0; _aux < _len_activity0; _aux++) {
          free(activity[_aux].bitmap);
          }
          free(activity);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int now = 10;
          int _len_activity0 = 100;
          struct TYPE_3__ * activity = (struct TYPE_3__ *) malloc(_len_activity0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_activity0; _i0++) {
            activity[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_activity__i0__bitmap0 = 1;
          activity[_i0].bitmap = (int *) malloc(_len_activity__i0__bitmap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_activity__i0__bitmap0; _j0++) {
            activity[_i0].bitmap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          in_stat_set_activity_bitmap(activity,now);
          for(int _aux = 0; _aux < _len_activity0; _aux++) {
          free(activity[_aux].bitmap);
          }
          free(activity);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
