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
struct kfd_process {int dummy; } ;
struct kfd_ioctl_get_version_args {int /*<<< orphan*/  minor_version; int /*<<< orphan*/  major_version; } ;
struct file {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  KFD_IOCTL_MAJOR_VERSION ; 
 int /*<<< orphan*/  KFD_IOCTL_MINOR_VERSION ; 

__attribute__((used)) static int kfd_ioctl_get_version(struct file *filep, struct kfd_process *p,
					void *data)
{
	struct kfd_ioctl_get_version_args *args = data;

	args->major_version = KFD_IOCTL_MAJOR_VERSION;
	args->minor_version = KFD_IOCTL_MINOR_VERSION;

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
          int _len_filep0 = 1;
          struct file * filep = (struct file *) malloc(_len_filep0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_filep0; _i0++) {
            filep[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 1;
          struct kfd_process * p = (struct kfd_process *) malloc(_len_p0*sizeof(struct kfd_process));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = kfd_ioctl_get_version(filep,p,data);
          printf("%d\n", benchRet); 
          free(filep);
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_filep0 = 65025;
          struct file * filep = (struct file *) malloc(_len_filep0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_filep0; _i0++) {
            filep[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 65025;
          struct kfd_process * p = (struct kfd_process *) malloc(_len_p0*sizeof(struct kfd_process));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = kfd_ioctl_get_version(filep,p,data);
          printf("%d\n", benchRet); 
          free(filep);
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_filep0 = 100;
          struct file * filep = (struct file *) malloc(_len_filep0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_filep0; _i0++) {
            filep[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 100;
          struct kfd_process * p = (struct kfd_process *) malloc(_len_p0*sizeof(struct kfd_process));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = kfd_ioctl_get_version(filep,p,data);
          printf("%d\n", benchRet); 
          free(filep);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
