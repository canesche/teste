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
typedef  enum TiffTypes { ____Placeholder_TiffTypes } TiffTypes ;

/* Variables and functions */
 int* type_sizes2 ; 

__attribute__((used)) static void tnput(uint8_t **p, int n, const uint8_t *val, enum TiffTypes type,
                  int flip)
{
    int i;
#if HAVE_BIGENDIAN
    flip ^= ((int[]) { 0, 0, 0, 1, 3, 3 })[type];
#endif
    for (i = 0; i < n * type_sizes2[type]; i++)
        *(*p)++ = val[i ^ flip];
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
          int n = 100;
          enum TiffTypes type = 0;
          int flip = 100;
          int _len_p0 = 1;
          int ** p = (int **) malloc(_len_p0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            int _len_p1 = 1;
            p[_i0] = (int *) malloc(_len_p1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_p1; _i1++) {
              p[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_val0 = 1;
          const int * val = (const int *) malloc(_len_val0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tnput(p,n,val,type,flip);
          for(int i1 = 0; i1 < _len_p0; i1++) {
            int _len_p1 = 1;
              free(p[i1]);
          }
          free(p);
          free(val);
        
        break;
    }
    // big-arr
    case 1:
    {
          int n = 255;
          enum TiffTypes type = 0;
          int flip = 255;
          int _len_p0 = 65025;
          int ** p = (int **) malloc(_len_p0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            int _len_p1 = 1;
            p[_i0] = (int *) malloc(_len_p1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_p1; _i1++) {
              p[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_val0 = 65025;
          const int * val = (const int *) malloc(_len_val0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tnput(p,n,val,type,flip);
          for(int i1 = 0; i1 < _len_p0; i1++) {
            int _len_p1 = 1;
              free(p[i1]);
          }
          free(p);
          free(val);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n = 10;
          enum TiffTypes type = 0;
          int flip = 10;
          int _len_p0 = 100;
          int ** p = (int **) malloc(_len_p0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            int _len_p1 = 1;
            p[_i0] = (int *) malloc(_len_p1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_p1; _i1++) {
              p[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_val0 = 100;
          const int * val = (const int *) malloc(_len_val0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tnput(p,n,val,type,flip);
          for(int i1 = 0; i1 < _len_p0; i1++) {
            int _len_p1 = 1;
              free(p[i1]);
          }
          free(p);
          free(val);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
