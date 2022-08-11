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
struct snd_gus_voice {int /*<<< orphan*/ * volume_change; int /*<<< orphan*/ * handler_effect; int /*<<< orphan*/  handler_volume; int /*<<< orphan*/  handler_wave; } ;
struct TYPE_2__ {int /*<<< orphan*/  interrupt_handler_dma_read; int /*<<< orphan*/  interrupt_handler_dma_write; struct snd_gus_voice* voices; int /*<<< orphan*/  interrupt_handler_timer2; int /*<<< orphan*/  interrupt_handler_timer1; int /*<<< orphan*/  interrupt_handler_midi_in; int /*<<< orphan*/  interrupt_handler_midi_out; } ;
struct snd_gus_card {TYPE_1__ gf1; } ;

/* Variables and functions */
 unsigned int SNDRV_GF1_HANDLER_DMA_READ ; 
 unsigned int SNDRV_GF1_HANDLER_DMA_WRITE ; 
 unsigned int SNDRV_GF1_HANDLER_MIDI_IN ; 
 unsigned int SNDRV_GF1_HANDLER_MIDI_OUT ; 
 unsigned int SNDRV_GF1_HANDLER_TIMER1 ; 
 unsigned int SNDRV_GF1_HANDLER_TIMER2 ; 
 unsigned int SNDRV_GF1_HANDLER_VOICE ; 
 int /*<<< orphan*/  snd_gf1_default_interrupt_handler_dma_read ; 
 int /*<<< orphan*/  snd_gf1_default_interrupt_handler_dma_write ; 
 int /*<<< orphan*/  snd_gf1_default_interrupt_handler_midi_in ; 
 int /*<<< orphan*/  snd_gf1_default_interrupt_handler_midi_out ; 
 int /*<<< orphan*/  snd_gf1_default_interrupt_handler_timer1 ; 
 int /*<<< orphan*/  snd_gf1_default_interrupt_handler_timer2 ; 
 int /*<<< orphan*/  snd_gf1_default_interrupt_handler_wave_and_volume ; 

