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
struct vb2_queue {struct fimc_lite* drv_priv; } ;
struct flite_frame {unsigned long f_width; unsigned long f_height; struct fimc_fmt* fmt; } ;
struct fimc_lite {struct flite_frame out_frame; } ;
struct fimc_fmt {unsigned int memplanes; unsigned long* depth; } ;
struct device {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int queue_setup(struct vb2_queue *vq,
		       unsigned int *num_buffers, unsigned int *num_planes,
		       unsigned int sizes[], struct device *alloc_devs[])
{
	struct fimc_lite *fimc = vq->drv_priv;
	struct flite_frame *frame = &fimc->out_frame;
	const struct fimc_fmt *fmt = frame->fmt;
	unsigned long wh = frame->f_width * frame->f_height;
	int i;

	if (fmt == NULL)
		return -EINVAL;

	if (*num_planes) {
		if (*num_planes != fmt->memplanes)
			return -EINVAL;
		for (i = 0; i < *num_planes; i++)
			if (sizes[i] < (wh * fmt->depth[i]) / 8)
				return -EINVAL;
		return 0;
	}

	*num_planes = fmt->memplanes;

	for (i = 0; i < fmt->memplanes; i++)
		sizes[i] = (wh * fmt->depth[i]) / 8;

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
          int _len_vq0 = 1;
          struct vb2_queue * vq = (struct vb2_queue *) malloc(_len_vq0*sizeof(struct vb2_queue));
          for(int _i0 = 0; _i0 < _len_vq0; _i0++) {
              int _len_vq__i0__drv_priv0 = 1;
          vq[_i0].drv_priv = (struct fimc_lite *) malloc(_len_vq__i0__drv_priv0*sizeof(struct fimc_lite));
          for(int _j0 = 0; _j0 < _len_vq__i0__drv_priv0; _j0++) {
            vq[_i0].drv_priv->out_frame.f_width = ((-2 * (next_i()%2)) + 1) * next_i();
        vq[_i0].drv_priv->out_frame.f_height = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vq__i0__drv_priv_out_frame_fmt0 = 1;
          vq[_i0].drv_priv->out_frame.fmt = (struct fimc_fmt *) malloc(_len_vq__i0__drv_priv_out_frame_fmt0*sizeof(struct fimc_fmt));
          for(int _j0 = 0; _j0 < _len_vq__i0__drv_priv_out_frame_fmt0; _j0++) {
            vq[_i0].drv_priv->out_frame.fmt->memplanes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vq__i0__drv_priv_out_frame_fmt_depth0 = 1;
          vq[_i0].drv_priv->out_frame.fmt->depth = (unsigned long *) malloc(_len_vq__i0__drv_priv_out_frame_fmt_depth0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_vq__i0__drv_priv_out_frame_fmt_depth0; _j0++) {
            vq[_i0].drv_priv->out_frame.fmt->depth[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_num_buffers0 = 1;
          unsigned int * num_buffers = (unsigned int *) malloc(_len_num_buffers0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_num_buffers0; _i0++) {
            num_buffers[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_num_planes0 = 1;
          unsigned int * num_planes = (unsigned int *) malloc(_len_num_planes0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_num_planes0; _i0++) {
            num_planes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sizes0 = 1;
          unsigned int * sizes = (unsigned int *) malloc(_len_sizes0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_sizes0; _i0++) {
            sizes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_alloc_devs0 = 1;
          struct device ** alloc_devs = (struct device **) malloc(_len_alloc_devs0*sizeof(struct device *));
          for(int _i0 = 0; _i0 < _len_alloc_devs0; _i0++) {
            int _len_alloc_devs1 = 1;
            alloc_devs[_i0] = (struct device *) malloc(_len_alloc_devs1*sizeof(struct device));
            for(int _i1 = 0; _i1 < _len_alloc_devs1; _i1++) {
              alloc_devs[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = queue_setup(vq,num_buffers,num_planes,sizes,alloc_devs);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vq0; _aux++) {
          free(vq[_aux].drv_priv);
          }
          free(vq);
          free(num_buffers);
          free(num_planes);
          free(sizes);
          for(int i1 = 0; i1 < _len_alloc_devs0; i1++) {
            int _len_alloc_devs1 = 1;
              free(alloc_devs[i1]);
          }
          free(alloc_devs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vq0 = 65025;
          struct vb2_queue * vq = (struct vb2_queue *) malloc(_len_vq0*sizeof(struct vb2_queue));
          for(int _i0 = 0; _i0 < _len_vq0; _i0++) {
              int _len_vq__i0__drv_priv0 = 1;
          vq[_i0].drv_priv = (struct fimc_lite *) malloc(_len_vq__i0__drv_priv0*sizeof(struct fimc_lite));
          for(int _j0 = 0; _j0 < _len_vq__i0__drv_priv0; _j0++) {
            vq[_i0].drv_priv->out_frame.f_width = ((-2 * (next_i()%2)) + 1) * next_i();
        vq[_i0].drv_priv->out_frame.f_height = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vq__i0__drv_priv_out_frame_fmt0 = 1;
          vq[_i0].drv_priv->out_frame.fmt = (struct fimc_fmt *) malloc(_len_vq__i0__drv_priv_out_frame_fmt0*sizeof(struct fimc_fmt));
          for(int _j0 = 0; _j0 < _len_vq__i0__drv_priv_out_frame_fmt0; _j0++) {
            vq[_i0].drv_priv->out_frame.fmt->memplanes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vq__i0__drv_priv_out_frame_fmt_depth0 = 1;
          vq[_i0].drv_priv->out_frame.fmt->depth = (unsigned long *) malloc(_len_vq__i0__drv_priv_out_frame_fmt_depth0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_vq__i0__drv_priv_out_frame_fmt_depth0; _j0++) {
            vq[_i0].drv_priv->out_frame.fmt->depth[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_num_buffers0 = 65025;
          unsigned int * num_buffers = (unsigned int *) malloc(_len_num_buffers0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_num_buffers0; _i0++) {
            num_buffers[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_num_planes0 = 65025;
          unsigned int * num_planes = (unsigned int *) malloc(_len_num_planes0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_num_planes0; _i0++) {
            num_planes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sizes0 = 65025;
          unsigned int * sizes = (unsigned int *) malloc(_len_sizes0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_sizes0; _i0++) {
            sizes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_alloc_devs0 = 65025;
          struct device ** alloc_devs = (struct device **) malloc(_len_alloc_devs0*sizeof(struct device *));
          for(int _i0 = 0; _i0 < _len_alloc_devs0; _i0++) {
            int _len_alloc_devs1 = 1;
            alloc_devs[_i0] = (struct device *) malloc(_len_alloc_devs1*sizeof(struct device));
            for(int _i1 = 0; _i1 < _len_alloc_devs1; _i1++) {
              alloc_devs[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = queue_setup(vq,num_buffers,num_planes,sizes,alloc_devs);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vq0; _aux++) {
          free(vq[_aux].drv_priv);
          }
          free(vq);
          free(num_buffers);
          free(num_planes);
          free(sizes);
          for(int i1 = 0; i1 < _len_alloc_devs0; i1++) {
            int _len_alloc_devs1 = 1;
              free(alloc_devs[i1]);
          }
          free(alloc_devs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vq0 = 100;
          struct vb2_queue * vq = (struct vb2_queue *) malloc(_len_vq0*sizeof(struct vb2_queue));
          for(int _i0 = 0; _i0 < _len_vq0; _i0++) {
              int _len_vq__i0__drv_priv0 = 1;
          vq[_i0].drv_priv = (struct fimc_lite *) malloc(_len_vq__i0__drv_priv0*sizeof(struct fimc_lite));
          for(int _j0 = 0; _j0 < _len_vq__i0__drv_priv0; _j0++) {
            vq[_i0].drv_priv->out_frame.f_width = ((-2 * (next_i()%2)) + 1) * next_i();
        vq[_i0].drv_priv->out_frame.f_height = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vq__i0__drv_priv_out_frame_fmt0 = 1;
          vq[_i0].drv_priv->out_frame.fmt = (struct fimc_fmt *) malloc(_len_vq__i0__drv_priv_out_frame_fmt0*sizeof(struct fimc_fmt));
          for(int _j0 = 0; _j0 < _len_vq__i0__drv_priv_out_frame_fmt0; _j0++) {
            vq[_i0].drv_priv->out_frame.fmt->memplanes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vq__i0__drv_priv_out_frame_fmt_depth0 = 1;
          vq[_i0].drv_priv->out_frame.fmt->depth = (unsigned long *) malloc(_len_vq__i0__drv_priv_out_frame_fmt_depth0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_vq__i0__drv_priv_out_frame_fmt_depth0; _j0++) {
            vq[_i0].drv_priv->out_frame.fmt->depth[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_num_buffers0 = 100;
          unsigned int * num_buffers = (unsigned int *) malloc(_len_num_buffers0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_num_buffers0; _i0++) {
            num_buffers[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_num_planes0 = 100;
          unsigned int * num_planes = (unsigned int *) malloc(_len_num_planes0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_num_planes0; _i0++) {
            num_planes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sizes0 = 100;
          unsigned int * sizes = (unsigned int *) malloc(_len_sizes0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_sizes0; _i0++) {
            sizes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_alloc_devs0 = 100;
          struct device ** alloc_devs = (struct device **) malloc(_len_alloc_devs0*sizeof(struct device *));
          for(int _i0 = 0; _i0 < _len_alloc_devs0; _i0++) {
            int _len_alloc_devs1 = 1;
            alloc_devs[_i0] = (struct device *) malloc(_len_alloc_devs1*sizeof(struct device));
            for(int _i1 = 0; _i1 < _len_alloc_devs1; _i1++) {
              alloc_devs[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = queue_setup(vq,num_buffers,num_planes,sizes,alloc_devs);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vq0; _aux++) {
          free(vq[_aux].drv_priv);
          }
          free(vq);
          free(num_buffers);
          free(num_planes);
          free(sizes);
          for(int i1 = 0; i1 < _len_alloc_devs0; i1++) {
            int _len_alloc_devs1 = 1;
              free(alloc_devs[i1]);
          }
          free(alloc_devs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
