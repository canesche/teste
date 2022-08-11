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
struct TYPE_3__ {int /*<<< orphan*/ * data; } ;
typedef  TYPE_1__ RC2_KEY ;
typedef  int /*<<< orphan*/  RC2_INT ;

/* Variables and functions */
 unsigned int* key_table ; 

void RC2_set_key(RC2_KEY *key, int len, const unsigned char *data, int bits)
{
    int i, j;
    unsigned char *k;
    RC2_INT *ki;
    unsigned int c, d;

    k = (unsigned char *)&(key->data[0]);
    *k = 0;                     /* for if there is a zero length key */

    if (len > 128)
        len = 128;
    if (bits <= 0)
        bits = 1024;
    if (bits > 1024)
        bits = 1024;

    for (i = 0; i < len; i++)
        k[i] = data[i];

    /* expand table */
    d = k[len - 1];
    j = 0;
    for (i = len; i < 128; i++, j++) {
        d = key_table[(k[j] + d) & 0xff];
        k[i] = d;
    }

    /* hmm.... key reduction to 'bits' bits */

    j = (bits + 7) >> 3;
    i = 128 - j;
    c = (0xff >> (-bits & 0x07));

    d = key_table[k[i] & c];
    k[i] = d;
    while (i--) {
        d = key_table[k[i + j] ^ d];
        k[i] = d;
    }

    /* copy from bytes into RC2_INT's */
    ki = &(key->data[63]);
    for (i = 127; i >= 0; i -= 2)
        *(ki--) = ((k[i] << 8) | k[i - 1]) & 0xffff;
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
          int len = 100;
          int bits = 100;
          int _len_key0 = 1;
          struct TYPE_3__ * key = (struct TYPE_3__ *) malloc(_len_key0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
              int _len_key__i0__data0 = 1;
          key[_i0].data = (int *) malloc(_len_key__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_key__i0__data0; _j0++) {
            key[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_data0 = 1;
          const unsigned char * data = (const unsigned char *) malloc(_len_data0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          RC2_set_key(key,len,data,bits);
          for(int _aux = 0; _aux < _len_key0; _aux++) {
          free(key[_aux].data);
          }
          free(key);
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int len = 255;
          int bits = 255;
          int _len_key0 = 65025;
          struct TYPE_3__ * key = (struct TYPE_3__ *) malloc(_len_key0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
              int _len_key__i0__data0 = 1;
          key[_i0].data = (int *) malloc(_len_key__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_key__i0__data0; _j0++) {
            key[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_data0 = 65025;
          const unsigned char * data = (const unsigned char *) malloc(_len_data0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          RC2_set_key(key,len,data,bits);
          for(int _aux = 0; _aux < _len_key0; _aux++) {
          free(key[_aux].data);
          }
          free(key);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int len = 10;
          int bits = 10;
          int _len_key0 = 100;
          struct TYPE_3__ * key = (struct TYPE_3__ *) malloc(_len_key0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
              int _len_key__i0__data0 = 1;
          key[_i0].data = (int *) malloc(_len_key__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_key__i0__data0; _j0++) {
            key[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_data0 = 100;
          const unsigned char * data = (const unsigned char *) malloc(_len_data0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          RC2_set_key(key,len,data,bits);
          for(int _aux = 0; _aux < _len_key0; _aux++) {
          free(key[_aux].data);
          }
          free(key);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
