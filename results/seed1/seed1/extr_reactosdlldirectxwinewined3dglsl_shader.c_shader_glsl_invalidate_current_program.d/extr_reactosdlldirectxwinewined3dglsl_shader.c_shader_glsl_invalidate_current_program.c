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
struct wined3d_context {unsigned int shader_update_mask; struct glsl_context_data* shader_backend_data; } ;
struct glsl_context_data {int /*<<< orphan*/ * glsl_program; } ;

/* Variables and functions */
 unsigned int WINED3D_SHADER_TYPE_COMPUTE ; 
 unsigned int WINED3D_SHADER_TYPE_DOMAIN ; 
 unsigned int WINED3D_SHADER_TYPE_GEOMETRY ; 
 unsigned int WINED3D_SHADER_TYPE_HULL ; 
 unsigned int WINED3D_SHADER_TYPE_PIXEL ; 
 unsigned int WINED3D_SHADER_TYPE_VERTEX ; 

__attribute__((used)) static void shader_glsl_invalidate_current_program(struct wined3d_context *context)
{
    struct glsl_context_data *ctx_data = context->shader_backend_data;

    ctx_data->glsl_program = NULL;
    context->shader_update_mask = (1u << WINED3D_SHADER_TYPE_PIXEL)
            | (1u << WINED3D_SHADER_TYPE_VERTEX)
            | (1u << WINED3D_SHADER_TYPE_GEOMETRY)
            | (1u << WINED3D_SHADER_TYPE_HULL)
            | (1u << WINED3D_SHADER_TYPE_DOMAIN)
            | (1u << WINED3D_SHADER_TYPE_COMPUTE);
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
          int _len_context0 = 1;
          struct wined3d_context * context = (struct wined3d_context *) malloc(_len_context0*sizeof(struct wined3d_context));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
            context[_i0].shader_update_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_context__i0__shader_backend_data0 = 1;
          context[_i0].shader_backend_data = (struct glsl_context_data *) malloc(_len_context__i0__shader_backend_data0*sizeof(struct glsl_context_data));
          for(int _j0 = 0; _j0 < _len_context__i0__shader_backend_data0; _j0++) {
              int _len_context__i0__shader_backend_data_glsl_program0 = 1;
          context[_i0].shader_backend_data->glsl_program = (int *) malloc(_len_context__i0__shader_backend_data_glsl_program0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_context__i0__shader_backend_data_glsl_program0; _j0++) {
            context[_i0].shader_backend_data->glsl_program[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          shader_glsl_invalidate_current_program(context);
          for(int _aux = 0; _aux < _len_context0; _aux++) {
          free(context[_aux].shader_backend_data);
          }
          free(context);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_context0 = 65025;
          struct wined3d_context * context = (struct wined3d_context *) malloc(_len_context0*sizeof(struct wined3d_context));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
            context[_i0].shader_update_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_context__i0__shader_backend_data0 = 1;
          context[_i0].shader_backend_data = (struct glsl_context_data *) malloc(_len_context__i0__shader_backend_data0*sizeof(struct glsl_context_data));
          for(int _j0 = 0; _j0 < _len_context__i0__shader_backend_data0; _j0++) {
              int _len_context__i0__shader_backend_data_glsl_program0 = 1;
          context[_i0].shader_backend_data->glsl_program = (int *) malloc(_len_context__i0__shader_backend_data_glsl_program0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_context__i0__shader_backend_data_glsl_program0; _j0++) {
            context[_i0].shader_backend_data->glsl_program[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          shader_glsl_invalidate_current_program(context);
          for(int _aux = 0; _aux < _len_context0; _aux++) {
          free(context[_aux].shader_backend_data);
          }
          free(context);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_context0 = 100;
          struct wined3d_context * context = (struct wined3d_context *) malloc(_len_context0*sizeof(struct wined3d_context));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
            context[_i0].shader_update_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_context__i0__shader_backend_data0 = 1;
          context[_i0].shader_backend_data = (struct glsl_context_data *) malloc(_len_context__i0__shader_backend_data0*sizeof(struct glsl_context_data));
          for(int _j0 = 0; _j0 < _len_context__i0__shader_backend_data0; _j0++) {
              int _len_context__i0__shader_backend_data_glsl_program0 = 1;
          context[_i0].shader_backend_data->glsl_program = (int *) malloc(_len_context__i0__shader_backend_data_glsl_program0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_context__i0__shader_backend_data_glsl_program0; _j0++) {
            context[_i0].shader_backend_data->glsl_program[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          shader_glsl_invalidate_current_program(context);
          for(int _aux = 0; _aux < _len_context0; _aux++) {
          free(context[_aux].shader_backend_data);
          }
          free(context);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
