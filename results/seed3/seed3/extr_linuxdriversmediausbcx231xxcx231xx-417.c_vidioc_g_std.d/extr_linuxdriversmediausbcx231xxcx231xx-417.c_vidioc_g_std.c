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
typedef  int /*<<< orphan*/  v4l2_std_id ;
struct file {struct cx231xx_fh* private_data; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct TYPE_2__ {int /*<<< orphan*/  id; } ;
struct cx231xx {TYPE_1__ encodernorm; } ;

/* Variables and functions */

__attribute__((used)) static int vidioc_g_std(struct file *file, void *fh0, v4l2_std_id *norm)
{
	struct cx231xx_fh  *fh  = file->private_data;
	struct cx231xx *dev = fh->dev;

	*norm = dev->encodernorm.id;
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
          int _len_file0 = 1;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              int _len_file__i0__private_data0 = 1;
          file[_i0].private_data = (struct cx231xx_fh *) malloc(_len_file__i0__private_data0*sizeof(struct cx231xx_fh));
          for(int _j0 = 0; _j0 < _len_file__i0__private_data0; _j0++) {
              int _len_file__i0__private_data_dev0 = 1;
          file[_i0].private_data->dev = (struct cx231xx *) malloc(_len_file__i0__private_data_dev0*sizeof(struct cx231xx));
          for(int _j0 = 0; _j0 < _len_file__i0__private_data_dev0; _j0++) {
            file[_i0].private_data->dev->encodernorm.id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          void * fh0;
          int _len_norm0 = 1;
          int * norm = (int *) malloc(_len_norm0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_norm0; _i0++) {
            norm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vidioc_g_std(file,fh0,norm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_file0; _aux++) {
          free(file[_aux].private_data);
          }
          free(file);
          free(norm);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_file0 = 65025;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              int _len_file__i0__private_data0 = 1;
          file[_i0].private_data = (struct cx231xx_fh *) malloc(_len_file__i0__private_data0*sizeof(struct cx231xx_fh));
          for(int _j0 = 0; _j0 < _len_file__i0__private_data0; _j0++) {
              int _len_file__i0__private_data_dev0 = 1;
          file[_i0].private_data->dev = (struct cx231xx *) malloc(_len_file__i0__private_data_dev0*sizeof(struct cx231xx));
          for(int _j0 = 0; _j0 < _len_file__i0__private_data_dev0; _j0++) {
            file[_i0].private_data->dev->encodernorm.id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          void * fh0;
          int _len_norm0 = 65025;
          int * norm = (int *) malloc(_len_norm0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_norm0; _i0++) {
            norm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vidioc_g_std(file,fh0,norm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_file0; _aux++) {
          free(file[_aux].private_data);
          }
          free(file);
          free(norm);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_file0 = 100;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              int _len_file__i0__private_data0 = 1;
          file[_i0].private_data = (struct cx231xx_fh *) malloc(_len_file__i0__private_data0*sizeof(struct cx231xx_fh));
          for(int _j0 = 0; _j0 < _len_file__i0__private_data0; _j0++) {
              int _len_file__i0__private_data_dev0 = 1;
          file[_i0].private_data->dev = (struct cx231xx *) malloc(_len_file__i0__private_data_dev0*sizeof(struct cx231xx));
          for(int _j0 = 0; _j0 < _len_file__i0__private_data_dev0; _j0++) {
            file[_i0].private_data->dev->encodernorm.id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          void * fh0;
          int _len_norm0 = 100;
          int * norm = (int *) malloc(_len_norm0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_norm0; _i0++) {
            norm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vidioc_g_std(file,fh0,norm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_file0; _aux++) {
          free(file[_aux].private_data);
          }
          free(file);
          free(norm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
