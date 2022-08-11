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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u8 ;
struct vz89x_data {int* buffer; TYPE_1__* chip; } ;
struct TYPE_2__ {int read_size; } ;

/* Variables and functions */

__attribute__((used)) static bool vz89te_measurement_is_valid(struct vz89x_data *data)
{
	u8 crc = 0;
	int i, sum = 0;

	for (i = 0; i < (data->chip->read_size - 1); i++) {
		sum = crc + data->buffer[i];
		crc = sum;
		crc += sum / 256;
	}

	return !((0xff - crc) == data->buffer[data->chip->read_size - 1]);
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
          int _len_data0 = 1;
          struct vz89x_data * data = (struct vz89x_data *) malloc(_len_data0*sizeof(struct vz89x_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__buffer0 = 1;
          data[_i0].buffer = (int *) malloc(_len_data__i0__buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__buffer0; _j0++) {
            data[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__chip0 = 1;
          data[_i0].chip = (struct TYPE_2__ *) malloc(_len_data__i0__chip0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_data__i0__chip0; _j0++) {
            data[_i0].chip->read_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = vz89te_measurement_is_valid(data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].buffer);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].chip);
          }
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_data0 = 65025;
          struct vz89x_data * data = (struct vz89x_data *) malloc(_len_data0*sizeof(struct vz89x_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__buffer0 = 1;
          data[_i0].buffer = (int *) malloc(_len_data__i0__buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__buffer0; _j0++) {
            data[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__chip0 = 1;
          data[_i0].chip = (struct TYPE_2__ *) malloc(_len_data__i0__chip0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_data__i0__chip0; _j0++) {
            data[_i0].chip->read_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = vz89te_measurement_is_valid(data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].buffer);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].chip);
          }
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_data0 = 100;
          struct vz89x_data * data = (struct vz89x_data *) malloc(_len_data0*sizeof(struct vz89x_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__buffer0 = 1;
          data[_i0].buffer = (int *) malloc(_len_data__i0__buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__buffer0; _j0++) {
            data[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__chip0 = 1;
          data[_i0].chip = (struct TYPE_2__ *) malloc(_len_data__i0__chip0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_data__i0__chip0; _j0++) {
            data[_i0].chip->read_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = vz89te_measurement_is_valid(data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].buffer);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].chip);
          }
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
