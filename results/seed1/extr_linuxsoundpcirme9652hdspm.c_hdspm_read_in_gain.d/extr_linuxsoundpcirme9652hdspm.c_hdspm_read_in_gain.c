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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct hdspm {TYPE_2__* mixer; } ;
struct TYPE_4__ {TYPE_1__* ch; } ;
struct TYPE_3__ {int* in; } ;

/* Variables and functions */
 unsigned int HDSPM_MIXER_CHANNELS ; 

__attribute__((used)) static inline int hdspm_read_in_gain(struct hdspm * hdspm, unsigned int chan,
				     unsigned int in)
{
	if (chan >= HDSPM_MIXER_CHANNELS || in >= HDSPM_MIXER_CHANNELS)
		return 0;

	return hdspm->mixer->ch[chan].in[in];
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
          unsigned int chan = 100;
          unsigned int in = 100;
          int _len_hdspm0 = 1;
          struct hdspm * hdspm = (struct hdspm *) malloc(_len_hdspm0*sizeof(struct hdspm));
          for(int _i0 = 0; _i0 < _len_hdspm0; _i0++) {
              int _len_hdspm__i0__mixer0 = 1;
          hdspm[_i0].mixer = (struct TYPE_4__ *) malloc(_len_hdspm__i0__mixer0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_hdspm__i0__mixer0; _j0++) {
              int _len_hdspm__i0__mixer_ch0 = 1;
          hdspm[_i0].mixer->ch = (struct TYPE_3__ *) malloc(_len_hdspm__i0__mixer_ch0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_hdspm__i0__mixer_ch0; _j0++) {
              int _len_hdspm__i0__mixer_ch_in0 = 1;
          hdspm[_i0].mixer->ch->in = (int *) malloc(_len_hdspm__i0__mixer_ch_in0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hdspm__i0__mixer_ch_in0; _j0++) {
            hdspm[_i0].mixer->ch->in[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = hdspm_read_in_gain(hdspm,chan,in);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hdspm0; _aux++) {
          free(hdspm[_aux].mixer);
          }
          free(hdspm);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int chan = 255;
          unsigned int in = 255;
          int _len_hdspm0 = 65025;
          struct hdspm * hdspm = (struct hdspm *) malloc(_len_hdspm0*sizeof(struct hdspm));
          for(int _i0 = 0; _i0 < _len_hdspm0; _i0++) {
              int _len_hdspm__i0__mixer0 = 1;
          hdspm[_i0].mixer = (struct TYPE_4__ *) malloc(_len_hdspm__i0__mixer0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_hdspm__i0__mixer0; _j0++) {
              int _len_hdspm__i0__mixer_ch0 = 1;
          hdspm[_i0].mixer->ch = (struct TYPE_3__ *) malloc(_len_hdspm__i0__mixer_ch0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_hdspm__i0__mixer_ch0; _j0++) {
              int _len_hdspm__i0__mixer_ch_in0 = 1;
          hdspm[_i0].mixer->ch->in = (int *) malloc(_len_hdspm__i0__mixer_ch_in0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hdspm__i0__mixer_ch_in0; _j0++) {
            hdspm[_i0].mixer->ch->in[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = hdspm_read_in_gain(hdspm,chan,in);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hdspm0; _aux++) {
          free(hdspm[_aux].mixer);
          }
          free(hdspm);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int chan = 10;
          unsigned int in = 10;
          int _len_hdspm0 = 100;
          struct hdspm * hdspm = (struct hdspm *) malloc(_len_hdspm0*sizeof(struct hdspm));
          for(int _i0 = 0; _i0 < _len_hdspm0; _i0++) {
              int _len_hdspm__i0__mixer0 = 1;
          hdspm[_i0].mixer = (struct TYPE_4__ *) malloc(_len_hdspm__i0__mixer0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_hdspm__i0__mixer0; _j0++) {
              int _len_hdspm__i0__mixer_ch0 = 1;
          hdspm[_i0].mixer->ch = (struct TYPE_3__ *) malloc(_len_hdspm__i0__mixer_ch0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_hdspm__i0__mixer_ch0; _j0++) {
              int _len_hdspm__i0__mixer_ch_in0 = 1;
          hdspm[_i0].mixer->ch->in = (int *) malloc(_len_hdspm__i0__mixer_ch_in0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hdspm__i0__mixer_ch_in0; _j0++) {
            hdspm[_i0].mixer->ch->in[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = hdspm_read_in_gain(hdspm,chan,in);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hdspm0; _aux++) {
          free(hdspm[_aux].mixer);
          }
          free(hdspm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
