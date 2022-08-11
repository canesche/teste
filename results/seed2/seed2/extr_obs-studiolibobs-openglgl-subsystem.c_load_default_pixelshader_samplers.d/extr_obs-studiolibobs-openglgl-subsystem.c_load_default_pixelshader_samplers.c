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
struct TYPE_2__ {size_t num; struct gs_sampler_state** array; } ;
struct gs_shader {TYPE_1__ samplers; } ;
struct gs_sampler_state {int dummy; } ;
struct gs_device {struct gs_sampler_state** cur_samplers; } ;

/* Variables and functions */
 size_t GS_MAX_TEXTURES ; 

__attribute__((used)) static void load_default_pixelshader_samplers(struct gs_device *device,
		struct gs_shader *ps)
{
	size_t i;
	if (!ps)
		return;

	for (i = 0; i < ps->samplers.num; i++) {
		struct gs_sampler_state *ss = ps->samplers.array[i];
		device->cur_samplers[i] = ss;
	}

	for (; i < GS_MAX_TEXTURES; i++)
		device->cur_samplers[i] = NULL;
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
          int _len_device0 = 1;
          struct gs_device * device = (struct gs_device *) malloc(_len_device0*sizeof(struct gs_device));
          for(int _i0 = 0; _i0 < _len_device0; _i0++) {
              int _len_device__i0__cur_samplers0 = 1;
          device[_i0].cur_samplers = (struct gs_sampler_state **) malloc(_len_device__i0__cur_samplers0*sizeof(struct gs_sampler_state *));
          for(int _j0 = 0; _j0 < _len_device__i0__cur_samplers0; _j0++) {
            int _len_device__i0__cur_samplers1 = 1;
            device[_i0].cur_samplers[_j0] = (struct gs_sampler_state *) malloc(_len_device__i0__cur_samplers1*sizeof(struct gs_sampler_state));
            for(int _j1 = 0; _j1 < _len_device__i0__cur_samplers1; _j1++) {
              device[_i0].cur_samplers[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_ps0 = 1;
          struct gs_shader * ps = (struct gs_shader *) malloc(_len_ps0*sizeof(struct gs_shader));
          for(int _i0 = 0; _i0 < _len_ps0; _i0++) {
            ps[_i0].samplers.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ps__i0__samplers_array0 = 1;
          ps[_i0].samplers.array = (struct gs_sampler_state **) malloc(_len_ps__i0__samplers_array0*sizeof(struct gs_sampler_state *));
          for(int _j0 = 0; _j0 < _len_ps__i0__samplers_array0; _j0++) {
            int _len_ps__i0__samplers_array1 = 1;
            ps[_i0].samplers.array[_j0] = (struct gs_sampler_state *) malloc(_len_ps__i0__samplers_array1*sizeof(struct gs_sampler_state));
            for(int _j1 = 0; _j1 < _len_ps__i0__samplers_array1; _j1++) {
              ps[_i0].samplers.array[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          load_default_pixelshader_samplers(device,ps);
          for(int _aux = 0; _aux < _len_device0; _aux++) {
          free(*(device[_aux].cur_samplers));
        free(device[_aux].cur_samplers);
          }
          free(device);
          free(ps);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_device0 = 65025;
          struct gs_device * device = (struct gs_device *) malloc(_len_device0*sizeof(struct gs_device));
          for(int _i0 = 0; _i0 < _len_device0; _i0++) {
              int _len_device__i0__cur_samplers0 = 1;
          device[_i0].cur_samplers = (struct gs_sampler_state **) malloc(_len_device__i0__cur_samplers0*sizeof(struct gs_sampler_state *));
          for(int _j0 = 0; _j0 < _len_device__i0__cur_samplers0; _j0++) {
            int _len_device__i0__cur_samplers1 = 1;
            device[_i0].cur_samplers[_j0] = (struct gs_sampler_state *) malloc(_len_device__i0__cur_samplers1*sizeof(struct gs_sampler_state));
            for(int _j1 = 0; _j1 < _len_device__i0__cur_samplers1; _j1++) {
              device[_i0].cur_samplers[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_ps0 = 65025;
          struct gs_shader * ps = (struct gs_shader *) malloc(_len_ps0*sizeof(struct gs_shader));
          for(int _i0 = 0; _i0 < _len_ps0; _i0++) {
            ps[_i0].samplers.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ps__i0__samplers_array0 = 1;
          ps[_i0].samplers.array = (struct gs_sampler_state **) malloc(_len_ps__i0__samplers_array0*sizeof(struct gs_sampler_state *));
          for(int _j0 = 0; _j0 < _len_ps__i0__samplers_array0; _j0++) {
            int _len_ps__i0__samplers_array1 = 1;
            ps[_i0].samplers.array[_j0] = (struct gs_sampler_state *) malloc(_len_ps__i0__samplers_array1*sizeof(struct gs_sampler_state));
            for(int _j1 = 0; _j1 < _len_ps__i0__samplers_array1; _j1++) {
              ps[_i0].samplers.array[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          load_default_pixelshader_samplers(device,ps);
          for(int _aux = 0; _aux < _len_device0; _aux++) {
          free(*(device[_aux].cur_samplers));
        free(device[_aux].cur_samplers);
          }
          free(device);
          free(ps);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_device0 = 100;
          struct gs_device * device = (struct gs_device *) malloc(_len_device0*sizeof(struct gs_device));
          for(int _i0 = 0; _i0 < _len_device0; _i0++) {
              int _len_device__i0__cur_samplers0 = 1;
          device[_i0].cur_samplers = (struct gs_sampler_state **) malloc(_len_device__i0__cur_samplers0*sizeof(struct gs_sampler_state *));
          for(int _j0 = 0; _j0 < _len_device__i0__cur_samplers0; _j0++) {
            int _len_device__i0__cur_samplers1 = 1;
            device[_i0].cur_samplers[_j0] = (struct gs_sampler_state *) malloc(_len_device__i0__cur_samplers1*sizeof(struct gs_sampler_state));
            for(int _j1 = 0; _j1 < _len_device__i0__cur_samplers1; _j1++) {
              device[_i0].cur_samplers[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_ps0 = 100;
          struct gs_shader * ps = (struct gs_shader *) malloc(_len_ps0*sizeof(struct gs_shader));
          for(int _i0 = 0; _i0 < _len_ps0; _i0++) {
            ps[_i0].samplers.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ps__i0__samplers_array0 = 1;
          ps[_i0].samplers.array = (struct gs_sampler_state **) malloc(_len_ps__i0__samplers_array0*sizeof(struct gs_sampler_state *));
          for(int _j0 = 0; _j0 < _len_ps__i0__samplers_array0; _j0++) {
            int _len_ps__i0__samplers_array1 = 1;
            ps[_i0].samplers.array[_j0] = (struct gs_sampler_state *) malloc(_len_ps__i0__samplers_array1*sizeof(struct gs_sampler_state));
            for(int _j1 = 0; _j1 < _len_ps__i0__samplers_array1; _j1++) {
              ps[_i0].samplers.array[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          load_default_pixelshader_samplers(device,ps);
          for(int _aux = 0; _aux < _len_device0; _aux++) {
          free(*(device[_aux].cur_samplers));
        free(device[_aux].cur_samplers);
          }
          free(device);
          free(ps);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
