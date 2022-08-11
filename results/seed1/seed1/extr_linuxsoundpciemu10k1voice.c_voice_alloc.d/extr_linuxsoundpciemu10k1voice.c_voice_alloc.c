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
       3            linked\n\
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
struct snd_emu10k1_voice {int use; int pcm; int synth; int midi; int efx; } ;
struct snd_emu10k1 {int next_free_voice; struct snd_emu10k1_voice* voices; } ;

/* Variables and functions */
#define  EMU10K1_EFX 131 
#define  EMU10K1_MIDI 130 
#define  EMU10K1_PCM 129 
#define  EMU10K1_SYNTH 128 
 int ENOMEM ; 
 int NUM_G ; 

__attribute__((used)) static int voice_alloc(struct snd_emu10k1 *emu, int type, int number,
		       struct snd_emu10k1_voice **rvoice)
{
	struct snd_emu10k1_voice *voice;
	int i, j, k, first_voice, last_voice, skip;

	*rvoice = NULL;
	first_voice = last_voice = 0;
	for (i = emu->next_free_voice, j = 0; j < NUM_G ; i += number, j += number) {
		/*
		dev_dbg(emu->card->dev, "i %d j %d next free %d!\n",
		       i, j, emu->next_free_voice);
		*/
		i %= NUM_G;

		/* stereo voices must be even/odd */
		if ((number == 2) && (i % 2)) {
			i++;
			continue;
		}
			
		skip = 0;
		for (k = 0; k < number; k++) {
			voice = &emu->voices[(i+k) % NUM_G];
			if (voice->use) {
				skip = 1;
				break;
			}
		}
		if (!skip) {
			/* dev_dbg(emu->card->dev, "allocated voice %d\n", i); */
			first_voice = i;
			last_voice = (i + number) % NUM_G;
			emu->next_free_voice = last_voice;
			break;
		}
	}
	
	if (first_voice == last_voice)
		return -ENOMEM;
	
