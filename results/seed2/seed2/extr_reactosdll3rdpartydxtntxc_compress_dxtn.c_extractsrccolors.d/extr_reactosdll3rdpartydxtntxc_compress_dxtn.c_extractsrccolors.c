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
typedef  int GLubyte ;
typedef  int GLint ;
typedef  int /*<<< orphan*/  GLchan ;

/* Variables and functions */
 int CHAN_MAX ; 

__attribute__((used)) static void extractsrccolors( GLubyte srcpixels[4][4][4], const GLchan *srcaddr,
                         GLint srcRowStride, GLint numxpixels, GLint numypixels, GLint comps)
{
   GLubyte i, j, c;
   const GLchan *curaddr;
   for (j = 0; j < numypixels; j++) {
      curaddr = srcaddr + j * srcRowStride * comps;
      for (i = 0; i < numxpixels; i++) {
         for (c = 0; c < comps; c++) {
            srcpixels[j][i][c] = *curaddr++ / (CHAN_MAX / 255);
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
          int srcRowStride = 100;
          int numxpixels = 100;
          int numypixels = 100;
          int comps = 100;
          int _len_srcpixels0 = 4;
          int *** srcpixels = (int ***) malloc(_len_srcpixels0*sizeof(int **));
          for(int _i0 = 0; _i0 < _len_srcpixels0; _i0++) {
            int _len_srcpixels1 = 4;
            srcpixels[_i0] = (int **) malloc(_len_srcpixels1*sizeof(int *));
            for(int _i1 = 0; _i1 < _len_srcpixels1; _i1++) {
              int _len_srcpixels2 = 4;
              srcpixels[_i0][_i1] = (int *) malloc(_len_srcpixels2*sizeof(int));
              for(int _i2 = 0; _i2 < _len_srcpixels2; _i2++) {
                srcpixels[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_srcaddr0 = 1;
          const int * srcaddr = (const int *) malloc(_len_srcaddr0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_srcaddr0; _i0++) {
            srcaddr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          extractsrccolors(srcpixels,srcaddr,srcRowStride,numxpixels,numypixels,comps);
          for(int i1 = 0; i1 < _len_srcpixels0; i1++) {
            int _len_srcpixels1 = 4;
              for(int i2 = 0; i2 < _len_srcpixels1; i2++) {
            int _len_srcpixels2 = 4;
              free(srcpixels[i1][i2]);
          }
          free(srcpixels[i1]);
          }
          free(srcpixels);
          free(srcaddr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int srcRowStride = 255;
          int numxpixels = 255;
          int numypixels = 255;
          int comps = 255;
          int _len_srcpixels0 = 65025;
          int *** srcpixels = (int ***) malloc(_len_srcpixels0*sizeof(int **));
          for(int _i0 = 0; _i0 < _len_srcpixels0; _i0++) {
            int _len_srcpixels1 = 4;
            srcpixels[_i0] = (int **) malloc(_len_srcpixels1*sizeof(int *));
            for(int _i1 = 0; _i1 < _len_srcpixels1; _i1++) {
              int _len_srcpixels2 = 4;
              srcpixels[_i0][_i1] = (int *) malloc(_len_srcpixels2*sizeof(int));
              for(int _i2 = 0; _i2 < _len_srcpixels2; _i2++) {
                srcpixels[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_srcaddr0 = 65025;
          const int * srcaddr = (const int *) malloc(_len_srcaddr0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_srcaddr0; _i0++) {
            srcaddr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          extractsrccolors(srcpixels,srcaddr,srcRowStride,numxpixels,numypixels,comps);
          for(int i1 = 0; i1 < _len_srcpixels0; i1++) {
            int _len_srcpixels1 = 4;
              for(int i2 = 0; i2 < _len_srcpixels1; i2++) {
            int _len_srcpixels2 = 4;
              free(srcpixels[i1][i2]);
          }
          free(srcpixels[i1]);
          }
          free(srcpixels);
          free(srcaddr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int srcRowStride = 10;
          int numxpixels = 10;
          int numypixels = 10;
          int comps = 10;
          int _len_srcpixels0 = 100;
          int *** srcpixels = (int ***) malloc(_len_srcpixels0*sizeof(int **));
          for(int _i0 = 0; _i0 < _len_srcpixels0; _i0++) {
            int _len_srcpixels1 = 4;
            srcpixels[_i0] = (int **) malloc(_len_srcpixels1*sizeof(int *));
            for(int _i1 = 0; _i1 < _len_srcpixels1; _i1++) {
              int _len_srcpixels2 = 4;
              srcpixels[_i0][_i1] = (int *) malloc(_len_srcpixels2*sizeof(int));
              for(int _i2 = 0; _i2 < _len_srcpixels2; _i2++) {
                srcpixels[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_srcaddr0 = 100;
          const int * srcaddr = (const int *) malloc(_len_srcaddr0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_srcaddr0; _i0++) {
            srcaddr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          extractsrccolors(srcpixels,srcaddr,srcRowStride,numxpixels,numypixels,comps);
          for(int i1 = 0; i1 < _len_srcpixels0; i1++) {
            int _len_srcpixels1 = 4;
              for(int i2 = 0; i2 < _len_srcpixels1; i2++) {
            int _len_srcpixels2 = 4;
              free(srcpixels[i1][i2]);
          }
          free(srcpixels[i1]);
          }
          free(srcpixels);
          free(srcaddr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
