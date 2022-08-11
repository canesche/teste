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
typedef  scalar_t__* png_bytep ;
typedef  scalar_t__ png_byte ;
struct TYPE_3__ {scalar_t__* prev_row; scalar_t__* try_row; scalar_t__* row_buf; } ;

/* Variables and functions */
 scalar_t__ PNG_FILTER_VALUE_UP ; 

__attribute__((used)) static void /* PRIVATE */
png_setup_up_row_only(png_structrp png_ptr, size_t row_bytes)
{
   png_bytep rp, dp, pp;
   size_t i;

   png_ptr->try_row[0] = PNG_FILTER_VALUE_UP;

   for (i = 0, rp = png_ptr->row_buf + 1, dp = png_ptr->try_row + 1,
       pp = png_ptr->prev_row + 1; i < row_bytes;
       i++, rp++, pp++, dp++)
   {
      *dp = (png_byte)(((int)*rp - (int)*pp) & 0xff);
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
          unsigned long row_bytes = 100;
          int _len_png_ptr0 = 1;
          struct TYPE_3__ * png_ptr = (struct TYPE_3__ *) malloc(_len_png_ptr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_png_ptr0; _i0++) {
              int _len_png_ptr__i0__prev_row0 = 1;
          png_ptr[_i0].prev_row = (long *) malloc(_len_png_ptr__i0__prev_row0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_png_ptr__i0__prev_row0; _j0++) {
            png_ptr[_i0].prev_row[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_png_ptr__i0__try_row0 = 1;
          png_ptr[_i0].try_row = (long *) malloc(_len_png_ptr__i0__try_row0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_png_ptr__i0__try_row0; _j0++) {
            png_ptr[_i0].try_row[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_png_ptr__i0__row_buf0 = 1;
          png_ptr[_i0].row_buf = (long *) malloc(_len_png_ptr__i0__row_buf0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_png_ptr__i0__row_buf0; _j0++) {
            png_ptr[_i0].row_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          png_setup_up_row_only(png_ptr,row_bytes);
          for(int _aux = 0; _aux < _len_png_ptr0; _aux++) {
          free(png_ptr[_aux].prev_row);
          }
          for(int _aux = 0; _aux < _len_png_ptr0; _aux++) {
          free(png_ptr[_aux].try_row);
          }
          for(int _aux = 0; _aux < _len_png_ptr0; _aux++) {
          free(png_ptr[_aux].row_buf);
          }
          free(png_ptr);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long row_bytes = 255;
          int _len_png_ptr0 = 65025;
          struct TYPE_3__ * png_ptr = (struct TYPE_3__ *) malloc(_len_png_ptr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_png_ptr0; _i0++) {
              int _len_png_ptr__i0__prev_row0 = 1;
          png_ptr[_i0].prev_row = (long *) malloc(_len_png_ptr__i0__prev_row0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_png_ptr__i0__prev_row0; _j0++) {
            png_ptr[_i0].prev_row[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_png_ptr__i0__try_row0 = 1;
          png_ptr[_i0].try_row = (long *) malloc(_len_png_ptr__i0__try_row0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_png_ptr__i0__try_row0; _j0++) {
            png_ptr[_i0].try_row[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_png_ptr__i0__row_buf0 = 1;
          png_ptr[_i0].row_buf = (long *) malloc(_len_png_ptr__i0__row_buf0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_png_ptr__i0__row_buf0; _j0++) {
            png_ptr[_i0].row_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          png_setup_up_row_only(png_ptr,row_bytes);
          for(int _aux = 0; _aux < _len_png_ptr0; _aux++) {
          free(png_ptr[_aux].prev_row);
          }
          for(int _aux = 0; _aux < _len_png_ptr0; _aux++) {
          free(png_ptr[_aux].try_row);
          }
          for(int _aux = 0; _aux < _len_png_ptr0; _aux++) {
          free(png_ptr[_aux].row_buf);
          }
          free(png_ptr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long row_bytes = 10;
          int _len_png_ptr0 = 100;
          struct TYPE_3__ * png_ptr = (struct TYPE_3__ *) malloc(_len_png_ptr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_png_ptr0; _i0++) {
              int _len_png_ptr__i0__prev_row0 = 1;
          png_ptr[_i0].prev_row = (long *) malloc(_len_png_ptr__i0__prev_row0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_png_ptr__i0__prev_row0; _j0++) {
            png_ptr[_i0].prev_row[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_png_ptr__i0__try_row0 = 1;
          png_ptr[_i0].try_row = (long *) malloc(_len_png_ptr__i0__try_row0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_png_ptr__i0__try_row0; _j0++) {
            png_ptr[_i0].try_row[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_png_ptr__i0__row_buf0 = 1;
          png_ptr[_i0].row_buf = (long *) malloc(_len_png_ptr__i0__row_buf0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_png_ptr__i0__row_buf0; _j0++) {
            png_ptr[_i0].row_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          png_setup_up_row_only(png_ptr,row_bytes);
          for(int _aux = 0; _aux < _len_png_ptr0; _aux++) {
          free(png_ptr[_aux].prev_row);
          }
          for(int _aux = 0; _aux < _len_png_ptr0; _aux++) {
          free(png_ptr[_aux].try_row);
          }
          for(int _aux = 0; _aux < _len_png_ptr0; _aux++) {
          free(png_ptr[_aux].row_buf);
          }
          free(png_ptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
