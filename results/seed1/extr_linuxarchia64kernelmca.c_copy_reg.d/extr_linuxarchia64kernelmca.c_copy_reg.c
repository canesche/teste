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
typedef  unsigned long u64 ;

/* Variables and functions */

__attribute__((used)) static inline void
copy_reg(const u64 *fr, u64 fnat, unsigned long *tr, unsigned long *tnat)
{
	u64 fslot, tslot, nat;
	*tr = *fr;
	fslot = ((unsigned long)fr >> 3) & 63;
	tslot = ((unsigned long)tr >> 3) & 63;
	*tnat &= ~(1UL << tslot);
	nat = (fnat >> fslot) & 1;
	*tnat |= (nat << tslot);
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
          unsigned long fnat = 100;
          int _len_fr0 = 1;
          const unsigned long * fr = (const unsigned long *) malloc(_len_fr0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_fr0; _i0++) {
            fr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tr0 = 1;
          unsigned long * tr = (unsigned long *) malloc(_len_tr0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_tr0; _i0++) {
            tr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tnat0 = 1;
          unsigned long * tnat = (unsigned long *) malloc(_len_tnat0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_tnat0; _i0++) {
            tnat[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          copy_reg(fr,fnat,tr,tnat);
          free(fr);
          free(tr);
          free(tnat);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long fnat = 255;
          int _len_fr0 = 65025;
          const unsigned long * fr = (const unsigned long *) malloc(_len_fr0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_fr0; _i0++) {
            fr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tr0 = 65025;
          unsigned long * tr = (unsigned long *) malloc(_len_tr0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_tr0; _i0++) {
            tr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tnat0 = 65025;
          unsigned long * tnat = (unsigned long *) malloc(_len_tnat0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_tnat0; _i0++) {
            tnat[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          copy_reg(fr,fnat,tr,tnat);
          free(fr);
          free(tr);
          free(tnat);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long fnat = 10;
          int _len_fr0 = 100;
          const unsigned long * fr = (const unsigned long *) malloc(_len_fr0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_fr0; _i0++) {
            fr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tr0 = 100;
          unsigned long * tr = (unsigned long *) malloc(_len_tr0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_tr0; _i0++) {
            tr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tnat0 = 100;
          unsigned long * tnat = (unsigned long *) malloc(_len_tnat0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_tnat0; _i0++) {
            tnat[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          copy_reg(fr,fnat,tr,tnat);
          free(fr);
          free(tr);
          free(tnat);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
