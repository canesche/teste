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
typedef  int u8 ;
typedef  int u32 ;

/* Variables and functions */
 int* two2word ; 

__attribute__((used)) static inline void expand16_2col2mask(u8 fg, u8 bg, u32 fgm[], u32 bgm[])
{
	bgm[0] = two2word[bg & 3];
	fgm[0] = two2word[fg & 3] ^ bgm[0];
#if BPL > 2
	bgm[1] = two2word[(bg >> 2) & 3];
	fgm[1] = two2word[(fg >> 2) & 3] ^ bgm[1];
#endif
#if BPL > 4
	bgm[2] = two2word[(bg >> 4) & 3];
	fgm[2] = two2word[(fg >> 4) & 3] ^ bgm[2];
	bgm[3] = two2word[bg >> 6];
	fgm[3] = two2word[fg >> 6] ^ bgm[3];
#endif
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
          int fg = 100;
          int bg = 100;
          int _len_fgm0 = 1;
          int * fgm = (int *) malloc(_len_fgm0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fgm0; _i0++) {
            fgm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bgm0 = 1;
          int * bgm = (int *) malloc(_len_bgm0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bgm0; _i0++) {
            bgm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          expand16_2col2mask(fg,bg,fgm,bgm);
          free(fgm);
          free(bgm);
        
        break;
    }
    // big-arr
    case 1:
    {
          int fg = 255;
          int bg = 255;
          int _len_fgm0 = 65025;
          int * fgm = (int *) malloc(_len_fgm0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fgm0; _i0++) {
            fgm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bgm0 = 65025;
          int * bgm = (int *) malloc(_len_bgm0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bgm0; _i0++) {
            bgm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          expand16_2col2mask(fg,bg,fgm,bgm);
          free(fgm);
          free(bgm);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int fg = 10;
          int bg = 10;
          int _len_fgm0 = 100;
          int * fgm = (int *) malloc(_len_fgm0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fgm0; _i0++) {
            fgm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bgm0 = 100;
          int * bgm = (int *) malloc(_len_bgm0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bgm0; _i0++) {
            bgm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          expand16_2col2mask(fg,bg,fgm,bgm);
          free(fgm);
          free(bgm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
