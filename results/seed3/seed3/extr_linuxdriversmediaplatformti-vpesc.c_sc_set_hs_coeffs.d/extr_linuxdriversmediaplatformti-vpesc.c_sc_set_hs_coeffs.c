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
typedef  int /*<<< orphan*/  u16 ;
struct sc_data {int load_coeff_h; } ;

/* Variables and functions */
 int HS_LE_16_16_SCALE ; 
 int HS_LT_9_16_SCALE ; 
 int HS_UP_SCALE ; 
 int SC_H_NUM_TAPS ; 
 int SC_NUM_PHASES ; 
 int SC_NUM_TAPS_MEM_ALIGN ; 
 int /*<<< orphan*/ ** scaler_hs_coeffs ; 

void sc_set_hs_coeffs(struct sc_data *sc, void *addr, unsigned int src_w,
		unsigned int dst_w)
{
	int sixteenths;
	int idx;
	int i, j;
	u16 *coeff_h = addr;
	const u16 *cp;

	if (dst_w > src_w) {
		idx = HS_UP_SCALE;
	} else {
		if ((dst_w << 1) < src_w)
			dst_w <<= 1;	/* first level decimation */
		if ((dst_w << 1) < src_w)
			dst_w <<= 1;	/* second level decimation */

		if (dst_w == src_w) {
			idx = HS_LE_16_16_SCALE;
		} else {
			sixteenths = (dst_w << 4) / src_w;
			if (sixteenths < 8)
				sixteenths = 8;
			idx = HS_LT_9_16_SCALE + sixteenths - 8;
		}
	}

	cp = scaler_hs_coeffs[idx];

	for (i = 0; i < SC_NUM_PHASES * 2; i++) {
		for (j = 0; j < SC_H_NUM_TAPS; j++)
			*coeff_h++ = *cp++;
		/*
		 * for each phase, the scaler expects space for 8 coefficients
		 * in it's memory. For the horizontal scaler, we copy the first
		 * 7 coefficients and skip the last slot to move to the next
		 * row to hold coefficients for the next phase
		 */
		coeff_h += SC_NUM_TAPS_MEM_ALIGN - SC_H_NUM_TAPS;
	}

	sc->load_coeff_h = true;
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
          unsigned int src_w = 100;
          unsigned int dst_w = 100;
          int _len_sc0 = 1;
          struct sc_data * sc = (struct sc_data *) malloc(_len_sc0*sizeof(struct sc_data));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].load_coeff_h = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * addr;
          sc_set_hs_coeffs(sc,addr,src_w,dst_w);
          free(sc);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int src_w = 255;
          unsigned int dst_w = 255;
          int _len_sc0 = 65025;
          struct sc_data * sc = (struct sc_data *) malloc(_len_sc0*sizeof(struct sc_data));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].load_coeff_h = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * addr;
          sc_set_hs_coeffs(sc,addr,src_w,dst_w);
          free(sc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int src_w = 10;
          unsigned int dst_w = 10;
          int _len_sc0 = 100;
          struct sc_data * sc = (struct sc_data *) malloc(_len_sc0*sizeof(struct sc_data));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].load_coeff_h = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * addr;
          sc_set_hs_coeffs(sc,addr,src_w,dst_w);
          free(sc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
