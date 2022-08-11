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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int /*<<< orphan*/  passthrough; } ;
struct resizer_params {TYPE_3__ rsz_common; TYPE_2__* rsz_rsc_param; void** rsz_en; TYPE_1__* rsz2rgb; } ;
struct vpfe_resizer_device {struct resizer_params config; } ;
struct TYPE_5__ {int v_dif; int h_dif; scalar_t__ i_hps; scalar_t__ i_vps; void* dscale_en; scalar_t__ h_lpf_int_c; scalar_t__ h_lpf_int_y; scalar_t__ h_phs; scalar_t__ v_lpf_int_c; scalar_t__ v_lpf_int_y; scalar_t__ v_phs_c; scalar_t__ v_phs_y; void* yen; void* cen; } ;
struct TYPE_4__ {void* rgb_en; } ;

/* Variables and functions */
 int /*<<< orphan*/  BYPASS_ON ; 
 void* DISABLE ; 
 void* ENABLE ; 
 size_t RSZ_A ; 
 size_t RSZ_B ; 

__attribute__((used)) static void
resizer_configure_passthru(struct vpfe_resizer_device *resizer, int bypass)
{
	struct resizer_params *param = &resizer->config;

	param->rsz_rsc_param[RSZ_A].cen = DISABLE;
	param->rsz_rsc_param[RSZ_A].yen = DISABLE;
	param->rsz_rsc_param[RSZ_A].v_phs_y = 0;
	param->rsz_rsc_param[RSZ_A].v_phs_c = 0;
	param->rsz_rsc_param[RSZ_A].v_dif = 256;
	param->rsz_rsc_param[RSZ_A].v_lpf_int_y = 0;
	param->rsz_rsc_param[RSZ_A].v_lpf_int_c = 0;
	param->rsz_rsc_param[RSZ_A].h_phs = 0;
	param->rsz_rsc_param[RSZ_A].h_dif = 256;
	param->rsz_rsc_param[RSZ_A].h_lpf_int_y = 0;
	param->rsz_rsc_param[RSZ_A].h_lpf_int_c = 0;
	param->rsz_rsc_param[RSZ_A].dscale_en = DISABLE;
	param->rsz2rgb[RSZ_A].rgb_en = DISABLE;
	param->rsz_en[RSZ_A] = ENABLE;
	param->rsz_en[RSZ_B] = DISABLE;
	if (bypass) {
		param->rsz_rsc_param[RSZ_A].i_vps = 0;
		param->rsz_rsc_param[RSZ_A].i_hps = 0;
		/* Raw Bypass */
		param->rsz_common.passthrough = BYPASS_ON;
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
          int bypass = 100;
          int _len_resizer0 = 1;
          struct vpfe_resizer_device * resizer = (struct vpfe_resizer_device *) malloc(_len_resizer0*sizeof(struct vpfe_resizer_device));
          for(int _i0 = 0; _i0 < _len_resizer0; _i0++) {
            resizer[_i0].config.rsz_common.passthrough = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_resizer__i0__config_rsz_rsc_param0 = 1;
          resizer[_i0].config.rsz_rsc_param = (struct TYPE_5__ *) malloc(_len_resizer__i0__config_rsz_rsc_param0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_resizer__i0__config_rsz_rsc_param0; _j0++) {
            resizer[_i0].config.rsz_rsc_param->v_dif = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_dif = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->i_hps = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->i_vps = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_lpf_int_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_lpf_int_y = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_phs = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->v_lpf_int_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->v_lpf_int_y = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->v_phs_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->v_phs_y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__config_rsz_en0 = 1;
          resizer[_i0].config.rsz_en = (void **) malloc(_len_resizer__i0__config_rsz_en0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_resizer__i0__config_rsz_en0; _j0++) {
          }
          int _len_resizer__i0__config_rsz2rgb0 = 1;
          resizer[_i0].config.rsz2rgb = (struct TYPE_4__ *) malloc(_len_resizer__i0__config_rsz2rgb0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_resizer__i0__config_rsz2rgb0; _j0++) {
              }
          }
          resizer_configure_passthru(resizer,bypass);
          free(resizer);
        
        break;
    }
    // big-arr
    case 1:
    {
          int bypass = 255;
          int _len_resizer0 = 65025;
          struct vpfe_resizer_device * resizer = (struct vpfe_resizer_device *) malloc(_len_resizer0*sizeof(struct vpfe_resizer_device));
          for(int _i0 = 0; _i0 < _len_resizer0; _i0++) {
            resizer[_i0].config.rsz_common.passthrough = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_resizer__i0__config_rsz_rsc_param0 = 1;
          resizer[_i0].config.rsz_rsc_param = (struct TYPE_5__ *) malloc(_len_resizer__i0__config_rsz_rsc_param0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_resizer__i0__config_rsz_rsc_param0; _j0++) {
            resizer[_i0].config.rsz_rsc_param->v_dif = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_dif = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->i_hps = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->i_vps = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_lpf_int_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_lpf_int_y = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_phs = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->v_lpf_int_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->v_lpf_int_y = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->v_phs_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->v_phs_y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__config_rsz_en0 = 1;
          resizer[_i0].config.rsz_en = (void **) malloc(_len_resizer__i0__config_rsz_en0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_resizer__i0__config_rsz_en0; _j0++) {
          }
          int _len_resizer__i0__config_rsz2rgb0 = 1;
          resizer[_i0].config.rsz2rgb = (struct TYPE_4__ *) malloc(_len_resizer__i0__config_rsz2rgb0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_resizer__i0__config_rsz2rgb0; _j0++) {
              }
          }
          resizer_configure_passthru(resizer,bypass);
          free(resizer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bypass = 10;
          int _len_resizer0 = 100;
          struct vpfe_resizer_device * resizer = (struct vpfe_resizer_device *) malloc(_len_resizer0*sizeof(struct vpfe_resizer_device));
          for(int _i0 = 0; _i0 < _len_resizer0; _i0++) {
            resizer[_i0].config.rsz_common.passthrough = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_resizer__i0__config_rsz_rsc_param0 = 1;
          resizer[_i0].config.rsz_rsc_param = (struct TYPE_5__ *) malloc(_len_resizer__i0__config_rsz_rsc_param0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_resizer__i0__config_rsz_rsc_param0; _j0++) {
            resizer[_i0].config.rsz_rsc_param->v_dif = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_dif = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->i_hps = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->i_vps = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_lpf_int_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_lpf_int_y = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_phs = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->v_lpf_int_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->v_lpf_int_y = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->v_phs_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->v_phs_y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__config_rsz_en0 = 1;
          resizer[_i0].config.rsz_en = (void **) malloc(_len_resizer__i0__config_rsz_en0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_resizer__i0__config_rsz_en0; _j0++) {
          }
          int _len_resizer__i0__config_rsz2rgb0 = 1;
          resizer[_i0].config.rsz2rgb = (struct TYPE_4__ *) malloc(_len_resizer__i0__config_rsz2rgb0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_resizer__i0__config_rsz2rgb0; _j0++) {
              }
          }
          resizer_configure_passthru(resizer,bypass);
          free(resizer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
