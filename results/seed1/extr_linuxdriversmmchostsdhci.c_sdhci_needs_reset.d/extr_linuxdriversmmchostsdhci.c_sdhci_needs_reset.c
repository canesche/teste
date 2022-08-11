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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct sdhci_host {int flags; int quirks; } ;
struct mmc_request {TYPE_2__* data; TYPE_4__* sbc; TYPE_3__* cmd; } ;
struct TYPE_8__ {scalar_t__ error; } ;
struct TYPE_7__ {scalar_t__ error; } ;
struct TYPE_6__ {TYPE_1__* stop; } ;
struct TYPE_5__ {scalar_t__ error; } ;

/* Variables and functions */
 int SDHCI_DEVICE_DEAD ; 
 int SDHCI_QUIRK_RESET_AFTER_REQUEST ; 

__attribute__((used)) static bool sdhci_needs_reset(struct sdhci_host *host, struct mmc_request *mrq)
{
	return (!(host->flags & SDHCI_DEVICE_DEAD) &&
		((mrq->cmd && mrq->cmd->error) ||
		 (mrq->sbc && mrq->sbc->error) ||
		 (mrq->data && mrq->data->stop && mrq->data->stop->error) ||
		 (host->quirks & SDHCI_QUIRK_RESET_AFTER_REQUEST)));
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
          int _len_host0 = 1;
          struct sdhci_host * host = (struct sdhci_host *) malloc(_len_host0*sizeof(struct sdhci_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].quirks = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mrq0 = 1;
          struct mmc_request * mrq = (struct mmc_request *) malloc(_len_mrq0*sizeof(struct mmc_request));
          for(int _i0 = 0; _i0 < _len_mrq0; _i0++) {
              int _len_mrq__i0__data0 = 1;
          mrq[_i0].data = (struct TYPE_6__ *) malloc(_len_mrq__i0__data0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_mrq__i0__data0; _j0++) {
              int _len_mrq__i0__data_stop0 = 1;
          mrq[_i0].data->stop = (struct TYPE_5__ *) malloc(_len_mrq__i0__data_stop0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_mrq__i0__data_stop0; _j0++) {
            mrq[_i0].data->stop->error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mrq__i0__sbc0 = 1;
          mrq[_i0].sbc = (struct TYPE_8__ *) malloc(_len_mrq__i0__sbc0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_mrq__i0__sbc0; _j0++) {
            mrq[_i0].sbc->error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mrq__i0__cmd0 = 1;
          mrq[_i0].cmd = (struct TYPE_7__ *) malloc(_len_mrq__i0__cmd0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_mrq__i0__cmd0; _j0++) {
            mrq[_i0].cmd->error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = sdhci_needs_reset(host,mrq);
          printf("%d\n", benchRet); 
          free(host);
          for(int _aux = 0; _aux < _len_mrq0; _aux++) {
          free(mrq[_aux].data);
          }
          for(int _aux = 0; _aux < _len_mrq0; _aux++) {
          free(mrq[_aux].sbc);
          }
          for(int _aux = 0; _aux < _len_mrq0; _aux++) {
          free(mrq[_aux].cmd);
          }
          free(mrq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_host0 = 65025;
          struct sdhci_host * host = (struct sdhci_host *) malloc(_len_host0*sizeof(struct sdhci_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].quirks = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mrq0 = 65025;
          struct mmc_request * mrq = (struct mmc_request *) malloc(_len_mrq0*sizeof(struct mmc_request));
          for(int _i0 = 0; _i0 < _len_mrq0; _i0++) {
              int _len_mrq__i0__data0 = 1;
          mrq[_i0].data = (struct TYPE_6__ *) malloc(_len_mrq__i0__data0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_mrq__i0__data0; _j0++) {
              int _len_mrq__i0__data_stop0 = 1;
          mrq[_i0].data->stop = (struct TYPE_5__ *) malloc(_len_mrq__i0__data_stop0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_mrq__i0__data_stop0; _j0++) {
            mrq[_i0].data->stop->error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mrq__i0__sbc0 = 1;
          mrq[_i0].sbc = (struct TYPE_8__ *) malloc(_len_mrq__i0__sbc0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_mrq__i0__sbc0; _j0++) {
            mrq[_i0].sbc->error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mrq__i0__cmd0 = 1;
          mrq[_i0].cmd = (struct TYPE_7__ *) malloc(_len_mrq__i0__cmd0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_mrq__i0__cmd0; _j0++) {
            mrq[_i0].cmd->error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = sdhci_needs_reset(host,mrq);
          printf("%d\n", benchRet); 
          free(host);
          for(int _aux = 0; _aux < _len_mrq0; _aux++) {
          free(mrq[_aux].data);
          }
          for(int _aux = 0; _aux < _len_mrq0; _aux++) {
          free(mrq[_aux].sbc);
          }
          for(int _aux = 0; _aux < _len_mrq0; _aux++) {
          free(mrq[_aux].cmd);
          }
          free(mrq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_host0 = 100;
          struct sdhci_host * host = (struct sdhci_host *) malloc(_len_host0*sizeof(struct sdhci_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].quirks = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mrq0 = 100;
          struct mmc_request * mrq = (struct mmc_request *) malloc(_len_mrq0*sizeof(struct mmc_request));
          for(int _i0 = 0; _i0 < _len_mrq0; _i0++) {
              int _len_mrq__i0__data0 = 1;
          mrq[_i0].data = (struct TYPE_6__ *) malloc(_len_mrq__i0__data0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_mrq__i0__data0; _j0++) {
              int _len_mrq__i0__data_stop0 = 1;
          mrq[_i0].data->stop = (struct TYPE_5__ *) malloc(_len_mrq__i0__data_stop0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_mrq__i0__data_stop0; _j0++) {
            mrq[_i0].data->stop->error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mrq__i0__sbc0 = 1;
          mrq[_i0].sbc = (struct TYPE_8__ *) malloc(_len_mrq__i0__sbc0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_mrq__i0__sbc0; _j0++) {
            mrq[_i0].sbc->error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mrq__i0__cmd0 = 1;
          mrq[_i0].cmd = (struct TYPE_7__ *) malloc(_len_mrq__i0__cmd0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_mrq__i0__cmd0; _j0++) {
            mrq[_i0].cmd->error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = sdhci_needs_reset(host,mrq);
          printf("%d\n", benchRet); 
          free(host);
          for(int _aux = 0; _aux < _len_mrq0; _aux++) {
          free(mrq[_aux].data);
          }
          for(int _aux = 0; _aux < _len_mrq0; _aux++) {
          free(mrq[_aux].sbc);
          }
          for(int _aux = 0; _aux < _len_mrq0; _aux++) {
          free(mrq[_aux].cmd);
          }
          free(mrq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
