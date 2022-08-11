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
struct rtsx_usb_sdmmc {int /*<<< orphan*/  power_mode; struct mmc_host* mmc; } ;
struct mmc_host {int f_min; int f_max; int ocr_avail; int caps; int caps2; int max_current_330; int max_current_180; int max_segs; int max_seg_size; int max_blk_size; int max_blk_count; int max_req_size; int /*<<< orphan*/ * ops; } ;

/* Variables and functions */
 int MMC_CAP2_FULL_PWR_CYCLE ; 
 int MMC_CAP2_NO_PRESCAN_POWERUP ; 
 int MMC_CAP2_NO_SDIO ; 
 int MMC_CAP_4_BIT_DATA ; 
 int MMC_CAP_BUS_WIDTH_TEST ; 
 int MMC_CAP_ERASE ; 
 int MMC_CAP_MMC_HIGHSPEED ; 
 int MMC_CAP_NEEDS_POLL ; 
 int MMC_CAP_SD_HIGHSPEED ; 
 int MMC_CAP_UHS_SDR12 ; 
 int MMC_CAP_UHS_SDR25 ; 
 int MMC_CAP_UHS_SDR50 ; 
 int /*<<< orphan*/  MMC_POWER_OFF ; 
 int MMC_VDD_165_195 ; 
 int MMC_VDD_32_33 ; 
 int MMC_VDD_33_34 ; 
 int /*<<< orphan*/  rtsx_usb_sdmmc_ops ; 

__attribute__((used)) static void rtsx_usb_init_host(struct rtsx_usb_sdmmc *host)
{
	struct mmc_host *mmc = host->mmc;

	mmc->f_min = 250000;
	mmc->f_max = 208000000;
	mmc->ocr_avail = MMC_VDD_32_33 | MMC_VDD_33_34 | MMC_VDD_165_195;
	mmc->caps = MMC_CAP_4_BIT_DATA | MMC_CAP_SD_HIGHSPEED |
		MMC_CAP_MMC_HIGHSPEED | MMC_CAP_BUS_WIDTH_TEST |
		MMC_CAP_UHS_SDR12 | MMC_CAP_UHS_SDR25 | MMC_CAP_UHS_SDR50 |
		MMC_CAP_NEEDS_POLL | MMC_CAP_ERASE;
	mmc->caps2 = MMC_CAP2_NO_PRESCAN_POWERUP | MMC_CAP2_FULL_PWR_CYCLE |
		MMC_CAP2_NO_SDIO;

	mmc->max_current_330 = 400;
	mmc->max_current_180 = 800;
	mmc->ops = &rtsx_usb_sdmmc_ops;
	mmc->max_segs = 256;
	mmc->max_seg_size = 65536;
	mmc->max_blk_size = 512;
	mmc->max_blk_count = 65535;
	mmc->max_req_size = 524288;

	host->power_mode = MMC_POWER_OFF;
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
          int _len_host0 = 1;
          struct rtsx_usb_sdmmc * host = (struct rtsx_usb_sdmmc *) malloc(_len_host0*sizeof(struct rtsx_usb_sdmmc));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].power_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_host__i0__mmc0 = 1;
          host[_i0].mmc = (struct mmc_host *) malloc(_len_host__i0__mmc0*sizeof(struct mmc_host));
          for(int _j0 = 0; _j0 < _len_host__i0__mmc0; _j0++) {
            host[_i0].mmc->f_min = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->f_max = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->ocr_avail = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->caps = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->caps2 = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->max_current_330 = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->max_current_180 = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->max_segs = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->max_seg_size = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->max_blk_size = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->max_blk_count = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->max_req_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_host__i0__mmc_ops0 = 1;
          host[_i0].mmc->ops = (int *) malloc(_len_host__i0__mmc_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__mmc_ops0; _j0++) {
            host[_i0].mmc->ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          rtsx_usb_init_host(host);
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].mmc);
          }
          free(host);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_host0 = 65025;
          struct rtsx_usb_sdmmc * host = (struct rtsx_usb_sdmmc *) malloc(_len_host0*sizeof(struct rtsx_usb_sdmmc));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].power_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_host__i0__mmc0 = 1;
          host[_i0].mmc = (struct mmc_host *) malloc(_len_host__i0__mmc0*sizeof(struct mmc_host));
          for(int _j0 = 0; _j0 < _len_host__i0__mmc0; _j0++) {
            host[_i0].mmc->f_min = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->f_max = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->ocr_avail = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->caps = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->caps2 = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->max_current_330 = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->max_current_180 = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->max_segs = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->max_seg_size = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->max_blk_size = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->max_blk_count = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->max_req_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_host__i0__mmc_ops0 = 1;
          host[_i0].mmc->ops = (int *) malloc(_len_host__i0__mmc_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__mmc_ops0; _j0++) {
            host[_i0].mmc->ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          rtsx_usb_init_host(host);
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].mmc);
          }
          free(host);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_host0 = 100;
          struct rtsx_usb_sdmmc * host = (struct rtsx_usb_sdmmc *) malloc(_len_host0*sizeof(struct rtsx_usb_sdmmc));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].power_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_host__i0__mmc0 = 1;
          host[_i0].mmc = (struct mmc_host *) malloc(_len_host__i0__mmc0*sizeof(struct mmc_host));
          for(int _j0 = 0; _j0 < _len_host__i0__mmc0; _j0++) {
            host[_i0].mmc->f_min = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->f_max = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->ocr_avail = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->caps = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->caps2 = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->max_current_330 = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->max_current_180 = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->max_segs = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->max_seg_size = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->max_blk_size = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->max_blk_count = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->max_req_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_host__i0__mmc_ops0 = 1;
          host[_i0].mmc->ops = (int *) malloc(_len_host__i0__mmc_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__mmc_ops0; _j0++) {
            host[_i0].mmc->ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          rtsx_usb_init_host(host);
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].mmc);
          }
          free(host);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
