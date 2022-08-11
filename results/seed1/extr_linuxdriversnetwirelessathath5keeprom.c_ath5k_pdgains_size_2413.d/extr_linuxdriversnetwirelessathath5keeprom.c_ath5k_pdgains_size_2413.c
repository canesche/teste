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
struct ath5k_eeprom_info {int* ee_pd_gains; unsigned int* ee_n_piers; } ;

/* Variables and functions */

__attribute__((used)) static inline unsigned int
ath5k_pdgains_size_2413(struct ath5k_eeprom_info *ee, unsigned int mode)
{
	static const unsigned int pdgains_size[] = { 4, 6, 9, 12 };
	unsigned int sz;

	sz = pdgains_size[ee->ee_pd_gains[mode] - 1];
	sz *= ee->ee_n_piers[mode];

	return sz;
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
          unsigned int mode = 100;
          int _len_ee0 = 1;
          struct ath5k_eeprom_info * ee = (struct ath5k_eeprom_info *) malloc(_len_ee0*sizeof(struct ath5k_eeprom_info));
          for(int _i0 = 0; _i0 < _len_ee0; _i0++) {
              int _len_ee__i0__ee_pd_gains0 = 1;
          ee[_i0].ee_pd_gains = (int *) malloc(_len_ee__i0__ee_pd_gains0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ee__i0__ee_pd_gains0; _j0++) {
            ee[_i0].ee_pd_gains[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ee__i0__ee_n_piers0 = 1;
          ee[_i0].ee_n_piers = (unsigned int *) malloc(_len_ee__i0__ee_n_piers0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_ee__i0__ee_n_piers0; _j0++) {
            ee[_i0].ee_n_piers[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = ath5k_pdgains_size_2413(ee,mode);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_ee0; _aux++) {
          free(ee[_aux].ee_pd_gains);
          }
          for(int _aux = 0; _aux < _len_ee0; _aux++) {
          free(ee[_aux].ee_n_piers);
          }
          free(ee);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int mode = 255;
          int _len_ee0 = 65025;
          struct ath5k_eeprom_info * ee = (struct ath5k_eeprom_info *) malloc(_len_ee0*sizeof(struct ath5k_eeprom_info));
          for(int _i0 = 0; _i0 < _len_ee0; _i0++) {
              int _len_ee__i0__ee_pd_gains0 = 1;
          ee[_i0].ee_pd_gains = (int *) malloc(_len_ee__i0__ee_pd_gains0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ee__i0__ee_pd_gains0; _j0++) {
            ee[_i0].ee_pd_gains[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ee__i0__ee_n_piers0 = 1;
          ee[_i0].ee_n_piers = (unsigned int *) malloc(_len_ee__i0__ee_n_piers0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_ee__i0__ee_n_piers0; _j0++) {
            ee[_i0].ee_n_piers[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = ath5k_pdgains_size_2413(ee,mode);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_ee0; _aux++) {
          free(ee[_aux].ee_pd_gains);
          }
          for(int _aux = 0; _aux < _len_ee0; _aux++) {
          free(ee[_aux].ee_n_piers);
          }
          free(ee);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int mode = 10;
          int _len_ee0 = 100;
          struct ath5k_eeprom_info * ee = (struct ath5k_eeprom_info *) malloc(_len_ee0*sizeof(struct ath5k_eeprom_info));
          for(int _i0 = 0; _i0 < _len_ee0; _i0++) {
              int _len_ee__i0__ee_pd_gains0 = 1;
          ee[_i0].ee_pd_gains = (int *) malloc(_len_ee__i0__ee_pd_gains0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ee__i0__ee_pd_gains0; _j0++) {
            ee[_i0].ee_pd_gains[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ee__i0__ee_n_piers0 = 1;
          ee[_i0].ee_n_piers = (unsigned int *) malloc(_len_ee__i0__ee_n_piers0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_ee__i0__ee_n_piers0; _j0++) {
            ee[_i0].ee_n_piers[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = ath5k_pdgains_size_2413(ee,mode);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_ee0; _aux++) {
          free(ee[_aux].ee_pd_gains);
          }
          for(int _aux = 0; _aux < _len_ee0; _aux++) {
          free(ee[_aux].ee_n_piers);
          }
          free(ee);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
