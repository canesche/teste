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
struct gameport {struct a3d* port_data; } ;
struct a3d {int* axes; int buttons; } ;

/* Variables and functions */

__attribute__((used)) static int a3d_adc_cooked_read(struct gameport *gameport, int *axes, int *buttons)
{
	struct a3d *a3d = gameport->port_data;
	int i;

	for (i = 0; i < 4; i++)
		axes[i] = (a3d->axes[i] < 254) ? a3d->axes[i] : -1;
	*buttons = a3d->buttons;
	return 0;
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
          int _len_gameport0 = 1;
          struct gameport * gameport = (struct gameport *) malloc(_len_gameport0*sizeof(struct gameport));
          for(int _i0 = 0; _i0 < _len_gameport0; _i0++) {
              int _len_gameport__i0__port_data0 = 1;
          gameport[_i0].port_data = (struct a3d *) malloc(_len_gameport__i0__port_data0*sizeof(struct a3d));
          for(int _j0 = 0; _j0 < _len_gameport__i0__port_data0; _j0++) {
              int _len_gameport__i0__port_data_axes0 = 1;
          gameport[_i0].port_data->axes = (int *) malloc(_len_gameport__i0__port_data_axes0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_gameport__i0__port_data_axes0; _j0++) {
            gameport[_i0].port_data->axes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        gameport[_i0].port_data->buttons = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_axes0 = 1;
          int * axes = (int *) malloc(_len_axes0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_axes0; _i0++) {
            axes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buttons0 = 1;
          int * buttons = (int *) malloc(_len_buttons0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buttons0; _i0++) {
            buttons[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = a3d_adc_cooked_read(gameport,axes,buttons);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_gameport0; _aux++) {
          free(gameport[_aux].port_data);
          }
          free(gameport);
          free(axes);
          free(buttons);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_gameport0 = 65025;
          struct gameport * gameport = (struct gameport *) malloc(_len_gameport0*sizeof(struct gameport));
          for(int _i0 = 0; _i0 < _len_gameport0; _i0++) {
              int _len_gameport__i0__port_data0 = 1;
          gameport[_i0].port_data = (struct a3d *) malloc(_len_gameport__i0__port_data0*sizeof(struct a3d));
          for(int _j0 = 0; _j0 < _len_gameport__i0__port_data0; _j0++) {
              int _len_gameport__i0__port_data_axes0 = 1;
          gameport[_i0].port_data->axes = (int *) malloc(_len_gameport__i0__port_data_axes0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_gameport__i0__port_data_axes0; _j0++) {
            gameport[_i0].port_data->axes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        gameport[_i0].port_data->buttons = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_axes0 = 65025;
          int * axes = (int *) malloc(_len_axes0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_axes0; _i0++) {
            axes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buttons0 = 65025;
          int * buttons = (int *) malloc(_len_buttons0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buttons0; _i0++) {
            buttons[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = a3d_adc_cooked_read(gameport,axes,buttons);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_gameport0; _aux++) {
          free(gameport[_aux].port_data);
          }
          free(gameport);
          free(axes);
          free(buttons);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_gameport0 = 100;
          struct gameport * gameport = (struct gameport *) malloc(_len_gameport0*sizeof(struct gameport));
          for(int _i0 = 0; _i0 < _len_gameport0; _i0++) {
              int _len_gameport__i0__port_data0 = 1;
          gameport[_i0].port_data = (struct a3d *) malloc(_len_gameport__i0__port_data0*sizeof(struct a3d));
          for(int _j0 = 0; _j0 < _len_gameport__i0__port_data0; _j0++) {
              int _len_gameport__i0__port_data_axes0 = 1;
          gameport[_i0].port_data->axes = (int *) malloc(_len_gameport__i0__port_data_axes0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_gameport__i0__port_data_axes0; _j0++) {
            gameport[_i0].port_data->axes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        gameport[_i0].port_data->buttons = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_axes0 = 100;
          int * axes = (int *) malloc(_len_axes0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_axes0; _i0++) {
            axes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buttons0 = 100;
          int * buttons = (int *) malloc(_len_buttons0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buttons0; _i0++) {
            buttons[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = a3d_adc_cooked_read(gameport,axes,buttons);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_gameport0; _aux++) {
          free(gameport[_aux].port_data);
          }
          free(gameport);
          free(axes);
          free(buttons);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
