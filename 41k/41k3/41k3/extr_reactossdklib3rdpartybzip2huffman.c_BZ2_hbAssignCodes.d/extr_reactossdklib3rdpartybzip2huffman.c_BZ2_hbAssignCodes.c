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
typedef  scalar_t__ UChar ;
typedef  scalar_t__ Int32 ;

/* Variables and functions */

void BZ2_hbAssignCodes ( Int32 *code,
                         UChar *length,
                         Int32 minLen,
                         Int32 maxLen,
                         Int32 alphaSize )
{
   Int32 n, vec, i;

   vec = 0;
   for (n = minLen; n <= maxLen; n++) {
      for (i = 0; i < alphaSize; i++)
         if (length[i] == n) { code[i] = vec; vec++; };
      vec <<= 1;
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
          long minLen = 100;
          long maxLen = 100;
          long alphaSize = 100;
          int _len_code0 = 1;
          long * code = (long *) malloc(_len_code0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_code0; _i0++) {
            code[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_length0 = 1;
          long * length = (long *) malloc(_len_length0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_length0; _i0++) {
            length[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          BZ2_hbAssignCodes(code,length,minLen,maxLen,alphaSize);
          free(code);
          free(length);
        
        break;
    }
    // big-arr
    case 1:
    {
          long minLen = 255;
          long maxLen = 255;
          long alphaSize = 255;
          int _len_code0 = 65025;
          long * code = (long *) malloc(_len_code0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_code0; _i0++) {
            code[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_length0 = 65025;
          long * length = (long *) malloc(_len_length0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_length0; _i0++) {
            length[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          BZ2_hbAssignCodes(code,length,minLen,maxLen,alphaSize);
          free(code);
          free(length);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long minLen = 10;
          long maxLen = 10;
          long alphaSize = 10;
          int _len_code0 = 100;
          long * code = (long *) malloc(_len_code0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_code0; _i0++) {
            code[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_length0 = 100;
          long * length = (long *) malloc(_len_length0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_length0; _i0++) {
            length[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          BZ2_hbAssignCodes(code,length,minLen,maxLen,alphaSize);
          free(code);
          free(length);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
