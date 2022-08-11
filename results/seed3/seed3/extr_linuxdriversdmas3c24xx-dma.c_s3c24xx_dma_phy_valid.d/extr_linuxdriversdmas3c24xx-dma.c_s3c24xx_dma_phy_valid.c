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
struct s3c24xx_dma_platdata {struct s3c24xx_dma_channel* channels; } ;
struct s3c24xx_dma_phy {int id; } ;
struct s3c24xx_dma_engine {TYPE_1__* sdata; struct s3c24xx_dma_platdata* pdata; } ;
struct s3c24xx_dma_channel {int chansel; } ;
struct s3c24xx_dma_chan {size_t id; int /*<<< orphan*/  slave; struct s3c24xx_dma_engine* host; } ;
struct TYPE_2__ {scalar_t__ has_reqsel; } ;

/* Variables and functions */
 int S3C24XX_CHANSEL_VALID ; 
 int S3C24XX_CHANSEL_WIDTH ; 

__attribute__((used)) static bool s3c24xx_dma_phy_valid(struct s3c24xx_dma_chan *s3cchan,
				  struct s3c24xx_dma_phy *phy)
{
	struct s3c24xx_dma_engine *s3cdma = s3cchan->host;
	const struct s3c24xx_dma_platdata *pdata = s3cdma->pdata;
	struct s3c24xx_dma_channel *cdata = &pdata->channels[s3cchan->id];
	int phyvalid;

	/* every phy is valid for memcopy channels */
	if (!s3cchan->slave)
		return true;

	/* On newer variants all phys can be used for all virtual channels */
	if (s3cdma->sdata->has_reqsel)
		return true;

