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
typedef  int /*<<< orphan*/  adns_state ;
struct TYPE_2__ {scalar_t__ i; } ;
typedef  TYPE_1__ adns_rr_intstr ;

/* Variables and functions */

__attribute__((used)) static int di_mx_raw(adns_state ads, const void *datap_a, const void *datap_b) {
  const adns_rr_intstr *ap= datap_a, *bp= datap_b;

  if (ap->i < bp->i) return 0;
  if (ap->i > bp->i) return 1;
  return 0;
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
          int ads = 100;
          int _len_datap_a0 = 1;
          const void * datap_a = (const void *) malloc(_len_datap_a0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_datap_a0; _i0++) {
            datap_a[_i0] = 0;
          }
          int _len_datap_b0 = 1;
          const void * datap_b = (const void *) malloc(_len_datap_b0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_datap_b0; _i0++) {
            datap_b[_i0] = 0;
          }
          int benchRet = di_mx_raw(ads,datap_a,datap_b);
          printf("%d\n", benchRet); 
          free(datap_a);
          free(datap_b);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ads = 255;
          int _len_datap_a0 = 65025;
          const void * datap_a = (const void *) malloc(_len_datap_a0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_datap_a0; _i0++) {
            datap_a[_i0] = 0;
          }
          int _len_datap_b0 = 65025;
          const void * datap_b = (const void *) malloc(_len_datap_b0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_datap_b0; _i0++) {
            datap_b[_i0] = 0;
          }
          int benchRet = di_mx_raw(ads,datap_a,datap_b);
          printf("%d\n", benchRet); 
          free(datap_a);
          free(datap_b);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ads = 10;
          int _len_datap_a0 = 100;
          const void * datap_a = (const void *) malloc(_len_datap_a0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_datap_a0; _i0++) {
            datap_a[_i0] = 0;
          }
          int _len_datap_b0 = 100;
          const void * datap_b = (const void *) malloc(_len_datap_b0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_datap_b0; _i0++) {
            datap_b[_i0] = 0;
          }
          int benchRet = di_mx_raw(ads,datap_a,datap_b);
          printf("%d\n", benchRet); 
          free(datap_a);
          free(datap_b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
