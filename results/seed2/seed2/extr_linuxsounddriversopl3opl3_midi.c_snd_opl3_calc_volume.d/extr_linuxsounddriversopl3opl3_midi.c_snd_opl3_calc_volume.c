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
struct snd_midi_channel {int gm_volume; int gm_expression; } ;

/* Variables and functions */
 unsigned char OPL3_KSL_MASK ; 
 unsigned char OPL3_TOTAL_LEVEL_MASK ; 
 int* opl3_volume_table ; 

void snd_opl3_calc_volume(unsigned char *volbyte, int vel,
			  struct snd_midi_channel *chan)
{
	int oldvol, newvol, n;
	int volume;

	volume = (vel * chan->gm_volume * chan->gm_expression) / (127*127);
	if (volume > 127)
		volume = 127;

	oldvol = OPL3_TOTAL_LEVEL_MASK - (*volbyte & OPL3_TOTAL_LEVEL_MASK);

	newvol = opl3_volume_table[volume] + oldvol;
	if (newvol > OPL3_TOTAL_LEVEL_MASK)
		newvol = OPL3_TOTAL_LEVEL_MASK;
	else if (newvol < 0)
		newvol = 0;

	n = OPL3_TOTAL_LEVEL_MASK - (newvol & OPL3_TOTAL_LEVEL_MASK);

	*volbyte = (*volbyte & OPL3_KSL_MASK) | (n & OPL3_TOTAL_LEVEL_MASK);
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
          int vel = 100;
          int _len_volbyte0 = 1;
          unsigned char * volbyte = (unsigned char *) malloc(_len_volbyte0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_volbyte0; _i0++) {
            volbyte[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chan0 = 1;
          struct snd_midi_channel * chan = (struct snd_midi_channel *) malloc(_len_chan0*sizeof(struct snd_midi_channel));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
            chan[_i0].gm_volume = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].gm_expression = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          snd_opl3_calc_volume(volbyte,vel,chan);
          free(volbyte);
          free(chan);
        
        break;
    }
    // big-arr
    case 1:
    {
          int vel = 255;
          int _len_volbyte0 = 65025;
          unsigned char * volbyte = (unsigned char *) malloc(_len_volbyte0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_volbyte0; _i0++) {
            volbyte[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chan0 = 65025;
          struct snd_midi_channel * chan = (struct snd_midi_channel *) malloc(_len_chan0*sizeof(struct snd_midi_channel));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
            chan[_i0].gm_volume = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].gm_expression = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          snd_opl3_calc_volume(volbyte,vel,chan);
          free(volbyte);
          free(chan);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int vel = 10;
          int _len_volbyte0 = 100;
          unsigned char * volbyte = (unsigned char *) malloc(_len_volbyte0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_volbyte0; _i0++) {
            volbyte[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chan0 = 100;
          struct snd_midi_channel * chan = (struct snd_midi_channel *) malloc(_len_chan0*sizeof(struct snd_midi_channel));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
            chan[_i0].gm_volume = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].gm_expression = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          snd_opl3_calc_volume(volbyte,vel,chan);
          free(volbyte);
          free(chan);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
