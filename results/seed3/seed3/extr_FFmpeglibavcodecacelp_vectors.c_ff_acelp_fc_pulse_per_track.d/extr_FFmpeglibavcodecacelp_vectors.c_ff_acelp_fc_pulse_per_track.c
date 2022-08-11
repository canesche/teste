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
typedef  int uint8_t ;
typedef  int int16_t ;

/* Variables and functions */

void ff_acelp_fc_pulse_per_track(
        int16_t* fc_v,
        const uint8_t *tab1,
        const uint8_t *tab2,
        int pulse_indexes,
        int pulse_signs,
        int pulse_count,
        int bits)
{
    int mask = (1 << bits) - 1;
    int i;

    for(i=0; i<pulse_count; i++)
    {
        fc_v[i + tab1[pulse_indexes & mask]] +=
                (pulse_signs & 1) ? 8191 : -8192; // +/-1 in (2.13)

        pulse_indexes >>= bits;
        pulse_signs >>= 1;
    }

    fc_v[tab2[pulse_indexes]] += (pulse_signs & 1) ? 8191 : -8192;
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
          int pulse_indexes = 100;
          int pulse_signs = 100;
          int pulse_count = 100;
          int bits = 100;
          int _len_fc_v0 = 1;
          int * fc_v = (int *) malloc(_len_fc_v0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fc_v0; _i0++) {
            fc_v[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tab10 = 1;
          const int * tab1 = (const int *) malloc(_len_tab10*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_tab10; _i0++) {
            tab1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tab20 = 1;
          const int * tab2 = (const int *) malloc(_len_tab20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_tab20; _i0++) {
            tab2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_acelp_fc_pulse_per_track(fc_v,tab1,tab2,pulse_indexes,pulse_signs,pulse_count,bits);
          free(fc_v);
          free(tab1);
          free(tab2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pulse_indexes = 255;
          int pulse_signs = 255;
          int pulse_count = 255;
          int bits = 255;
          int _len_fc_v0 = 65025;
          int * fc_v = (int *) malloc(_len_fc_v0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fc_v0; _i0++) {
            fc_v[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tab10 = 65025;
          const int * tab1 = (const int *) malloc(_len_tab10*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_tab10; _i0++) {
            tab1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tab20 = 65025;
          const int * tab2 = (const int *) malloc(_len_tab20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_tab20; _i0++) {
            tab2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_acelp_fc_pulse_per_track(fc_v,tab1,tab2,pulse_indexes,pulse_signs,pulse_count,bits);
          free(fc_v);
          free(tab1);
          free(tab2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pulse_indexes = 10;
          int pulse_signs = 10;
          int pulse_count = 10;
          int bits = 10;
          int _len_fc_v0 = 100;
          int * fc_v = (int *) malloc(_len_fc_v0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fc_v0; _i0++) {
            fc_v[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tab10 = 100;
          const int * tab1 = (const int *) malloc(_len_tab10*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_tab10; _i0++) {
            tab1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tab20 = 100;
          const int * tab2 = (const int *) malloc(_len_tab20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_tab20; _i0++) {
            tab2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_acelp_fc_pulse_per_track(fc_v,tab1,tab2,pulse_indexes,pulse_signs,pulse_count,bits);
          free(fc_v);
          free(tab1);
          free(tab2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
