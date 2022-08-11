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
typedef  size_t u32 ;
typedef  int u16 ;
struct brcm_rateset {size_t count; int* rates; } ;

/* Variables and functions */
 int BRCMS_RATE_FLAG ; 
 int BRCMS_RATE_MASK ; 

__attribute__((used)) static void brcms_set_basic_rate(struct brcm_rateset *rs, u16 rate, bool is_br)
{
	u32 i;

	for (i = 0; i < rs->count; i++) {
		if (rate != (rs->rates[i] & 0x7f))
			continue;

		if (is_br)
			rs->rates[i] |= BRCMS_RATE_FLAG;
		else
			rs->rates[i] &= BRCMS_RATE_MASK;
		return;
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
          int rate = 100;
          int is_br = 100;
          int _len_rs0 = 1;
          struct brcm_rateset * rs = (struct brcm_rateset *) malloc(_len_rs0*sizeof(struct brcm_rateset));
          for(int _i0 = 0; _i0 < _len_rs0; _i0++) {
            rs[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rs__i0__rates0 = 1;
          rs[_i0].rates = (int *) malloc(_len_rs__i0__rates0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rs__i0__rates0; _j0++) {
            rs[_i0].rates[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          brcms_set_basic_rate(rs,rate,is_br);
          for(int _aux = 0; _aux < _len_rs0; _aux++) {
          free(rs[_aux].rates);
          }
          free(rs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int rate = 255;
          int is_br = 255;
          int _len_rs0 = 65025;
          struct brcm_rateset * rs = (struct brcm_rateset *) malloc(_len_rs0*sizeof(struct brcm_rateset));
          for(int _i0 = 0; _i0 < _len_rs0; _i0++) {
            rs[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rs__i0__rates0 = 1;
          rs[_i0].rates = (int *) malloc(_len_rs__i0__rates0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rs__i0__rates0; _j0++) {
            rs[_i0].rates[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          brcms_set_basic_rate(rs,rate,is_br);
          for(int _aux = 0; _aux < _len_rs0; _aux++) {
          free(rs[_aux].rates);
          }
          free(rs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int rate = 10;
          int is_br = 10;
          int _len_rs0 = 100;
          struct brcm_rateset * rs = (struct brcm_rateset *) malloc(_len_rs0*sizeof(struct brcm_rateset));
          for(int _i0 = 0; _i0 < _len_rs0; _i0++) {
            rs[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rs__i0__rates0 = 1;
          rs[_i0].rates = (int *) malloc(_len_rs__i0__rates0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rs__i0__rates0; _j0++) {
            rs[_i0].rates[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          brcms_set_basic_rate(rs,rate,is_br);
          for(int _aux = 0; _aux < _len_rs0; _aux++) {
          free(rs[_aux].rates);
          }
          free(rs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
