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
typedef  int int64_t ;

/* Variables and functions */
 int* costbl_12 ; 
 int* costbl_4 ; 
 int* costbl_8 ; 
 int* sintbl_12 ; 
 int* sintbl_4 ; 
 int* sintbl_8 ; 

__attribute__((used)) static void make_filters_from_proto(int (*filter)[8][2], const int *proto, int bands)
{

    const int *sinptr, *cosptr;
    int s, c, sinhalf, coshalf;
    int q, n;

    if (bands == 4) {
        sinptr = sintbl_4;
        cosptr = costbl_4;
        sinhalf = 759250125;
        coshalf = 759250125;
    } else if (bands == 8) {
        sinptr = sintbl_8;
        cosptr = costbl_8;
        sinhalf = 410903207;
        coshalf = 992008094;
    } else {
        sinptr = sintbl_12;
        cosptr = costbl_12;
        sinhalf = 277904834;
        coshalf = 1037154959;
    }

    for (q = 0; q < bands; q++) {
        for (n = 0; n < 7; n++) {
            int theta = (q*(n-6) + (n>>1) - 3) % bands;

            if (theta < 0)
                theta += bands;
            s = sinptr[theta];
            c = cosptr[theta];

            if (n & 1) {
                theta = (int)(((int64_t)c * coshalf - (int64_t)s * sinhalf + 0x20000000) >> 30);
                s = (int)(((int64_t)s * coshalf + (int64_t)c * sinhalf + 0x20000000) >> 30);
                c = theta;
            }
            filter[q][n][0] = (int)(((int64_t)proto[n] * c + 0x20000000) >> 30);
            filter[q][n][1] = -(int)(((int64_t)proto[n] * s + 0x20000000) >> 30);
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
          int bands = 100;
          int _len_filter0 = 8;
          int (*)** filter = (int (*)**) malloc(_len_filter0*sizeof(int ()**));
          for(int _i0 = 0; _i0 < _len_filter0; _i0++) {
            int _len_filter1 = 2;
            filter[_i0] = (int ()**) malloc(_len_filter1*sizeof(int ()*));
            for(int _i1 = 0; _i1 < _len_filter1; _i1++) {
              int _len_filter2 = 1;
              filter[_i0][_i1] = (int ()*) malloc(_len_filter2*sizeof(int ()));
              for(int _i2 = 0; _i2 < _len_filter2; _i2++) {
                filter[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_proto0 = 1;
          const int * proto = (const int *) malloc(_len_proto0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_proto0; _i0++) {
            proto[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          make_filters_from_proto(filter,proto,bands);
          for(int i1 = 0; i1 < _len_filter0; i1++) {
            int _len_filter1 = 2;
              for(int i2 = 0; i2 < _len_filter1; i2++) {
            int _len_filter2 = 1;
              free(filter[i1][i2]);
          }
          free(filter[i1]);
          }
          free(filter);
          free(proto);
        
        break;
    }
    // big-arr
    case 1:
    {
          int bands = 255;
          int _len_filter0 = 65025;
          int (*)** filter = (int (*)**) malloc(_len_filter0*sizeof(int ()**));
          for(int _i0 = 0; _i0 < _len_filter0; _i0++) {
            int _len_filter1 = 2;
            filter[_i0] = (int ()**) malloc(_len_filter1*sizeof(int ()*));
            for(int _i1 = 0; _i1 < _len_filter1; _i1++) {
              int _len_filter2 = 1;
              filter[_i0][_i1] = (int ()*) malloc(_len_filter2*sizeof(int ()));
              for(int _i2 = 0; _i2 < _len_filter2; _i2++) {
                filter[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_proto0 = 65025;
          const int * proto = (const int *) malloc(_len_proto0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_proto0; _i0++) {
            proto[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          make_filters_from_proto(filter,proto,bands);
          for(int i1 = 0; i1 < _len_filter0; i1++) {
            int _len_filter1 = 2;
              for(int i2 = 0; i2 < _len_filter1; i2++) {
            int _len_filter2 = 1;
              free(filter[i1][i2]);
          }
          free(filter[i1]);
          }
          free(filter);
          free(proto);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bands = 10;
          int _len_filter0 = 100;
          int (*)** filter = (int (*)**) malloc(_len_filter0*sizeof(int ()**));
          for(int _i0 = 0; _i0 < _len_filter0; _i0++) {
            int _len_filter1 = 2;
            filter[_i0] = (int ()**) malloc(_len_filter1*sizeof(int ()*));
            for(int _i1 = 0; _i1 < _len_filter1; _i1++) {
              int _len_filter2 = 1;
              filter[_i0][_i1] = (int ()*) malloc(_len_filter2*sizeof(int ()));
              for(int _i2 = 0; _i2 < _len_filter2; _i2++) {
                filter[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_proto0 = 100;
          const int * proto = (const int *) malloc(_len_proto0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_proto0; _i0++) {
            proto[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          make_filters_from_proto(filter,proto,bands);
          for(int i1 = 0; i1 < _len_filter0; i1++) {
            int _len_filter1 = 2;
              for(int i2 = 0; i2 < _len_filter1; i2++) {
            int _len_filter2 = 1;
              free(filter[i1][i2]);
          }
          free(filter[i1]);
          }
          free(filter);
          free(proto);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
