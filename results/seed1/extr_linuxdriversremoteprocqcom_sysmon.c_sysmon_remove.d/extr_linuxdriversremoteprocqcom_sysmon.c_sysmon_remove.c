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
struct rpmsg_device {TYPE_1__* ept; } ;
struct qcom_sysmon {int /*<<< orphan*/ * ept; } ;
struct TYPE_2__ {struct qcom_sysmon* priv; } ;

/* Variables and functions */

__attribute__((used)) static void sysmon_remove(struct rpmsg_device *rpdev)
{
	struct qcom_sysmon *sysmon = rpdev->ept->priv;

	sysmon->ept = NULL;
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
          int _len_rpdev0 = 1;
          struct rpmsg_device * rpdev = (struct rpmsg_device *) malloc(_len_rpdev0*sizeof(struct rpmsg_device));
          for(int _i0 = 0; _i0 < _len_rpdev0; _i0++) {
              int _len_rpdev__i0__ept0 = 1;
          rpdev[_i0].ept = (struct TYPE_2__ *) malloc(_len_rpdev__i0__ept0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rpdev__i0__ept0; _j0++) {
              int _len_rpdev__i0__ept_priv0 = 1;
          rpdev[_i0].ept->priv = (struct qcom_sysmon *) malloc(_len_rpdev__i0__ept_priv0*sizeof(struct qcom_sysmon));
          for(int _j0 = 0; _j0 < _len_rpdev__i0__ept_priv0; _j0++) {
              int _len_rpdev__i0__ept_priv_ept0 = 1;
          rpdev[_i0].ept->priv->ept = (int *) malloc(_len_rpdev__i0__ept_priv_ept0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rpdev__i0__ept_priv_ept0; _j0++) {
            rpdev[_i0].ept->priv->ept[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          sysmon_remove(rpdev);
          for(int _aux = 0; _aux < _len_rpdev0; _aux++) {
          free(rpdev[_aux].ept);
          }
          free(rpdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rpdev0 = 65025;
          struct rpmsg_device * rpdev = (struct rpmsg_device *) malloc(_len_rpdev0*sizeof(struct rpmsg_device));
          for(int _i0 = 0; _i0 < _len_rpdev0; _i0++) {
              int _len_rpdev__i0__ept0 = 1;
          rpdev[_i0].ept = (struct TYPE_2__ *) malloc(_len_rpdev__i0__ept0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rpdev__i0__ept0; _j0++) {
              int _len_rpdev__i0__ept_priv0 = 1;
          rpdev[_i0].ept->priv = (struct qcom_sysmon *) malloc(_len_rpdev__i0__ept_priv0*sizeof(struct qcom_sysmon));
          for(int _j0 = 0; _j0 < _len_rpdev__i0__ept_priv0; _j0++) {
              int _len_rpdev__i0__ept_priv_ept0 = 1;
          rpdev[_i0].ept->priv->ept = (int *) malloc(_len_rpdev__i0__ept_priv_ept0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rpdev__i0__ept_priv_ept0; _j0++) {
            rpdev[_i0].ept->priv->ept[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          sysmon_remove(rpdev);
          for(int _aux = 0; _aux < _len_rpdev0; _aux++) {
          free(rpdev[_aux].ept);
          }
          free(rpdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rpdev0 = 100;
          struct rpmsg_device * rpdev = (struct rpmsg_device *) malloc(_len_rpdev0*sizeof(struct rpmsg_device));
          for(int _i0 = 0; _i0 < _len_rpdev0; _i0++) {
              int _len_rpdev__i0__ept0 = 1;
          rpdev[_i0].ept = (struct TYPE_2__ *) malloc(_len_rpdev__i0__ept0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rpdev__i0__ept0; _j0++) {
              int _len_rpdev__i0__ept_priv0 = 1;
          rpdev[_i0].ept->priv = (struct qcom_sysmon *) malloc(_len_rpdev__i0__ept_priv0*sizeof(struct qcom_sysmon));
          for(int _j0 = 0; _j0 < _len_rpdev__i0__ept_priv0; _j0++) {
              int _len_rpdev__i0__ept_priv_ept0 = 1;
          rpdev[_i0].ept->priv->ept = (int *) malloc(_len_rpdev__i0__ept_priv_ept0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rpdev__i0__ept_priv_ept0; _j0++) {
            rpdev[_i0].ept->priv->ept[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          sysmon_remove(rpdev);
          for(int _aux = 0; _aux < _len_rpdev0; _aux++) {
          free(rpdev[_aux].ept);
          }
          free(rpdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
