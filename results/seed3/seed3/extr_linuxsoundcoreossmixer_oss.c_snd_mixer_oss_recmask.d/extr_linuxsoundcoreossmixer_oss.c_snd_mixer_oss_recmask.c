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
struct snd_mixer_oss_slot {scalar_t__ put_recsrc; } ;
struct snd_mixer_oss_file {struct snd_mixer_oss* mixer; } ;
struct snd_mixer_oss {int mask_recsrc; struct snd_mixer_oss_slot* slots; scalar_t__ get_recsrc; scalar_t__ put_recsrc; } ;

/* Variables and functions */
 int EIO ; 

__attribute__((used)) static int snd_mixer_oss_recmask(struct snd_mixer_oss_file *fmixer)
{
	struct snd_mixer_oss *mixer = fmixer->mixer;
	int result = 0;

	if (mixer == NULL)
		return -EIO;
	if (mixer->put_recsrc && mixer->get_recsrc) {	/* exclusive */
		result = mixer->mask_recsrc;
	} else {
		struct snd_mixer_oss_slot *pslot;
		int chn;
		for (chn = 0; chn < 31; chn++) {
			pslot = &mixer->slots[chn];
			if (pslot->put_recsrc)
				result |= 1 << chn;
		}
	}
	return result;
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
          int _len_fmixer0 = 1;
          struct snd_mixer_oss_file * fmixer = (struct snd_mixer_oss_file *) malloc(_len_fmixer0*sizeof(struct snd_mixer_oss_file));
          for(int _i0 = 0; _i0 < _len_fmixer0; _i0++) {
              int _len_fmixer__i0__mixer0 = 1;
          fmixer[_i0].mixer = (struct snd_mixer_oss *) malloc(_len_fmixer__i0__mixer0*sizeof(struct snd_mixer_oss));
          for(int _j0 = 0; _j0 < _len_fmixer__i0__mixer0; _j0++) {
            fmixer[_i0].mixer->mask_recsrc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fmixer__i0__mixer_slots0 = 1;
          fmixer[_i0].mixer->slots = (struct snd_mixer_oss_slot *) malloc(_len_fmixer__i0__mixer_slots0*sizeof(struct snd_mixer_oss_slot));
          for(int _j0 = 0; _j0 < _len_fmixer__i0__mixer_slots0; _j0++) {
            fmixer[_i0].mixer->slots->put_recsrc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fmixer[_i0].mixer->get_recsrc = ((-2 * (next_i()%2)) + 1) * next_i();
        fmixer[_i0].mixer->put_recsrc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = snd_mixer_oss_recmask(fmixer);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fmixer0; _aux++) {
          free(fmixer[_aux].mixer);
          }
          free(fmixer);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fmixer0 = 65025;
          struct snd_mixer_oss_file * fmixer = (struct snd_mixer_oss_file *) malloc(_len_fmixer0*sizeof(struct snd_mixer_oss_file));
          for(int _i0 = 0; _i0 < _len_fmixer0; _i0++) {
              int _len_fmixer__i0__mixer0 = 1;
          fmixer[_i0].mixer = (struct snd_mixer_oss *) malloc(_len_fmixer__i0__mixer0*sizeof(struct snd_mixer_oss));
          for(int _j0 = 0; _j0 < _len_fmixer__i0__mixer0; _j0++) {
            fmixer[_i0].mixer->mask_recsrc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fmixer__i0__mixer_slots0 = 1;
          fmixer[_i0].mixer->slots = (struct snd_mixer_oss_slot *) malloc(_len_fmixer__i0__mixer_slots0*sizeof(struct snd_mixer_oss_slot));
          for(int _j0 = 0; _j0 < _len_fmixer__i0__mixer_slots0; _j0++) {
            fmixer[_i0].mixer->slots->put_recsrc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fmixer[_i0].mixer->get_recsrc = ((-2 * (next_i()%2)) + 1) * next_i();
        fmixer[_i0].mixer->put_recsrc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = snd_mixer_oss_recmask(fmixer);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fmixer0; _aux++) {
          free(fmixer[_aux].mixer);
          }
          free(fmixer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fmixer0 = 100;
          struct snd_mixer_oss_file * fmixer = (struct snd_mixer_oss_file *) malloc(_len_fmixer0*sizeof(struct snd_mixer_oss_file));
          for(int _i0 = 0; _i0 < _len_fmixer0; _i0++) {
              int _len_fmixer__i0__mixer0 = 1;
          fmixer[_i0].mixer = (struct snd_mixer_oss *) malloc(_len_fmixer__i0__mixer0*sizeof(struct snd_mixer_oss));
          for(int _j0 = 0; _j0 < _len_fmixer__i0__mixer0; _j0++) {
            fmixer[_i0].mixer->mask_recsrc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fmixer__i0__mixer_slots0 = 1;
          fmixer[_i0].mixer->slots = (struct snd_mixer_oss_slot *) malloc(_len_fmixer__i0__mixer_slots0*sizeof(struct snd_mixer_oss_slot));
          for(int _j0 = 0; _j0 < _len_fmixer__i0__mixer_slots0; _j0++) {
            fmixer[_i0].mixer->slots->put_recsrc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fmixer[_i0].mixer->get_recsrc = ((-2 * (next_i()%2)) + 1) * next_i();
        fmixer[_i0].mixer->put_recsrc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = snd_mixer_oss_recmask(fmixer);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fmixer0; _aux++) {
          free(fmixer[_aux].mixer);
          }
          free(fmixer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
