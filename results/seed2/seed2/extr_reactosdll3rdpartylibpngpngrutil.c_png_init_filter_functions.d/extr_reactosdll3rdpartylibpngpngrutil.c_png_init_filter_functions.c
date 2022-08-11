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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_1__* png_structrp ;
struct TYPE_3__ {int pixel_depth; int /*<<< orphan*/ * read_filter; } ;

/* Variables and functions */
 int PNG_FILTER_VALUE_AVG ; 
 int PNG_FILTER_VALUE_PAETH ; 
 int PNG_FILTER_VALUE_SUB ; 
 int PNG_FILTER_VALUE_UP ; 
 int /*<<< orphan*/  png_read_filter_row_avg ; 
 int /*<<< orphan*/  png_read_filter_row_paeth_1byte_pixel ; 
 int /*<<< orphan*/  png_read_filter_row_paeth_multibyte_pixel ; 
 int /*<<< orphan*/  png_read_filter_row_sub ; 
 int /*<<< orphan*/  png_read_filter_row_up ; 

__attribute__((used)) static void
png_init_filter_functions(png_structrp pp)
   /* This function is called once for every PNG image (except for PNG images
    * that only use PNG_FILTER_VALUE_NONE for all rows) to set the
    * implementations required to reverse the filtering of PNG rows.  Reversing
    * the filter is the first transformation performed on the row data.  It is
    * performed in place, therefore an implementation can be selected based on
    * the image pixel format.  If the implementation depends on image width then
    * take care to ensure that it works correctly if the image is interlaced -
    * interlacing causes the actual row width to vary.
    */
{
   unsigned int bpp = (pp->pixel_depth + 7) >> 3;

   pp->read_filter[PNG_FILTER_VALUE_SUB-1] = png_read_filter_row_sub;
   pp->read_filter[PNG_FILTER_VALUE_UP-1] = png_read_filter_row_up;
   pp->read_filter[PNG_FILTER_VALUE_AVG-1] = png_read_filter_row_avg;
   if (bpp == 1)
      pp->read_filter[PNG_FILTER_VALUE_PAETH-1] =
         png_read_filter_row_paeth_1byte_pixel;
   else
      pp->read_filter[PNG_FILTER_VALUE_PAETH-1] =
         png_read_filter_row_paeth_multibyte_pixel;

#ifdef PNG_FILTER_OPTIMIZATIONS
   /* To use this define PNG_FILTER_OPTIMIZATIONS as the name of a function to
    * call to install hardware optimizations for the above functions; simply
    * replace whatever elements of the pp->read_filter[] array with a hardware
    * specific (or, for that matter, generic) optimization.
    *
    * To see an example of this examine what configure.ac does when
    * --enable-arm-neon is specified on the command line.
    */
   PNG_FILTER_OPTIMIZATIONS(pp, bpp);
#endif
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
          int _len_pp0 = 1;
          struct TYPE_3__ * pp = (struct TYPE_3__ *) malloc(_len_pp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pp0; _i0++) {
            pp[_i0].pixel_depth = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pp__i0__read_filter0 = 1;
          pp[_i0].read_filter = (int *) malloc(_len_pp__i0__read_filter0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pp__i0__read_filter0; _j0++) {
            pp[_i0].read_filter[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          png_init_filter_functions(pp);
          for(int _aux = 0; _aux < _len_pp0; _aux++) {
          free(pp[_aux].read_filter);
          }
          free(pp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pp0 = 65025;
          struct TYPE_3__ * pp = (struct TYPE_3__ *) malloc(_len_pp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pp0; _i0++) {
            pp[_i0].pixel_depth = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pp__i0__read_filter0 = 1;
          pp[_i0].read_filter = (int *) malloc(_len_pp__i0__read_filter0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pp__i0__read_filter0; _j0++) {
            pp[_i0].read_filter[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          png_init_filter_functions(pp);
          for(int _aux = 0; _aux < _len_pp0; _aux++) {
          free(pp[_aux].read_filter);
          }
          free(pp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pp0 = 100;
          struct TYPE_3__ * pp = (struct TYPE_3__ *) malloc(_len_pp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pp0; _i0++) {
            pp[_i0].pixel_depth = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pp__i0__read_filter0 = 1;
          pp[_i0].read_filter = (int *) malloc(_len_pp__i0__read_filter0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pp__i0__read_filter0; _j0++) {
            pp[_i0].read_filter[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          png_init_filter_functions(pp);
          for(int _aux = 0; _aux < _len_pp0; _aux++) {
          free(pp[_aux].read_filter);
          }
          free(pp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
