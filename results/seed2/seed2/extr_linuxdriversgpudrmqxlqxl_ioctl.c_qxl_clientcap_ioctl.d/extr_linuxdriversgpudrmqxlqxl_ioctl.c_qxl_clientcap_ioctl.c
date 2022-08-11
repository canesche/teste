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
struct qxl_device {TYPE_1__* rom; } ;
struct drm_qxl_clientcap {int index; } ;
struct drm_file {int dummy; } ;
struct drm_device {TYPE_2__* pdev; struct qxl_device* dev_private; } ;
struct TYPE_4__ {int revision; } ;
struct TYPE_3__ {int* client_capabilities; } ;

/* Variables and functions */
 int ENOSYS ; 

__attribute__((used)) static int qxl_clientcap_ioctl(struct drm_device *dev, void *data,
				  struct drm_file *file_priv)
{
	struct qxl_device *qdev = dev->dev_private;
	struct drm_qxl_clientcap *param = data;
	int byte, idx;

	byte = param->index / 8;
	idx = param->index % 8;

	if (dev->pdev->revision < 4)
		return -ENOSYS;

	if (byte >= 58)
		return -ENOSYS;

	if (qdev->rom->client_capabilities[byte] & (1 << idx))
		return 0;
	return -ENOSYS;
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
          int _len_dev0 = 1;
          struct drm_device * dev = (struct drm_device *) malloc(_len_dev0*sizeof(struct drm_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__pdev0 = 1;
          dev[_i0].pdev = (struct TYPE_4__ *) malloc(_len_dev__i0__pdev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dev__i0__pdev0; _j0++) {
            dev[_i0].pdev->revision = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__dev_private0 = 1;
          dev[_i0].dev_private = (struct qxl_device *) malloc(_len_dev__i0__dev_private0*sizeof(struct qxl_device));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_private0; _j0++) {
              int _len_dev__i0__dev_private_rom0 = 1;
          dev[_i0].dev_private->rom = (struct TYPE_3__ *) malloc(_len_dev__i0__dev_private_rom0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_private_rom0; _j0++) {
              int _len_dev__i0__dev_private_rom_client_capabilities0 = 1;
          dev[_i0].dev_private->rom->client_capabilities = (int *) malloc(_len_dev__i0__dev_private_rom_client_capabilities0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_private_rom_client_capabilities0; _j0++) {
            dev[_i0].dev_private->rom->client_capabilities[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          void * data;
          int _len_file_priv0 = 1;
          struct drm_file * file_priv = (struct drm_file *) malloc(_len_file_priv0*sizeof(struct drm_file));
          for(int _i0 = 0; _i0 < _len_file_priv0; _i0++) {
            file_priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qxl_clientcap_ioctl(dev,data,file_priv);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].pdev);
          }
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].dev_private);
          }
          free(dev);
          free(file_priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct drm_device * dev = (struct drm_device *) malloc(_len_dev0*sizeof(struct drm_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__pdev0 = 1;
          dev[_i0].pdev = (struct TYPE_4__ *) malloc(_len_dev__i0__pdev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dev__i0__pdev0; _j0++) {
            dev[_i0].pdev->revision = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__dev_private0 = 1;
          dev[_i0].dev_private = (struct qxl_device *) malloc(_len_dev__i0__dev_private0*sizeof(struct qxl_device));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_private0; _j0++) {
              int _len_dev__i0__dev_private_rom0 = 1;
          dev[_i0].dev_private->rom = (struct TYPE_3__ *) malloc(_len_dev__i0__dev_private_rom0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_private_rom0; _j0++) {
              int _len_dev__i0__dev_private_rom_client_capabilities0 = 1;
          dev[_i0].dev_private->rom->client_capabilities = (int *) malloc(_len_dev__i0__dev_private_rom_client_capabilities0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_private_rom_client_capabilities0; _j0++) {
            dev[_i0].dev_private->rom->client_capabilities[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          void * data;
          int _len_file_priv0 = 65025;
          struct drm_file * file_priv = (struct drm_file *) malloc(_len_file_priv0*sizeof(struct drm_file));
          for(int _i0 = 0; _i0 < _len_file_priv0; _i0++) {
            file_priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qxl_clientcap_ioctl(dev,data,file_priv);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].pdev);
          }
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].dev_private);
          }
          free(dev);
          free(file_priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct drm_device * dev = (struct drm_device *) malloc(_len_dev0*sizeof(struct drm_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__pdev0 = 1;
          dev[_i0].pdev = (struct TYPE_4__ *) malloc(_len_dev__i0__pdev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dev__i0__pdev0; _j0++) {
            dev[_i0].pdev->revision = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__dev_private0 = 1;
          dev[_i0].dev_private = (struct qxl_device *) malloc(_len_dev__i0__dev_private0*sizeof(struct qxl_device));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_private0; _j0++) {
              int _len_dev__i0__dev_private_rom0 = 1;
          dev[_i0].dev_private->rom = (struct TYPE_3__ *) malloc(_len_dev__i0__dev_private_rom0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_private_rom0; _j0++) {
              int _len_dev__i0__dev_private_rom_client_capabilities0 = 1;
          dev[_i0].dev_private->rom->client_capabilities = (int *) malloc(_len_dev__i0__dev_private_rom_client_capabilities0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_private_rom_client_capabilities0; _j0++) {
            dev[_i0].dev_private->rom->client_capabilities[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          void * data;
          int _len_file_priv0 = 100;
          struct drm_file * file_priv = (struct drm_file *) malloc(_len_file_priv0*sizeof(struct drm_file));
          for(int _i0 = 0; _i0 < _len_file_priv0; _i0++) {
            file_priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qxl_clientcap_ioctl(dev,data,file_priv);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].pdev);
          }
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].dev_private);
          }
          free(dev);
          free(file_priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
