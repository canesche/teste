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
struct rds_ib_device {int* vector_load; TYPE_1__* dev; } ;
struct TYPE_2__ {int num_comp_vectors; } ;

/* Variables and functions */

__attribute__((used)) static inline int ibdev_get_unused_vector(struct rds_ib_device *rds_ibdev)
{
	int min = rds_ibdev->vector_load[rds_ibdev->dev->num_comp_vectors - 1];
	int index = rds_ibdev->dev->num_comp_vectors - 1;
	int i;

	for (i = rds_ibdev->dev->num_comp_vectors - 1; i >= 0; i--) {
		if (rds_ibdev->vector_load[i] < min) {
			index = i;
			min = rds_ibdev->vector_load[i];
		}
	}

	rds_ibdev->vector_load[index]++;
	return index;
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
          int _len_rds_ibdev0 = 1;
          struct rds_ib_device * rds_ibdev = (struct rds_ib_device *) malloc(_len_rds_ibdev0*sizeof(struct rds_ib_device));
          for(int _i0 = 0; _i0 < _len_rds_ibdev0; _i0++) {
              int _len_rds_ibdev__i0__vector_load0 = 1;
          rds_ibdev[_i0].vector_load = (int *) malloc(_len_rds_ibdev__i0__vector_load0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rds_ibdev__i0__vector_load0; _j0++) {
            rds_ibdev[_i0].vector_load[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rds_ibdev__i0__dev0 = 1;
          rds_ibdev[_i0].dev = (struct TYPE_2__ *) malloc(_len_rds_ibdev__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rds_ibdev__i0__dev0; _j0++) {
            rds_ibdev[_i0].dev->num_comp_vectors = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ibdev_get_unused_vector(rds_ibdev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rds_ibdev0; _aux++) {
          free(rds_ibdev[_aux].vector_load);
          }
          for(int _aux = 0; _aux < _len_rds_ibdev0; _aux++) {
          free(rds_ibdev[_aux].dev);
          }
          free(rds_ibdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rds_ibdev0 = 65025;
          struct rds_ib_device * rds_ibdev = (struct rds_ib_device *) malloc(_len_rds_ibdev0*sizeof(struct rds_ib_device));
          for(int _i0 = 0; _i0 < _len_rds_ibdev0; _i0++) {
              int _len_rds_ibdev__i0__vector_load0 = 1;
          rds_ibdev[_i0].vector_load = (int *) malloc(_len_rds_ibdev__i0__vector_load0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rds_ibdev__i0__vector_load0; _j0++) {
            rds_ibdev[_i0].vector_load[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rds_ibdev__i0__dev0 = 1;
          rds_ibdev[_i0].dev = (struct TYPE_2__ *) malloc(_len_rds_ibdev__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rds_ibdev__i0__dev0; _j0++) {
            rds_ibdev[_i0].dev->num_comp_vectors = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ibdev_get_unused_vector(rds_ibdev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rds_ibdev0; _aux++) {
          free(rds_ibdev[_aux].vector_load);
          }
          for(int _aux = 0; _aux < _len_rds_ibdev0; _aux++) {
          free(rds_ibdev[_aux].dev);
          }
          free(rds_ibdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rds_ibdev0 = 100;
          struct rds_ib_device * rds_ibdev = (struct rds_ib_device *) malloc(_len_rds_ibdev0*sizeof(struct rds_ib_device));
          for(int _i0 = 0; _i0 < _len_rds_ibdev0; _i0++) {
              int _len_rds_ibdev__i0__vector_load0 = 1;
          rds_ibdev[_i0].vector_load = (int *) malloc(_len_rds_ibdev__i0__vector_load0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rds_ibdev__i0__vector_load0; _j0++) {
            rds_ibdev[_i0].vector_load[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rds_ibdev__i0__dev0 = 1;
          rds_ibdev[_i0].dev = (struct TYPE_2__ *) malloc(_len_rds_ibdev__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rds_ibdev__i0__dev0; _j0++) {
            rds_ibdev[_i0].dev->num_comp_vectors = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ibdev_get_unused_vector(rds_ibdev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rds_ibdev0; _aux++) {
          free(rds_ibdev[_aux].vector_load);
          }
          for(int _aux = 0; _aux < _len_rds_ibdev0; _aux++) {
          free(rds_ibdev[_aux].dev);
          }
          free(rds_ibdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
