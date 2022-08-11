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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct special_params {size_t dig_in_fmt; size_t dig_out_fmt; int /*<<< orphan*/  is1814; } ;
struct snd_bebob {TYPE_4__* rx_stream_formations; TYPE_3__* tx_stream_formations; struct special_params* maudio_special_quirk; } ;
struct TYPE_8__ {unsigned int pcm; int midi; } ;
struct TYPE_7__ {unsigned int pcm; int midi; } ;
struct TYPE_6__ {int member_0; int member_1; int member_2; } ;
struct TYPE_5__ {int member_0; int member_1; int member_2; } ;

/* Variables and functions */
 size_t AMDTP_IN_STREAM ; 
 size_t AMDTP_OUT_STREAM ; 
 int SND_BEBOB_STRM_FMT_ENTRIES ; 

__attribute__((used)) static void
special_stream_formation_set(struct snd_bebob *bebob)
{
	static const unsigned int ch_table[2][2][3] = {
		/* AMDTP_OUT_STREAM */
		{ {  6,  6,  4 },	/* SPDIF */
		  { 12,  8,  4 } },	/* ADAT */
		/* AMDTP_IN_STREAM */
		{ { 10, 10,  2 },	/* SPDIF */
		  { 16, 12,  2 } }	/* ADAT */
	};
	struct special_params *params = bebob->maudio_special_quirk;
	unsigned int i, max;

	max = SND_BEBOB_STRM_FMT_ENTRIES - 1;
	if (!params->is1814)
		max -= 2;

	for (i = 0; i < max; i++) {
		bebob->tx_stream_formations[i + 1].pcm =
			ch_table[AMDTP_IN_STREAM][params->dig_in_fmt][i / 2];
		bebob->tx_stream_formations[i + 1].midi = 1;

		bebob->rx_stream_formations[i + 1].pcm =
			ch_table[AMDTP_OUT_STREAM][params->dig_out_fmt][i / 2];
		bebob->rx_stream_formations[i + 1].midi = 1;
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
          int _len_bebob0 = 1;
          struct snd_bebob * bebob = (struct snd_bebob *) malloc(_len_bebob0*sizeof(struct snd_bebob));
          for(int _i0 = 0; _i0 < _len_bebob0; _i0++) {
              int _len_bebob__i0__rx_stream_formations0 = 1;
          bebob[_i0].rx_stream_formations = (struct TYPE_8__ *) malloc(_len_bebob__i0__rx_stream_formations0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_bebob__i0__rx_stream_formations0; _j0++) {
            bebob[_i0].rx_stream_formations->pcm = ((-2 * (next_i()%2)) + 1) * next_i();
        bebob[_i0].rx_stream_formations->midi = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bebob__i0__tx_stream_formations0 = 1;
          bebob[_i0].tx_stream_formations = (struct TYPE_7__ *) malloc(_len_bebob__i0__tx_stream_formations0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_bebob__i0__tx_stream_formations0; _j0++) {
            bebob[_i0].tx_stream_formations->pcm = ((-2 * (next_i()%2)) + 1) * next_i();
        bebob[_i0].tx_stream_formations->midi = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bebob__i0__maudio_special_quirk0 = 1;
          bebob[_i0].maudio_special_quirk = (struct special_params *) malloc(_len_bebob__i0__maudio_special_quirk0*sizeof(struct special_params));
          for(int _j0 = 0; _j0 < _len_bebob__i0__maudio_special_quirk0; _j0++) {
            bebob[_i0].maudio_special_quirk->dig_in_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        bebob[_i0].maudio_special_quirk->dig_out_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        bebob[_i0].maudio_special_quirk->is1814 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          special_stream_formation_set(bebob);
          for(int _aux = 0; _aux < _len_bebob0; _aux++) {
          free(bebob[_aux].rx_stream_formations);
          }
          for(int _aux = 0; _aux < _len_bebob0; _aux++) {
          free(bebob[_aux].tx_stream_formations);
          }
          for(int _aux = 0; _aux < _len_bebob0; _aux++) {
          free(bebob[_aux].maudio_special_quirk);
          }
          free(bebob);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_bebob0 = 65025;
          struct snd_bebob * bebob = (struct snd_bebob *) malloc(_len_bebob0*sizeof(struct snd_bebob));
          for(int _i0 = 0; _i0 < _len_bebob0; _i0++) {
              int _len_bebob__i0__rx_stream_formations0 = 1;
          bebob[_i0].rx_stream_formations = (struct TYPE_8__ *) malloc(_len_bebob__i0__rx_stream_formations0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_bebob__i0__rx_stream_formations0; _j0++) {
            bebob[_i0].rx_stream_formations->pcm = ((-2 * (next_i()%2)) + 1) * next_i();
        bebob[_i0].rx_stream_formations->midi = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bebob__i0__tx_stream_formations0 = 1;
          bebob[_i0].tx_stream_formations = (struct TYPE_7__ *) malloc(_len_bebob__i0__tx_stream_formations0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_bebob__i0__tx_stream_formations0; _j0++) {
            bebob[_i0].tx_stream_formations->pcm = ((-2 * (next_i()%2)) + 1) * next_i();
        bebob[_i0].tx_stream_formations->midi = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bebob__i0__maudio_special_quirk0 = 1;
          bebob[_i0].maudio_special_quirk = (struct special_params *) malloc(_len_bebob__i0__maudio_special_quirk0*sizeof(struct special_params));
          for(int _j0 = 0; _j0 < _len_bebob__i0__maudio_special_quirk0; _j0++) {
            bebob[_i0].maudio_special_quirk->dig_in_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        bebob[_i0].maudio_special_quirk->dig_out_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        bebob[_i0].maudio_special_quirk->is1814 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          special_stream_formation_set(bebob);
          for(int _aux = 0; _aux < _len_bebob0; _aux++) {
          free(bebob[_aux].rx_stream_formations);
          }
          for(int _aux = 0; _aux < _len_bebob0; _aux++) {
          free(bebob[_aux].tx_stream_formations);
          }
          for(int _aux = 0; _aux < _len_bebob0; _aux++) {
          free(bebob[_aux].maudio_special_quirk);
          }
          free(bebob);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_bebob0 = 100;
          struct snd_bebob * bebob = (struct snd_bebob *) malloc(_len_bebob0*sizeof(struct snd_bebob));
          for(int _i0 = 0; _i0 < _len_bebob0; _i0++) {
              int _len_bebob__i0__rx_stream_formations0 = 1;
          bebob[_i0].rx_stream_formations = (struct TYPE_8__ *) malloc(_len_bebob__i0__rx_stream_formations0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_bebob__i0__rx_stream_formations0; _j0++) {
            bebob[_i0].rx_stream_formations->pcm = ((-2 * (next_i()%2)) + 1) * next_i();
        bebob[_i0].rx_stream_formations->midi = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bebob__i0__tx_stream_formations0 = 1;
          bebob[_i0].tx_stream_formations = (struct TYPE_7__ *) malloc(_len_bebob__i0__tx_stream_formations0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_bebob__i0__tx_stream_formations0; _j0++) {
            bebob[_i0].tx_stream_formations->pcm = ((-2 * (next_i()%2)) + 1) * next_i();
        bebob[_i0].tx_stream_formations->midi = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bebob__i0__maudio_special_quirk0 = 1;
          bebob[_i0].maudio_special_quirk = (struct special_params *) malloc(_len_bebob__i0__maudio_special_quirk0*sizeof(struct special_params));
          for(int _j0 = 0; _j0 < _len_bebob__i0__maudio_special_quirk0; _j0++) {
            bebob[_i0].maudio_special_quirk->dig_in_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        bebob[_i0].maudio_special_quirk->dig_out_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        bebob[_i0].maudio_special_quirk->is1814 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          special_stream_formation_set(bebob);
          for(int _aux = 0; _aux < _len_bebob0; _aux++) {
          free(bebob[_aux].rx_stream_formations);
          }
          for(int _aux = 0; _aux < _len_bebob0; _aux++) {
          free(bebob[_aux].tx_stream_formations);
          }
          for(int _aux = 0; _aux < _len_bebob0; _aux++) {
          free(bebob[_aux].maudio_special_quirk);
          }
          free(bebob);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
