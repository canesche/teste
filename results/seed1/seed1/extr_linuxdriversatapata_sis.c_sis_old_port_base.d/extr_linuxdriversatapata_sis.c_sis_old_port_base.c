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
struct ata_device {int devno; TYPE_2__* link; } ;
struct TYPE_4__ {TYPE_1__* ap; } ;
struct TYPE_3__ {int port_no; } ;

/* Variables and functions */

__attribute__((used)) static int sis_old_port_base(struct ata_device *adev)
{
	return 0x40 + (4 * adev->link->ap->port_no) + (2 * adev->devno);
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
          int _len_adev0 = 1;
          struct ata_device * adev = (struct ata_device *) malloc(_len_adev0*sizeof(struct ata_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev[_i0].devno = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adev__i0__link0 = 1;
          adev[_i0].link = (struct TYPE_4__ *) malloc(_len_adev__i0__link0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_adev__i0__link0; _j0++) {
              int _len_adev__i0__link_ap0 = 1;
          adev[_i0].link->ap = (struct TYPE_3__ *) malloc(_len_adev__i0__link_ap0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_adev__i0__link_ap0; _j0++) {
            adev[_i0].link->ap->port_no = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = sis_old_port_base(adev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_adev0; _aux++) {
          free(adev[_aux].link);
          }
          free(adev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_adev0 = 65025;
          struct ata_device * adev = (struct ata_device *) malloc(_len_adev0*sizeof(struct ata_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev[_i0].devno = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adev__i0__link0 = 1;
          adev[_i0].link = (struct TYPE_4__ *) malloc(_len_adev__i0__link0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_adev__i0__link0; _j0++) {
              int _len_adev__i0__link_ap0 = 1;
          adev[_i0].link->ap = (struct TYPE_3__ *) malloc(_len_adev__i0__link_ap0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_adev__i0__link_ap0; _j0++) {
            adev[_i0].link->ap->port_no = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = sis_old_port_base(adev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_adev0; _aux++) {
          free(adev[_aux].link);
          }
          free(adev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_adev0 = 100;
          struct ata_device * adev = (struct ata_device *) malloc(_len_adev0*sizeof(struct ata_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev[_i0].devno = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adev__i0__link0 = 1;
          adev[_i0].link = (struct TYPE_4__ *) malloc(_len_adev__i0__link0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_adev__i0__link0; _j0++) {
              int _len_adev__i0__link_ap0 = 1;
          adev[_i0].link->ap = (struct TYPE_3__ *) malloc(_len_adev__i0__link_ap0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_adev__i0__link_ap0; _j0++) {
            adev[_i0].link->ap->port_no = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = sis_old_port_base(adev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_adev0; _aux++) {
          free(adev[_aux].link);
          }
          free(adev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
