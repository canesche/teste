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
typedef  int u16 ;

/* Variables and functions */
 unsigned char IFX_SPI_MORE_BIT ; 
 unsigned char IFX_SPI_MORE_MASK ; 
 int IFX_SPI_PAYLOAD_SIZE ; 

__attribute__((used)) static void ifx_spi_setup_spi_header(unsigned char *txbuffer, int tx_count,
					unsigned char more)
{
	*(u16 *)(txbuffer) = tx_count;
	*(u16 *)(txbuffer+2) = IFX_SPI_PAYLOAD_SIZE;
	txbuffer[1] |= (more << IFX_SPI_MORE_BIT) & IFX_SPI_MORE_MASK;
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
          int tx_count = 100;
          unsigned char more = 100;
          int _len_txbuffer0 = 1;
          unsigned char * txbuffer = (unsigned char *) malloc(_len_txbuffer0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_txbuffer0; _i0++) {
            txbuffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ifx_spi_setup_spi_header(txbuffer,tx_count,more);
          free(txbuffer);
        
        break;
    }
    // big-arr
    case 1:
    {
          int tx_count = 255;
          unsigned char more = 255;
          int _len_txbuffer0 = 65025;
          unsigned char * txbuffer = (unsigned char *) malloc(_len_txbuffer0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_txbuffer0; _i0++) {
            txbuffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ifx_spi_setup_spi_header(txbuffer,tx_count,more);
          free(txbuffer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int tx_count = 10;
          unsigned char more = 10;
          int _len_txbuffer0 = 100;
          unsigned char * txbuffer = (unsigned char *) malloc(_len_txbuffer0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_txbuffer0; _i0++) {
            txbuffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ifx_spi_setup_spi_header(txbuffer,tx_count,more);
          free(txbuffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
