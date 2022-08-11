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
struct pata_macio_priv {int kind; unsigned int** treg; } ;

/* Variables and functions */
#define  controller_heathrow 134 
#define  controller_k2_ata6 133 
#define  controller_kl_ata3 132 
#define  controller_kl_ata4 131 
#define  controller_ohare 130 
#define  controller_sh_ata6 129 
#define  controller_un_ata6 128 

__attribute__((used)) static void pata_macio_default_timings(struct pata_macio_priv *priv)
{
	unsigned int value, value2 = 0;

	switch(priv->kind) {
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
	priv->treg[0][0] = priv->treg[1][0] = value;
	priv->treg[0][1] = priv->treg[1][1] = value2;
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
          int _len_priv0 = 1;
          struct pata_macio_priv * priv = (struct pata_macio_priv *) malloc(_len_priv0*sizeof(struct pata_macio_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].kind = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__treg0 = 1;
          priv[_i0].treg = (unsigned int **) malloc(_len_priv__i0__treg0*sizeof(unsigned int *));
          for(int _j0 = 0; _j0 < _len_priv__i0__treg0; _j0++) {
            int _len_priv__i0__treg1 = 1;
            priv[_i0].treg[_j0] = (unsigned int *) malloc(_len_priv__i0__treg1*sizeof(unsigned int));
            for(int _j1 = 0; _j1 < _len_priv__i0__treg1; _j1++) {
              priv[_i0].treg[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          pata_macio_default_timings(priv);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(*(priv[_aux].treg));
        free(priv[_aux].treg);
          }
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_priv0 = 65025;
          struct pata_macio_priv * priv = (struct pata_macio_priv *) malloc(_len_priv0*sizeof(struct pata_macio_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].kind = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__treg0 = 1;
          priv[_i0].treg = (unsigned int **) malloc(_len_priv__i0__treg0*sizeof(unsigned int *));
          for(int _j0 = 0; _j0 < _len_priv__i0__treg0; _j0++) {
            int _len_priv__i0__treg1 = 1;
            priv[_i0].treg[_j0] = (unsigned int *) malloc(_len_priv__i0__treg1*sizeof(unsigned int));
            for(int _j1 = 0; _j1 < _len_priv__i0__treg1; _j1++) {
              priv[_i0].treg[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          pata_macio_default_timings(priv);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(*(priv[_aux].treg));
        free(priv[_aux].treg);
          }
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_priv0 = 100;
          struct pata_macio_priv * priv = (struct pata_macio_priv *) malloc(_len_priv0*sizeof(struct pata_macio_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].kind = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__treg0 = 1;
          priv[_i0].treg = (unsigned int **) malloc(_len_priv__i0__treg0*sizeof(unsigned int *));
          for(int _j0 = 0; _j0 < _len_priv__i0__treg0; _j0++) {
            int _len_priv__i0__treg1 = 1;
            priv[_i0].treg[_j0] = (unsigned int *) malloc(_len_priv__i0__treg1*sizeof(unsigned int));
            for(int _j1 = 0; _j1 < _len_priv__i0__treg1; _j1++) {
              priv[_i0].treg[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          pata_macio_default_timings(priv);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(*(priv[_aux].treg));
        free(priv[_aux].treg);
          }
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
