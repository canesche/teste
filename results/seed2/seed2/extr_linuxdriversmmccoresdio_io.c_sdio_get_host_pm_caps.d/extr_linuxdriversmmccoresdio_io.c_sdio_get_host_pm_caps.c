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
struct sdio_func {TYPE_2__* card; } ;
typedef  int /*<<< orphan*/  mmc_pm_flag_t ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {int /*<<< orphan*/  pm_caps; } ;

/* Variables and functions */

mmc_pm_flag_t sdio_get_host_pm_caps(struct sdio_func *func)
{
	if (!func)
		return 0;

	return func->card->host->pm_caps;
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
          int _len_func0 = 1;
          struct sdio_func * func = (struct sdio_func *) malloc(_len_func0*sizeof(struct sdio_func));
          for(int _i0 = 0; _i0 < _len_func0; _i0++) {
              int _len_func__i0__card0 = 1;
          func[_i0].card = (struct TYPE_4__ *) malloc(_len_func__i0__card0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_func__i0__card0; _j0++) {
              int _len_func__i0__card_host0 = 1;
          func[_i0].card->host = (struct TYPE_3__ *) malloc(_len_func__i0__card_host0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_func__i0__card_host0; _j0++) {
            func[_i0].card->host->pm_caps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = sdio_get_host_pm_caps(func);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_func0; _aux++) {
          free(func[_aux].card);
          }
          free(func);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_func0 = 65025;
          struct sdio_func * func = (struct sdio_func *) malloc(_len_func0*sizeof(struct sdio_func));
          for(int _i0 = 0; _i0 < _len_func0; _i0++) {
              int _len_func__i0__card0 = 1;
          func[_i0].card = (struct TYPE_4__ *) malloc(_len_func__i0__card0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_func__i0__card0; _j0++) {
              int _len_func__i0__card_host0 = 1;
          func[_i0].card->host = (struct TYPE_3__ *) malloc(_len_func__i0__card_host0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_func__i0__card_host0; _j0++) {
            func[_i0].card->host->pm_caps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = sdio_get_host_pm_caps(func);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_func0; _aux++) {
          free(func[_aux].card);
          }
          free(func);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_func0 = 100;
          struct sdio_func * func = (struct sdio_func *) malloc(_len_func0*sizeof(struct sdio_func));
          for(int _i0 = 0; _i0 < _len_func0; _i0++) {
              int _len_func__i0__card0 = 1;
          func[_i0].card = (struct TYPE_4__ *) malloc(_len_func__i0__card0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_func__i0__card0; _j0++) {
              int _len_func__i0__card_host0 = 1;
          func[_i0].card->host = (struct TYPE_3__ *) malloc(_len_func__i0__card_host0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_func__i0__card_host0; _j0++) {
            func[_i0].card->host->pm_caps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = sdio_get_host_pm_caps(func);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_func0; _aux++) {
          free(func[_aux].card);
          }
          free(func);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
