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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int kind; unsigned int* timings; } ;
typedef  TYPE_1__ pmac_ide_hwif_t ;

/* Variables and functions */
#define  controller_heathrow 134 
#define  controller_k2_ata6 133 
#define  controller_kl_ata3 132 
#define  controller_kl_ata4 131 
#define  controller_ohare 130 
#define  controller_sh_ata6 129 
#define  controller_un_ata6 128 

__attribute__((used)) static void
sanitize_timings(pmac_ide_hwif_t *pmif)
{
	unsigned int value, value2 = 0;
	
	switch(pmif->kind) {
		case controller_sh_ata6:
			value = 0x0a820c97;
			value2 = 0x00033031;
			break;
		case controller_un_ata6:
		case controller_k2_ata6:
			value = 0x08618a92;
			value2 = 0x00002921;
			break;
		case controller_kl_ata4:
			value = 0x0008438c;
			break;
		case controller_kl_ata3:
			value = 0x00084526;
			break;
		case controller_heathrow:
		case controller_ohare:
		default:
			value = 0x00074526;
			break;
	}
	pmif->timings[0] = pmif->timings[1] = value;
	pmif->timings[2] = pmif->timings[3] = value2;
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
          int _len_pmif0 = 1;
          struct TYPE_3__ * pmif = (struct TYPE_3__ *) malloc(_len_pmif0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pmif0; _i0++) {
            pmif[_i0].kind = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pmif__i0__timings0 = 1;
          pmif[_i0].timings = (unsigned int *) malloc(_len_pmif__i0__timings0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_pmif__i0__timings0; _j0++) {
            pmif[_i0].timings[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sanitize_timings(pmif);
          for(int _aux = 0; _aux < _len_pmif0; _aux++) {
          free(pmif[_aux].timings);
          }
          free(pmif);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pmif0 = 65025;
          struct TYPE_3__ * pmif = (struct TYPE_3__ *) malloc(_len_pmif0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pmif0; _i0++) {
            pmif[_i0].kind = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pmif__i0__timings0 = 1;
          pmif[_i0].timings = (unsigned int *) malloc(_len_pmif__i0__timings0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_pmif__i0__timings0; _j0++) {
            pmif[_i0].timings[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sanitize_timings(pmif);
          for(int _aux = 0; _aux < _len_pmif0; _aux++) {
          free(pmif[_aux].timings);
          }
          free(pmif);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pmif0 = 100;
          struct TYPE_3__ * pmif = (struct TYPE_3__ *) malloc(_len_pmif0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pmif0; _i0++) {
            pmif[_i0].kind = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pmif__i0__timings0 = 1;
          pmif[_i0].timings = (unsigned int *) malloc(_len_pmif__i0__timings0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_pmif__i0__timings0; _j0++) {
            pmif[_i0].timings[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sanitize_timings(pmif);
          for(int _aux = 0; _aux < _len_pmif0; _aux++) {
          free(pmif[_aux].timings);
          }
          free(pmif);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
