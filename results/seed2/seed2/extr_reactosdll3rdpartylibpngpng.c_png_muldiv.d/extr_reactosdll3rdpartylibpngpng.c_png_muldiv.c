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
typedef  int png_uint_32 ;
typedef  scalar_t__ png_int_32 ;
typedef  scalar_t__* png_fixed_point_p ;
typedef  scalar_t__ png_fixed_point ;

/* Variables and functions */

int
png_muldiv(png_fixed_point_p res, png_fixed_point a, png_int_32 times,
    png_int_32 divisor)
{
   /* Return a * times / divisor, rounded. */
   if (divisor != 0)
   {
      if (a == 0 || times == 0)
      {
         *res = 0;
         return 1;
      }
      else
      {
#ifdef PNG_FLOATING_ARITHMETIC_SUPPORTED
         double r = a;
         r *= times;
         r /= divisor;
         r = floor(r+.5);

         /* A png_fixed_point is a 32-bit integer. */
         if (r <= 2147483647. && r >= -2147483648.)
         {
            *res = (png_fixed_point)r;
            return 1;
         }
#else
         int negative = 0;
         png_uint_32 A, T, D;
         png_uint_32 s16, s32, s00;

         if (a < 0)
            negative = 1, A = -a;
         else
            A = a;

         if (times < 0)
            negative = !negative, T = -times;
         else
            T = times;

         if (divisor < 0)
            negative = !negative, D = -divisor;
         else
            D = divisor;

         /* Following can't overflow because the arguments only
          * have 31 bits each, however the result may be 32 bits.
          */
         s16 = (A >> 16) * (T & 0xffff) +
                           (A & 0xffff) * (T >> 16);
         /* Can't overflow because the a*times bit is only 30
          * bits at most.
          */
         s32 = (A >> 16) * (T >> 16) + (s16 >> 16);
         s00 = (A & 0xffff) * (T & 0xffff);

         s16 = (s16 & 0xffff) << 16;
         s00 += s16;

         if (s00 < s16)
            ++s32; /* carry */

         if (s32 < D) /* else overflow */
         {
            /* s32.s00 is now the 64-bit product, do a standard
             * division, we know that s32 < D, so the maximum
             * required shift is 31.
             */
            int bitshift = 32;
            png_fixed_point result = 0; /* NOTE: signed */

            while (--bitshift >= 0)
            {
               png_uint_32 d32, d00;

               if (bitshift > 0)
                  d32 = D >> (32-bitshift), d00 = D << bitshift;

               else
                  d32 = 0, d00 = D;

               if (s32 > d32)
               {
                  if (s00 < d00) --s32; /* carry */
                  s32 -= d32, s00 -= d00, result += 1<<bitshift;
               }

               else
                  if (s32 == d32 && s00 >= d00)
                     s32 = 0, s00 -= d00, result += 1<<bitshift;
            }

            /* Handle the rounding. */
            if (s00 >= (D >> 1))
               ++result;

            if (negative != 0)
               result = -result;

            /* Check for overflow. */
            if ((negative != 0 && result <= 0) ||
                (negative == 0 && result >= 0))
            {
               *res = result;
               return 1;
            }
         }
#endif
      }
   }

   return 0;
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
          long a = 100;
          long times = 100;
          long divisor = 100;
          int _len_res0 = 1;
          long * res = (long *) malloc(_len_res0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            res[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = png_muldiv(res,a,times,divisor);
          printf("%d\n", benchRet); 
          free(res);
        
        break;
    }
    // big-arr
    case 1:
    {
          long a = 255;
          long times = 255;
          long divisor = 255;
          int _len_res0 = 65025;
          long * res = (long *) malloc(_len_res0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            res[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = png_muldiv(res,a,times,divisor);
          printf("%d\n", benchRet); 
          free(res);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long a = 10;
          long times = 10;
          long divisor = 10;
          int _len_res0 = 100;
          long * res = (long *) malloc(_len_res0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            res[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = png_muldiv(res,a,times,divisor);
          printf("%d\n", benchRet); 
          free(res);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
