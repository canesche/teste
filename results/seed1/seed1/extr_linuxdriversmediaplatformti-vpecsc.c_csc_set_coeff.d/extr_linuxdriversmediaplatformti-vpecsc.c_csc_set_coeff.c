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
typedef  int /*<<< orphan*/  u32 ;
typedef  int u16 ;
struct csc_data {int dummy; } ;
struct colorspace_coeffs {int* sd; int* hd; } ;
typedef  enum v4l2_colorspace { ____Placeholder_v4l2_colorspace } v4l2_colorspace ;

/* Variables and functions */
 int /*<<< orphan*/  CSC_BYPASS ; 
 int V4L2_COLORSPACE_REC709 ; 
 int V4L2_COLORSPACE_SMPTE170M ; 
 int V4L2_COLORSPACE_SRGB ; 
 struct colorspace_coeffs* colorspace_coeffs ; 

void csc_set_coeff(struct csc_data *csc, u32 *csc_reg0,
		enum v4l2_colorspace src_colorspace,
		enum v4l2_colorspace dst_colorspace)
{
	u32 *csc_reg5 = csc_reg0 + 5;
	u32 *shadow_csc = csc_reg0;
	struct colorspace_coeffs *sd_hd_coeffs;
	u16 *coeff, *end_coeff;
	enum v4l2_colorspace yuv_colorspace;
	int sel = 0;

	/*
	 * support only graphics data range(full range) for now, a control ioctl
	 * would be nice here
	 */
	/* Y2R */
	if (dst_colorspace == V4L2_COLORSPACE_SRGB &&
			(src_colorspace == V4L2_COLORSPACE_SMPTE170M ||
			src_colorspace == V4L2_COLORSPACE_REC709)) {
		/* Y2R */
		sel = 1;
		yuv_colorspace = src_colorspace;
	} else if ((dst_colorspace == V4L2_COLORSPACE_SMPTE170M ||
			dst_colorspace == V4L2_COLORSPACE_REC709) &&
			src_colorspace == V4L2_COLORSPACE_SRGB) {
		/* R2Y */
		sel = 3;
		yuv_colorspace = dst_colorspace;
	} else {
		*csc_reg5 |= CSC_BYPASS;
		return;
	}

	sd_hd_coeffs = &colorspace_coeffs[sel];

	/* select between SD or HD coefficients */
	if (yuv_colorspace == V4L2_COLORSPACE_SMPTE170M)
		coeff = sd_hd_coeffs->sd;
	else
		coeff = sd_hd_coeffs->hd;

	end_coeff = coeff + 12;

	for (; coeff < end_coeff; coeff += 2)
		*shadow_csc++ = (*(coeff + 1) << 16) | *coeff;
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
          enum v4l2_colorspace src_colorspace = 0;
          enum v4l2_colorspace dst_colorspace = 0;
          int _len_csc0 = 1;
          struct csc_data * csc = (struct csc_data *) malloc(_len_csc0*sizeof(struct csc_data));
          for(int _i0 = 0; _i0 < _len_csc0; _i0++) {
            csc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_csc_reg00 = 1;
          int * csc_reg0 = (int *) malloc(_len_csc_reg00*sizeof(int));
          for(int _i0 = 0; _i0 < _len_csc_reg00; _i0++) {
            csc_reg0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          csc_set_coeff(csc,csc_reg0,src_colorspace,dst_colorspace);
          free(csc);
          free(csc_reg0);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum v4l2_colorspace src_colorspace = 0;
          enum v4l2_colorspace dst_colorspace = 0;
          int _len_csc0 = 65025;
          struct csc_data * csc = (struct csc_data *) malloc(_len_csc0*sizeof(struct csc_data));
          for(int _i0 = 0; _i0 < _len_csc0; _i0++) {
            csc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_csc_reg00 = 65025;
          int * csc_reg0 = (int *) malloc(_len_csc_reg00*sizeof(int));
          for(int _i0 = 0; _i0 < _len_csc_reg00; _i0++) {
            csc_reg0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          csc_set_coeff(csc,csc_reg0,src_colorspace,dst_colorspace);
          free(csc);
          free(csc_reg0);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum v4l2_colorspace src_colorspace = 0;
          enum v4l2_colorspace dst_colorspace = 0;
          int _len_csc0 = 100;
          struct csc_data * csc = (struct csc_data *) malloc(_len_csc0*sizeof(struct csc_data));
          for(int _i0 = 0; _i0 < _len_csc0; _i0++) {
            csc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_csc_reg00 = 100;
          int * csc_reg0 = (int *) malloc(_len_csc_reg00*sizeof(int));
          for(int _i0 = 0; _i0 < _len_csc_reg00; _i0++) {
            csc_reg0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          csc_set_coeff(csc,csc_reg0,src_colorspace,dst_colorspace);
          free(csc);
          free(csc_reg0);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
