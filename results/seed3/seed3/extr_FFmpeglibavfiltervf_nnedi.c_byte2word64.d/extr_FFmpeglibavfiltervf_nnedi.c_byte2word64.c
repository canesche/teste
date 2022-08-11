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
typedef  int /*<<< orphan*/  uint8_t ;
typedef  int /*<<< orphan*/  int16_t ;

/* Variables and functions */

__attribute__((used)) static void byte2word64(const uint8_t *t, const int pitch, float *p)
{
    int16_t *ps = (int16_t *)p;
    int y, x;

    for (y = 0; y < 4; y++)
        for (x = 0; x < 16; x++)
            ps[y * 16 + x] = t[y * pitch * 2 + x];
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
          const int pitch = 100;
          int _len_t0 = 1;
          const int * t = (const int *) malloc(_len_t0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 1;
          float * p = (float *) malloc(_len_p0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          byte2word64(t,pitch,p);
          free(t);
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          const int pitch = 255;
          int _len_t0 = 65025;
          const int * t = (const int *) malloc(_len_t0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 65025;
          float * p = (float *) malloc(_len_p0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          byte2word64(t,pitch,p);
          free(t);
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int pitch = 10;
          int _len_t0 = 100;
          const int * t = (const int *) malloc(_len_t0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 100;
          float * p = (float *) malloc(_len_p0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          byte2word64(t,pitch,p);
          free(t);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
