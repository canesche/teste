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
struct TYPE_2__ {char* buffer; long buffer_size; int band_size; int /*<<< orphan*/ * worker; } ;
typedef  int /*<<< orphan*/  TWorker ;
typedef  int /*<<< orphan*/  TCell ;
typedef  int /*<<< orphan*/ * PWorker ;
typedef  TYPE_1__* PRaster ;
typedef  scalar_t__ FT_Raster ;

/* Variables and functions */

__attribute__((used)) static void
  gray_raster_reset( FT_Raster  raster,
                     char*      pool_base,
                     long       pool_size )
  {
    PRaster  rast = (PRaster)raster;


    if ( raster )
    {
      if ( pool_base && pool_size >= (long)sizeof ( TWorker ) + 2048 )
      {
        PWorker  worker = (PWorker)pool_base;


        rast->worker      = worker;
        rast->buffer      = pool_base +
                              ( ( sizeof ( TWorker ) + sizeof ( TCell ) - 1 ) &
                                ~( sizeof ( TCell ) - 1 ) );
        rast->buffer_size = (long)( ( pool_base + pool_size ) -
                                    (char*)rast->buffer ) &
                                      ~( sizeof ( TCell ) - 1 );
        rast->band_size   = (int)( rast->buffer_size /
                                     ( sizeof ( TCell ) * 8 ) );
      }
      else
      {
        rast->buffer      = NULL;
        rast->buffer_size = 0;
        rast->worker      = NULL;
      }
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
          long raster = 100;
          long pool_size = 100;
          int _len_pool_base0 = 1;
          char * pool_base = (char *) malloc(_len_pool_base0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_pool_base0; _i0++) {
            pool_base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gray_raster_reset(raster,pool_base,pool_size);
          free(pool_base);
        
        break;
    }
    // big-arr
    case 1:
    {
          long raster = 255;
          long pool_size = 255;
          int _len_pool_base0 = 65025;
          char * pool_base = (char *) malloc(_len_pool_base0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_pool_base0; _i0++) {
            pool_base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gray_raster_reset(raster,pool_base,pool_size);
          free(pool_base);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long raster = 10;
          long pool_size = 10;
          int _len_pool_base0 = 100;
          char * pool_base = (char *) malloc(_len_pool_base0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_pool_base0; _i0++) {
            pool_base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gray_raster_reset(raster,pool_base,pool_size);
          free(pool_base);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
