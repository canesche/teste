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
struct snd_pcm_plugin_channel {int dummy; } ;
struct snd_pcm_plugin {struct snd_pcm_plugin_channel* buf_channels; } ;
typedef  int /*<<< orphan*/  snd_pcm_uframes_t ;
typedef  int /*<<< orphan*/  snd_pcm_sframes_t ;

/* Variables and functions */

snd_pcm_sframes_t snd_pcm_plugin_client_channels(struct snd_pcm_plugin *plugin,
				       snd_pcm_uframes_t frames,
				       struct snd_pcm_plugin_channel **channels)
{
	*channels = plugin->buf_channels;
	return frames;
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
          int frames = 100;
          int _len_plugin0 = 1;
          struct snd_pcm_plugin * plugin = (struct snd_pcm_plugin *) malloc(_len_plugin0*sizeof(struct snd_pcm_plugin));
          for(int _i0 = 0; _i0 < _len_plugin0; _i0++) {
              int _len_plugin__i0__buf_channels0 = 1;
          plugin[_i0].buf_channels = (struct snd_pcm_plugin_channel *) malloc(_len_plugin__i0__buf_channels0*sizeof(struct snd_pcm_plugin_channel));
          for(int _j0 = 0; _j0 < _len_plugin__i0__buf_channels0; _j0++) {
            plugin[_i0].buf_channels->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_channels0 = 1;
          struct snd_pcm_plugin_channel ** channels = (struct snd_pcm_plugin_channel **) malloc(_len_channels0*sizeof(struct snd_pcm_plugin_channel *));
          for(int _i0 = 0; _i0 < _len_channels0; _i0++) {
            int _len_channels1 = 1;
            channels[_i0] = (struct snd_pcm_plugin_channel *) malloc(_len_channels1*sizeof(struct snd_pcm_plugin_channel));
            for(int _i1 = 0; _i1 < _len_channels1; _i1++) {
              channels[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = snd_pcm_plugin_client_channels(plugin,frames,channels);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_plugin0; _aux++) {
          free(plugin[_aux].buf_channels);
          }
          free(plugin);
          for(int i1 = 0; i1 < _len_channels0; i1++) {
            int _len_channels1 = 1;
              free(channels[i1]);
          }
          free(channels);
        
        break;
    }
    // big-arr
    case 1:
    {
          int frames = 255;
          int _len_plugin0 = 65025;
          struct snd_pcm_plugin * plugin = (struct snd_pcm_plugin *) malloc(_len_plugin0*sizeof(struct snd_pcm_plugin));
          for(int _i0 = 0; _i0 < _len_plugin0; _i0++) {
              int _len_plugin__i0__buf_channels0 = 1;
          plugin[_i0].buf_channels = (struct snd_pcm_plugin_channel *) malloc(_len_plugin__i0__buf_channels0*sizeof(struct snd_pcm_plugin_channel));
          for(int _j0 = 0; _j0 < _len_plugin__i0__buf_channels0; _j0++) {
            plugin[_i0].buf_channels->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_channels0 = 65025;
          struct snd_pcm_plugin_channel ** channels = (struct snd_pcm_plugin_channel **) malloc(_len_channels0*sizeof(struct snd_pcm_plugin_channel *));
          for(int _i0 = 0; _i0 < _len_channels0; _i0++) {
            int _len_channels1 = 1;
            channels[_i0] = (struct snd_pcm_plugin_channel *) malloc(_len_channels1*sizeof(struct snd_pcm_plugin_channel));
            for(int _i1 = 0; _i1 < _len_channels1; _i1++) {
              channels[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = snd_pcm_plugin_client_channels(plugin,frames,channels);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_plugin0; _aux++) {
          free(plugin[_aux].buf_channels);
          }
          free(plugin);
          for(int i1 = 0; i1 < _len_channels0; i1++) {
            int _len_channels1 = 1;
              free(channels[i1]);
          }
          free(channels);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int frames = 10;
          int _len_plugin0 = 100;
          struct snd_pcm_plugin * plugin = (struct snd_pcm_plugin *) malloc(_len_plugin0*sizeof(struct snd_pcm_plugin));
          for(int _i0 = 0; _i0 < _len_plugin0; _i0++) {
              int _len_plugin__i0__buf_channels0 = 1;
          plugin[_i0].buf_channels = (struct snd_pcm_plugin_channel *) malloc(_len_plugin__i0__buf_channels0*sizeof(struct snd_pcm_plugin_channel));
          for(int _j0 = 0; _j0 < _len_plugin__i0__buf_channels0; _j0++) {
            plugin[_i0].buf_channels->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_channels0 = 100;
          struct snd_pcm_plugin_channel ** channels = (struct snd_pcm_plugin_channel **) malloc(_len_channels0*sizeof(struct snd_pcm_plugin_channel *));
          for(int _i0 = 0; _i0 < _len_channels0; _i0++) {
            int _len_channels1 = 1;
            channels[_i0] = (struct snd_pcm_plugin_channel *) malloc(_len_channels1*sizeof(struct snd_pcm_plugin_channel));
            for(int _i1 = 0; _i1 < _len_channels1; _i1++) {
              channels[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = snd_pcm_plugin_client_channels(plugin,frames,channels);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_plugin0; _aux++) {
          free(plugin[_aux].buf_channels);
          }
          free(plugin);
          for(int i1 = 0; i1 < _len_channels0; i1++) {
            int _len_channels1 = 1;
              free(channels[i1]);
          }
          free(channels);
        
        break;
    }
    // linked
    case 3:
    {
          int frames = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_plugin0 = 1;
          struct snd_pcm_plugin * plugin = (struct snd_pcm_plugin *) malloc(_len_plugin0*sizeof(struct snd_pcm_plugin));
          for(int _i0 = 0; _i0 < _len_plugin0; _i0++) {
              int _len_plugin__i0__buf_channels0 = 1;
          plugin[_i0].buf_channels = (struct snd_pcm_plugin_channel *) malloc(_len_plugin__i0__buf_channels0*sizeof(struct snd_pcm_plugin_channel));
          for(int _j0 = 0; _j0 < _len_plugin__i0__buf_channels0; _j0++) {
            plugin[_i0].buf_channels->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_channels0 = 1;
          struct snd_pcm_plugin_channel ** channels = (struct snd_pcm_plugin_channel **) malloc(_len_channels0*sizeof(struct snd_pcm_plugin_channel *));
          for(int _i0 = 0; _i0 < _len_channels0; _i0++) {
            int _len_channels1 = 1;
            channels[_i0] = (struct snd_pcm_plugin_channel *) malloc(_len_channels1*sizeof(struct snd_pcm_plugin_channel));
            for(int _i1 = 0; _i1 < _len_channels1; _i1++) {
              channels[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = snd_pcm_plugin_client_channels(plugin,frames,channels);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_plugin0; _aux++) {
          free(plugin[_aux].buf_channels);
          }
          free(plugin);
          for(int i1 = 0; i1 < _len_channels0; i1++) {
            int _len_channels1 = 1;
              free(channels[i1]);
          }
          free(channels);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
