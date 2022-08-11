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
struct fpga_internal {TYPE_1__** pid_filt; } ;
struct TYPE_2__ {void* demux; } ;

/* Variables and functions */

__attribute__((used)) static struct fpga_internal *check_filter(struct fpga_internal *temp_int,
						void *demux_dev, int filt_nr)
{
	if (temp_int == NULL)
		return NULL;

	if ((temp_int->pid_filt[filt_nr]) == NULL)
		return NULL;

	if (temp_int->pid_filt[filt_nr]->demux == demux_dev)
		return temp_int;

	return NULL;
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
          int filt_nr = 100;
          int _len_temp_int0 = 1;
          struct fpga_internal * temp_int = (struct fpga_internal *) malloc(_len_temp_int0*sizeof(struct fpga_internal));
          for(int _i0 = 0; _i0 < _len_temp_int0; _i0++) {
              int _len_temp_int__i0__pid_filt0 = 1;
          temp_int[_i0].pid_filt = (struct TYPE_2__ **) malloc(_len_temp_int__i0__pid_filt0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_temp_int__i0__pid_filt0; _j0++) {
            int _len_temp_int__i0__pid_filt1 = 1;
            temp_int[_i0].pid_filt[_j0] = (struct TYPE_2__ *) malloc(_len_temp_int__i0__pid_filt1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_temp_int__i0__pid_filt1; _j1++) {
                  }
          }
          }
          void * demux_dev;
          struct fpga_internal * benchRet = check_filter(temp_int,demux_dev,filt_nr);
          for(int _aux = 0; _aux < _len_temp_int0; _aux++) {
          free(*(temp_int[_aux].pid_filt));
        free(temp_int[_aux].pid_filt);
          }
          free(temp_int);
        
        break;
    }
    // big-arr
    case 1:
    {
          int filt_nr = 255;
          int _len_temp_int0 = 65025;
          struct fpga_internal * temp_int = (struct fpga_internal *) malloc(_len_temp_int0*sizeof(struct fpga_internal));
          for(int _i0 = 0; _i0 < _len_temp_int0; _i0++) {
              int _len_temp_int__i0__pid_filt0 = 1;
          temp_int[_i0].pid_filt = (struct TYPE_2__ **) malloc(_len_temp_int__i0__pid_filt0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_temp_int__i0__pid_filt0; _j0++) {
            int _len_temp_int__i0__pid_filt1 = 1;
            temp_int[_i0].pid_filt[_j0] = (struct TYPE_2__ *) malloc(_len_temp_int__i0__pid_filt1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_temp_int__i0__pid_filt1; _j1++) {
                  }
          }
          }
          void * demux_dev;
          struct fpga_internal * benchRet = check_filter(temp_int,demux_dev,filt_nr);
          for(int _aux = 0; _aux < _len_temp_int0; _aux++) {
          free(*(temp_int[_aux].pid_filt));
        free(temp_int[_aux].pid_filt);
          }
          free(temp_int);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int filt_nr = 10;
          int _len_temp_int0 = 100;
          struct fpga_internal * temp_int = (struct fpga_internal *) malloc(_len_temp_int0*sizeof(struct fpga_internal));
          for(int _i0 = 0; _i0 < _len_temp_int0; _i0++) {
              int _len_temp_int__i0__pid_filt0 = 1;
          temp_int[_i0].pid_filt = (struct TYPE_2__ **) malloc(_len_temp_int__i0__pid_filt0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_temp_int__i0__pid_filt0; _j0++) {
            int _len_temp_int__i0__pid_filt1 = 1;
            temp_int[_i0].pid_filt[_j0] = (struct TYPE_2__ *) malloc(_len_temp_int__i0__pid_filt1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_temp_int__i0__pid_filt1; _j1++) {
                  }
          }
          }
          void * demux_dev;
          struct fpga_internal * benchRet = check_filter(temp_int,demux_dev,filt_nr);
          for(int _aux = 0; _aux < _len_temp_int0; _aux++) {
          free(*(temp_int[_aux].pid_filt));
        free(temp_int[_aux].pid_filt);
          }
          free(temp_int);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
