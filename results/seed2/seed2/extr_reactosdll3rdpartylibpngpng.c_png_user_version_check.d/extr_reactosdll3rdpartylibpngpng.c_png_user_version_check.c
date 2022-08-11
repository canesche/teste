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
typedef  scalar_t__* png_const_charp ;
struct TYPE_3__ {int flags; } ;

/* Variables and functions */
 int PNG_FLAG_LIBRARY_MISMATCH ; 
 scalar_t__* PNG_LIBPNG_VER_STRING ; 

int
png_user_version_check(png_structrp png_ptr, png_const_charp user_png_ver)
{
   /* Libpng versions 1.0.0 and later are binary compatible if the version
    * string matches through the second '.'; we must recompile any
    * applications that use any older library version.
    */

   if (user_png_ver != NULL)
   {
      int i = -1;
      int found_dots = 0;

      do
      {
         i++;
         if (user_png_ver[i] != PNG_LIBPNG_VER_STRING[i])
            png_ptr->flags |= PNG_FLAG_LIBRARY_MISMATCH;
         if (user_png_ver[i] == '.')
            found_dots++;
      } while (found_dots < 2 && user_png_ver[i] != 0 &&
            PNG_LIBPNG_VER_STRING[i] != 0);
   }

   else
      png_ptr->flags |= PNG_FLAG_LIBRARY_MISMATCH;

   if ((png_ptr->flags & PNG_FLAG_LIBRARY_MISMATCH) != 0)
   {
#ifdef PNG_WARNINGS_SUPPORTED
      size_t pos = 0;
      char m[128];

      pos = png_safecat(m, (sizeof m), pos,
          "Application built with libpng-");
      pos = png_safecat(m, (sizeof m), pos, user_png_ver);
      pos = png_safecat(m, (sizeof m), pos, " but running with ");
      pos = png_safecat(m, (sizeof m), pos, PNG_LIBPNG_VER_STRING);
      PNG_UNUSED(pos)

      png_warning(png_ptr, m);
#endif

#ifdef PNG_ERROR_NUMBERS_SUPPORTED
      png_ptr->flags = 0;
#endif

      return 0;
   }

   /* Success return. */
   return 1;
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
          int _len_png_ptr0 = 1;
          struct TYPE_3__ * png_ptr = (struct TYPE_3__ *) malloc(_len_png_ptr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_png_ptr0; _i0++) {
            png_ptr[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_user_png_ver0 = 1;
          long * user_png_ver = (long *) malloc(_len_user_png_ver0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_user_png_ver0; _i0++) {
            user_png_ver[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = png_user_version_check(png_ptr,user_png_ver);
          printf("%d\n", benchRet); 
          free(png_ptr);
          free(user_png_ver);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_png_ptr0 = 65025;
          struct TYPE_3__ * png_ptr = (struct TYPE_3__ *) malloc(_len_png_ptr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_png_ptr0; _i0++) {
            png_ptr[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_user_png_ver0 = 65025;
          long * user_png_ver = (long *) malloc(_len_user_png_ver0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_user_png_ver0; _i0++) {
            user_png_ver[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = png_user_version_check(png_ptr,user_png_ver);
          printf("%d\n", benchRet); 
          free(png_ptr);
          free(user_png_ver);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_png_ptr0 = 100;
          struct TYPE_3__ * png_ptr = (struct TYPE_3__ *) malloc(_len_png_ptr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_png_ptr0; _i0++) {
            png_ptr[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_user_png_ver0 = 100;
          long * user_png_ver = (long *) malloc(_len_user_png_ver0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_user_png_ver0; _i0++) {
            user_png_ver[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = png_user_version_check(png_ptr,user_png_ver);
          printf("%d\n", benchRet); 
          free(png_ptr);
          free(user_png_ver);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
