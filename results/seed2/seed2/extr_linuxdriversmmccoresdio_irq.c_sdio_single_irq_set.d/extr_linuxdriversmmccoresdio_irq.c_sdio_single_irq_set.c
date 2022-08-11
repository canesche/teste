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
struct sdio_func {scalar_t__ irq_handler; } ;
struct mmc_card {int sdio_funcs; struct sdio_func* sdio_single_irq; struct sdio_func** sdio_func; TYPE_1__* host; } ;
struct TYPE_2__ {int caps; int sdio_irqs; } ;

/* Variables and functions */
 int MMC_CAP_SDIO_IRQ ; 

__attribute__((used)) static void sdio_single_irq_set(struct mmc_card *card)
{
	struct sdio_func *func;
	int i;

	card->sdio_single_irq = NULL;
	if ((card->host->caps & MMC_CAP_SDIO_IRQ) &&
	    card->host->sdio_irqs == 1)
		for (i = 0; i < card->sdio_funcs; i++) {
		       func = card->sdio_func[i];
		       if (func && func->irq_handler) {
			       card->sdio_single_irq = func;
			       break;
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
          int _len_card0 = 1;
          struct mmc_card * card = (struct mmc_card *) malloc(_len_card0*sizeof(struct mmc_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].sdio_funcs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_card__i0__sdio_single_irq0 = 1;
          card[_i0].sdio_single_irq = (struct sdio_func *) malloc(_len_card__i0__sdio_single_irq0*sizeof(struct sdio_func));
          for(int _j0 = 0; _j0 < _len_card__i0__sdio_single_irq0; _j0++) {
            card[_i0].sdio_single_irq->irq_handler = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_card__i0__sdio_func0 = 1;
          card[_i0].sdio_func = (struct sdio_func **) malloc(_len_card__i0__sdio_func0*sizeof(struct sdio_func *));
          for(int _j0 = 0; _j0 < _len_card__i0__sdio_func0; _j0++) {
            int _len_card__i0__sdio_func1 = 1;
            card[_i0].sdio_func[_j0] = (struct sdio_func *) malloc(_len_card__i0__sdio_func1*sizeof(struct sdio_func));
            for(int _j1 = 0; _j1 < _len_card__i0__sdio_func1; _j1++) {
              card[_i0].sdio_func[_j0]->irq_handler = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_card__i0__host0 = 1;
          card[_i0].host = (struct TYPE_2__ *) malloc(_len_card__i0__host0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_card__i0__host0; _j0++) {
            card[_i0].host->caps = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].host->sdio_irqs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sdio_single_irq_set(card);
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(card[_aux].sdio_single_irq);
          }
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(*(card[_aux].sdio_func));
        free(card[_aux].sdio_func);
          }
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(card[_aux].host);
          }
          free(card);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_card0 = 65025;
          struct mmc_card * card = (struct mmc_card *) malloc(_len_card0*sizeof(struct mmc_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].sdio_funcs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_card__i0__sdio_single_irq0 = 1;
          card[_i0].sdio_single_irq = (struct sdio_func *) malloc(_len_card__i0__sdio_single_irq0*sizeof(struct sdio_func));
          for(int _j0 = 0; _j0 < _len_card__i0__sdio_single_irq0; _j0++) {
            card[_i0].sdio_single_irq->irq_handler = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_card__i0__sdio_func0 = 1;
          card[_i0].sdio_func = (struct sdio_func **) malloc(_len_card__i0__sdio_func0*sizeof(struct sdio_func *));
          for(int _j0 = 0; _j0 < _len_card__i0__sdio_func0; _j0++) {
            int _len_card__i0__sdio_func1 = 1;
            card[_i0].sdio_func[_j0] = (struct sdio_func *) malloc(_len_card__i0__sdio_func1*sizeof(struct sdio_func));
            for(int _j1 = 0; _j1 < _len_card__i0__sdio_func1; _j1++) {
              card[_i0].sdio_func[_j0]->irq_handler = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_card__i0__host0 = 1;
          card[_i0].host = (struct TYPE_2__ *) malloc(_len_card__i0__host0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_card__i0__host0; _j0++) {
            card[_i0].host->caps = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].host->sdio_irqs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sdio_single_irq_set(card);
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(card[_aux].sdio_single_irq);
          }
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(*(card[_aux].sdio_func));
        free(card[_aux].sdio_func);
          }
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(card[_aux].host);
          }
          free(card);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_card0 = 100;
          struct mmc_card * card = (struct mmc_card *) malloc(_len_card0*sizeof(struct mmc_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].sdio_funcs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_card__i0__sdio_single_irq0 = 1;
          card[_i0].sdio_single_irq = (struct sdio_func *) malloc(_len_card__i0__sdio_single_irq0*sizeof(struct sdio_func));
          for(int _j0 = 0; _j0 < _len_card__i0__sdio_single_irq0; _j0++) {
            card[_i0].sdio_single_irq->irq_handler = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_card__i0__sdio_func0 = 1;
          card[_i0].sdio_func = (struct sdio_func **) malloc(_len_card__i0__sdio_func0*sizeof(struct sdio_func *));
          for(int _j0 = 0; _j0 < _len_card__i0__sdio_func0; _j0++) {
            int _len_card__i0__sdio_func1 = 1;
            card[_i0].sdio_func[_j0] = (struct sdio_func *) malloc(_len_card__i0__sdio_func1*sizeof(struct sdio_func));
            for(int _j1 = 0; _j1 < _len_card__i0__sdio_func1; _j1++) {
              card[_i0].sdio_func[_j0]->irq_handler = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_card__i0__host0 = 1;
          card[_i0].host = (struct TYPE_2__ *) malloc(_len_card__i0__host0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_card__i0__host0; _j0++) {
            card[_i0].host->caps = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].host->sdio_irqs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sdio_single_irq_set(card);
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(card[_aux].sdio_single_irq);
          }
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(*(card[_aux].sdio_func));
        free(card[_aux].sdio_func);
          }
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(card[_aux].host);
          }
          free(card);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
