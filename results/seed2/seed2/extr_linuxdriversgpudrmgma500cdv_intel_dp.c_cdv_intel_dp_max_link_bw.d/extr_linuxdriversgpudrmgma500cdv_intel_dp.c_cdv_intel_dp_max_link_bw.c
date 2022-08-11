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
struct gma_encoder {struct cdv_intel_dp* dev_priv; } ;
struct cdv_intel_dp {int* dpcd; } ;

/* Variables and functions */
#define  DP_LINK_BW_1_62 129 
#define  DP_LINK_BW_2_7 128 
 size_t DP_MAX_LINK_RATE ; 

__attribute__((used)) static int
cdv_intel_dp_max_link_bw(struct gma_encoder *encoder)
{
	struct cdv_intel_dp *intel_dp = encoder->dev_priv;
	int max_link_bw = intel_dp->dpcd[DP_MAX_LINK_RATE];

	switch (max_link_bw) {
	case DP_LINK_BW_1_62:
	case DP_LINK_BW_2_7:
		break;
	default:
		max_link_bw = DP_LINK_BW_1_62;
		break;
	}
	return max_link_bw;
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
          int _len_encoder0 = 1;
          struct gma_encoder * encoder = (struct gma_encoder *) malloc(_len_encoder0*sizeof(struct gma_encoder));
          for(int _i0 = 0; _i0 < _len_encoder0; _i0++) {
              int _len_encoder__i0__dev_priv0 = 1;
          encoder[_i0].dev_priv = (struct cdv_intel_dp *) malloc(_len_encoder__i0__dev_priv0*sizeof(struct cdv_intel_dp));
          for(int _j0 = 0; _j0 < _len_encoder__i0__dev_priv0; _j0++) {
              int _len_encoder__i0__dev_priv_dpcd0 = 1;
          encoder[_i0].dev_priv->dpcd = (int *) malloc(_len_encoder__i0__dev_priv_dpcd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_encoder__i0__dev_priv_dpcd0; _j0++) {
            encoder[_i0].dev_priv->dpcd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = cdv_intel_dp_max_link_bw(encoder);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_encoder0; _aux++) {
          free(encoder[_aux].dev_priv);
          }
          free(encoder);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_encoder0 = 65025;
          struct gma_encoder * encoder = (struct gma_encoder *) malloc(_len_encoder0*sizeof(struct gma_encoder));
          for(int _i0 = 0; _i0 < _len_encoder0; _i0++) {
              int _len_encoder__i0__dev_priv0 = 1;
          encoder[_i0].dev_priv = (struct cdv_intel_dp *) malloc(_len_encoder__i0__dev_priv0*sizeof(struct cdv_intel_dp));
          for(int _j0 = 0; _j0 < _len_encoder__i0__dev_priv0; _j0++) {
              int _len_encoder__i0__dev_priv_dpcd0 = 1;
          encoder[_i0].dev_priv->dpcd = (int *) malloc(_len_encoder__i0__dev_priv_dpcd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_encoder__i0__dev_priv_dpcd0; _j0++) {
            encoder[_i0].dev_priv->dpcd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = cdv_intel_dp_max_link_bw(encoder);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_encoder0; _aux++) {
          free(encoder[_aux].dev_priv);
          }
          free(encoder);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_encoder0 = 100;
          struct gma_encoder * encoder = (struct gma_encoder *) malloc(_len_encoder0*sizeof(struct gma_encoder));
          for(int _i0 = 0; _i0 < _len_encoder0; _i0++) {
              int _len_encoder__i0__dev_priv0 = 1;
          encoder[_i0].dev_priv = (struct cdv_intel_dp *) malloc(_len_encoder__i0__dev_priv0*sizeof(struct cdv_intel_dp));
          for(int _j0 = 0; _j0 < _len_encoder__i0__dev_priv0; _j0++) {
              int _len_encoder__i0__dev_priv_dpcd0 = 1;
          encoder[_i0].dev_priv->dpcd = (int *) malloc(_len_encoder__i0__dev_priv_dpcd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_encoder__i0__dev_priv_dpcd0; _j0++) {
            encoder[_i0].dev_priv->dpcd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = cdv_intel_dp_max_link_bw(encoder);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_encoder0; _aux++) {
          free(encoder[_aux].dev_priv);
          }
          free(encoder);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
