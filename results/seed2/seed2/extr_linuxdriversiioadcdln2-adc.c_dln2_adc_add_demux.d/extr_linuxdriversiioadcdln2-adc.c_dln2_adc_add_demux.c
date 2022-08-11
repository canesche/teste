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
       3            linked\n\
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
struct dln2_adc_demux_table {unsigned int from; unsigned int length; unsigned int to; } ;
struct dln2_adc {int demux_count; struct dln2_adc_demux_table* demux; } ;

/* Variables and functions */
 int DLN2_ADC_MAX_CHANNELS ; 

__attribute__((used)) static void dln2_adc_add_demux(struct dln2_adc *dln2,
	unsigned int in_loc, unsigned int out_loc,
	unsigned int length)
{
	struct dln2_adc_demux_table *p = dln2->demux_count ?
		&dln2->demux[dln2->demux_count - 1] : NULL;

	if (p && p->from + p->length == in_loc &&
		p->to + p->length == out_loc) {
		p->length += length;
	} else if (dln2->demux_count < DLN2_ADC_MAX_CHANNELS) {
		p = &dln2->demux[dln2->demux_count++];
		p->from = in_loc;
		p->to = out_loc;
		p->length = length;
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
          unsigned int in_loc = 100;
          unsigned int out_loc = 100;
          unsigned int length = 100;
          int _len_dln20 = 1;
          struct dln2_adc * dln2 = (struct dln2_adc *) malloc(_len_dln20*sizeof(struct dln2_adc));
          for(int _i0 = 0; _i0 < _len_dln20; _i0++) {
            dln2[_i0].demux_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dln2__i0__demux0 = 1;
          dln2[_i0].demux = (struct dln2_adc_demux_table *) malloc(_len_dln2__i0__demux0*sizeof(struct dln2_adc_demux_table));
          for(int _j0 = 0; _j0 < _len_dln2__i0__demux0; _j0++) {
            dln2[_i0].demux->from = ((-2 * (next_i()%2)) + 1) * next_i();
        dln2[_i0].demux->length = ((-2 * (next_i()%2)) + 1) * next_i();
        dln2[_i0].demux->to = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          dln2_adc_add_demux(dln2,in_loc,out_loc,length);
          for(int _aux = 0; _aux < _len_dln20; _aux++) {
          free(dln2[_aux].demux);
          }
          free(dln2);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int in_loc = 255;
          unsigned int out_loc = 255;
          unsigned int length = 255;
          int _len_dln20 = 65025;
          struct dln2_adc * dln2 = (struct dln2_adc *) malloc(_len_dln20*sizeof(struct dln2_adc));
          for(int _i0 = 0; _i0 < _len_dln20; _i0++) {
            dln2[_i0].demux_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dln2__i0__demux0 = 1;
          dln2[_i0].demux = (struct dln2_adc_demux_table *) malloc(_len_dln2__i0__demux0*sizeof(struct dln2_adc_demux_table));
          for(int _j0 = 0; _j0 < _len_dln2__i0__demux0; _j0++) {
            dln2[_i0].demux->from = ((-2 * (next_i()%2)) + 1) * next_i();
        dln2[_i0].demux->length = ((-2 * (next_i()%2)) + 1) * next_i();
        dln2[_i0].demux->to = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          dln2_adc_add_demux(dln2,in_loc,out_loc,length);
          for(int _aux = 0; _aux < _len_dln20; _aux++) {
          free(dln2[_aux].demux);
          }
          free(dln2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int in_loc = 10;
          unsigned int out_loc = 10;
          unsigned int length = 10;
          int _len_dln20 = 100;
          struct dln2_adc * dln2 = (struct dln2_adc *) malloc(_len_dln20*sizeof(struct dln2_adc));
          for(int _i0 = 0; _i0 < _len_dln20; _i0++) {
            dln2[_i0].demux_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dln2__i0__demux0 = 1;
          dln2[_i0].demux = (struct dln2_adc_demux_table *) malloc(_len_dln2__i0__demux0*sizeof(struct dln2_adc_demux_table));
          for(int _j0 = 0; _j0 < _len_dln2__i0__demux0; _j0++) {
            dln2[_i0].demux->from = ((-2 * (next_i()%2)) + 1) * next_i();
        dln2[_i0].demux->length = ((-2 * (next_i()%2)) + 1) * next_i();
        dln2[_i0].demux->to = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          dln2_adc_add_demux(dln2,in_loc,out_loc,length);
          for(int _aux = 0; _aux < _len_dln20; _aux++) {
          free(dln2[_aux].demux);
          }
          free(dln2);
        
        break;
    }
    // linked
    case 3:
    {
          unsigned int in_loc = ((-2 * (next_i()%2)) + 1) * next_i();
          unsigned int out_loc = ((-2 * (next_i()%2)) + 1) * next_i();
          unsigned int length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dln20 = 1;
          struct dln2_adc * dln2 = (struct dln2_adc *) malloc(_len_dln20*sizeof(struct dln2_adc));
          for(int _i0 = 0; _i0 < _len_dln20; _i0++) {
            dln2[_i0].demux_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dln2__i0__demux0 = 1;
          dln2[_i0].demux = (struct dln2_adc_demux_table *) malloc(_len_dln2__i0__demux0*sizeof(struct dln2_adc_demux_table));
          for(int _j0 = 0; _j0 < _len_dln2__i0__demux0; _j0++) {
            dln2[_i0].demux->from = ((-2 * (next_i()%2)) + 1) * next_i();
        dln2[_i0].demux->length = ((-2 * (next_i()%2)) + 1) * next_i();
        dln2[_i0].demux->to = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          dln2_adc_add_demux(dln2,in_loc,out_loc,length);
          for(int _aux = 0; _aux < _len_dln20; _aux++) {
          free(dln2[_aux].demux);
          }
          free(dln2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
