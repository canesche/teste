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
typedef  size_t UINT8 ;
typedef  int UINT16 ;

/* Variables and functions */
 size_t* Rcon ; 
 size_t* sbox ; 

void expandKey(UINT8 *expandedKey, UINT8 *key)
{
  UINT16 ii, buf1;
  for (ii=0;ii<16;ii++)
    expandedKey[ii] = key[ii];
  for (ii=1;ii<11;ii++){
    buf1 = expandedKey[ii*16 - 4];
    expandedKey[ii*16 + 0] = sbox[expandedKey[ii*16 - 3]]^expandedKey[(ii-1)*16 + 0]^Rcon[ii];
    expandedKey[ii*16 + 1] = sbox[expandedKey[ii*16 - 2]]^expandedKey[(ii-1)*16 + 1];
    expandedKey[ii*16 + 2] = sbox[expandedKey[ii*16 - 1]]^expandedKey[(ii-1)*16 + 2];
    expandedKey[ii*16 + 3] = sbox[buf1                  ]^expandedKey[(ii-1)*16 + 3];
    expandedKey[ii*16 + 4] = expandedKey[(ii-1)*16 + 4]^expandedKey[ii*16 + 0];
    expandedKey[ii*16 + 5] = expandedKey[(ii-1)*16 + 5]^expandedKey[ii*16 + 1];
    expandedKey[ii*16 + 6] = expandedKey[(ii-1)*16 + 6]^expandedKey[ii*16 + 2];
    expandedKey[ii*16 + 7] = expandedKey[(ii-1)*16 + 7]^expandedKey[ii*16 + 3];
    expandedKey[ii*16 + 8] = expandedKey[(ii-1)*16 + 8]^expandedKey[ii*16 + 4];
    expandedKey[ii*16 + 9] = expandedKey[(ii-1)*16 + 9]^expandedKey[ii*16 + 5];
    expandedKey[ii*16 +10] = expandedKey[(ii-1)*16 +10]^expandedKey[ii*16 + 6];
    expandedKey[ii*16 +11] = expandedKey[(ii-1)*16 +11]^expandedKey[ii*16 + 7];
    expandedKey[ii*16 +12] = expandedKey[(ii-1)*16 +12]^expandedKey[ii*16 + 8];
    expandedKey[ii*16 +13] = expandedKey[(ii-1)*16 +13]^expandedKey[ii*16 + 9];
    expandedKey[ii*16 +14] = expandedKey[(ii-1)*16 +14]^expandedKey[ii*16 +10];
    expandedKey[ii*16 +15] = expandedKey[(ii-1)*16 +15]^expandedKey[ii*16 +11];
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
          int _len_expandedKey0 = 1;
          unsigned long * expandedKey = (unsigned long *) malloc(_len_expandedKey0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_expandedKey0; _i0++) {
            expandedKey[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key0 = 1;
          unsigned long * key = (unsigned long *) malloc(_len_key0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          expandKey(expandedKey,key);
          free(expandedKey);
          free(key);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_expandedKey0 = 65025;
          unsigned long * expandedKey = (unsigned long *) malloc(_len_expandedKey0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_expandedKey0; _i0++) {
            expandedKey[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key0 = 65025;
          unsigned long * key = (unsigned long *) malloc(_len_key0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          expandKey(expandedKey,key);
          free(expandedKey);
          free(key);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_expandedKey0 = 100;
          unsigned long * expandedKey = (unsigned long *) malloc(_len_expandedKey0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_expandedKey0; _i0++) {
            expandedKey[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key0 = 100;
          unsigned long * key = (unsigned long *) malloc(_len_key0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          expandKey(expandedKey,key);
          free(expandedKey);
          free(key);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
