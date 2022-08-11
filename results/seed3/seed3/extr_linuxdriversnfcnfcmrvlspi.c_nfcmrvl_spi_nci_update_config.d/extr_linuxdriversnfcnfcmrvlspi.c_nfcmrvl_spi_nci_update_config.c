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
struct nfcmrvl_spi_drv_data {TYPE_1__* nci_spi; } ;
struct nfcmrvl_private {struct nfcmrvl_spi_drv_data* drv_data; } ;
struct nfcmrvl_fw_spi_config {int /*<<< orphan*/  clk; } ;
struct TYPE_2__ {int /*<<< orphan*/  xfer_speed_hz; } ;

/* Variables and functions */

__attribute__((used)) static void nfcmrvl_spi_nci_update_config(struct nfcmrvl_private *priv,
					  const void *param)
{
	struct nfcmrvl_spi_drv_data *drv_data = priv->drv_data;
	const struct nfcmrvl_fw_spi_config *config = param;

	drv_data->nci_spi->xfer_speed_hz = config->clk;
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
          int _len_priv0 = 1;
          struct nfcmrvl_private * priv = (struct nfcmrvl_private *) malloc(_len_priv0*sizeof(struct nfcmrvl_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__drv_data0 = 1;
          priv[_i0].drv_data = (struct nfcmrvl_spi_drv_data *) malloc(_len_priv__i0__drv_data0*sizeof(struct nfcmrvl_spi_drv_data));
          for(int _j0 = 0; _j0 < _len_priv__i0__drv_data0; _j0++) {
              int _len_priv__i0__drv_data_nci_spi0 = 1;
          priv[_i0].drv_data->nci_spi = (struct TYPE_2__ *) malloc(_len_priv__i0__drv_data_nci_spi0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__drv_data_nci_spi0; _j0++) {
            priv[_i0].drv_data->nci_spi->xfer_speed_hz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_param0 = 1;
          const void * param = (const void *) malloc(_len_param0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_param0; _i0++) {
            param[_i0] = 0;
          }
          nfcmrvl_spi_nci_update_config(priv,param);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].drv_data);
          }
          free(priv);
          free(param);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_priv0 = 65025;
          struct nfcmrvl_private * priv = (struct nfcmrvl_private *) malloc(_len_priv0*sizeof(struct nfcmrvl_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__drv_data0 = 1;
          priv[_i0].drv_data = (struct nfcmrvl_spi_drv_data *) malloc(_len_priv__i0__drv_data0*sizeof(struct nfcmrvl_spi_drv_data));
          for(int _j0 = 0; _j0 < _len_priv__i0__drv_data0; _j0++) {
              int _len_priv__i0__drv_data_nci_spi0 = 1;
          priv[_i0].drv_data->nci_spi = (struct TYPE_2__ *) malloc(_len_priv__i0__drv_data_nci_spi0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__drv_data_nci_spi0; _j0++) {
            priv[_i0].drv_data->nci_spi->xfer_speed_hz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_param0 = 65025;
          const void * param = (const void *) malloc(_len_param0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_param0; _i0++) {
            param[_i0] = 0;
          }
          nfcmrvl_spi_nci_update_config(priv,param);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].drv_data);
          }
          free(priv);
          free(param);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_priv0 = 100;
          struct nfcmrvl_private * priv = (struct nfcmrvl_private *) malloc(_len_priv0*sizeof(struct nfcmrvl_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__drv_data0 = 1;
          priv[_i0].drv_data = (struct nfcmrvl_spi_drv_data *) malloc(_len_priv__i0__drv_data0*sizeof(struct nfcmrvl_spi_drv_data));
          for(int _j0 = 0; _j0 < _len_priv__i0__drv_data0; _j0++) {
              int _len_priv__i0__drv_data_nci_spi0 = 1;
          priv[_i0].drv_data->nci_spi = (struct TYPE_2__ *) malloc(_len_priv__i0__drv_data_nci_spi0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__drv_data_nci_spi0; _j0++) {
            priv[_i0].drv_data->nci_spi->xfer_speed_hz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_param0 = 100;
          const void * param = (const void *) malloc(_len_param0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_param0; _i0++) {
            param[_i0] = 0;
          }
          nfcmrvl_spi_nci_update_config(priv,param);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].drv_data);
          }
          free(priv);
          free(param);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
