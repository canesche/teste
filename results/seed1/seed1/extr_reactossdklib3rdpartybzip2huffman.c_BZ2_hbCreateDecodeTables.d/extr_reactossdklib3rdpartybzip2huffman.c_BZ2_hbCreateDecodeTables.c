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
typedef  size_t UChar ;
typedef  size_t Int32 ;

/* Variables and functions */
 size_t BZ_MAX_CODE_LEN ; 

void BZ2_hbCreateDecodeTables ( Int32 *limit,
                                Int32 *base,
                                Int32 *perm,
                                UChar *length,
                                Int32 minLen,
                                Int32 maxLen,
                                Int32 alphaSize )
{
   Int32 pp, i, j, vec;

   pp = 0;
   for (i = minLen; i <= maxLen; i++)
      for (j = 0; j < alphaSize; j++)
         if (length[j] == i) { perm[pp] = j; pp++; };

   for (i = 0; i < BZ_MAX_CODE_LEN; i++) base[i] = 0;
   for (i = 0; i < alphaSize; i++) base[length[i]+1]++;

   for (i = 1; i < BZ_MAX_CODE_LEN; i++) base[i] += base[i-1];

   for (i = 0; i < BZ_MAX_CODE_LEN; i++) limit[i] = 0;
   vec = 0;

   for (i = minLen; i <= maxLen; i++) {
      vec += (base[i+1] - base[i]);
      limit[i] = vec-1;
      vec <<= 1;
   }
   for (i = minLen + 1; i <= maxLen; i++)
      base[i] = ((limit[i-1] + 1) << 1) - base[i];
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
          unsigned long minLen = 100;
          unsigned long maxLen = 100;
          unsigned long alphaSize = 100;
          int _len_limit0 = 1;
          unsigned long * limit = (unsigned long *) malloc(_len_limit0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_limit0; _i0++) {
            limit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_base0 = 1;
          unsigned long * base = (unsigned long *) malloc(_len_base0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_perm0 = 1;
          unsigned long * perm = (unsigned long *) malloc(_len_perm0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_perm0; _i0++) {
            perm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_length0 = 1;
          unsigned long * length = (unsigned long *) malloc(_len_length0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_length0; _i0++) {
            length[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          BZ2_hbCreateDecodeTables(limit,base,perm,length,minLen,maxLen,alphaSize);
          free(limit);
          free(base);
          free(perm);
          free(length);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long minLen = 255;
          unsigned long maxLen = 255;
          unsigned long alphaSize = 255;
          int _len_limit0 = 65025;
          unsigned long * limit = (unsigned long *) malloc(_len_limit0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_limit0; _i0++) {
            limit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_base0 = 65025;
          unsigned long * base = (unsigned long *) malloc(_len_base0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_perm0 = 65025;
          unsigned long * perm = (unsigned long *) malloc(_len_perm0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_perm0; _i0++) {
            perm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_length0 = 65025;
          unsigned long * length = (unsigned long *) malloc(_len_length0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_length0; _i0++) {
            length[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          BZ2_hbCreateDecodeTables(limit,base,perm,length,minLen,maxLen,alphaSize);
          free(limit);
          free(base);
          free(perm);
          free(length);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long minLen = 10;
          unsigned long maxLen = 10;
          unsigned long alphaSize = 10;
          int _len_limit0 = 100;
          unsigned long * limit = (unsigned long *) malloc(_len_limit0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_limit0; _i0++) {
            limit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_base0 = 100;
          unsigned long * base = (unsigned long *) malloc(_len_base0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_perm0 = 100;
          unsigned long * perm = (unsigned long *) malloc(_len_perm0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_perm0; _i0++) {
            perm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_length0 = 100;
          unsigned long * length = (unsigned long *) malloc(_len_length0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_length0; _i0++) {
            length[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          BZ2_hbCreateDecodeTables(limit,base,perm,length,minLen,maxLen,alphaSize);
          free(limit);
          free(base);
          free(perm);
          free(length);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
