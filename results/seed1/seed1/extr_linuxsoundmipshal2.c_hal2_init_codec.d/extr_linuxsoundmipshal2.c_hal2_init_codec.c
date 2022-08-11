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
struct hpc3_regs {int /*<<< orphan*/ * pbdma; } ;
struct TYPE_2__ {int pbusnr; int /*<<< orphan*/ * pbus; } ;
struct hal2_codec {TYPE_1__ pbus; } ;

/* Variables and functions */

__attribute__((used)) static void hal2_init_codec(struct hal2_codec *codec, struct hpc3_regs *hpc3,
			    int index)
{
	codec->pbus.pbusnr = index;
	codec->pbus.pbus = &hpc3->pbdma[index];
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
          int index = 100;
          int _len_codec0 = 1;
          struct hal2_codec * codec = (struct hal2_codec *) malloc(_len_codec0*sizeof(struct hal2_codec));
          for(int _i0 = 0; _i0 < _len_codec0; _i0++) {
            codec[_i0].pbus.pbusnr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_codec__i0__pbus_pbus0 = 1;
          codec[_i0].pbus.pbus = (int *) malloc(_len_codec__i0__pbus_pbus0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_codec__i0__pbus_pbus0; _j0++) {
            codec[_i0].pbus.pbus[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_hpc30 = 1;
          struct hpc3_regs * hpc3 = (struct hpc3_regs *) malloc(_len_hpc30*sizeof(struct hpc3_regs));
          for(int _i0 = 0; _i0 < _len_hpc30; _i0++) {
              int _len_hpc3__i0__pbdma0 = 1;
          hpc3[_i0].pbdma = (int *) malloc(_len_hpc3__i0__pbdma0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hpc3__i0__pbdma0; _j0++) {
            hpc3[_i0].pbdma[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          hal2_init_codec(codec,hpc3,index);
          free(codec);
          for(int _aux = 0; _aux < _len_hpc30; _aux++) {
          free(hpc3[_aux].pbdma);
          }
          free(hpc3);
        
        break;
    }
    // big-arr
    case 1:
    {
          int index = 255;
          int _len_codec0 = 65025;
          struct hal2_codec * codec = (struct hal2_codec *) malloc(_len_codec0*sizeof(struct hal2_codec));
          for(int _i0 = 0; _i0 < _len_codec0; _i0++) {
            codec[_i0].pbus.pbusnr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_codec__i0__pbus_pbus0 = 1;
          codec[_i0].pbus.pbus = (int *) malloc(_len_codec__i0__pbus_pbus0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_codec__i0__pbus_pbus0; _j0++) {
            codec[_i0].pbus.pbus[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_hpc30 = 65025;
          struct hpc3_regs * hpc3 = (struct hpc3_regs *) malloc(_len_hpc30*sizeof(struct hpc3_regs));
          for(int _i0 = 0; _i0 < _len_hpc30; _i0++) {
              int _len_hpc3__i0__pbdma0 = 1;
          hpc3[_i0].pbdma = (int *) malloc(_len_hpc3__i0__pbdma0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hpc3__i0__pbdma0; _j0++) {
            hpc3[_i0].pbdma[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          hal2_init_codec(codec,hpc3,index);
          free(codec);
          for(int _aux = 0; _aux < _len_hpc30; _aux++) {
          free(hpc3[_aux].pbdma);
          }
          free(hpc3);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int index = 10;
          int _len_codec0 = 100;
          struct hal2_codec * codec = (struct hal2_codec *) malloc(_len_codec0*sizeof(struct hal2_codec));
          for(int _i0 = 0; _i0 < _len_codec0; _i0++) {
            codec[_i0].pbus.pbusnr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_codec__i0__pbus_pbus0 = 1;
          codec[_i0].pbus.pbus = (int *) malloc(_len_codec__i0__pbus_pbus0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_codec__i0__pbus_pbus0; _j0++) {
            codec[_i0].pbus.pbus[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_hpc30 = 100;
          struct hpc3_regs * hpc3 = (struct hpc3_regs *) malloc(_len_hpc30*sizeof(struct hpc3_regs));
          for(int _i0 = 0; _i0 < _len_hpc30; _i0++) {
              int _len_hpc3__i0__pbdma0 = 1;
          hpc3[_i0].pbdma = (int *) malloc(_len_hpc3__i0__pbdma0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hpc3__i0__pbdma0; _j0++) {
            hpc3[_i0].pbdma[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          hal2_init_codec(codec,hpc3,index);
          free(codec);
          for(int _aux = 0; _aux < _len_hpc30; _aux++) {
          free(hpc3[_aux].pbdma);
          }
          free(hpc3);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
