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

__attribute__((used)) static void
slide_vartime(signed char *r, const unsigned char *a)
{
    int i;
    int b;
    int k;
    int ribs;
    int cmp;

    for (i = 0; i < 256; ++i) {
        r[i] = 1 & (a[i >> 3] >> (i & 7));
    }
    for (i = 0; i < 256; ++i) {
        if (! r[i]) {
            continue;
        }
        for (b = 1; b <= 6 && i + b < 256; ++b) {
            if (! r[i + b]) {
                continue;
            }
            ribs = r[i + b] << b;
            cmp = r[i] + ribs;
            if (cmp <= 15) {
                r[i] = cmp;
                r[i + b] = 0;
            } else {
                cmp = r[i] - ribs;
                if (cmp < -15) {
                    break;
                }
                r[i] = cmp;
                for (k = i + b; k < 256; ++k) {
                    if (! r[k]) {
                        r[k] = 1;
                        break;
                    }
                    r[k] = 0;
                }
            }
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
          int _len_r0 = 1;
          signed char * r = (signed char *) malloc(_len_r0*sizeof(signed char));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a0 = 1;
          const unsigned char * a = (const unsigned char *) malloc(_len_a0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          slide_vartime(r,a);
          free(r);
          free(a);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_r0 = 65025;
          signed char * r = (signed char *) malloc(_len_r0*sizeof(signed char));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a0 = 65025;
          const unsigned char * a = (const unsigned char *) malloc(_len_a0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          slide_vartime(r,a);
          free(r);
          free(a);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_r0 = 100;
          signed char * r = (signed char *) malloc(_len_r0*sizeof(signed char));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a0 = 100;
          const unsigned char * a = (const unsigned char *) malloc(_len_a0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          slide_vartime(r,a);
          free(r);
          free(a);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
