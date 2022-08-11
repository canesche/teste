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
typedef  int /*<<< orphan*/  AUDIO_STREAM_CONFIG_CAPS ;

/* Variables and functions */

void ff_print_AUDIO_STREAM_CONFIG_CAPS(const AUDIO_STREAM_CONFIG_CAPS *caps)
{
#if DSHOWDEBUG
    dshowdebug(" AUDIO_STREAM_CONFIG_CAPS\n");
    dshowdebug("  guid\t");
    ff_printGUID(&caps->guid);
    dshowdebug("\n");
    dshowdebug("  MinimumChannels\t%lu\n", caps->MinimumChannels);
    dshowdebug("  MaximumChannels\t%lu\n", caps->MaximumChannels);
    dshowdebug("  ChannelsGranularity\t%lu\n", caps->ChannelsGranularity);
    dshowdebug("  MinimumBitsPerSample\t%lu\n", caps->MinimumBitsPerSample);
    dshowdebug("  MaximumBitsPerSample\t%lu\n", caps->MaximumBitsPerSample);
    dshowdebug("  BitsPerSampleGranularity\t%lu\n", caps->BitsPerSampleGranularity);
    dshowdebug("  MinimumSampleFrequency\t%lu\n", caps->MinimumSampleFrequency);
    dshowdebug("  MaximumSampleFrequency\t%lu\n", caps->MaximumSampleFrequency);
    dshowdebug("  SampleFrequencyGranularity\t%lu\n", caps->SampleFrequencyGranularity);
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
          int _len_caps0 = 1;
          const int * caps = (const int *) malloc(_len_caps0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_caps0; _i0++) {
            caps[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_print_AUDIO_STREAM_CONFIG_CAPS(caps);
          free(caps);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_caps0 = 65025;
          const int * caps = (const int *) malloc(_len_caps0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_caps0; _i0++) {
            caps[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_print_AUDIO_STREAM_CONFIG_CAPS(caps);
          free(caps);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_caps0 = 100;
          const int * caps = (const int *) malloc(_len_caps0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_caps0; _i0++) {
            caps[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_print_AUDIO_STREAM_CONFIG_CAPS(caps);
          free(caps);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
