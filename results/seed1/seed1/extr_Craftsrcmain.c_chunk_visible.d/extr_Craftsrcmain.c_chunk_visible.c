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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ ortho; } ;

/* Variables and functions */
 int CHUNK_SIZE ; 
 TYPE_1__* g ; 

int chunk_visible(float planes[6][4], int p, int q, int miny, int maxy) {
    int x = p * CHUNK_SIZE - 1;
    int z = q * CHUNK_SIZE - 1;
    int d = CHUNK_SIZE + 1;
    float points[8][3] = {
        {x + 0, miny, z + 0},
        {x + d, miny, z + 0},
        {x + 0, miny, z + d},
        {x + d, miny, z + d},
        {x + 0, maxy, z + 0},
        {x + d, maxy, z + 0},
        {x + 0, maxy, z + d},
        {x + d, maxy, z + d}
    };
    int n = g->ortho ? 4 : 6;
    for (int i = 0; i < n; i++) {
        int in = 0;
        int out = 0;
        for (int j = 0; j < 8; j++) {
            float d =
                planes[i][0] * points[j][0] +
                planes[i][1] * points[j][1] +
                planes[i][2] * points[j][2] +
                planes[i][3];
            if (d < 0) {
                out++;
            }
            else {
                in++;
            }
            if (in && out) {
                break;
            }
        }
        if (in == 0) {
            return 0;
        }
    }
    return 1;
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
          int p = 100;
          int q = 100;
          int miny = 100;
          int maxy = 100;
          int _len_planes0 = 6;
          float ** planes = (float **) malloc(_len_planes0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_planes0; _i0++) {
            int _len_planes1 = 4;
            planes[_i0] = (float *) malloc(_len_planes1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_planes1; _i1++) {
              planes[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int benchRet = chunk_visible(planes,p,q,miny,maxy);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_planes0; i1++) {
            int _len_planes1 = 4;
              free(planes[i1]);
          }
          free(planes);
        
        break;
    }
    // big-arr
    case 1:
    {
          int p = 255;
          int q = 255;
          int miny = 255;
          int maxy = 255;
          int _len_planes0 = 65025;
          float ** planes = (float **) malloc(_len_planes0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_planes0; _i0++) {
            int _len_planes1 = 4;
            planes[_i0] = (float *) malloc(_len_planes1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_planes1; _i1++) {
              planes[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int benchRet = chunk_visible(planes,p,q,miny,maxy);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_planes0; i1++) {
            int _len_planes1 = 4;
              free(planes[i1]);
          }
          free(planes);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int p = 10;
          int q = 10;
          int miny = 10;
          int maxy = 10;
          int _len_planes0 = 100;
          float ** planes = (float **) malloc(_len_planes0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_planes0; _i0++) {
            int _len_planes1 = 4;
            planes[_i0] = (float *) malloc(_len_planes1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_planes1; _i1++) {
              planes[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int benchRet = chunk_visible(planes,p,q,miny,maxy);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_planes0; i1++) {
            int _len_planes1 = 4;
              free(planes[i1]);
          }
          free(planes);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
