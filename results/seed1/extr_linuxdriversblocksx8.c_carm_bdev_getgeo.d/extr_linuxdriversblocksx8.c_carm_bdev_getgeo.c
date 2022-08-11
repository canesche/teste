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
typedef  void* u8 ;
struct hd_geometry {int /*<<< orphan*/  cylinders; void* sectors; void* heads; } ;
struct carm_port {int /*<<< orphan*/  dev_geom_cyl; scalar_t__ dev_geom_sect; scalar_t__ dev_geom_head; } ;
struct block_device {TYPE_1__* bd_disk; } ;
struct TYPE_2__ {struct carm_port* private_data; } ;

/* Variables and functions */

__attribute__((used)) static int carm_bdev_getgeo(struct block_device *bdev, struct hd_geometry *geo)
{
	struct carm_port *port = bdev->bd_disk->private_data;

	geo->heads = (u8) port->dev_geom_head;
	geo->sectors = (u8) port->dev_geom_sect;
	geo->cylinders = port->dev_geom_cyl;
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
          int _len_bdev0 = 1;
          struct block_device * bdev = (struct block_device *) malloc(_len_bdev0*sizeof(struct block_device));
          for(int _i0 = 0; _i0 < _len_bdev0; _i0++) {
              int _len_bdev__i0__bd_disk0 = 1;
          bdev[_i0].bd_disk = (struct TYPE_2__ *) malloc(_len_bdev__i0__bd_disk0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_bdev__i0__bd_disk0; _j0++) {
              int _len_bdev__i0__bd_disk_private_data0 = 1;
          bdev[_i0].bd_disk->private_data = (struct carm_port *) malloc(_len_bdev__i0__bd_disk_private_data0*sizeof(struct carm_port));
          for(int _j0 = 0; _j0 < _len_bdev__i0__bd_disk_private_data0; _j0++) {
            bdev[_i0].bd_disk->private_data->dev_geom_cyl = ((-2 * (next_i()%2)) + 1) * next_i();
        bdev[_i0].bd_disk->private_data->dev_geom_sect = ((-2 * (next_i()%2)) + 1) * next_i();
        bdev[_i0].bd_disk->private_data->dev_geom_head = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_geo0 = 1;
          struct hd_geometry * geo = (struct hd_geometry *) malloc(_len_geo0*sizeof(struct hd_geometry));
          for(int _i0 = 0; _i0 < _len_geo0; _i0++) {
            geo[_i0].cylinders = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = carm_bdev_getgeo(bdev,geo);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bdev0; _aux++) {
          free(bdev[_aux].bd_disk);
          }
          free(bdev);
          free(geo);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_bdev0 = 65025;
          struct block_device * bdev = (struct block_device *) malloc(_len_bdev0*sizeof(struct block_device));
          for(int _i0 = 0; _i0 < _len_bdev0; _i0++) {
              int _len_bdev__i0__bd_disk0 = 1;
          bdev[_i0].bd_disk = (struct TYPE_2__ *) malloc(_len_bdev__i0__bd_disk0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_bdev__i0__bd_disk0; _j0++) {
              int _len_bdev__i0__bd_disk_private_data0 = 1;
          bdev[_i0].bd_disk->private_data = (struct carm_port *) malloc(_len_bdev__i0__bd_disk_private_data0*sizeof(struct carm_port));
          for(int _j0 = 0; _j0 < _len_bdev__i0__bd_disk_private_data0; _j0++) {
            bdev[_i0].bd_disk->private_data->dev_geom_cyl = ((-2 * (next_i()%2)) + 1) * next_i();
        bdev[_i0].bd_disk->private_data->dev_geom_sect = ((-2 * (next_i()%2)) + 1) * next_i();
        bdev[_i0].bd_disk->private_data->dev_geom_head = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_geo0 = 65025;
          struct hd_geometry * geo = (struct hd_geometry *) malloc(_len_geo0*sizeof(struct hd_geometry));
          for(int _i0 = 0; _i0 < _len_geo0; _i0++) {
            geo[_i0].cylinders = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = carm_bdev_getgeo(bdev,geo);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bdev0; _aux++) {
          free(bdev[_aux].bd_disk);
          }
          free(bdev);
          free(geo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_bdev0 = 100;
          struct block_device * bdev = (struct block_device *) malloc(_len_bdev0*sizeof(struct block_device));
          for(int _i0 = 0; _i0 < _len_bdev0; _i0++) {
              int _len_bdev__i0__bd_disk0 = 1;
          bdev[_i0].bd_disk = (struct TYPE_2__ *) malloc(_len_bdev__i0__bd_disk0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_bdev__i0__bd_disk0; _j0++) {
              int _len_bdev__i0__bd_disk_private_data0 = 1;
          bdev[_i0].bd_disk->private_data = (struct carm_port *) malloc(_len_bdev__i0__bd_disk_private_data0*sizeof(struct carm_port));
          for(int _j0 = 0; _j0 < _len_bdev__i0__bd_disk_private_data0; _j0++) {
            bdev[_i0].bd_disk->private_data->dev_geom_cyl = ((-2 * (next_i()%2)) + 1) * next_i();
        bdev[_i0].bd_disk->private_data->dev_geom_sect = ((-2 * (next_i()%2)) + 1) * next_i();
        bdev[_i0].bd_disk->private_data->dev_geom_head = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_geo0 = 100;
          struct hd_geometry * geo = (struct hd_geometry *) malloc(_len_geo0*sizeof(struct hd_geometry));
          for(int _i0 = 0; _i0 < _len_geo0; _i0++) {
            geo[_i0].cylinders = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = carm_bdev_getgeo(bdev,geo);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bdev0; _aux++) {
          free(bdev[_aux].bd_disk);
          }
          free(bdev);
          free(geo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