	phyvalid = (cdata->chansel >> (phy->id * S3C24XX_CHANSEL_WIDTH));
	return (phyvalid & S3C24XX_CHANSEL_VALID) ? true : false;
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
          int _len_s3cchan0 = 1;
          struct s3c24xx_dma_chan * s3cchan = (struct s3c24xx_dma_chan *) malloc(_len_s3cchan0*sizeof(struct s3c24xx_dma_chan));
          for(int _i0 = 0; _i0 < _len_s3cchan0; _i0++) {
            s3cchan[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
        s3cchan[_i0].slave = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s3cchan__i0__host0 = 1;
          s3cchan[_i0].host = (struct s3c24xx_dma_engine *) malloc(_len_s3cchan__i0__host0*sizeof(struct s3c24xx_dma_engine));
          for(int _j0 = 0; _j0 < _len_s3cchan__i0__host0; _j0++) {
              int _len_s3cchan__i0__host_sdata0 = 1;
          s3cchan[_i0].host->sdata = (struct TYPE_2__ *) malloc(_len_s3cchan__i0__host_sdata0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_s3cchan__i0__host_sdata0; _j0++) {
            s3cchan[_i0].host->sdata->has_reqsel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s3cchan__i0__host_pdata0 = 1;
          s3cchan[_i0].host->pdata = (struct s3c24xx_dma_platdata *) malloc(_len_s3cchan__i0__host_pdata0*sizeof(struct s3c24xx_dma_platdata));
          for(int _j0 = 0; _j0 < _len_s3cchan__i0__host_pdata0; _j0++) {
              int _len_s3cchan__i0__host_pdata_channels0 = 1;
          s3cchan[_i0].host->pdata->channels = (struct s3c24xx_dma_channel *) malloc(_len_s3cchan__i0__host_pdata_channels0*sizeof(struct s3c24xx_dma_channel));
          for(int _j0 = 0; _j0 < _len_s3cchan__i0__host_pdata_channels0; _j0++) {
            s3cchan[_i0].host->pdata->channels->chansel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_phy0 = 1;
          struct s3c24xx_dma_phy * phy = (struct s3c24xx_dma_phy *) malloc(_len_phy0*sizeof(struct s3c24xx_dma_phy));
          for(int _i0 = 0; _i0 < _len_phy0; _i0++) {
            phy[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = s3c24xx_dma_phy_valid(s3cchan,phy);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s3cchan0; _aux++) {
          free(s3cchan[_aux].host);
          }
          free(s3cchan);
          free(phy);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s3cchan0 = 65025;
          struct s3c24xx_dma_chan * s3cchan = (struct s3c24xx_dma_chan *) malloc(_len_s3cchan0*sizeof(struct s3c24xx_dma_chan));
          for(int _i0 = 0; _i0 < _len_s3cchan0; _i0++) {
            s3cchan[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
        s3cchan[_i0].slave = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s3cchan__i0__host0 = 1;
          s3cchan[_i0].host = (struct s3c24xx_dma_engine *) malloc(_len_s3cchan__i0__host0*sizeof(struct s3c24xx_dma_engine));
          for(int _j0 = 0; _j0 < _len_s3cchan__i0__host0; _j0++) {
              int _len_s3cchan__i0__host_sdata0 = 1;
          s3cchan[_i0].host->sdata = (struct TYPE_2__ *) malloc(_len_s3cchan__i0__host_sdata0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_s3cchan__i0__host_sdata0; _j0++) {
            s3cchan[_i0].host->sdata->has_reqsel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s3cchan__i0__host_pdata0 = 1;
          s3cchan[_i0].host->pdata = (struct s3c24xx_dma_platdata *) malloc(_len_s3cchan__i0__host_pdata0*sizeof(struct s3c24xx_dma_platdata));
          for(int _j0 = 0; _j0 < _len_s3cchan__i0__host_pdata0; _j0++) {
              int _len_s3cchan__i0__host_pdata_channels0 = 1;
          s3cchan[_i0].host->pdata->channels = (struct s3c24xx_dma_channel *) malloc(_len_s3cchan__i0__host_pdata_channels0*sizeof(struct s3c24xx_dma_channel));
          for(int _j0 = 0; _j0 < _len_s3cchan__i0__host_pdata_channels0; _j0++) {
            s3cchan[_i0].host->pdata->channels->chansel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_phy0 = 65025;
          struct s3c24xx_dma_phy * phy = (struct s3c24xx_dma_phy *) malloc(_len_phy0*sizeof(struct s3c24xx_dma_phy));
          for(int _i0 = 0; _i0 < _len_phy0; _i0++) {
            phy[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = s3c24xx_dma_phy_valid(s3cchan,phy);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s3cchan0; _aux++) {
          free(s3cchan[_aux].host);
          }
          free(s3cchan);
          free(phy);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s3cchan0 = 100;
          struct s3c24xx_dma_chan * s3cchan = (struct s3c24xx_dma_chan *) malloc(_len_s3cchan0*sizeof(struct s3c24xx_dma_chan));
          for(int _i0 = 0; _i0 < _len_s3cchan0; _i0++) {
            s3cchan[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
        s3cchan[_i0].slave = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s3cchan__i0__host0 = 1;
          s3cchan[_i0].host = (struct s3c24xx_dma_engine *) malloc(_len_s3cchan__i0__host0*sizeof(struct s3c24xx_dma_engine));
          for(int _j0 = 0; _j0 < _len_s3cchan__i0__host0; _j0++) {
              int _len_s3cchan__i0__host_sdata0 = 1;
          s3cchan[_i0].host->sdata = (struct TYPE_2__ *) malloc(_len_s3cchan__i0__host_sdata0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_s3cchan__i0__host_sdata0; _j0++) {
            s3cchan[_i0].host->sdata->has_reqsel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s3cchan__i0__host_pdata0 = 1;
          s3cchan[_i0].host->pdata = (struct s3c24xx_dma_platdata *) malloc(_len_s3cchan__i0__host_pdata0*sizeof(struct s3c24xx_dma_platdata));
          for(int _j0 = 0; _j0 < _len_s3cchan__i0__host_pdata0; _j0++) {
              int _len_s3cchan__i0__host_pdata_channels0 = 1;
          s3cchan[_i0].host->pdata->channels = (struct s3c24xx_dma_channel *) malloc(_len_s3cchan__i0__host_pdata_channels0*sizeof(struct s3c24xx_dma_channel));
          for(int _j0 = 0; _j0 < _len_s3cchan__i0__host_pdata_channels0; _j0++) {
            s3cchan[_i0].host->pdata->channels->chansel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_phy0 = 100;
          struct s3c24xx_dma_phy * phy = (struct s3c24xx_dma_phy *) malloc(_len_phy0*sizeof(struct s3c24xx_dma_phy));
          for(int _i0 = 0; _i0 < _len_phy0; _i0++) {
            phy[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = s3c24xx_dma_phy_valid(s3cchan,phy);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s3cchan0; _aux++) {
          free(s3cchan[_aux].host);
          }
          free(s3cchan);
          free(phy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
