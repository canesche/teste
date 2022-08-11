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
struct TYPE_2__ {int redBits; int greenBits; int blueBits; int width; int height; int refreshRate; } ;
typedef  TYPE_1__ GLFWvidmode ;

/* Variables and functions */

__attribute__((used)) static int compareVideoModes(const void* fp, const void* sp)
{
    const GLFWvidmode* fm = fp;
    const GLFWvidmode* sm = sp;
    const int fbpp = fm->redBits + fm->greenBits + fm->blueBits;
    const int sbpp = sm->redBits + sm->greenBits + sm->blueBits;
    const int farea = fm->width * fm->height;
    const int sarea = sm->width * sm->height;

    // First sort on color bits per pixel
    if (fbpp != sbpp)
        return fbpp - sbpp;

    // Then sort on screen area
    if (farea != sarea)
        return farea - sarea;

    // Lastly sort on refresh rate
    return fm->refreshRate - sm->refreshRate;
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
          int _len_fp0 = 1;
          const void * fp = (const void *) malloc(_len_fp0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_fp0; _i0++) {
            fp[_i0] = 0;
          }
          int _len_sp0 = 1;
          const void * sp = (const void *) malloc(_len_sp0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
            sp[_i0] = 0;
          }
          int benchRet = compareVideoModes(fp,sp);
          printf("%d\n", benchRet); 
          free(fp);
          free(sp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fp0 = 65025;
          const void * fp = (const void *) malloc(_len_fp0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_fp0; _i0++) {
            fp[_i0] = 0;
          }
          int _len_sp0 = 65025;
          const void * sp = (const void *) malloc(_len_sp0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
            sp[_i0] = 0;
          }
          int benchRet = compareVideoModes(fp,sp);
          printf("%d\n", benchRet); 
          free(fp);
          free(sp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fp0 = 100;
          const void * fp = (const void *) malloc(_len_fp0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_fp0; _i0++) {
            fp[_i0] = 0;
          }
          int _len_sp0 = 100;
          const void * sp = (const void *) malloc(_len_sp0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
            sp[_i0] = 0;
          }
          int benchRet = compareVideoModes(fp,sp);
          printf("%d\n", benchRet); 
          free(fp);
          free(sp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
