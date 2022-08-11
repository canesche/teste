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
struct pwc_dec23_private {unsigned char** table_bitpowermask; } ;

/* Variables and functions */

__attribute__((used)) static void build_bit_powermask_table(struct pwc_dec23_private *pdec)
{
	unsigned char *p;
	unsigned int bit, byte, mask, val;
	unsigned int bitpower = 1;

	for (bit = 0; bit < 8; bit++) {
		mask = bitpower - 1;
		p = pdec->table_bitpowermask[bit];
		for (byte = 0; byte < 256; byte++) {
			val = (byte & mask);
			if (byte & bitpower)
				val = -val;
			*p++ = val;
		}
		bitpower<<=1;
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
          int _len_pdec0 = 1;
          struct pwc_dec23_private * pdec = (struct pwc_dec23_private *) malloc(_len_pdec0*sizeof(struct pwc_dec23_private));
          for(int _i0 = 0; _i0 < _len_pdec0; _i0++) {
              int _len_pdec__i0__table_bitpowermask0 = 1;
          pdec[_i0].table_bitpowermask = (unsigned char **) malloc(_len_pdec__i0__table_bitpowermask0*sizeof(unsigned char *));
          for(int _j0 = 0; _j0 < _len_pdec__i0__table_bitpowermask0; _j0++) {
            int _len_pdec__i0__table_bitpowermask1 = 1;
            pdec[_i0].table_bitpowermask[_j0] = (unsigned char *) malloc(_len_pdec__i0__table_bitpowermask1*sizeof(unsigned char));
            for(int _j1 = 0; _j1 < _len_pdec__i0__table_bitpowermask1; _j1++) {
              pdec[_i0].table_bitpowermask[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          build_bit_powermask_table(pdec);
          for(int _aux = 0; _aux < _len_pdec0; _aux++) {
          free(*(pdec[_aux].table_bitpowermask));
        free(pdec[_aux].table_bitpowermask);
          }
          free(pdec);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pdec0 = 65025;
          struct pwc_dec23_private * pdec = (struct pwc_dec23_private *) malloc(_len_pdec0*sizeof(struct pwc_dec23_private));
          for(int _i0 = 0; _i0 < _len_pdec0; _i0++) {
              int _len_pdec__i0__table_bitpowermask0 = 1;
          pdec[_i0].table_bitpowermask = (unsigned char **) malloc(_len_pdec__i0__table_bitpowermask0*sizeof(unsigned char *));
          for(int _j0 = 0; _j0 < _len_pdec__i0__table_bitpowermask0; _j0++) {
            int _len_pdec__i0__table_bitpowermask1 = 1;
            pdec[_i0].table_bitpowermask[_j0] = (unsigned char *) malloc(_len_pdec__i0__table_bitpowermask1*sizeof(unsigned char));
            for(int _j1 = 0; _j1 < _len_pdec__i0__table_bitpowermask1; _j1++) {
              pdec[_i0].table_bitpowermask[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          build_bit_powermask_table(pdec);
          for(int _aux = 0; _aux < _len_pdec0; _aux++) {
          free(*(pdec[_aux].table_bitpowermask));
        free(pdec[_aux].table_bitpowermask);
          }
          free(pdec);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pdec0 = 100;
          struct pwc_dec23_private * pdec = (struct pwc_dec23_private *) malloc(_len_pdec0*sizeof(struct pwc_dec23_private));
          for(int _i0 = 0; _i0 < _len_pdec0; _i0++) {
              int _len_pdec__i0__table_bitpowermask0 = 1;
          pdec[_i0].table_bitpowermask = (unsigned char **) malloc(_len_pdec__i0__table_bitpowermask0*sizeof(unsigned char *));
          for(int _j0 = 0; _j0 < _len_pdec__i0__table_bitpowermask0; _j0++) {
            int _len_pdec__i0__table_bitpowermask1 = 1;
            pdec[_i0].table_bitpowermask[_j0] = (unsigned char *) malloc(_len_pdec__i0__table_bitpowermask1*sizeof(unsigned char));
            for(int _j1 = 0; _j1 < _len_pdec__i0__table_bitpowermask1; _j1++) {
              pdec[_i0].table_bitpowermask[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          build_bit_powermask_table(pdec);
          for(int _aux = 0; _aux < _len_pdec0; _aux++) {
          free(*(pdec[_aux].table_bitpowermask));
        free(pdec[_aux].table_bitpowermask);
          }
          free(pdec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
