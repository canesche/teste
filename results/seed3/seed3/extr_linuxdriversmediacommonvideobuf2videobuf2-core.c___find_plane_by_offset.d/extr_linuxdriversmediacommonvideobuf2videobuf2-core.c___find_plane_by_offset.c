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
struct vb2_queue {unsigned int num_buffers; struct vb2_buffer** bufs; } ;
struct vb2_buffer {unsigned int num_planes; TYPE_2__* planes; } ;
struct TYPE_3__ {unsigned long offset; } ;
struct TYPE_4__ {TYPE_1__ m; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int __find_plane_by_offset(struct vb2_queue *q, unsigned long off,
			unsigned int *_buffer, unsigned int *_plane)
{
	struct vb2_buffer *vb;
	unsigned int buffer, plane;

	/*
	 * Go over all buffers and their planes, comparing the given offset
	 * with an offset assigned to each plane. If a match is found,
	 * return its buffer and plane numbers.
	 */
	for (buffer = 0; buffer < q->num_buffers; ++buffer) {
		vb = q->bufs[buffer];

		for (plane = 0; plane < vb->num_planes; ++plane) {
			if (vb->planes[plane].m.offset == off) {
				*_buffer = buffer;
				*_plane = plane;
				return 0;
			}
		}
	}

	return -EINVAL;
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
          unsigned long off = 100;
          int _len_q0 = 1;
          struct vb2_queue * q = (struct vb2_queue *) malloc(_len_q0*sizeof(struct vb2_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].num_buffers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_q__i0__bufs0 = 1;
          q[_i0].bufs = (struct vb2_buffer **) malloc(_len_q__i0__bufs0*sizeof(struct vb2_buffer *));
          for(int _j0 = 0; _j0 < _len_q__i0__bufs0; _j0++) {
            int _len_q__i0__bufs1 = 1;
            q[_i0].bufs[_j0] = (struct vb2_buffer *) malloc(_len_q__i0__bufs1*sizeof(struct vb2_buffer));
            for(int _j1 = 0; _j1 < _len_q__i0__bufs1; _j1++) {
              q[_i0].bufs[_j0]->num_planes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_q__i0__bufs__j0__planes0 = 1;
          q[_i0].bufs[_j0]->planes = (struct TYPE_4__ *) malloc(_len_q__i0__bufs__j0__planes0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_q__i0__bufs__j0__planes0; _j0++) {
            q[_i0].bufs[_j0]->planes->m.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len__buffer0 = 1;
          unsigned int * _buffer = (unsigned int *) malloc(_len__buffer0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len__buffer0; _i0++) {
            _buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len__plane0 = 1;
          unsigned int * _plane = (unsigned int *) malloc(_len__plane0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len__plane0; _i0++) {
            _plane[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __find_plane_by_offset(q,off,_buffer,_plane);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(*(q[_aux].bufs));
        free(q[_aux].bufs);
          }
          free(q);
          free(_buffer);
          free(_plane);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long off = 255;
          int _len_q0 = 65025;
          struct vb2_queue * q = (struct vb2_queue *) malloc(_len_q0*sizeof(struct vb2_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].num_buffers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_q__i0__bufs0 = 1;
          q[_i0].bufs = (struct vb2_buffer **) malloc(_len_q__i0__bufs0*sizeof(struct vb2_buffer *));
          for(int _j0 = 0; _j0 < _len_q__i0__bufs0; _j0++) {
            int _len_q__i0__bufs1 = 1;
            q[_i0].bufs[_j0] = (struct vb2_buffer *) malloc(_len_q__i0__bufs1*sizeof(struct vb2_buffer));
            for(int _j1 = 0; _j1 < _len_q__i0__bufs1; _j1++) {
              q[_i0].bufs[_j0]->num_planes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_q__i0__bufs__j0__planes0 = 1;
          q[_i0].bufs[_j0]->planes = (struct TYPE_4__ *) malloc(_len_q__i0__bufs__j0__planes0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_q__i0__bufs__j0__planes0; _j0++) {
            q[_i0].bufs[_j0]->planes->m.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len__buffer0 = 65025;
          unsigned int * _buffer = (unsigned int *) malloc(_len__buffer0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len__buffer0; _i0++) {
            _buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len__plane0 = 65025;
          unsigned int * _plane = (unsigned int *) malloc(_len__plane0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len__plane0; _i0++) {
            _plane[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __find_plane_by_offset(q,off,_buffer,_plane);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(*(q[_aux].bufs));
        free(q[_aux].bufs);
          }
          free(q);
          free(_buffer);
          free(_plane);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long off = 10;
          int _len_q0 = 100;
          struct vb2_queue * q = (struct vb2_queue *) malloc(_len_q0*sizeof(struct vb2_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].num_buffers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_q__i0__bufs0 = 1;
          q[_i0].bufs = (struct vb2_buffer **) malloc(_len_q__i0__bufs0*sizeof(struct vb2_buffer *));
          for(int _j0 = 0; _j0 < _len_q__i0__bufs0; _j0++) {
            int _len_q__i0__bufs1 = 1;
            q[_i0].bufs[_j0] = (struct vb2_buffer *) malloc(_len_q__i0__bufs1*sizeof(struct vb2_buffer));
            for(int _j1 = 0; _j1 < _len_q__i0__bufs1; _j1++) {
              q[_i0].bufs[_j0]->num_planes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_q__i0__bufs__j0__planes0 = 1;
          q[_i0].bufs[_j0]->planes = (struct TYPE_4__ *) malloc(_len_q__i0__bufs__j0__planes0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_q__i0__bufs__j0__planes0; _j0++) {
            q[_i0].bufs[_j0]->planes->m.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len__buffer0 = 100;
          unsigned int * _buffer = (unsigned int *) malloc(_len__buffer0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len__buffer0; _i0++) {
            _buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len__plane0 = 100;
          unsigned int * _plane = (unsigned int *) malloc(_len__plane0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len__plane0; _i0++) {
            _plane[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __find_plane_by_offset(q,off,_buffer,_plane);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(*(q[_aux].bufs));
        free(q[_aux].bufs);
          }
          free(q);
          free(_buffer);
          free(_plane);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
