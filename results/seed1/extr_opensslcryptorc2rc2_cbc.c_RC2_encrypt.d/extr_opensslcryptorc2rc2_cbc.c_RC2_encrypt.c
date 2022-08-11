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
struct TYPE_3__ {int* data; } ;
typedef  TYPE_1__ RC2_KEY ;
typedef  int RC2_INT ;

/* Variables and functions */

void RC2_encrypt(unsigned long *d, RC2_KEY *key)
{
    int i, n;
    register RC2_INT *p0, *p1;
    register RC2_INT x0, x1, x2, x3, t;
    unsigned long l;

    l = d[0];
    x0 = (RC2_INT) l & 0xffff;
    x1 = (RC2_INT) (l >> 16L);
    l = d[1];
    x2 = (RC2_INT) l & 0xffff;
    x3 = (RC2_INT) (l >> 16L);

    n = 3;
    i = 5;

    p0 = p1 = &(key->data[0]);
    for (;;) {
        t = (x0 + (x1 & ~x3) + (x2 & x3) + *(p0++)) & 0xffff;
        x0 = (t << 1) | (t >> 15);
        t = (x1 + (x2 & ~x0) + (x3 & x0) + *(p0++)) & 0xffff;
        x1 = (t << 2) | (t >> 14);
        t = (x2 + (x3 & ~x1) + (x0 & x1) + *(p0++)) & 0xffff;
        x2 = (t << 3) | (t >> 13);
        t = (x3 + (x0 & ~x2) + (x1 & x2) + *(p0++)) & 0xffff;
        x3 = (t << 5) | (t >> 11);

        if (--i == 0) {
            if (--n == 0)
                break;
            i = (n == 2) ? 6 : 5;

            x0 += p1[x3 & 0x3f];
            x1 += p1[x0 & 0x3f];
            x2 += p1[x1 & 0x3f];
            x3 += p1[x2 & 0x3f];
        }
    }

    d[0] =
        (unsigned long)(x0 & 0xffff) | ((unsigned long)(x1 & 0xffff) << 16L);
    d[1] =
        (unsigned long)(x2 & 0xffff) | ((unsigned long)(x3 & 0xffff) << 16L);
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
          int _len_d0 = 1;
          unsigned long * d = (unsigned long *) malloc(_len_d0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key0 = 1;
          struct TYPE_3__ * key = (struct TYPE_3__ *) malloc(_len_key0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
              int _len_key__i0__data0 = 1;
          key[_i0].data = (int *) malloc(_len_key__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_key__i0__data0; _j0++) {
            key[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          RC2_encrypt(d,key);
          free(d);
          for(int _aux = 0; _aux < _len_key0; _aux++) {
          free(key[_aux].data);
          }
          free(key);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_d0 = 65025;
          unsigned long * d = (unsigned long *) malloc(_len_d0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key0 = 65025;
          struct TYPE_3__ * key = (struct TYPE_3__ *) malloc(_len_key0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
              int _len_key__i0__data0 = 1;
          key[_i0].data = (int *) malloc(_len_key__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_key__i0__data0; _j0++) {
            key[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          RC2_encrypt(d,key);
          free(d);
          for(int _aux = 0; _aux < _len_key0; _aux++) {
          free(key[_aux].data);
          }
          free(key);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_d0 = 100;
          unsigned long * d = (unsigned long *) malloc(_len_d0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key0 = 100;
          struct TYPE_3__ * key = (struct TYPE_3__ *) malloc(_len_key0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
              int _len_key__i0__data0 = 1;
          key[_i0].data = (int *) malloc(_len_key__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_key__i0__data0; _j0++) {
            key[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          RC2_encrypt(d,key);
          free(d);
          for(int _aux = 0; _aux < _len_key0; _aux++) {
          free(key[_aux].data);
          }
          free(key);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
