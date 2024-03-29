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
typedef  int /*<<< orphan*/  const u8 ;
typedef  int /*<<< orphan*/  u32 ;
struct davinci_spi {int /*<<< orphan*/  const* tx; } ;

/* Variables and functions */

__attribute__((used)) static u32 davinci_spi_tx_buf_u8(struct davinci_spi *dspi)
{
	u32 data = 0;

	if (dspi->tx) {
		const u8 *tx = dspi->tx;

		data = *tx++;
		dspi->tx = tx;
	}
	return data;
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
          int _len_dspi0 = 1;
          struct davinci_spi * dspi = (struct davinci_spi *) malloc(_len_dspi0*sizeof(struct davinci_spi));
          for(int _i0 = 0; _i0 < _len_dspi0; _i0++) {
              int _len_dspi__i0__tx0 = 1;
          dspi[_i0].tx = (const int *) malloc(_len_dspi__i0__tx0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_dspi__i0__tx0; _j0++) {
            dspi[_i0].tx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = davinci_spi_tx_buf_u8(dspi);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dspi0; _aux++) {
          free(dspi[_aux].tx);
          }
          free(dspi);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dspi0 = 65025;
          struct davinci_spi * dspi = (struct davinci_spi *) malloc(_len_dspi0*sizeof(struct davinci_spi));
          for(int _i0 = 0; _i0 < _len_dspi0; _i0++) {
              int _len_dspi__i0__tx0 = 1;
          dspi[_i0].tx = (const int *) malloc(_len_dspi__i0__tx0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_dspi__i0__tx0; _j0++) {
            dspi[_i0].tx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = davinci_spi_tx_buf_u8(dspi);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dspi0; _aux++) {
          free(dspi[_aux].tx);
          }
          free(dspi);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dspi0 = 100;
          struct davinci_spi * dspi = (struct davinci_spi *) malloc(_len_dspi0*sizeof(struct davinci_spi));
          for(int _i0 = 0; _i0 < _len_dspi0; _i0++) {
              int _len_dspi__i0__tx0 = 1;
          dspi[_i0].tx = (const int *) malloc(_len_dspi__i0__tx0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_dspi__i0__tx0; _j0++) {
            dspi[_i0].tx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = davinci_spi_tx_buf_u8(dspi);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dspi0; _aux++) {
          free(dspi[_aux].tx);
          }
          free(dspi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
