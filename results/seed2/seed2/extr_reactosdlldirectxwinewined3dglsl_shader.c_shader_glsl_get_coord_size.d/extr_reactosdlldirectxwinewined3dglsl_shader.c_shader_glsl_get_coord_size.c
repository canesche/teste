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
typedef  enum wined3d_shader_resource_type { ____Placeholder_wined3d_shader_resource_type } wined3d_shader_resource_type ;
struct TYPE_2__ {unsigned int coord_size; } ;
typedef  int BOOL ;

/* Variables and functions */
 int WINED3D_SHADER_RESOURCE_TEXTURE_1DARRAY ; 
 int WINED3D_SHADER_RESOURCE_TEXTURE_2DARRAY ; 
 TYPE_1__* resource_type_info ; 

__attribute__((used)) static void shader_glsl_get_coord_size(enum wined3d_shader_resource_type resource_type,
        unsigned int *coord_size, unsigned int *deriv_size)
{
    const BOOL is_array = resource_type == WINED3D_SHADER_RESOURCE_TEXTURE_1DARRAY
            || resource_type == WINED3D_SHADER_RESOURCE_TEXTURE_2DARRAY;

    *coord_size = resource_type_info[resource_type].coord_size;
    *deriv_size = *coord_size;
    if (is_array)
        --(*deriv_size);
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
          enum wined3d_shader_resource_type resource_type = 0;
          int _len_coord_size0 = 1;
          unsigned int * coord_size = (unsigned int *) malloc(_len_coord_size0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_coord_size0; _i0++) {
            coord_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_deriv_size0 = 1;
          unsigned int * deriv_size = (unsigned int *) malloc(_len_deriv_size0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_deriv_size0; _i0++) {
            deriv_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          shader_glsl_get_coord_size(resource_type,coord_size,deriv_size);
          free(coord_size);
          free(deriv_size);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum wined3d_shader_resource_type resource_type = 0;
          int _len_coord_size0 = 65025;
          unsigned int * coord_size = (unsigned int *) malloc(_len_coord_size0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_coord_size0; _i0++) {
            coord_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_deriv_size0 = 65025;
          unsigned int * deriv_size = (unsigned int *) malloc(_len_deriv_size0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_deriv_size0; _i0++) {
            deriv_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          shader_glsl_get_coord_size(resource_type,coord_size,deriv_size);
          free(coord_size);
          free(deriv_size);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum wined3d_shader_resource_type resource_type = 0;
          int _len_coord_size0 = 100;
          unsigned int * coord_size = (unsigned int *) malloc(_len_coord_size0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_coord_size0; _i0++) {
            coord_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_deriv_size0 = 100;
          unsigned int * deriv_size = (unsigned int *) malloc(_len_deriv_size0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_deriv_size0; _i0++) {
            deriv_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          shader_glsl_get_coord_size(resource_type,coord_size,deriv_size);
          free(coord_size);
          free(deriv_size);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
