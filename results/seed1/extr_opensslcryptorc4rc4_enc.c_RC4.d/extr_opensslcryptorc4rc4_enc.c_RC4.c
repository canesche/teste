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
struct TYPE_3__ {int x; int y; int* data; } ;
typedef  TYPE_1__ RC4_KEY ;
typedef  int RC4_INT ;

/* Variables and functions */

void RC4(RC4_KEY *key, size_t len, const unsigned char *indata,
         unsigned char *outdata)
{
    register RC4_INT *d;
    register RC4_INT x, y, tx, ty;
    size_t i;

    x = key->x;
    y = key->y;
    d = key->data;

#define LOOP(in,out) \
                x=((x+1)&0xff); \
                tx=d[x]; \
                y=(tx+y)&0xff; \
                d[x]=ty=d[y]; \
                d[y]=tx; \
                (out) = d[(tx+ty)&0xff]^ (in);

    i = len >> 3;
    if (i) {
        for (;;) {
            LOOP(indata[0], outdata[0]);
            LOOP(indata[1], outdata[1]);
            LOOP(indata[2], outdata[2]);
            LOOP(indata[3], outdata[3]);
            LOOP(indata[4], outdata[4]);
            LOOP(indata[5], outdata[5]);
            LOOP(indata[6], outdata[6]);
            LOOP(indata[7], outdata[7]);
            indata += 8;
            outdata += 8;
            if (--i == 0)
                break;
        }
    }
    i = len & 0x07;
    if (i) {
        for (;;) {
            LOOP(indata[0], outdata[0]);
            if (--i == 0)
                break;
            LOOP(indata[1], outdata[1]);
            if (--i == 0)
                break;
            LOOP(indata[2], outdata[2]);
            if (--i == 0)
                break;
            LOOP(indata[3], outdata[3]);
            if (--i == 0)
                break;
            LOOP(indata[4], outdata[4]);
            if (--i == 0)
                break;
            LOOP(indata[5], outdata[5]);
            if (--i == 0)
                break;
            LOOP(indata[6], outdata[6]);
            if (--i == 0)
                break;
        }
    }
    key->x = x;
    key->y = y;
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
          unsigned long len = 100;
          int _len_key0 = 1;
          struct TYPE_3__ * key = (struct TYPE_3__ *) malloc(_len_key0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        key[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_key__i0__data0 = 1;
          key[_i0].data = (int *) malloc(_len_key__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_key__i0__data0; _j0++) {
            key[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_indata0 = 1;
          const unsigned char * indata = (const unsigned char *) malloc(_len_indata0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_indata0; _i0++) {
            indata[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_outdata0 = 1;
          unsigned char * outdata = (unsigned char *) malloc(_len_outdata0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_outdata0; _i0++) {
            outdata[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          RC4(key,len,indata,outdata);
          for(int _aux = 0; _aux < _len_key0; _aux++) {
          free(key[_aux].data);
          }
          free(key);
          free(indata);
          free(outdata);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long len = 255;
          int _len_key0 = 65025;
          struct TYPE_3__ * key = (struct TYPE_3__ *) malloc(_len_key0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        key[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_key__i0__data0 = 1;
          key[_i0].data = (int *) malloc(_len_key__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_key__i0__data0; _j0++) {
            key[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_indata0 = 65025;
          const unsigned char * indata = (const unsigned char *) malloc(_len_indata0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_indata0; _i0++) {
            indata[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_outdata0 = 65025;
          unsigned char * outdata = (unsigned char *) malloc(_len_outdata0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_outdata0; _i0++) {
            outdata[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          RC4(key,len,indata,outdata);
          for(int _aux = 0; _aux < _len_key0; _aux++) {
          free(key[_aux].data);
          }
          free(key);
          free(indata);
          free(outdata);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long len = 10;
          int _len_key0 = 100;
          struct TYPE_3__ * key = (struct TYPE_3__ *) malloc(_len_key0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        key[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_key__i0__data0 = 1;
          key[_i0].data = (int *) malloc(_len_key__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_key__i0__data0; _j0++) {
            key[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_indata0 = 100;
          const unsigned char * indata = (const unsigned char *) malloc(_len_indata0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_indata0; _i0++) {
            indata[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_outdata0 = 100;
          unsigned char * outdata = (unsigned char *) malloc(_len_outdata0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_outdata0; _i0++) {
            outdata[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          RC4(key,len,indata,outdata);
          for(int _aux = 0; _aux < _len_key0; _aux++) {
          free(key[_aux].data);
          }
          free(key);
          free(indata);
          free(outdata);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
