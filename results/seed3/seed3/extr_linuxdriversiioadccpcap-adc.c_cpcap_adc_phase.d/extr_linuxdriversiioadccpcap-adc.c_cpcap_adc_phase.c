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
struct cpcap_adc_request {int channel; int bank_index; scalar_t__ result; struct cpcap_adc_phasing_tbl* phase_tbl; struct cpcap_adc_conversion_tbl* conv_tbl; } ;
struct cpcap_adc_phasing_tbl {scalar_t__ multiplier; scalar_t__ divider; scalar_t__ min; scalar_t__ max; int /*<<< orphan*/  offset; } ;
struct cpcap_adc_conversion_tbl {int /*<<< orphan*/  align_offset; int /*<<< orphan*/  cal_offset; } ;

/* Variables and functions */
#define  CPCAP_ADC_BATTI_PI17 130 
#define  CPCAP_ADC_BATTP 129 
#define  CPCAP_ADC_BATTP_PI16 128 
 int /*<<< orphan*/  CPCAP_FOUR_POINT_TWO_ADC ; 

__attribute__((used)) static void cpcap_adc_phase(struct cpcap_adc_request *req)
{
	const struct cpcap_adc_conversion_tbl *conv_tbl = req->conv_tbl;
	const struct cpcap_adc_phasing_tbl *phase_tbl = req->phase_tbl;
	int index = req->channel;

	/* Remuxed channels 16 and 17 use BATTP and BATTI entries */
	switch (req->channel) {
	case CPCAP_ADC_BATTP:
	case CPCAP_ADC_BATTP_PI16:
		index = req->bank_index;
		req->result -= phase_tbl[index].offset;
		req->result -= CPCAP_FOUR_POINT_TWO_ADC;
		req->result *= phase_tbl[index].multiplier;
		if (phase_tbl[index].divider == 0)
			return;
		req->result /= phase_tbl[index].divider;
		req->result += CPCAP_FOUR_POINT_TWO_ADC;
		break;
	case CPCAP_ADC_BATTI_PI17:
		index = req->bank_index;
		/* fallthrough */
	default:
		req->result += conv_tbl[index].cal_offset;
		req->result += conv_tbl[index].align_offset;
		req->result *= phase_tbl[index].multiplier;
		if (phase_tbl[index].divider == 0)
			return;
		req->result /= phase_tbl[index].divider;
		req->result += phase_tbl[index].offset;
		break;
	}

	if (req->result < phase_tbl[index].min)
		req->result = phase_tbl[index].min;
	else if (req->result > phase_tbl[index].max)
		req->result = phase_tbl[index].max;
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
          int _len_req0 = 1;
          struct cpcap_adc_request * req = (struct cpcap_adc_request *) malloc(_len_req0*sizeof(struct cpcap_adc_request));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].channel = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].bank_index = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].result = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__phase_tbl0 = 1;
          req[_i0].phase_tbl = (struct cpcap_adc_phasing_tbl *) malloc(_len_req__i0__phase_tbl0*sizeof(struct cpcap_adc_phasing_tbl));
          for(int _j0 = 0; _j0 < _len_req__i0__phase_tbl0; _j0++) {
            req[_i0].phase_tbl->multiplier = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].phase_tbl->divider = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].phase_tbl->min = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].phase_tbl->max = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].phase_tbl->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_req__i0__conv_tbl0 = 1;
          req[_i0].conv_tbl = (struct cpcap_adc_conversion_tbl *) malloc(_len_req__i0__conv_tbl0*sizeof(struct cpcap_adc_conversion_tbl));
          for(int _j0 = 0; _j0 < _len_req__i0__conv_tbl0; _j0++) {
            req[_i0].conv_tbl->align_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].conv_tbl->cal_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          cpcap_adc_phase(req);
          for(int _aux = 0; _aux < _len_req0; _aux++) {
          free(req[_aux].phase_tbl);
          }
          for(int _aux = 0; _aux < _len_req0; _aux++) {
          free(req[_aux].conv_tbl);
          }
          free(req);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_req0 = 65025;
          struct cpcap_adc_request * req = (struct cpcap_adc_request *) malloc(_len_req0*sizeof(struct cpcap_adc_request));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].channel = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].bank_index = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].result = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__phase_tbl0 = 1;
          req[_i0].phase_tbl = (struct cpcap_adc_phasing_tbl *) malloc(_len_req__i0__phase_tbl0*sizeof(struct cpcap_adc_phasing_tbl));
          for(int _j0 = 0; _j0 < _len_req__i0__phase_tbl0; _j0++) {
            req[_i0].phase_tbl->multiplier = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].phase_tbl->divider = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].phase_tbl->min = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].phase_tbl->max = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].phase_tbl->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_req__i0__conv_tbl0 = 1;
          req[_i0].conv_tbl = (struct cpcap_adc_conversion_tbl *) malloc(_len_req__i0__conv_tbl0*sizeof(struct cpcap_adc_conversion_tbl));
          for(int _j0 = 0; _j0 < _len_req__i0__conv_tbl0; _j0++) {
            req[_i0].conv_tbl->align_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].conv_tbl->cal_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          cpcap_adc_phase(req);
          for(int _aux = 0; _aux < _len_req0; _aux++) {
          free(req[_aux].phase_tbl);
          }
          for(int _aux = 0; _aux < _len_req0; _aux++) {
          free(req[_aux].conv_tbl);
          }
          free(req);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_req0 = 100;
          struct cpcap_adc_request * req = (struct cpcap_adc_request *) malloc(_len_req0*sizeof(struct cpcap_adc_request));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].channel = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].bank_index = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].result = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__phase_tbl0 = 1;
          req[_i0].phase_tbl = (struct cpcap_adc_phasing_tbl *) malloc(_len_req__i0__phase_tbl0*sizeof(struct cpcap_adc_phasing_tbl));
          for(int _j0 = 0; _j0 < _len_req__i0__phase_tbl0; _j0++) {
            req[_i0].phase_tbl->multiplier = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].phase_tbl->divider = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].phase_tbl->min = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].phase_tbl->max = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].phase_tbl->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_req__i0__conv_tbl0 = 1;
          req[_i0].conv_tbl = (struct cpcap_adc_conversion_tbl *) malloc(_len_req__i0__conv_tbl0*sizeof(struct cpcap_adc_conversion_tbl));
          for(int _j0 = 0; _j0 < _len_req__i0__conv_tbl0; _j0++) {
            req[_i0].conv_tbl->align_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].conv_tbl->cal_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          cpcap_adc_phase(req);
          for(int _aux = 0; _aux < _len_req0; _aux++) {
          free(req[_aux].phase_tbl);
          }
          for(int _aux = 0; _aux < _len_req0; _aux++) {
          free(req[_aux].conv_tbl);
          }
          free(req);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
