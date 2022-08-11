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
struct TYPE_4__ {size_t num; int /*<<< orphan*/ * array; } ;
struct TYPE_3__ {scalar_t__* array; } ;
struct gs_vertex_buffer {TYPE_2__ uv_buffers; TYPE_1__ uv_sizes; int /*<<< orphan*/  color_buffer; int /*<<< orphan*/  tangent_buffer; int /*<<< orphan*/  normal_buffer; int /*<<< orphan*/  vertex_buffer; } ;
typedef  enum attrib_type { ____Placeholder_attrib_type } attrib_type ;
typedef  int /*<<< orphan*/  GLuint ;
typedef  int GLint ;
typedef  int /*<<< orphan*/  GLenum ;

/* Variables and functions */
 int ATTRIB_COLOR ; 
 int ATTRIB_NORMAL ; 
 int ATTRIB_POSITION ; 
 int ATTRIB_TANGENT ; 
 int ATTRIB_TEXCOORD ; 
 int /*<<< orphan*/  GL_FLOAT ; 
 int /*<<< orphan*/  GL_UNSIGNED_BYTE ; 

__attribute__((used)) static inline GLuint get_vb_buffer(struct gs_vertex_buffer *vb,
		enum attrib_type type, size_t index, GLint *width,
		GLenum *gl_type)
{
	*gl_type = GL_FLOAT;
	*width   = 4;

	if (type == ATTRIB_POSITION) {
		return vb->vertex_buffer;
	} else if (type == ATTRIB_NORMAL) {
		return vb->normal_buffer;
	} else if (type == ATTRIB_TANGENT) {
		return vb->tangent_buffer;
	} else if (type == ATTRIB_COLOR) {
		*gl_type = GL_UNSIGNED_BYTE;
		return vb->color_buffer;
	} else if (type == ATTRIB_TEXCOORD) {
		if (vb->uv_buffers.num <= index)
			return 0;

		*width = (GLint)vb->uv_sizes.array[index];
		return vb->uv_buffers.array[index];
	}

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
          enum attrib_type type = 0;
          unsigned long index = 100;
          int _len_vb0 = 1;
          struct gs_vertex_buffer * vb = (struct gs_vertex_buffer *) malloc(_len_vb0*sizeof(struct gs_vertex_buffer));
          for(int _i0 = 0; _i0 < _len_vb0; _i0++) {
            vb[_i0].uv_buffers.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vb__i0__uv_buffers_array0 = 1;
          vb[_i0].uv_buffers.array = (int *) malloc(_len_vb__i0__uv_buffers_array0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vb__i0__uv_buffers_array0; _j0++) {
            vb[_i0].uv_buffers.array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vb__i0__uv_sizes_array0 = 1;
          vb[_i0].uv_sizes.array = (long *) malloc(_len_vb__i0__uv_sizes_array0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_vb__i0__uv_sizes_array0; _j0++) {
            vb[_i0].uv_sizes.array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vb[_i0].color_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        vb[_i0].tangent_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        vb[_i0].normal_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        vb[_i0].vertex_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_width0 = 1;
          int * width = (int *) malloc(_len_width0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_width0; _i0++) {
            width[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gl_type0 = 1;
          int * gl_type = (int *) malloc(_len_gl_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_gl_type0; _i0++) {
            gl_type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_vb_buffer(vb,type,index,width,gl_type);
          printf("%d\n", benchRet); 
          free(vb);
          free(width);
          free(gl_type);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum attrib_type type = 0;
          unsigned long index = 255;
          int _len_vb0 = 65025;
          struct gs_vertex_buffer * vb = (struct gs_vertex_buffer *) malloc(_len_vb0*sizeof(struct gs_vertex_buffer));
          for(int _i0 = 0; _i0 < _len_vb0; _i0++) {
            vb[_i0].uv_buffers.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vb__i0__uv_buffers_array0 = 1;
          vb[_i0].uv_buffers.array = (int *) malloc(_len_vb__i0__uv_buffers_array0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vb__i0__uv_buffers_array0; _j0++) {
            vb[_i0].uv_buffers.array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vb__i0__uv_sizes_array0 = 1;
          vb[_i0].uv_sizes.array = (long *) malloc(_len_vb__i0__uv_sizes_array0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_vb__i0__uv_sizes_array0; _j0++) {
            vb[_i0].uv_sizes.array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vb[_i0].color_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        vb[_i0].tangent_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        vb[_i0].normal_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        vb[_i0].vertex_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_width0 = 65025;
          int * width = (int *) malloc(_len_width0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_width0; _i0++) {
            width[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gl_type0 = 65025;
          int * gl_type = (int *) malloc(_len_gl_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_gl_type0; _i0++) {
            gl_type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_vb_buffer(vb,type,index,width,gl_type);
          printf("%d\n", benchRet); 
          free(vb);
          free(width);
          free(gl_type);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum attrib_type type = 0;
          unsigned long index = 10;
          int _len_vb0 = 100;
          struct gs_vertex_buffer * vb = (struct gs_vertex_buffer *) malloc(_len_vb0*sizeof(struct gs_vertex_buffer));
          for(int _i0 = 0; _i0 < _len_vb0; _i0++) {
            vb[_i0].uv_buffers.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vb__i0__uv_buffers_array0 = 1;
          vb[_i0].uv_buffers.array = (int *) malloc(_len_vb__i0__uv_buffers_array0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vb__i0__uv_buffers_array0; _j0++) {
            vb[_i0].uv_buffers.array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vb__i0__uv_sizes_array0 = 1;
          vb[_i0].uv_sizes.array = (long *) malloc(_len_vb__i0__uv_sizes_array0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_vb__i0__uv_sizes_array0; _j0++) {
            vb[_i0].uv_sizes.array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vb[_i0].color_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        vb[_i0].tangent_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        vb[_i0].normal_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        vb[_i0].vertex_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_width0 = 100;
          int * width = (int *) malloc(_len_width0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_width0; _i0++) {
            width[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gl_type0 = 100;
          int * gl_type = (int *) malloc(_len_gl_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_gl_type0; _i0++) {
            gl_type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_vb_buffer(vb,type,index,width,gl_type);
          printf("%d\n", benchRet); 
          free(vb);
          free(width);
          free(gl_type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
