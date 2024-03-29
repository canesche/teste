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
typedef  size_t u8 ;
typedef  size_t u16 ;
struct i40e_pf {int dummy; } ;

/* Variables and functions */

void i40e_fill_rss_lut(struct i40e_pf *pf, u8 *lut,
		       u16 rss_table_size, u16 rss_size)
{
	u16 i;

	for (i = 0; i < rss_table_size; i++)
		lut[i] = i % rss_size;
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
          unsigned long rss_table_size = 100;
          unsigned long rss_size = 100;
          int _len_pf0 = 1;
          struct i40e_pf * pf = (struct i40e_pf *) malloc(_len_pf0*sizeof(struct i40e_pf));
          for(int _i0 = 0; _i0 < _len_pf0; _i0++) {
            pf[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lut0 = 1;
          unsigned long * lut = (unsigned long *) malloc(_len_lut0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_lut0; _i0++) {
            lut[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          i40e_fill_rss_lut(pf,lut,rss_table_size,rss_size);
          free(pf);
          free(lut);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long rss_table_size = 255;
          unsigned long rss_size = 255;
          int _len_pf0 = 65025;
          struct i40e_pf * pf = (struct i40e_pf *) malloc(_len_pf0*sizeof(struct i40e_pf));
          for(int _i0 = 0; _i0 < _len_pf0; _i0++) {
            pf[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lut0 = 65025;
          unsigned long * lut = (unsigned long *) malloc(_len_lut0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_lut0; _i0++) {
            lut[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          i40e_fill_rss_lut(pf,lut,rss_table_size,rss_size);
          free(pf);
          free(lut);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long rss_table_size = 10;
          unsigned long rss_size = 10;
          int _len_pf0 = 100;
          struct i40e_pf * pf = (struct i40e_pf *) malloc(_len_pf0*sizeof(struct i40e_pf));
          for(int _i0 = 0; _i0 < _len_pf0; _i0++) {
            pf[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lut0 = 100;
          unsigned long * lut = (unsigned long *) malloc(_len_lut0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_lut0; _i0++) {
            lut[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          i40e_fill_rss_lut(pf,lut,rss_table_size,rss_size);
          free(pf);
          free(lut);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
