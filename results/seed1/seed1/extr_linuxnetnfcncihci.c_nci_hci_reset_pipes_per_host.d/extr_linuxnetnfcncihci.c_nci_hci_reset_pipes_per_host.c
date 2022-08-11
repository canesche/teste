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
typedef  scalar_t__ u8 ;
struct nci_dev {TYPE_1__* hci_dev; } ;
struct TYPE_4__ {scalar_t__ host; int /*<<< orphan*/  gate; } ;
struct TYPE_3__ {TYPE_2__* pipes; } ;

/* Variables and functions */
 int /*<<< orphan*/  NCI_HCI_INVALID_GATE ; 
 scalar_t__ NCI_HCI_INVALID_HOST ; 
 int NCI_HCI_MAX_PIPES ; 

__attribute__((used)) static void nci_hci_reset_pipes_per_host(struct nci_dev *ndev, u8 host)
{
	int i;

	for (i = 0; i < NCI_HCI_MAX_PIPES; i++) {
		if (ndev->hci_dev->pipes[i].host == host) {
			ndev->hci_dev->pipes[i].gate = NCI_HCI_INVALID_GATE;
			ndev->hci_dev->pipes[i].host = NCI_HCI_INVALID_HOST;
		}
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
          long host = 100;
          int _len_ndev0 = 1;
          struct nci_dev * ndev = (struct nci_dev *) malloc(_len_ndev0*sizeof(struct nci_dev));
          for(int _i0 = 0; _i0 < _len_ndev0; _i0++) {
              int _len_ndev__i0__hci_dev0 = 1;
          ndev[_i0].hci_dev = (struct TYPE_3__ *) malloc(_len_ndev__i0__hci_dev0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ndev__i0__hci_dev0; _j0++) {
              int _len_ndev__i0__hci_dev_pipes0 = 1;
          ndev[_i0].hci_dev->pipes = (struct TYPE_4__ *) malloc(_len_ndev__i0__hci_dev_pipes0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ndev__i0__hci_dev_pipes0; _j0++) {
            ndev[_i0].hci_dev->pipes->host = ((-2 * (next_i()%2)) + 1) * next_i();
        ndev[_i0].hci_dev->pipes->gate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          nci_hci_reset_pipes_per_host(ndev,host);
          for(int _aux = 0; _aux < _len_ndev0; _aux++) {
          free(ndev[_aux].hci_dev);
          }
          free(ndev);
        
        break;
    }
    // big-arr
    case 1:
    {
          long host = 255;
          int _len_ndev0 = 65025;
          struct nci_dev * ndev = (struct nci_dev *) malloc(_len_ndev0*sizeof(struct nci_dev));
          for(int _i0 = 0; _i0 < _len_ndev0; _i0++) {
              int _len_ndev__i0__hci_dev0 = 1;
          ndev[_i0].hci_dev = (struct TYPE_3__ *) malloc(_len_ndev__i0__hci_dev0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ndev__i0__hci_dev0; _j0++) {
              int _len_ndev__i0__hci_dev_pipes0 = 1;
          ndev[_i0].hci_dev->pipes = (struct TYPE_4__ *) malloc(_len_ndev__i0__hci_dev_pipes0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ndev__i0__hci_dev_pipes0; _j0++) {
            ndev[_i0].hci_dev->pipes->host = ((-2 * (next_i()%2)) + 1) * next_i();
        ndev[_i0].hci_dev->pipes->gate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          nci_hci_reset_pipes_per_host(ndev,host);
          for(int _aux = 0; _aux < _len_ndev0; _aux++) {
          free(ndev[_aux].hci_dev);
          }
          free(ndev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long host = 10;
          int _len_ndev0 = 100;
          struct nci_dev * ndev = (struct nci_dev *) malloc(_len_ndev0*sizeof(struct nci_dev));
          for(int _i0 = 0; _i0 < _len_ndev0; _i0++) {
              int _len_ndev__i0__hci_dev0 = 1;
          ndev[_i0].hci_dev = (struct TYPE_3__ *) malloc(_len_ndev__i0__hci_dev0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ndev__i0__hci_dev0; _j0++) {
              int _len_ndev__i0__hci_dev_pipes0 = 1;
          ndev[_i0].hci_dev->pipes = (struct TYPE_4__ *) malloc(_len_ndev__i0__hci_dev_pipes0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ndev__i0__hci_dev_pipes0; _j0++) {
            ndev[_i0].hci_dev->pipes->host = ((-2 * (next_i()%2)) + 1) * next_i();
        ndev[_i0].hci_dev->pipes->gate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          nci_hci_reset_pipes_per_host(ndev,host);
          for(int _aux = 0; _aux < _len_ndev0; _aux++) {
          free(ndev[_aux].hci_dev);
          }
          free(ndev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
