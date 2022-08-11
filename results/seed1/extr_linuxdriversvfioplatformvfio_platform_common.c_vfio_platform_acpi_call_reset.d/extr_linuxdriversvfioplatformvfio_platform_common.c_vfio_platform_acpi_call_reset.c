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
struct vfio_platform_device {int dummy; } ;

/* Variables and functions */
 int ENOENT ; 

__attribute__((used)) static int vfio_platform_acpi_call_reset(struct vfio_platform_device *vdev,
				  const char **extra_dbg)
{
#ifdef CONFIG_ACPI
	struct acpi_buffer buffer = { ACPI_ALLOCATE_BUFFER, NULL };
	struct device *dev = vdev->device;
	acpi_handle handle = ACPI_HANDLE(dev);
	acpi_status acpi_ret;

	acpi_ret = acpi_evaluate_object(handle, "_RST", NULL, &buffer);
	if (ACPI_FAILURE(acpi_ret)) {
		if (extra_dbg)
			*extra_dbg = acpi_format_exception(acpi_ret);
		return -EINVAL;
	}

	return 0;
#else
	return -ENOENT;
#endif
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
          int _len_vdev0 = 1;
          struct vfio_platform_device * vdev = (struct vfio_platform_device *) malloc(_len_vdev0*sizeof(struct vfio_platform_device));
          for(int _i0 = 0; _i0 < _len_vdev0; _i0++) {
            vdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_extra_dbg0 = 1;
          const char ** extra_dbg = (const char **) malloc(_len_extra_dbg0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_extra_dbg0; _i0++) {
            int _len_extra_dbg1 = 1;
            extra_dbg[_i0] = (const char *) malloc(_len_extra_dbg1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_extra_dbg1; _i1++) {
              extra_dbg[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = vfio_platform_acpi_call_reset(vdev,extra_dbg);
          printf("%d\n", benchRet); 
          free(vdev);
          for(int i1 = 0; i1 < _len_extra_dbg0; i1++) {
            int _len_extra_dbg1 = 1;
              free(extra_dbg[i1]);
          }
          free(extra_dbg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vdev0 = 65025;
          struct vfio_platform_device * vdev = (struct vfio_platform_device *) malloc(_len_vdev0*sizeof(struct vfio_platform_device));
          for(int _i0 = 0; _i0 < _len_vdev0; _i0++) {
            vdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_extra_dbg0 = 65025;
          const char ** extra_dbg = (const char **) malloc(_len_extra_dbg0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_extra_dbg0; _i0++) {
            int _len_extra_dbg1 = 1;
            extra_dbg[_i0] = (const char *) malloc(_len_extra_dbg1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_extra_dbg1; _i1++) {
              extra_dbg[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = vfio_platform_acpi_call_reset(vdev,extra_dbg);
          printf("%d\n", benchRet); 
          free(vdev);
          for(int i1 = 0; i1 < _len_extra_dbg0; i1++) {
            int _len_extra_dbg1 = 1;
              free(extra_dbg[i1]);
          }
          free(extra_dbg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vdev0 = 100;
          struct vfio_platform_device * vdev = (struct vfio_platform_device *) malloc(_len_vdev0*sizeof(struct vfio_platform_device));
          for(int _i0 = 0; _i0 < _len_vdev0; _i0++) {
            vdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_extra_dbg0 = 100;
          const char ** extra_dbg = (const char **) malloc(_len_extra_dbg0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_extra_dbg0; _i0++) {
            int _len_extra_dbg1 = 1;
            extra_dbg[_i0] = (const char *) malloc(_len_extra_dbg1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_extra_dbg1; _i1++) {
              extra_dbg[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = vfio_platform_acpi_call_reset(vdev,extra_dbg);
          printf("%d\n", benchRet); 
          free(vdev);
          for(int i1 = 0; i1 < _len_extra_dbg0; i1++) {
            int _len_extra_dbg1 = 1;
              free(extra_dbg[i1]);
          }
          free(extra_dbg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
