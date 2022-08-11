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

/* Variables and functions */
 void const* PIN_CS ; 
 void const* PIN_EN ; 
 void const* PIN_IRQ ; 
 void* SPI_HANDLE ; 

void SpiInit(void *spi, const void *pin_cs, const void *pin_en, const void *pin_irq) {
    SPI_HANDLE = spi;
    PIN_CS = pin_cs;
    PIN_EN = pin_en;
    PIN_IRQ = pin_irq;
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
          void * spi;
          int _len_pin_cs0 = 1;
          const void * pin_cs = (const void *) malloc(_len_pin_cs0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pin_cs0; _i0++) {
            pin_cs[_i0] = 0;
          }
          int _len_pin_en0 = 1;
          const void * pin_en = (const void *) malloc(_len_pin_en0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pin_en0; _i0++) {
            pin_en[_i0] = 0;
          }
          int _len_pin_irq0 = 1;
          const void * pin_irq = (const void *) malloc(_len_pin_irq0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pin_irq0; _i0++) {
            pin_irq[_i0] = 0;
          }
          SpiInit(spi,pin_cs,pin_en,pin_irq);
          free(pin_cs);
          free(pin_en);
          free(pin_irq);
        
        break;
    }
    // big-arr
    case 1:
    {
          void * spi;
          int _len_pin_cs0 = 65025;
          const void * pin_cs = (const void *) malloc(_len_pin_cs0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pin_cs0; _i0++) {
            pin_cs[_i0] = 0;
          }
          int _len_pin_en0 = 65025;
          const void * pin_en = (const void *) malloc(_len_pin_en0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pin_en0; _i0++) {
            pin_en[_i0] = 0;
          }
          int _len_pin_irq0 = 65025;
          const void * pin_irq = (const void *) malloc(_len_pin_irq0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pin_irq0; _i0++) {
            pin_irq[_i0] = 0;
          }
          SpiInit(spi,pin_cs,pin_en,pin_irq);
          free(pin_cs);
          free(pin_en);
          free(pin_irq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * spi;
          int _len_pin_cs0 = 100;
          const void * pin_cs = (const void *) malloc(_len_pin_cs0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pin_cs0; _i0++) {
            pin_cs[_i0] = 0;
          }
          int _len_pin_en0 = 100;
          const void * pin_en = (const void *) malloc(_len_pin_en0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pin_en0; _i0++) {
            pin_en[_i0] = 0;
          }
          int _len_pin_irq0 = 100;
          const void * pin_irq = (const void *) malloc(_len_pin_irq0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pin_irq0; _i0++) {
            pin_irq[_i0] = 0;
          }
          SpiInit(spi,pin_cs,pin_en,pin_irq);
          free(pin_cs);
          free(pin_en);
          free(pin_irq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
