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
struct max197_data {int /*<<< orphan*/ * ctrl_bytes; } ;

/* Variables and functions */
 int /*<<< orphan*/  MAX197_BIP ; 

__attribute__((used)) static inline void max197_set_unipolarity(struct max197_data *data, int channel)
{
	data->ctrl_bytes[channel] &= ~MAX197_BIP;
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
          int channel = 100;
          int _len_data0 = 1;
          struct max197_data * data = (struct max197_data *) malloc(_len_data0*sizeof(struct max197_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__ctrl_bytes0 = 1;
          data[_i0].ctrl_bytes = (int *) malloc(_len_data__i0__ctrl_bytes0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__ctrl_bytes0; _j0++) {
            data[_i0].ctrl_bytes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          max197_set_unipolarity(data,channel);
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].ctrl_bytes);
          }
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int channel = 255;
          int _len_data0 = 65025;
          struct max197_data * data = (struct max197_data *) malloc(_len_data0*sizeof(struct max197_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__ctrl_bytes0 = 1;
          data[_i0].ctrl_bytes = (int *) malloc(_len_data__i0__ctrl_bytes0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__ctrl_bytes0; _j0++) {
            data[_i0].ctrl_bytes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          max197_set_unipolarity(data,channel);
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].ctrl_bytes);
          }
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int channel = 10;
          int _len_data0 = 100;
          struct max197_data * data = (struct max197_data *) malloc(_len_data0*sizeof(struct max197_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__ctrl_bytes0 = 1;
          data[_i0].ctrl_bytes = (int *) malloc(_len_data__i0__ctrl_bytes0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__ctrl_bytes0; _j0++) {
            data[_i0].ctrl_bytes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          max197_set_unipolarity(data,channel);
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].ctrl_bytes);
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
