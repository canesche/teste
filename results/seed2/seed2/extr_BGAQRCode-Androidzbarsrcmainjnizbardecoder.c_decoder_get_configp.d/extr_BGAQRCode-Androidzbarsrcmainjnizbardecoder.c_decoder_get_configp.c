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
typedef  int zbar_symbol_type_t ;
typedef  int /*<<< orphan*/  zbar_decoder_t ;

/* Variables and functions */

__attribute__((used)) static inline const unsigned int*
decoder_get_configp (const zbar_decoder_t *dcode,
                     zbar_symbol_type_t sym)
{
    const unsigned int *config;
    switch(sym) {
#ifdef ENABLE_EAN
    case ZBAR_EAN13:
        config = &dcode->ean.ean13_config;
        break;

    case ZBAR_EAN2:
        config = &dcode->ean.ean2_config;
        break;

    case ZBAR_EAN5:
        config = &dcode->ean.ean5_config;
        break;

    case ZBAR_EAN8:
        config = &dcode->ean.ean8_config;
        break;

    case ZBAR_UPCA:
        config = &dcode->ean.upca_config;
        break;

    case ZBAR_UPCE:
        config = &dcode->ean.upce_config;
        break;

    case ZBAR_ISBN10:
        config = &dcode->ean.isbn10_config;
        break;

    case ZBAR_ISBN13:
        config = &dcode->ean.isbn13_config;
        break;
#endif

#ifdef ENABLE_I25
    case ZBAR_I25:
        config = &dcode->i25.config;
        break;
#endif

#ifdef ENABLE_DATABAR
    case ZBAR_DATABAR:
        config = &dcode->databar.config;
        break;
    case ZBAR_DATABAR_EXP:
        config = &dcode->databar.config_exp;
        break;
#endif

#ifdef ENABLE_CODABAR
    case ZBAR_CODABAR:
        config = &dcode->codabar.config;
        break;
#endif

#ifdef ENABLE_CODE39
    case ZBAR_CODE39:
        config = &dcode->code39.config;
        break;
#endif

#ifdef ENABLE_CODE93
    case ZBAR_CODE93:
        config = &dcode->code93.config;
        break;
#endif

#ifdef ENABLE_CODE128
    case ZBAR_CODE128:
        config = &dcode->code128.config;
        break;
#endif

#ifdef ENABLE_PDF417
    case ZBAR_PDF417:
        config = &dcode->pdf417.config;
        break;
#endif

#ifdef ENABLE_QRCODE
    case ZBAR_QRCODE:
        config = &dcode->qrf.config;
        break;
#endif

    default:
        config = NULL;
    }
    return(config);
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
          int sym = 100;
          int _len_dcode0 = 1;
          const int * dcode = (const int *) malloc(_len_dcode0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_dcode0; _i0++) {
            dcode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const unsigned int * benchRet = decoder_get_configp(dcode,sym);
          printf("%u\n", (*benchRet)); 
          free(dcode);
        
        break;
    }
    // big-arr
    case 1:
    {
          int sym = 255;
          int _len_dcode0 = 65025;
          const int * dcode = (const int *) malloc(_len_dcode0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_dcode0; _i0++) {
            dcode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const unsigned int * benchRet = decoder_get_configp(dcode,sym);
          printf("%u\n", (*benchRet)); 
          free(dcode);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int sym = 10;
          int _len_dcode0 = 100;
          const int * dcode = (const int *) malloc(_len_dcode0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_dcode0; _i0++) {
            dcode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const unsigned int * benchRet = decoder_get_configp(dcode,sym);
          printf("%u\n", (*benchRet)); 
          free(dcode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
