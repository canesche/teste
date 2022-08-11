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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct gs_shader_param {scalar_t__ type; int texture_id; } ;
struct TYPE_4__ {size_t num; struct gs_shader_param* array; } ;
struct gs_shader {TYPE_1__ params; } ;
struct TYPE_5__ {struct gs_shader* cur_pixel_shader; } ;
typedef  TYPE_2__ gs_device_t ;

/* Variables and functions */
 scalar_t__ GS_SHADER_PARAM_TEXTURE ; 

__attribute__((used)) static inline struct gs_shader_param *get_texture_param(gs_device_t *device,
		int unit)
{
	struct gs_shader *shader = device->cur_pixel_shader;
	size_t i;

	for (i = 0; i < shader->params.num; i++) {
		struct gs_shader_param *param = shader->params.array+i;
		if (param->type == GS_SHADER_PARAM_TEXTURE) {
			if (param->texture_id == unit)
				return param;
		}
	}

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
          int unit = 100;
          int _len_device0 = 1;
          struct TYPE_5__ * device = (struct TYPE_5__ *) malloc(_len_device0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_device0; _i0++) {
              int _len_device__i0__cur_pixel_shader0 = 1;
          device[_i0].cur_pixel_shader = (struct gs_shader *) malloc(_len_device__i0__cur_pixel_shader0*sizeof(struct gs_shader));
          for(int _j0 = 0; _j0 < _len_device__i0__cur_pixel_shader0; _j0++) {
            device[_i0].cur_pixel_shader->params.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_device__i0__cur_pixel_shader_params_array0 = 1;
          device[_i0].cur_pixel_shader->params.array = (struct gs_shader_param *) malloc(_len_device__i0__cur_pixel_shader_params_array0*sizeof(struct gs_shader_param));
          for(int _j0 = 0; _j0 < _len_device__i0__cur_pixel_shader_params_array0; _j0++) {
            device[_i0].cur_pixel_shader->params.array->type = ((-2 * (next_i()%2)) + 1) * next_i();
        device[_i0].cur_pixel_shader->params.array->texture_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct gs_shader_param * benchRet = get_texture_param(device,unit);
          printf("%ld\n", (*benchRet).type);
          printf("%d\n", (*benchRet).texture_id);
          for(int _aux = 0; _aux < _len_device0; _aux++) {
          free(device[_aux].cur_pixel_shader);
          }
          free(device);
        
        break;
    }
    // big-arr
    case 1:
    {
          int unit = 255;
          int _len_device0 = 65025;
          struct TYPE_5__ * device = (struct TYPE_5__ *) malloc(_len_device0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_device0; _i0++) {
              int _len_device__i0__cur_pixel_shader0 = 1;
          device[_i0].cur_pixel_shader = (struct gs_shader *) malloc(_len_device__i0__cur_pixel_shader0*sizeof(struct gs_shader));
          for(int _j0 = 0; _j0 < _len_device__i0__cur_pixel_shader0; _j0++) {
            device[_i0].cur_pixel_shader->params.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_device__i0__cur_pixel_shader_params_array0 = 1;
          device[_i0].cur_pixel_shader->params.array = (struct gs_shader_param *) malloc(_len_device__i0__cur_pixel_shader_params_array0*sizeof(struct gs_shader_param));
          for(int _j0 = 0; _j0 < _len_device__i0__cur_pixel_shader_params_array0; _j0++) {
            device[_i0].cur_pixel_shader->params.array->type = ((-2 * (next_i()%2)) + 1) * next_i();
        device[_i0].cur_pixel_shader->params.array->texture_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct gs_shader_param * benchRet = get_texture_param(device,unit);
          printf("%ld\n", (*benchRet).type);
          printf("%d\n", (*benchRet).texture_id);
          for(int _aux = 0; _aux < _len_device0; _aux++) {
          free(device[_aux].cur_pixel_shader);
          }
          free(device);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int unit = 10;
          int _len_device0 = 100;
          struct TYPE_5__ * device = (struct TYPE_5__ *) malloc(_len_device0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_device0; _i0++) {
              int _len_device__i0__cur_pixel_shader0 = 1;
          device[_i0].cur_pixel_shader = (struct gs_shader *) malloc(_len_device__i0__cur_pixel_shader0*sizeof(struct gs_shader));
          for(int _j0 = 0; _j0 < _len_device__i0__cur_pixel_shader0; _j0++) {
            device[_i0].cur_pixel_shader->params.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_device__i0__cur_pixel_shader_params_array0 = 1;
          device[_i0].cur_pixel_shader->params.array = (struct gs_shader_param *) malloc(_len_device__i0__cur_pixel_shader_params_array0*sizeof(struct gs_shader_param));
          for(int _j0 = 0; _j0 < _len_device__i0__cur_pixel_shader_params_array0; _j0++) {
            device[_i0].cur_pixel_shader->params.array->type = ((-2 * (next_i()%2)) + 1) * next_i();
        device[_i0].cur_pixel_shader->params.array->texture_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct gs_shader_param * benchRet = get_texture_param(device,unit);
          printf("%ld\n", (*benchRet).type);
          printf("%d\n", (*benchRet).texture_id);
          for(int _aux = 0; _aux < _len_device0; _aux++) {
          free(device[_aux].cur_pixel_shader);
          }
          free(device);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
