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
struct vm_area_struct {int vm_flags; struct fb_info* vm_private_data; int /*<<< orphan*/ * vm_ops; } ;
struct fb_info {int flags; } ;

/* Variables and functions */
 int FBINFO_VIRTFB ; 
 int VM_DONTDUMP ; 
 int VM_DONTEXPAND ; 
 int VM_IO ; 
 int /*<<< orphan*/  fb_deferred_io_vm_ops ; 

int fb_deferred_io_mmap(struct fb_info *info, struct vm_area_struct *vma)
{
	vma->vm_ops = &fb_deferred_io_vm_ops;
	vma->vm_flags |= VM_DONTEXPAND | VM_DONTDUMP;
	if (!(info->flags & FBINFO_VIRTFB))
		vma->vm_flags |= VM_IO;
	vma->vm_private_data = info;
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
          int _len_info0 = 1;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vma0 = 1;
          struct vm_area_struct * vma = (struct vm_area_struct *) malloc(_len_vma0*sizeof(struct vm_area_struct));
          for(int _i0 = 0; _i0 < _len_vma0; _i0++) {
            vma[_i0].vm_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vma__i0__vm_private_data0 = 1;
          vma[_i0].vm_private_data = (struct fb_info *) malloc(_len_vma__i0__vm_private_data0*sizeof(struct fb_info));
          for(int _j0 = 0; _j0 < _len_vma__i0__vm_private_data0; _j0++) {
            vma[_i0].vm_private_data->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vma__i0__vm_ops0 = 1;
          vma[_i0].vm_ops = (int *) malloc(_len_vma__i0__vm_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vma__i0__vm_ops0; _j0++) {
            vma[_i0].vm_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = fb_deferred_io_mmap(info,vma);
          printf("%d\n", benchRet); 
          free(info);
          for(int _aux = 0; _aux < _len_vma0; _aux++) {
          free(vma[_aux].vm_private_data);
          }
          for(int _aux = 0; _aux < _len_vma0; _aux++) {
          free(vma[_aux].vm_ops);
          }
          free(vma);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_info0 = 65025;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vma0 = 65025;
          struct vm_area_struct * vma = (struct vm_area_struct *) malloc(_len_vma0*sizeof(struct vm_area_struct));
          for(int _i0 = 0; _i0 < _len_vma0; _i0++) {
            vma[_i0].vm_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vma__i0__vm_private_data0 = 1;
          vma[_i0].vm_private_data = (struct fb_info *) malloc(_len_vma__i0__vm_private_data0*sizeof(struct fb_info));
          for(int _j0 = 0; _j0 < _len_vma__i0__vm_private_data0; _j0++) {
            vma[_i0].vm_private_data->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vma__i0__vm_ops0 = 1;
          vma[_i0].vm_ops = (int *) malloc(_len_vma__i0__vm_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vma__i0__vm_ops0; _j0++) {
            vma[_i0].vm_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = fb_deferred_io_mmap(info,vma);
          printf("%d\n", benchRet); 
          free(info);
          for(int _aux = 0; _aux < _len_vma0; _aux++) {
          free(vma[_aux].vm_private_data);
          }
          for(int _aux = 0; _aux < _len_vma0; _aux++) {
          free(vma[_aux].vm_ops);
          }
          free(vma);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_info0 = 100;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vma0 = 100;
          struct vm_area_struct * vma = (struct vm_area_struct *) malloc(_len_vma0*sizeof(struct vm_area_struct));
          for(int _i0 = 0; _i0 < _len_vma0; _i0++) {
            vma[_i0].vm_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vma__i0__vm_private_data0 = 1;
          vma[_i0].vm_private_data = (struct fb_info *) malloc(_len_vma__i0__vm_private_data0*sizeof(struct fb_info));
          for(int _j0 = 0; _j0 < _len_vma__i0__vm_private_data0; _j0++) {
            vma[_i0].vm_private_data->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vma__i0__vm_ops0 = 1;
          vma[_i0].vm_ops = (int *) malloc(_len_vma__i0__vm_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vma__i0__vm_ops0; _j0++) {
            vma[_i0].vm_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = fb_deferred_io_mmap(info,vma);
          printf("%d\n", benchRet); 
          free(info);
          for(int _aux = 0; _aux < _len_vma0; _aux++) {
          free(vma[_aux].vm_private_data);
          }
          for(int _aux = 0; _aux < _len_vma0; _aux++) {
          free(vma[_aux].vm_ops);
          }
          free(vma);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