	for (i = 0; i < number; i++) {
		voice = &emu->voices[(first_voice + i) % NUM_G];
		/*
		dev_dbg(emu->card->dev, "voice alloc - %i, %i of %i\n",
		       voice->number, idx-first_voice+1, number);
		*/
		voice->use = 1;
		switch (type) {
		case EMU10K1_PCM:
			voice->pcm = 1;
			break;
		case EMU10K1_SYNTH:
			voice->synth = 1;
			break;
		case EMU10K1_MIDI:
			voice->midi = 1;
			break;
		case EMU10K1_EFX:
			voice->efx = 1;
			break;
		}
	}
	*rvoice = &emu->voices[first_voice];
	return 0;
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
          int type = 100;
          int number = 100;
          int _len_emu0 = 1;
          struct snd_emu10k1 * emu = (struct snd_emu10k1 *) malloc(_len_emu0*sizeof(struct snd_emu10k1));
          for(int _i0 = 0; _i0 < _len_emu0; _i0++) {
            emu[_i0].next_free_voice = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_emu__i0__voices0 = 1;
          emu[_i0].voices = (struct snd_emu10k1_voice *) malloc(_len_emu__i0__voices0*sizeof(struct snd_emu10k1_voice));
          for(int _j0 = 0; _j0 < _len_emu__i0__voices0; _j0++) {
            emu[_i0].voices->use = ((-2 * (next_i()%2)) + 1) * next_i();
        emu[_i0].voices->pcm = ((-2 * (next_i()%2)) + 1) * next_i();
        emu[_i0].voices->synth = ((-2 * (next_i()%2)) + 1) * next_i();
        emu[_i0].voices->midi = ((-2 * (next_i()%2)) + 1) * next_i();
        emu[_i0].voices->efx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rvoice0 = 1;
          struct snd_emu10k1_voice ** rvoice = (struct snd_emu10k1_voice **) malloc(_len_rvoice0*sizeof(struct snd_emu10k1_voice *));
          for(int _i0 = 0; _i0 < _len_rvoice0; _i0++) {
            int _len_rvoice1 = 1;
            rvoice[_i0] = (struct snd_emu10k1_voice *) malloc(_len_rvoice1*sizeof(struct snd_emu10k1_voice));
            for(int _i1 = 0; _i1 < _len_rvoice1; _i1++) {
              rvoice[_i0][_i1].use = ((-2 * (next_i()%2)) + 1) * next_i();
        rvoice[_i0][_i1].pcm = ((-2 * (next_i()%2)) + 1) * next_i();
        rvoice[_i0][_i1].synth = ((-2 * (next_i()%2)) + 1) * next_i();
        rvoice[_i0][_i1].midi = ((-2 * (next_i()%2)) + 1) * next_i();
        rvoice[_i0][_i1].efx = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = voice_alloc(emu,type,number,rvoice);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_emu0; _aux++) {
          free(emu[_aux].voices);
          }
          free(emu);
          for(int i1 = 0; i1 < _len_rvoice0; i1++) {
            int _len_rvoice1 = 1;
              free(rvoice[i1]);
          }
          free(rvoice);
        
        break;
    }
    // big-arr
    case 1:
    {
          int type = 255;
          int number = 255;
          int _len_emu0 = 65025;
          struct snd_emu10k1 * emu = (struct snd_emu10k1 *) malloc(_len_emu0*sizeof(struct snd_emu10k1));
          for(int _i0 = 0; _i0 < _len_emu0; _i0++) {
            emu[_i0].next_free_voice = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_emu__i0__voices0 = 1;
          emu[_i0].voices = (struct snd_emu10k1_voice *) malloc(_len_emu__i0__voices0*sizeof(struct snd_emu10k1_voice));
          for(int _j0 = 0; _j0 < _len_emu__i0__voices0; _j0++) {
            emu[_i0].voices->use = ((-2 * (next_i()%2)) + 1) * next_i();
        emu[_i0].voices->pcm = ((-2 * (next_i()%2)) + 1) * next_i();
        emu[_i0].voices->synth = ((-2 * (next_i()%2)) + 1) * next_i();
        emu[_i0].voices->midi = ((-2 * (next_i()%2)) + 1) * next_i();
        emu[_i0].voices->efx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rvoice0 = 65025;
          struct snd_emu10k1_voice ** rvoice = (struct snd_emu10k1_voice **) malloc(_len_rvoice0*sizeof(struct snd_emu10k1_voice *));
          for(int _i0 = 0; _i0 < _len_rvoice0; _i0++) {
            int _len_rvoice1 = 1;
            rvoice[_i0] = (struct snd_emu10k1_voice *) malloc(_len_rvoice1*sizeof(struct snd_emu10k1_voice));
            for(int _i1 = 0; _i1 < _len_rvoice1; _i1++) {
              rvoice[_i0][_i1].use = ((-2 * (next_i()%2)) + 1) * next_i();
        rvoice[_i0][_i1].pcm = ((-2 * (next_i()%2)) + 1) * next_i();
        rvoice[_i0][_i1].synth = ((-2 * (next_i()%2)) + 1) * next_i();
        rvoice[_i0][_i1].midi = ((-2 * (next_i()%2)) + 1) * next_i();
        rvoice[_i0][_i1].efx = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = voice_alloc(emu,type,number,rvoice);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_emu0; _aux++) {
          free(emu[_aux].voices);
          }
          free(emu);
          for(int i1 = 0; i1 < _len_rvoice0; i1++) {
            int _len_rvoice1 = 1;
              free(rvoice[i1]);
          }
          free(rvoice);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type = 10;
          int number = 10;
          int _len_emu0 = 100;
          struct snd_emu10k1 * emu = (struct snd_emu10k1 *) malloc(_len_emu0*sizeof(struct snd_emu10k1));
          for(int _i0 = 0; _i0 < _len_emu0; _i0++) {
            emu[_i0].next_free_voice = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_emu__i0__voices0 = 1;
          emu[_i0].voices = (struct snd_emu10k1_voice *) malloc(_len_emu__i0__voices0*sizeof(struct snd_emu10k1_voice));
          for(int _j0 = 0; _j0 < _len_emu__i0__voices0; _j0++) {
            emu[_i0].voices->use = ((-2 * (next_i()%2)) + 1) * next_i();
        emu[_i0].voices->pcm = ((-2 * (next_i()%2)) + 1) * next_i();
        emu[_i0].voices->synth = ((-2 * (next_i()%2)) + 1) * next_i();
        emu[_i0].voices->midi = ((-2 * (next_i()%2)) + 1) * next_i();
        emu[_i0].voices->efx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rvoice0 = 100;
          struct snd_emu10k1_voice ** rvoice = (struct snd_emu10k1_voice **) malloc(_len_rvoice0*sizeof(struct snd_emu10k1_voice *));
          for(int _i0 = 0; _i0 < _len_rvoice0; _i0++) {
            int _len_rvoice1 = 1;
            rvoice[_i0] = (struct snd_emu10k1_voice *) malloc(_len_rvoice1*sizeof(struct snd_emu10k1_voice));
            for(int _i1 = 0; _i1 < _len_rvoice1; _i1++) {
              rvoice[_i0][_i1].use = ((-2 * (next_i()%2)) + 1) * next_i();
        rvoice[_i0][_i1].pcm = ((-2 * (next_i()%2)) + 1) * next_i();
        rvoice[_i0][_i1].synth = ((-2 * (next_i()%2)) + 1) * next_i();
        rvoice[_i0][_i1].midi = ((-2 * (next_i()%2)) + 1) * next_i();
        rvoice[_i0][_i1].efx = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = voice_alloc(emu,type,number,rvoice);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_emu0; _aux++) {
          free(emu[_aux].voices);
          }
          free(emu);
          for(int i1 = 0; i1 < _len_rvoice0; i1++) {
            int _len_rvoice1 = 1;
              free(rvoice[i1]);
          }
          free(rvoice);
        
        break;
    }
    // linked
    case 3:
    {
          int type = ((-2 * (next_i()%2)) + 1) * next_i();
          int number = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_emu0 = 1;
          struct snd_emu10k1 * emu = (struct snd_emu10k1 *) malloc(_len_emu0*sizeof(struct snd_emu10k1));
          for(int _i0 = 0; _i0 < _len_emu0; _i0++) {
            emu[_i0].next_free_voice = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_emu__i0__voices0 = 1;
          emu[_i0].voices = (struct snd_emu10k1_voice *) malloc(_len_emu__i0__voices0*sizeof(struct snd_emu10k1_voice));
          for(int _j0 = 0; _j0 < _len_emu__i0__voices0; _j0++) {
            emu[_i0].voices->use = ((-2 * (next_i()%2)) + 1) * next_i();
        emu[_i0].voices->pcm = ((-2 * (next_i()%2)) + 1) * next_i();
        emu[_i0].voices->synth = ((-2 * (next_i()%2)) + 1) * next_i();
        emu[_i0].voices->midi = ((-2 * (next_i()%2)) + 1) * next_i();
        emu[_i0].voices->efx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rvoice0 = 1;
          struct snd_emu10k1_voice ** rvoice = (struct snd_emu10k1_voice **) malloc(_len_rvoice0*sizeof(struct snd_emu10k1_voice *));
          for(int _i0 = 0; _i0 < _len_rvoice0; _i0++) {
            int _len_rvoice1 = 1;
            rvoice[_i0] = (struct snd_emu10k1_voice *) malloc(_len_rvoice1*sizeof(struct snd_emu10k1_voice));
            for(int _i1 = 0; _i1 < _len_rvoice1; _i1++) {
              rvoice[_i0][_i1].use = ((-2 * (next_i()%2)) + 1) * next_i();
        rvoice[_i0][_i1].pcm = ((-2 * (next_i()%2)) + 1) * next_i();
        rvoice[_i0][_i1].synth = ((-2 * (next_i()%2)) + 1) * next_i();
        rvoice[_i0][_i1].midi = ((-2 * (next_i()%2)) + 1) * next_i();
        rvoice[_i0][_i1].efx = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = voice_alloc(emu,type,number,rvoice);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_emu0; _aux++) {
          free(emu[_aux].voices);
          }
          free(emu);
          for(int i1 = 0; i1 < _len_rvoice0; i1++) {
            int _len_rvoice1 = 1;
              free(rvoice[i1]);
          }
          free(rvoice);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