void snd_gf1_set_default_handlers(struct snd_gus_card * gus, unsigned int what)
{
	if (what & SNDRV_GF1_HANDLER_MIDI_OUT)
		gus->gf1.interrupt_handler_midi_out = snd_gf1_default_interrupt_handler_midi_out;
	if (what & SNDRV_GF1_HANDLER_MIDI_IN)
		gus->gf1.interrupt_handler_midi_in = snd_gf1_default_interrupt_handler_midi_in;
	if (what & SNDRV_GF1_HANDLER_TIMER1)
		gus->gf1.interrupt_handler_timer1 = snd_gf1_default_interrupt_handler_timer1;
	if (what & SNDRV_GF1_HANDLER_TIMER2)
		gus->gf1.interrupt_handler_timer2 = snd_gf1_default_interrupt_handler_timer2;
	if (what & SNDRV_GF1_HANDLER_VOICE) {
		struct snd_gus_voice *voice;
		
		voice = &gus->gf1.voices[what & 0xffff];
		voice->handler_wave =
		voice->handler_volume = snd_gf1_default_interrupt_handler_wave_and_volume;
		voice->handler_effect = NULL;
		voice->volume_change = NULL;
	}
	if (what & SNDRV_GF1_HANDLER_DMA_WRITE)
		gus->gf1.interrupt_handler_dma_write = snd_gf1_default_interrupt_handler_dma_write;
	if (what & SNDRV_GF1_HANDLER_DMA_READ)
		gus->gf1.interrupt_handler_dma_read = snd_gf1_default_interrupt_handler_dma_read;
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
          unsigned int what = 100;
          int _len_gus0 = 1;
          struct snd_gus_card * gus = (struct snd_gus_card *) malloc(_len_gus0*sizeof(struct snd_gus_card));
          for(int _i0 = 0; _i0 < _len_gus0; _i0++) {
            gus[_i0].gf1.interrupt_handler_dma_read = ((-2 * (next_i()%2)) + 1) * next_i();
        gus[_i0].gf1.interrupt_handler_dma_write = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gus__i0__gf1_voices0 = 1;
          gus[_i0].gf1.voices = (struct snd_gus_voice *) malloc(_len_gus__i0__gf1_voices0*sizeof(struct snd_gus_voice));
          for(int _j0 = 0; _j0 < _len_gus__i0__gf1_voices0; _j0++) {
              int _len_gus__i0__gf1_voices_volume_change0 = 1;
          gus[_i0].gf1.voices->volume_change = (int *) malloc(_len_gus__i0__gf1_voices_volume_change0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_gus__i0__gf1_voices_volume_change0; _j0++) {
            gus[_i0].gf1.voices->volume_change[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gus__i0__gf1_voices_handler_effect0 = 1;
          gus[_i0].gf1.voices->handler_effect = (int *) malloc(_len_gus__i0__gf1_voices_handler_effect0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_gus__i0__gf1_voices_handler_effect0; _j0++) {
            gus[_i0].gf1.voices->handler_effect[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        gus[_i0].gf1.voices->handler_volume = ((-2 * (next_i()%2)) + 1) * next_i();
        gus[_i0].gf1.voices->handler_wave = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        gus[_i0].gf1.interrupt_handler_timer2 = ((-2 * (next_i()%2)) + 1) * next_i();
        gus[_i0].gf1.interrupt_handler_timer1 = ((-2 * (next_i()%2)) + 1) * next_i();
        gus[_i0].gf1.interrupt_handler_midi_in = ((-2 * (next_i()%2)) + 1) * next_i();
        gus[_i0].gf1.interrupt_handler_midi_out = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          snd_gf1_set_default_handlers(gus,what);
          free(gus);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int what = 255;
          int _len_gus0 = 65025;
          struct snd_gus_card * gus = (struct snd_gus_card *) malloc(_len_gus0*sizeof(struct snd_gus_card));
          for(int _i0 = 0; _i0 < _len_gus0; _i0++) {
            gus[_i0].gf1.interrupt_handler_dma_read = ((-2 * (next_i()%2)) + 1) * next_i();
        gus[_i0].gf1.interrupt_handler_dma_write = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gus__i0__gf1_voices0 = 1;
          gus[_i0].gf1.voices = (struct snd_gus_voice *) malloc(_len_gus__i0__gf1_voices0*sizeof(struct snd_gus_voice));
          for(int _j0 = 0; _j0 < _len_gus__i0__gf1_voices0; _j0++) {
              int _len_gus__i0__gf1_voices_volume_change0 = 1;
          gus[_i0].gf1.voices->volume_change = (int *) malloc(_len_gus__i0__gf1_voices_volume_change0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_gus__i0__gf1_voices_volume_change0; _j0++) {
            gus[_i0].gf1.voices->volume_change[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gus__i0__gf1_voices_handler_effect0 = 1;
          gus[_i0].gf1.voices->handler_effect = (int *) malloc(_len_gus__i0__gf1_voices_handler_effect0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_gus__i0__gf1_voices_handler_effect0; _j0++) {
            gus[_i0].gf1.voices->handler_effect[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        gus[_i0].gf1.voices->handler_volume = ((-2 * (next_i()%2)) + 1) * next_i();
        gus[_i0].gf1.voices->handler_wave = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        gus[_i0].gf1.interrupt_handler_timer2 = ((-2 * (next_i()%2)) + 1) * next_i();
        gus[_i0].gf1.interrupt_handler_timer1 = ((-2 * (next_i()%2)) + 1) * next_i();
        gus[_i0].gf1.interrupt_handler_midi_in = ((-2 * (next_i()%2)) + 1) * next_i();
        gus[_i0].gf1.interrupt_handler_midi_out = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          snd_gf1_set_default_handlers(gus,what);
          free(gus);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int what = 10;
          int _len_gus0 = 100;
          struct snd_gus_card * gus = (struct snd_gus_card *) malloc(_len_gus0*sizeof(struct snd_gus_card));
          for(int _i0 = 0; _i0 < _len_gus0; _i0++) {
            gus[_i0].gf1.interrupt_handler_dma_read = ((-2 * (next_i()%2)) + 1) * next_i();
        gus[_i0].gf1.interrupt_handler_dma_write = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gus__i0__gf1_voices0 = 1;
          gus[_i0].gf1.voices = (struct snd_gus_voice *) malloc(_len_gus__i0__gf1_voices0*sizeof(struct snd_gus_voice));
          for(int _j0 = 0; _j0 < _len_gus__i0__gf1_voices0; _j0++) {
              int _len_gus__i0__gf1_voices_volume_change0 = 1;
          gus[_i0].gf1.voices->volume_change = (int *) malloc(_len_gus__i0__gf1_voices_volume_change0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_gus__i0__gf1_voices_volume_change0; _j0++) {
            gus[_i0].gf1.voices->volume_change[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gus__i0__gf1_voices_handler_effect0 = 1;
          gus[_i0].gf1.voices->handler_effect = (int *) malloc(_len_gus__i0__gf1_voices_handler_effect0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_gus__i0__gf1_voices_handler_effect0; _j0++) {
            gus[_i0].gf1.voices->handler_effect[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        gus[_i0].gf1.voices->handler_volume = ((-2 * (next_i()%2)) + 1) * next_i();
        gus[_i0].gf1.voices->handler_wave = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        gus[_i0].gf1.interrupt_handler_timer2 = ((-2 * (next_i()%2)) + 1) * next_i();
        gus[_i0].gf1.interrupt_handler_timer1 = ((-2 * (next_i()%2)) + 1) * next_i();
        gus[_i0].gf1.interrupt_handler_midi_in = ((-2 * (next_i()%2)) + 1) * next_i();
        gus[_i0].gf1.interrupt_handler_midi_out = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          snd_gf1_set_default_handlers(gus,what);
          free(gus);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
