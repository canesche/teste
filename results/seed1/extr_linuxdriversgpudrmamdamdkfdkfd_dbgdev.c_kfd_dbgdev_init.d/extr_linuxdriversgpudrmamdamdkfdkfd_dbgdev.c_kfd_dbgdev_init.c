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
struct kfd_dev {int dummy; } ;
struct kfd_dbgdev {int type; int /*<<< orphan*/  dbgdev_address_watch; int /*<<< orphan*/  dbgdev_wave_control; int /*<<< orphan*/  dbgdev_unregister; int /*<<< orphan*/  dbgdev_register; int /*<<< orphan*/ * pqm; int /*<<< orphan*/ * kq; struct kfd_dev* dev; } ;
typedef  enum DBGDEV_TYPE { ____Placeholder_DBGDEV_TYPE } DBGDEV_TYPE ;

/* Variables and functions */
#define  DBGDEV_TYPE_DIQ 129 
#define  DBGDEV_TYPE_NODIQ 128 
 int /*<<< orphan*/  dbgdev_address_watch_diq ; 
 int /*<<< orphan*/  dbgdev_address_watch_nodiq ; 
 int /*<<< orphan*/  dbgdev_register_diq ; 
 int /*<<< orphan*/  dbgdev_register_nodiq ; 
 int /*<<< orphan*/  dbgdev_unregister_diq ; 
 int /*<<< orphan*/  dbgdev_unregister_nodiq ; 
 int /*<<< orphan*/  dbgdev_wave_control_diq ; 
 int /*<<< orphan*/  dbgdev_wave_control_nodiq ; 

void kfd_dbgdev_init(struct kfd_dbgdev *pdbgdev, struct kfd_dev *pdev,
			enum DBGDEV_TYPE type)
{
	pdbgdev->dev = pdev;
	pdbgdev->kq = NULL;
	pdbgdev->type = type;
	pdbgdev->pqm = NULL;

