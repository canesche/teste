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
struct TYPE_3__ {unsigned int* state; scalar_t__ y; scalar_t__ x; } ;
typedef  TYPE_1__ RC4_CONTEXT ;

/* Variables and functions */

void rc4_init(RC4_CONTEXT *a4i, const unsigned char *key, unsigned int keyLen)
{
    unsigned int keyIndex = 0, stateIndex = 0;
    unsigned int i, a;

    a4i->x = a4i->y = 0;

    for (i=0; i<256; i++)
        a4i->state[i] = i;

    for (i=0; i<256; i++)
    {
        a = a4i->state[i];
        stateIndex += key[keyIndex] + a;
        stateIndex &= 0xff;
        a4i->state[i] = a4i->state[stateIndex];
        a4i->state[stateIndex] = a;
        if (++keyIndex >= keyLen)
            keyIndex = 0;
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
          unsigned int keyLen = 100;
          int _len_a4i0 = 1;
          struct TYPE_3__ * a4i = (struct TYPE_3__ *) malloc(_len_a4i0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_a4i0; _i0++) {
              int _len_a4i__i0__state0 = 1;
          a4i[_i0].state = (unsigned int *) malloc(_len_a4i__i0__state0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_a4i__i0__state0; _j0++) {
            a4i[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        a4i[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        a4i[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key0 = 1;
          const unsigned char * key = (const unsigned char *) malloc(_len_key0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rc4_init(a4i,key,keyLen);
          for(int _aux = 0; _aux < _len_a4i0; _aux++) {
          free(a4i[_aux].state);
          }
          free(a4i);
          free(key);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int keyLen = 255;
          int _len_a4i0 = 65025;
          struct TYPE_3__ * a4i = (struct TYPE_3__ *) malloc(_len_a4i0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_a4i0; _i0++) {
              int _len_a4i__i0__state0 = 1;
          a4i[_i0].state = (unsigned int *) malloc(_len_a4i__i0__state0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_a4i__i0__state0; _j0++) {
            a4i[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        a4i[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        a4i[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key0 = 65025;
          const unsigned char * key = (const unsigned char *) malloc(_len_key0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rc4_init(a4i,key,keyLen);
          for(int _aux = 0; _aux < _len_a4i0; _aux++) {
          free(a4i[_aux].state);
          }
          free(a4i);
          free(key);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int keyLen = 10;
          int _len_a4i0 = 100;
          struct TYPE_3__ * a4i = (struct TYPE_3__ *) malloc(_len_a4i0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_a4i0; _i0++) {
              int _len_a4i__i0__state0 = 1;
          a4i[_i0].state = (unsigned int *) malloc(_len_a4i__i0__state0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_a4i__i0__state0; _j0++) {
            a4i[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        a4i[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        a4i[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key0 = 100;
          const unsigned char * key = (const unsigned char *) malloc(_len_key0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rc4_init(a4i,key,keyLen);
          for(int _aux = 0; _aux < _len_a4i0; _aux++) {
          free(a4i[_aux].state);
          }
          free(a4i);
          free(key);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
