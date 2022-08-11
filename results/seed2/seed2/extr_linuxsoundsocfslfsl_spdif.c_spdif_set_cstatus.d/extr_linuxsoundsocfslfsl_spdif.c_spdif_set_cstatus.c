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
typedef  int u8 ;
struct spdif_mixer_control {int* ch_status; } ;

/* Variables and functions */

__attribute__((used)) static void spdif_set_cstatus(struct spdif_mixer_control *ctrl,
				u8 mask, u8 cstatus)
{
	ctrl->ch_status[3] &= ~mask;
	ctrl->ch_status[3] |= cstatus & mask;
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
          int mask = 100;
          int cstatus = 100;
          int _len_ctrl0 = 1;
          struct spdif_mixer_control * ctrl = (struct spdif_mixer_control *) malloc(_len_ctrl0*sizeof(struct spdif_mixer_control));
          for(int _i0 = 0; _i0 < _len_ctrl0; _i0++) {
              int _len_ctrl__i0__ch_status0 = 1;
          ctrl[_i0].ch_status = (int *) malloc(_len_ctrl__i0__ch_status0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctrl__i0__ch_status0; _j0++) {
            ctrl[_i0].ch_status[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          spdif_set_cstatus(ctrl,mask,cstatus);
          for(int _aux = 0; _aux < _len_ctrl0; _aux++) {
          free(ctrl[_aux].ch_status);
          }
          free(ctrl);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mask = 255;
          int cstatus = 255;
          int _len_ctrl0 = 65025;
          struct spdif_mixer_control * ctrl = (struct spdif_mixer_control *) malloc(_len_ctrl0*sizeof(struct spdif_mixer_control));
          for(int _i0 = 0; _i0 < _len_ctrl0; _i0++) {
              int _len_ctrl__i0__ch_status0 = 1;
          ctrl[_i0].ch_status = (int *) malloc(_len_ctrl__i0__ch_status0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctrl__i0__ch_status0; _j0++) {
            ctrl[_i0].ch_status[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          spdif_set_cstatus(ctrl,mask,cstatus);
          for(int _aux = 0; _aux < _len_ctrl0; _aux++) {
          free(ctrl[_aux].ch_status);
          }
          free(ctrl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mask = 10;
          int cstatus = 10;
          int _len_ctrl0 = 100;
          struct spdif_mixer_control * ctrl = (struct spdif_mixer_control *) malloc(_len_ctrl0*sizeof(struct spdif_mixer_control));
          for(int _i0 = 0; _i0 < _len_ctrl0; _i0++) {
              int _len_ctrl__i0__ch_status0 = 1;
          ctrl[_i0].ch_status = (int *) malloc(_len_ctrl__i0__ch_status0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctrl__i0__ch_status0; _j0++) {
            ctrl[_i0].ch_status[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          spdif_set_cstatus(ctrl,mask,cstatus);
          for(int _aux = 0; _aux < _len_ctrl0; _aux++) {
          free(ctrl[_aux].ch_status);
          }
          free(ctrl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
