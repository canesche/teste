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
struct input_dev {struct input_absinfo* absinfo; } ;
struct input_absinfo {int maximum; int minimum; } ;
struct hid_usage {size_t code; } ;

/* Variables and functions */

__attribute__((used)) static int wacom_offset_rotation(struct input_dev *input, struct hid_usage *usage,
				 int value, int num, int denom)
{
	struct input_absinfo *abs = &input->absinfo[usage->code];
	int range = (abs->maximum - abs->minimum + 1);

	value += num*range/denom;
	if (value > abs->maximum)
		value -= range;
	else if (value < abs->minimum)
		value += range;
	return value;
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
          int value = 100;
          int num = 100;
          int denom = 100;
          int _len_input0 = 1;
          struct input_dev * input = (struct input_dev *) malloc(_len_input0*sizeof(struct input_dev));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
              int _len_input__i0__absinfo0 = 1;
          input[_i0].absinfo = (struct input_absinfo *) malloc(_len_input__i0__absinfo0*sizeof(struct input_absinfo));
          for(int _j0 = 0; _j0 < _len_input__i0__absinfo0; _j0++) {
            input[_i0].absinfo->maximum = ((-2 * (next_i()%2)) + 1) * next_i();
        input[_i0].absinfo->minimum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_usage0 = 1;
          struct hid_usage * usage = (struct hid_usage *) malloc(_len_usage0*sizeof(struct hid_usage));
          for(int _i0 = 0; _i0 < _len_usage0; _i0++) {
            usage[_i0].code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wacom_offset_rotation(input,usage,value,num,denom);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_input0; _aux++) {
          free(input[_aux].absinfo);
          }
          free(input);
          free(usage);
        
        break;
    }
    // big-arr
    case 1:
    {
          int value = 255;
          int num = 255;
          int denom = 255;
          int _len_input0 = 65025;
          struct input_dev * input = (struct input_dev *) malloc(_len_input0*sizeof(struct input_dev));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
              int _len_input__i0__absinfo0 = 1;
          input[_i0].absinfo = (struct input_absinfo *) malloc(_len_input__i0__absinfo0*sizeof(struct input_absinfo));
          for(int _j0 = 0; _j0 < _len_input__i0__absinfo0; _j0++) {
            input[_i0].absinfo->maximum = ((-2 * (next_i()%2)) + 1) * next_i();
        input[_i0].absinfo->minimum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_usage0 = 65025;
          struct hid_usage * usage = (struct hid_usage *) malloc(_len_usage0*sizeof(struct hid_usage));
          for(int _i0 = 0; _i0 < _len_usage0; _i0++) {
            usage[_i0].code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wacom_offset_rotation(input,usage,value,num,denom);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_input0; _aux++) {
          free(input[_aux].absinfo);
          }
          free(input);
          free(usage);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int value = 10;
          int num = 10;
          int denom = 10;
          int _len_input0 = 100;
          struct input_dev * input = (struct input_dev *) malloc(_len_input0*sizeof(struct input_dev));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
              int _len_input__i0__absinfo0 = 1;
          input[_i0].absinfo = (struct input_absinfo *) malloc(_len_input__i0__absinfo0*sizeof(struct input_absinfo));
          for(int _j0 = 0; _j0 < _len_input__i0__absinfo0; _j0++) {
            input[_i0].absinfo->maximum = ((-2 * (next_i()%2)) + 1) * next_i();
        input[_i0].absinfo->minimum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_usage0 = 100;
          struct hid_usage * usage = (struct hid_usage *) malloc(_len_usage0*sizeof(struct hid_usage));
          for(int _i0 = 0; _i0 < _len_usage0; _i0++) {
            usage[_i0].code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wacom_offset_rotation(input,usage,value,num,denom);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_input0; _aux++) {
          free(input[_aux].absinfo);
          }
          free(input);
          free(usage);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
