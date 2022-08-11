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

long long int strtoll(const char *nptr, char **endptr, int base) {
    long long val = 0;

    for (; *nptr; nptr++) {
        int v = *nptr;
        if ('0' <= v && v <= '9') {
            v -= '0';
        } else if ('A' <= v && v <= 'Z') {
            v -= 'A' - 10;
        } else if ('a' <= v && v <= 'z') {
            v -= 'a' - 10;
        } else {
            break;
        }
        if (v >= base) {
            break;
        }
        val = val * base + v;
    }

    *endptr = (char*)nptr;

    return val;
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
          int base = 100;
          int _len_nptr0 = 1;
          const char * nptr = (const char *) malloc(_len_nptr0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_nptr0; _i0++) {
            nptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_endptr0 = 1;
          char ** endptr = (char **) malloc(_len_endptr0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_endptr0; _i0++) {
            int _len_endptr1 = 1;
            endptr[_i0] = (char *) malloc(_len_endptr1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_endptr1; _i1++) {
              endptr[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          long long benchRet = strtoll(nptr,endptr,base);
          printf("%lld\n", benchRet); 
          free(nptr);
          for(int i1 = 0; i1 < _len_endptr0; i1++) {
            int _len_endptr1 = 1;
              free(endptr[i1]);
          }
          free(endptr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int base = 255;
          int _len_nptr0 = 65025;
          const char * nptr = (const char *) malloc(_len_nptr0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_nptr0; _i0++) {
            nptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_endptr0 = 65025;
          char ** endptr = (char **) malloc(_len_endptr0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_endptr0; _i0++) {
            int _len_endptr1 = 1;
            endptr[_i0] = (char *) malloc(_len_endptr1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_endptr1; _i1++) {
              endptr[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          long long benchRet = strtoll(nptr,endptr,base);
          printf("%lld\n", benchRet); 
          free(nptr);
          for(int i1 = 0; i1 < _len_endptr0; i1++) {
            int _len_endptr1 = 1;
              free(endptr[i1]);
          }
          free(endptr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int base = 10;
          int _len_nptr0 = 100;
          const char * nptr = (const char *) malloc(_len_nptr0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_nptr0; _i0++) {
            nptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_endptr0 = 100;
          char ** endptr = (char **) malloc(_len_endptr0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_endptr0; _i0++) {
            int _len_endptr1 = 1;
            endptr[_i0] = (char *) malloc(_len_endptr1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_endptr1; _i1++) {
              endptr[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          long long benchRet = strtoll(nptr,endptr,base);
          printf("%lld\n", benchRet); 
          free(nptr);
          for(int i1 = 0; i1 < _len_endptr0; i1++) {
            int _len_endptr1 = 1;
              free(endptr[i1]);
          }
          free(endptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
