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
typedef  int uint32_t ;
typedef  int u_char ;

/* Variables and functions */

uint32_t
ngx_utf8_decode(u_char **p, size_t n)
{
    size_t    len;
    uint32_t  u, i, valid;

    u = **p;

    if (u >= 0xf0) {

        u &= 0x07;
        valid = 0xffff;
        len = 3;

    } else if (u >= 0xe0) {

        u &= 0x0f;
        valid = 0x7ff;
        len = 2;

    } else if (u >= 0xc2) {

        u &= 0x1f;
        valid = 0x7f;
        len = 1;

    } else {
        (*p)++;
        return 0xffffffff;
    }

    if (n - 1 < len) {
        return 0xfffffffe;
    }

    (*p)++;

    while (len) {
        i = *(*p)++;

        if (i < 0x80) {
            return 0xffffffff;
        }

        u = (u << 6) | (i & 0x3f);

        len--;
    }

    if (u > valid) {
        return u;
    }

    return 0xffffffff;
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
          unsigned long n = 100;
          int _len_p0 = 1;
          int ** p = (int **) malloc(_len_p0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            int _len_p1 = 1;
            p[_i0] = (int *) malloc(_len_p1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_p1; _i1++) {
              p[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = ngx_utf8_decode(p,n);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_p0; i1++) {
            int _len_p1 = 1;
              free(p[i1]);
          }
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long n = 255;
          int _len_p0 = 65025;
          int ** p = (int **) malloc(_len_p0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            int _len_p1 = 1;
            p[_i0] = (int *) malloc(_len_p1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_p1; _i1++) {
              p[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = ngx_utf8_decode(p,n);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_p0; i1++) {
            int _len_p1 = 1;
              free(p[i1]);
          }
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long n = 10;
          int _len_p0 = 100;
          int ** p = (int **) malloc(_len_p0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            int _len_p1 = 1;
            p[_i0] = (int *) malloc(_len_p1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_p1; _i1++) {
              p[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = ngx_utf8_decode(p,n);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_p0; i1++) {
            int _len_p1 = 1;
              free(p[i1]);
          }
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
