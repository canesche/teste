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
struct v4l2_frequency {scalar_t__ tuner; unsigned int frequency; } ;
struct file {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 

int vivid_radio_g_frequency(struct file *file, const unsigned *pfreq, struct v4l2_frequency *vf)
{
	if (vf->tuner != 0)
		return -EINVAL;
	vf->frequency = *pfreq;
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
            file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pfreq0 = 1;
          const unsigned int * pfreq = (const unsigned int *) malloc(_len_pfreq0*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_pfreq0; _i0++) {
            pfreq[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vf0 = 1;
          struct v4l2_frequency * vf = (struct v4l2_frequency *) malloc(_len_vf0*sizeof(struct v4l2_frequency));
          for(int _i0 = 0; _i0 < _len_vf0; _i0++) {
            vf[_i0].tuner = ((-2 * (next_i()%2)) + 1) * next_i();
        vf[_i0].frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vivid_radio_g_frequency(file,pfreq,vf);
          printf("%d\n", benchRet); 
          free(file);
          free(pfreq);
          free(vf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_file0 = 65025;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pfreq0 = 65025;
          const unsigned int * pfreq = (const unsigned int *) malloc(_len_pfreq0*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_pfreq0; _i0++) {
            pfreq[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vf0 = 65025;
          struct v4l2_frequency * vf = (struct v4l2_frequency *) malloc(_len_vf0*sizeof(struct v4l2_frequency));
          for(int _i0 = 0; _i0 < _len_vf0; _i0++) {
            vf[_i0].tuner = ((-2 * (next_i()%2)) + 1) * next_i();
        vf[_i0].frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vivid_radio_g_frequency(file,pfreq,vf);
          printf("%d\n", benchRet); 
          free(file);
          free(pfreq);
          free(vf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_file0 = 100;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pfreq0 = 100;
          const unsigned int * pfreq = (const unsigned int *) malloc(_len_pfreq0*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_pfreq0; _i0++) {
            pfreq[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vf0 = 100;
          struct v4l2_frequency * vf = (struct v4l2_frequency *) malloc(_len_vf0*sizeof(struct v4l2_frequency));
          for(int _i0 = 0; _i0 < _len_vf0; _i0++) {
            vf[_i0].tuner = ((-2 * (next_i()%2)) + 1) * next_i();
        vf[_i0].frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vivid_radio_g_frequency(file,pfreq,vf);
          printf("%d\n", benchRet); 
          free(file);
          free(pfreq);
          free(vf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
