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

/* Variables and functions */
 scalar_t__* UpperToLower ; 

int sqlite3_strnicmp(const char *zLeft, const char *zRight, int N){
  register unsigned char *a, *b;
  a = (unsigned char *)zLeft;
  b = (unsigned char *)zRight;
  while( N-- > 0 && *a!=0 && UpperToLower[*a]==UpperToLower[*b]){ a++; b++; }
  return N<0 ? 0 : UpperToLower[*a] - UpperToLower[*b];
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
          int N = 100;
          int _len_zLeft0 = 1;
          const char * zLeft = (const char *) malloc(_len_zLeft0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_zLeft0; _i0++) {
            zLeft[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_zRight0 = 1;
          const char * zRight = (const char *) malloc(_len_zRight0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_zRight0; _i0++) {
            zRight[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sqlite3_strnicmp(zLeft,zRight,N);
          printf("%d\n", benchRet); 
          free(zLeft);
          free(zRight);
        
        break;
    }
    // big-arr
    case 1:
    {
          int N = 255;
          int _len_zLeft0 = 65025;
          const char * zLeft = (const char *) malloc(_len_zLeft0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_zLeft0; _i0++) {
            zLeft[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_zRight0 = 65025;
          const char * zRight = (const char *) malloc(_len_zRight0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_zRight0; _i0++) {
            zRight[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sqlite3_strnicmp(zLeft,zRight,N);
          printf("%d\n", benchRet); 
          free(zLeft);
          free(zRight);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int N = 10;
          int _len_zLeft0 = 100;
          const char * zLeft = (const char *) malloc(_len_zLeft0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_zLeft0; _i0++) {
            zLeft[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_zRight0 = 100;
          const char * zRight = (const char *) malloc(_len_zRight0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_zRight0; _i0++) {
            zRight[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sqlite3_strnicmp(zLeft,zRight,N);
          printf("%d\n", benchRet); 
          free(zLeft);
          free(zRight);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
