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
struct ad714x_chip {int* sensor_val; } ;

/* Variables and functions */

__attribute__((used)) static int ad714x_cal_highest_stage(struct ad714x_chip *ad714x,
					int start_stage, int end_stage)
{
	int max_res = 0;
	int max_idx = 0;
	int i;

	for (i = start_stage; i <= end_stage; i++) {
		if (ad714x->sensor_val[i] > max_res) {
			max_res = ad714x->sensor_val[i];
			max_idx = i;
		}
	}

	return max_idx;
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
          int start_stage = 100;
          int end_stage = 100;
          int _len_ad714x0 = 1;
          struct ad714x_chip * ad714x = (struct ad714x_chip *) malloc(_len_ad714x0*sizeof(struct ad714x_chip));
          for(int _i0 = 0; _i0 < _len_ad714x0; _i0++) {
              int _len_ad714x__i0__sensor_val0 = 1;
          ad714x[_i0].sensor_val = (int *) malloc(_len_ad714x__i0__sensor_val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ad714x__i0__sensor_val0; _j0++) {
            ad714x[_i0].sensor_val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ad714x_cal_highest_stage(ad714x,start_stage,end_stage);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ad714x0; _aux++) {
          free(ad714x[_aux].sensor_val);
          }
          free(ad714x);
        
        break;
    }
    // big-arr
    case 1:
    {
          int start_stage = 255;
          int end_stage = 255;
          int _len_ad714x0 = 65025;
          struct ad714x_chip * ad714x = (struct ad714x_chip *) malloc(_len_ad714x0*sizeof(struct ad714x_chip));
          for(int _i0 = 0; _i0 < _len_ad714x0; _i0++) {
              int _len_ad714x__i0__sensor_val0 = 1;
          ad714x[_i0].sensor_val = (int *) malloc(_len_ad714x__i0__sensor_val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ad714x__i0__sensor_val0; _j0++) {
            ad714x[_i0].sensor_val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ad714x_cal_highest_stage(ad714x,start_stage,end_stage);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ad714x0; _aux++) {
          free(ad714x[_aux].sensor_val);
          }
          free(ad714x);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int start_stage = 10;
          int end_stage = 10;
          int _len_ad714x0 = 100;
          struct ad714x_chip * ad714x = (struct ad714x_chip *) malloc(_len_ad714x0*sizeof(struct ad714x_chip));
          for(int _i0 = 0; _i0 < _len_ad714x0; _i0++) {
              int _len_ad714x__i0__sensor_val0 = 1;
          ad714x[_i0].sensor_val = (int *) malloc(_len_ad714x__i0__sensor_val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ad714x__i0__sensor_val0; _j0++) {
            ad714x[_i0].sensor_val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ad714x_cal_highest_stage(ad714x,start_stage,end_stage);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ad714x0; _aux++) {
          free(ad714x[_aux].sensor_val);
          }
          free(ad714x);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
