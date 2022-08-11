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
typedef  int uint8_t ;
typedef  int uint32_t ;
typedef  int int16_t ;

/* Variables and functions */

__attribute__((used)) static void palToY_c(uint8_t *_dst, const uint8_t *src, const uint8_t *unused1, const uint8_t *unused2, int width, uint32_t *pal)
{
    int16_t *dst = (int16_t *)_dst;
    int i;
    for (i = 0; i < width; i++) {
        int d = src[i];

        dst[i] = (pal[d] & 0xFF)<<6;
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
          int width = 100;
          int _len__dst0 = 1;
          int * _dst = (int *) malloc(_len__dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len__dst0; _i0++) {
            _dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_unused10 = 1;
          const int * unused1 = (const int *) malloc(_len_unused10*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_unused10; _i0++) {
            unused1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_unused20 = 1;
          const int * unused2 = (const int *) malloc(_len_unused20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_unused20; _i0++) {
            unused2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pal0 = 1;
          int * pal = (int *) malloc(_len_pal0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pal0; _i0++) {
            pal[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          palToY_c(_dst,src,unused1,unused2,width,pal);
          free(_dst);
          free(src);
          free(unused1);
          free(unused2);
          free(pal);
        
        break;
    }
    // big-arr
    case 1:
    {
          int width = 255;
          int _len__dst0 = 65025;
          int * _dst = (int *) malloc(_len__dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len__dst0; _i0++) {
            _dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 65025;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_unused10 = 65025;
          const int * unused1 = (const int *) malloc(_len_unused10*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_unused10; _i0++) {
            unused1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_unused20 = 65025;
          const int * unused2 = (const int *) malloc(_len_unused20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_unused20; _i0++) {
            unused2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pal0 = 65025;
          int * pal = (int *) malloc(_len_pal0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pal0; _i0++) {
            pal[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          palToY_c(_dst,src,unused1,unused2,width,pal);
          free(_dst);
          free(src);
          free(unused1);
          free(unused2);
          free(pal);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int width = 10;
          int _len__dst0 = 100;
          int * _dst = (int *) malloc(_len__dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len__dst0; _i0++) {
            _dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 100;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_unused10 = 100;
          const int * unused1 = (const int *) malloc(_len_unused10*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_unused10; _i0++) {
            unused1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_unused20 = 100;
          const int * unused2 = (const int *) malloc(_len_unused20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_unused20; _i0++) {
            unused2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pal0 = 100;
          int * pal = (int *) malloc(_len_pal0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pal0; _i0++) {
            pal[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          palToY_c(_dst,src,unused1,unused2,width,pal);
          free(_dst);
          free(src);
          free(unused1);
          free(unused2);
          free(pal);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
