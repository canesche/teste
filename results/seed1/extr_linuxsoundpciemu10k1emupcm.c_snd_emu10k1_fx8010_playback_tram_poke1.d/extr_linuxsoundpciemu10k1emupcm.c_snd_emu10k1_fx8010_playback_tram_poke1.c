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

/* Variables and functions */

__attribute__((used)) static void snd_emu10k1_fx8010_playback_tram_poke1(unsigned short *dst_left,
						   unsigned short *dst_right,
						   unsigned short *src,
						   unsigned int count,
						   unsigned int tram_shift)
{
	/*
	dev_dbg(emu->card->dev,
		"tram_poke1: dst_left = 0x%p, dst_right = 0x%p, "
	       "src = 0x%p, count = 0x%x\n",
	       dst_left, dst_right, src, count);
	*/
	if ((tram_shift & 1) == 0) {
		while (count--) {
			*dst_left-- = *src++;
			*dst_right-- = *src++;
		}
	} else {
		while (count--) {
			*dst_right-- = *src++;
			*dst_left-- = *src++;
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
          unsigned int count = 100;
          unsigned int tram_shift = 100;
          int _len_dst_left0 = 1;
          unsigned short * dst_left = (unsigned short *) malloc(_len_dst_left0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_dst_left0; _i0++) {
            dst_left[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst_right0 = 1;
          unsigned short * dst_right = (unsigned short *) malloc(_len_dst_right0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_dst_right0; _i0++) {
            dst_right[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          unsigned short * src = (unsigned short *) malloc(_len_src0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          snd_emu10k1_fx8010_playback_tram_poke1(dst_left,dst_right,src,count,tram_shift);
          free(dst_left);
          free(dst_right);
          free(src);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int count = 255;
          unsigned int tram_shift = 255;
          int _len_dst_left0 = 65025;
          unsigned short * dst_left = (unsigned short *) malloc(_len_dst_left0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_dst_left0; _i0++) {
            dst_left[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst_right0 = 65025;
          unsigned short * dst_right = (unsigned short *) malloc(_len_dst_right0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_dst_right0; _i0++) {
            dst_right[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 65025;
          unsigned short * src = (unsigned short *) malloc(_len_src0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          snd_emu10k1_fx8010_playback_tram_poke1(dst_left,dst_right,src,count,tram_shift);
          free(dst_left);
          free(dst_right);
          free(src);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int count = 10;
          unsigned int tram_shift = 10;
          int _len_dst_left0 = 100;
          unsigned short * dst_left = (unsigned short *) malloc(_len_dst_left0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_dst_left0; _i0++) {
            dst_left[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst_right0 = 100;
          unsigned short * dst_right = (unsigned short *) malloc(_len_dst_right0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_dst_right0; _i0++) {
            dst_right[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 100;
          unsigned short * src = (unsigned short *) malloc(_len_src0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          snd_emu10k1_fx8010_playback_tram_poke1(dst_left,dst_right,src,count,tram_shift);
          free(dst_left);
          free(dst_right);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
