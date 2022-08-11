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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ id; } ;
struct drm_property {TYPE_1__ base; } ;
struct drm_mode_object {TYPE_2__* properties; } ;
struct TYPE_4__ {int count; struct drm_property** properties; } ;

/* Variables and functions */

struct drm_property *drm_mode_obj_find_prop_id(struct drm_mode_object *obj,
					       uint32_t prop_id)
{
	int i;

	for (i = 0; i < obj->properties->count; i++)
		if (obj->properties->properties[i]->base.id == prop_id)
			return obj->properties->properties[i];

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
          long prop_id = 100;
          int _len_obj0 = 1;
          struct drm_mode_object * obj = (struct drm_mode_object *) malloc(_len_obj0*sizeof(struct drm_mode_object));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
              int _len_obj__i0__properties0 = 1;
          obj[_i0].properties = (struct TYPE_4__ *) malloc(_len_obj__i0__properties0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_obj__i0__properties0; _j0++) {
            obj[_i0].properties->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_obj__i0__properties_properties0 = 1;
          obj[_i0].properties->properties = (struct drm_property **) malloc(_len_obj__i0__properties_properties0*sizeof(struct drm_property *));
          for(int _j0 = 0; _j0 < _len_obj__i0__properties_properties0; _j0++) {
            int _len_obj__i0__properties_properties1 = 1;
            obj[_i0].properties->properties[_j0] = (struct drm_property *) malloc(_len_obj__i0__properties_properties1*sizeof(struct drm_property));
            for(int _j1 = 0; _j1 < _len_obj__i0__properties_properties1; _j1++) {
              obj[_i0].properties->properties[_j0]->base.id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct drm_property * benchRet = drm_mode_obj_find_prop_id(obj,prop_id);
          for(int _aux = 0; _aux < _len_obj0; _aux++) {
          free(obj[_aux].properties);
          }
          free(obj);
        
        break;
    }
    // big-arr
    case 1:
    {
          long prop_id = 255;
          int _len_obj0 = 65025;
          struct drm_mode_object * obj = (struct drm_mode_object *) malloc(_len_obj0*sizeof(struct drm_mode_object));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
              int _len_obj__i0__properties0 = 1;
          obj[_i0].properties = (struct TYPE_4__ *) malloc(_len_obj__i0__properties0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_obj__i0__properties0; _j0++) {
            obj[_i0].properties->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_obj__i0__properties_properties0 = 1;
          obj[_i0].properties->properties = (struct drm_property **) malloc(_len_obj__i0__properties_properties0*sizeof(struct drm_property *));
          for(int _j0 = 0; _j0 < _len_obj__i0__properties_properties0; _j0++) {
            int _len_obj__i0__properties_properties1 = 1;
            obj[_i0].properties->properties[_j0] = (struct drm_property *) malloc(_len_obj__i0__properties_properties1*sizeof(struct drm_property));
            for(int _j1 = 0; _j1 < _len_obj__i0__properties_properties1; _j1++) {
              obj[_i0].properties->properties[_j0]->base.id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct drm_property * benchRet = drm_mode_obj_find_prop_id(obj,prop_id);
          for(int _aux = 0; _aux < _len_obj0; _aux++) {
          free(obj[_aux].properties);
          }
          free(obj);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long prop_id = 10;
          int _len_obj0 = 100;
          struct drm_mode_object * obj = (struct drm_mode_object *) malloc(_len_obj0*sizeof(struct drm_mode_object));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
              int _len_obj__i0__properties0 = 1;
          obj[_i0].properties = (struct TYPE_4__ *) malloc(_len_obj__i0__properties0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_obj__i0__properties0; _j0++) {
            obj[_i0].properties->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_obj__i0__properties_properties0 = 1;
          obj[_i0].properties->properties = (struct drm_property **) malloc(_len_obj__i0__properties_properties0*sizeof(struct drm_property *));
          for(int _j0 = 0; _j0 < _len_obj__i0__properties_properties0; _j0++) {
            int _len_obj__i0__properties_properties1 = 1;
            obj[_i0].properties->properties[_j0] = (struct drm_property *) malloc(_len_obj__i0__properties_properties1*sizeof(struct drm_property));
            for(int _j1 = 0; _j1 < _len_obj__i0__properties_properties1; _j1++) {
              obj[_i0].properties->properties[_j0]->base.id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct drm_property * benchRet = drm_mode_obj_find_prop_id(obj,prop_id);
          for(int _aux = 0; _aux < _len_obj0; _aux++) {
          free(obj[_aux].properties);
          }
          free(obj);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
