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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/  pci_irq; } ;
struct soc_pcmcia_socket {size_t nr; TYPE_1__ socket; TYPE_2__* stat; } ;
struct TYPE_6__ {scalar_t__ cd_irq; int /*<<< orphan*/  irq; int /*<<< orphan*/  cd_irq_str; } ;
struct TYPE_5__ {scalar_t__ irq; int /*<<< orphan*/  name; } ;

/* Variables and functions */
 TYPE_3__* SCOOP_DEV ; 
 size_t SOC_STAT_CD ; 

__attribute__((used)) static int sharpsl_pcmcia_hw_init(struct soc_pcmcia_socket *skt)
{
	if (SCOOP_DEV[skt->nr].cd_irq >= 0) {
		skt->stat[SOC_STAT_CD].irq = SCOOP_DEV[skt->nr].cd_irq;
		skt->stat[SOC_STAT_CD].name = SCOOP_DEV[skt->nr].cd_irq_str;
	}

	skt->socket.pci_irq = SCOOP_DEV[skt->nr].irq;

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
          int _len_skt0 = 1;
          struct soc_pcmcia_socket * skt = (struct soc_pcmcia_socket *) malloc(_len_skt0*sizeof(struct soc_pcmcia_socket));
          for(int _i0 = 0; _i0 < _len_skt0; _i0++) {
            skt[_i0].nr = ((-2 * (next_i()%2)) + 1) * next_i();
        skt[_i0].socket.pci_irq = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_skt__i0__stat0 = 1;
          skt[_i0].stat = (struct TYPE_5__ *) malloc(_len_skt__i0__stat0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_skt__i0__stat0; _j0++) {
            skt[_i0].stat->irq = ((-2 * (next_i()%2)) + 1) * next_i();
        skt[_i0].stat->name = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = sharpsl_pcmcia_hw_init(skt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_skt0; _aux++) {
          free(skt[_aux].stat);
          }
          free(skt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_skt0 = 65025;
          struct soc_pcmcia_socket * skt = (struct soc_pcmcia_socket *) malloc(_len_skt0*sizeof(struct soc_pcmcia_socket));
          for(int _i0 = 0; _i0 < _len_skt0; _i0++) {
            skt[_i0].nr = ((-2 * (next_i()%2)) + 1) * next_i();
        skt[_i0].socket.pci_irq = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_skt__i0__stat0 = 1;
          skt[_i0].stat = (struct TYPE_5__ *) malloc(_len_skt__i0__stat0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_skt__i0__stat0; _j0++) {
            skt[_i0].stat->irq = ((-2 * (next_i()%2)) + 1) * next_i();
        skt[_i0].stat->name = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = sharpsl_pcmcia_hw_init(skt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_skt0; _aux++) {
          free(skt[_aux].stat);
          }
          free(skt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_skt0 = 100;
          struct soc_pcmcia_socket * skt = (struct soc_pcmcia_socket *) malloc(_len_skt0*sizeof(struct soc_pcmcia_socket));
          for(int _i0 = 0; _i0 < _len_skt0; _i0++) {
            skt[_i0].nr = ((-2 * (next_i()%2)) + 1) * next_i();
        skt[_i0].socket.pci_irq = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_skt__i0__stat0 = 1;
          skt[_i0].stat = (struct TYPE_5__ *) malloc(_len_skt__i0__stat0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_skt__i0__stat0; _j0++) {
            skt[_i0].stat->irq = ((-2 * (next_i()%2)) + 1) * next_i();
        skt[_i0].stat->name = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = sharpsl_pcmcia_hw_init(skt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_skt0; _aux++) {
          free(skt[_aux].stat);
          }
          free(skt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