	switch (type) {
	case DBGDEV_TYPE_NODIQ:
		pdbgdev->dbgdev_register = dbgdev_register_nodiq;
		pdbgdev->dbgdev_unregister = dbgdev_unregister_nodiq;
		pdbgdev->dbgdev_wave_control = dbgdev_wave_control_nodiq;
		pdbgdev->dbgdev_address_watch = dbgdev_address_watch_nodiq;
		break;
	case DBGDEV_TYPE_DIQ:
	default:
		pdbgdev->dbgdev_register = dbgdev_register_diq;
		pdbgdev->dbgdev_unregister = dbgdev_unregister_diq;
		pdbgdev->dbgdev_wave_control =  dbgdev_wave_control_diq;
		pdbgdev->dbgdev_address_watch = dbgdev_address_watch_diq;
		break;
	}

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
          enum DBGDEV_TYPE type = 0;
          int _len_pdbgdev0 = 1;
          struct kfd_dbgdev * pdbgdev = (struct kfd_dbgdev *) malloc(_len_pdbgdev0*sizeof(struct kfd_dbgdev));
          for(int _i0 = 0; _i0 < _len_pdbgdev0; _i0++) {
            pdbgdev[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        pdbgdev[_i0].dbgdev_address_watch = ((-2 * (next_i()%2)) + 1) * next_i();
        pdbgdev[_i0].dbgdev_wave_control = ((-2 * (next_i()%2)) + 1) * next_i();
        pdbgdev[_i0].dbgdev_unregister = ((-2 * (next_i()%2)) + 1) * next_i();
        pdbgdev[_i0].dbgdev_register = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pdbgdev__i0__pqm0 = 1;
          pdbgdev[_i0].pqm = (int *) malloc(_len_pdbgdev__i0__pqm0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdbgdev__i0__pqm0; _j0++) {
            pdbgdev[_i0].pqm[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdbgdev__i0__kq0 = 1;
          pdbgdev[_i0].kq = (int *) malloc(_len_pdbgdev__i0__kq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdbgdev__i0__kq0; _j0++) {
            pdbgdev[_i0].kq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdbgdev__i0__dev0 = 1;
          pdbgdev[_i0].dev = (struct kfd_dev *) malloc(_len_pdbgdev__i0__dev0*sizeof(struct kfd_dev));
          for(int _j0 = 0; _j0 < _len_pdbgdev__i0__dev0; _j0++) {
            pdbgdev[_i0].dev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pdev0 = 1;
          struct kfd_dev * pdev = (struct kfd_dev *) malloc(_len_pdev0*sizeof(struct kfd_dev));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          kfd_dbgdev_init(pdbgdev,pdev,type);
          for(int _aux = 0; _aux < _len_pdbgdev0; _aux++) {
          free(pdbgdev[_aux].pqm);
          }
          for(int _aux = 0; _aux < _len_pdbgdev0; _aux++) {
          free(pdbgdev[_aux].kq);
          }
          for(int _aux = 0; _aux < _len_pdbgdev0; _aux++) {
          free(pdbgdev[_aux].dev);
          }
          free(pdbgdev);
          free(pdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum DBGDEV_TYPE type = 0;
          int _len_pdbgdev0 = 65025;
          struct kfd_dbgdev * pdbgdev = (struct kfd_dbgdev *) malloc(_len_pdbgdev0*sizeof(struct kfd_dbgdev));
          for(int _i0 = 0; _i0 < _len_pdbgdev0; _i0++) {
            pdbgdev[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        pdbgdev[_i0].dbgdev_address_watch = ((-2 * (next_i()%2)) + 1) * next_i();
        pdbgdev[_i0].dbgdev_wave_control = ((-2 * (next_i()%2)) + 1) * next_i();
        pdbgdev[_i0].dbgdev_unregister = ((-2 * (next_i()%2)) + 1) * next_i();
        pdbgdev[_i0].dbgdev_register = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pdbgdev__i0__pqm0 = 1;
          pdbgdev[_i0].pqm = (int *) malloc(_len_pdbgdev__i0__pqm0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdbgdev__i0__pqm0; _j0++) {
            pdbgdev[_i0].pqm[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdbgdev__i0__kq0 = 1;
          pdbgdev[_i0].kq = (int *) malloc(_len_pdbgdev__i0__kq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdbgdev__i0__kq0; _j0++) {
            pdbgdev[_i0].kq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdbgdev__i0__dev0 = 1;
          pdbgdev[_i0].dev = (struct kfd_dev *) malloc(_len_pdbgdev__i0__dev0*sizeof(struct kfd_dev));
          for(int _j0 = 0; _j0 < _len_pdbgdev__i0__dev0; _j0++) {
            pdbgdev[_i0].dev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pdev0 = 65025;
          struct kfd_dev * pdev = (struct kfd_dev *) malloc(_len_pdev0*sizeof(struct kfd_dev));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          kfd_dbgdev_init(pdbgdev,pdev,type);
          for(int _aux = 0; _aux < _len_pdbgdev0; _aux++) {
          free(pdbgdev[_aux].pqm);
          }
          for(int _aux = 0; _aux < _len_pdbgdev0; _aux++) {
          free(pdbgdev[_aux].kq);
          }
          for(int _aux = 0; _aux < _len_pdbgdev0; _aux++) {
          free(pdbgdev[_aux].dev);
          }
          free(pdbgdev);
          free(pdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum DBGDEV_TYPE type = 0;
          int _len_pdbgdev0 = 100;
          struct kfd_dbgdev * pdbgdev = (struct kfd_dbgdev *) malloc(_len_pdbgdev0*sizeof(struct kfd_dbgdev));
          for(int _i0 = 0; _i0 < _len_pdbgdev0; _i0++) {
            pdbgdev[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        pdbgdev[_i0].dbgdev_address_watch = ((-2 * (next_i()%2)) + 1) * next_i();
        pdbgdev[_i0].dbgdev_wave_control = ((-2 * (next_i()%2)) + 1) * next_i();
        pdbgdev[_i0].dbgdev_unregister = ((-2 * (next_i()%2)) + 1) * next_i();
        pdbgdev[_i0].dbgdev_register = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pdbgdev__i0__pqm0 = 1;
          pdbgdev[_i0].pqm = (int *) malloc(_len_pdbgdev__i0__pqm0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdbgdev__i0__pqm0; _j0++) {
            pdbgdev[_i0].pqm[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdbgdev__i0__kq0 = 1;
          pdbgdev[_i0].kq = (int *) malloc(_len_pdbgdev__i0__kq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdbgdev__i0__kq0; _j0++) {
            pdbgdev[_i0].kq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdbgdev__i0__dev0 = 1;
          pdbgdev[_i0].dev = (struct kfd_dev *) malloc(_len_pdbgdev__i0__dev0*sizeof(struct kfd_dev));
          for(int _j0 = 0; _j0 < _len_pdbgdev__i0__dev0; _j0++) {
            pdbgdev[_i0].dev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pdev0 = 100;
          struct kfd_dev * pdev = (struct kfd_dev *) malloc(_len_pdev0*sizeof(struct kfd_dev));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          kfd_dbgdev_init(pdbgdev,pdev,type);
          for(int _aux = 0; _aux < _len_pdbgdev0; _aux++) {
          free(pdbgdev[_aux].pqm);
          }
          for(int _aux = 0; _aux < _len_pdbgdev0; _aux++) {
          free(pdbgdev[_aux].kq);
          }
          for(int _aux = 0; _aux < _len_pdbgdev0; _aux++) {
          free(pdbgdev[_aux].dev);
          }
          free(pdbgdev);
          free(pdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
