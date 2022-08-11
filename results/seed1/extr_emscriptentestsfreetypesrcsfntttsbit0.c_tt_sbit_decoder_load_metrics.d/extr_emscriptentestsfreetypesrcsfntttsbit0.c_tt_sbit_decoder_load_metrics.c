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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int metrics_loaded; TYPE_1__* metrics; } ;
struct TYPE_4__ {void* vertAdvance; void* vertBearingY; void* vertBearingX; void* horiAdvance; void* horiBearingY; void* horiBearingX; void* width; void* height; } ;
typedef  TYPE_1__* TT_SBit_Metrics ;
typedef  TYPE_2__* TT_SBitDecoder ;
typedef  int /*<<< orphan*/  FT_Error ;
typedef  void* FT_Char ;
typedef  void* FT_Byte ;
typedef  scalar_t__ FT_Bool ;

/* Variables and functions */
 int /*<<< orphan*/  SFNT_Err_Invalid_Argument ; 
 int /*<<< orphan*/  SFNT_Err_Ok ; 

__attribute__((used)) static FT_Error
  tt_sbit_decoder_load_metrics( TT_SBitDecoder  decoder,
                                FT_Byte*       *pp,
                                FT_Byte*        limit,
                                FT_Bool         big )
  {
    FT_Byte*         p       = *pp;
    TT_SBit_Metrics  metrics = decoder->metrics;


    if ( p + 5 > limit )
      goto Fail;

    metrics->height       = p[0];
    metrics->width        = p[1];
    metrics->horiBearingX = (FT_Char)p[2];
    metrics->horiBearingY = (FT_Char)p[3];
    metrics->horiAdvance  = p[4];

    p += 5;
    if ( big )
    {
      if ( p + 3 > limit )
        goto Fail;

      metrics->vertBearingX = (FT_Char)p[0];
      metrics->vertBearingY = (FT_Char)p[1];
      metrics->vertAdvance  = p[2];

      p += 3;
    }

    decoder->metrics_loaded = 1;
    *pp = p;
    return SFNT_Err_Ok;

  Fail:
    return SFNT_Err_Invalid_Argument;
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
          long big = 100;
          int _len_decoder0 = 1;
          struct TYPE_5__ * decoder = (struct TYPE_5__ *) malloc(_len_decoder0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_decoder0; _i0++) {
            decoder[_i0].metrics_loaded = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_decoder__i0__metrics0 = 1;
          decoder[_i0].metrics = (struct TYPE_4__ *) malloc(_len_decoder__i0__metrics0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_decoder__i0__metrics0; _j0++) {
              }
          }
          int _len_pp0 = 1;
          void *** pp = (void ***) malloc(_len_pp0*sizeof(void **));
          for(int _i0 = 0; _i0 < _len_pp0; _i0++) {
            int _len_pp1 = 1;
            pp[_i0] = (void **) malloc(_len_pp1*sizeof(void *));
            for(int _i1 = 0; _i1 < _len_pp1; _i1++) {
            }
          }
          int _len_limit0 = 1;
          void ** limit = (void **) malloc(_len_limit0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_limit0; _i0++) {
          }
          int benchRet = tt_sbit_decoder_load_metrics(decoder,pp,limit,big);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_decoder0; _aux++) {
          free(decoder[_aux].metrics);
          }
          free(decoder);
          for(int i1 = 0; i1 < _len_pp0; i1++) {
            int _len_pp1 = 1;
              for(int i2 = 0; i2 < _len_pp1; i2++) {
            int _len_pp2 = 1;
              }
          free(pp[i1]);
          }
          free(pp);
          for(int i1 = 0; i1 < _len_limit0; i1++) {
            int _len_limit1 = 1;
              }
          free(limit);
        
        break;
    }
    // big-arr
    case 1:
    {
          long big = 255;
          int _len_decoder0 = 65025;
          struct TYPE_5__ * decoder = (struct TYPE_5__ *) malloc(_len_decoder0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_decoder0; _i0++) {
            decoder[_i0].metrics_loaded = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_decoder__i0__metrics0 = 1;
          decoder[_i0].metrics = (struct TYPE_4__ *) malloc(_len_decoder__i0__metrics0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_decoder__i0__metrics0; _j0++) {
              }
          }
          int _len_pp0 = 65025;
          void *** pp = (void ***) malloc(_len_pp0*sizeof(void **));
          for(int _i0 = 0; _i0 < _len_pp0; _i0++) {
            int _len_pp1 = 1;
            pp[_i0] = (void **) malloc(_len_pp1*sizeof(void *));
            for(int _i1 = 0; _i1 < _len_pp1; _i1++) {
            }
          }
          int _len_limit0 = 65025;
          void ** limit = (void **) malloc(_len_limit0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_limit0; _i0++) {
          }
          int benchRet = tt_sbit_decoder_load_metrics(decoder,pp,limit,big);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_decoder0; _aux++) {
          free(decoder[_aux].metrics);
          }
          free(decoder);
          for(int i1 = 0; i1 < _len_pp0; i1++) {
            int _len_pp1 = 1;
              for(int i2 = 0; i2 < _len_pp1; i2++) {
            int _len_pp2 = 1;
              }
          free(pp[i1]);
          }
          free(pp);
          for(int i1 = 0; i1 < _len_limit0; i1++) {
            int _len_limit1 = 1;
              }
          free(limit);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long big = 10;
          int _len_decoder0 = 100;
          struct TYPE_5__ * decoder = (struct TYPE_5__ *) malloc(_len_decoder0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_decoder0; _i0++) {
            decoder[_i0].metrics_loaded = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_decoder__i0__metrics0 = 1;
          decoder[_i0].metrics = (struct TYPE_4__ *) malloc(_len_decoder__i0__metrics0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_decoder__i0__metrics0; _j0++) {
              }
          }
          int _len_pp0 = 100;
          void *** pp = (void ***) malloc(_len_pp0*sizeof(void **));
          for(int _i0 = 0; _i0 < _len_pp0; _i0++) {
            int _len_pp1 = 1;
            pp[_i0] = (void **) malloc(_len_pp1*sizeof(void *));
            for(int _i1 = 0; _i1 < _len_pp1; _i1++) {
            }
          }
          int _len_limit0 = 100;
          void ** limit = (void **) malloc(_len_limit0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_limit0; _i0++) {
          }
          int benchRet = tt_sbit_decoder_load_metrics(decoder,pp,limit,big);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_decoder0; _aux++) {
          free(decoder[_aux].metrics);
          }
          free(decoder);
          for(int i1 = 0; i1 < _len_pp0; i1++) {
            int _len_pp1 = 1;
              for(int i2 = 0; i2 < _len_pp1; i2++) {
            int _len_pp2 = 1;
              }
          free(pp[i1]);
          }
          free(pp);
          for(int i1 = 0; i1 < _len_limit0; i1++) {
            int _len_limit1 = 1;
              }
          free(limit);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
