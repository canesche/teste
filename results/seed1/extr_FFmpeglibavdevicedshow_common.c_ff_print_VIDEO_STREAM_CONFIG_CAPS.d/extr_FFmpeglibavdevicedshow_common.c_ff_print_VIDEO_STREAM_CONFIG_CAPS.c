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
typedef  int /*<<< orphan*/  VIDEO_STREAM_CONFIG_CAPS ;

/* Variables and functions */

void ff_print_VIDEO_STREAM_CONFIG_CAPS(const VIDEO_STREAM_CONFIG_CAPS *caps)
{
#if DSHOWDEBUG
    dshowdebug(" VIDEO_STREAM_CONFIG_CAPS\n");
    dshowdebug("  guid\t");
    ff_printGUID(&caps->guid);
    dshowdebug("\n");
    dshowdebug("  VideoStandard\t%lu\n", caps->VideoStandard);
    dshowdebug("  InputSize %ld\t%ld\n", caps->InputSize.cx, caps->InputSize.cy);
    dshowdebug("  MinCroppingSize %ld\t%ld\n", caps->MinCroppingSize.cx, caps->MinCroppingSize.cy);
    dshowdebug("  MaxCroppingSize %ld\t%ld\n", caps->MaxCroppingSize.cx, caps->MaxCroppingSize.cy);
    dshowdebug("  CropGranularityX\t%d\n", caps->CropGranularityX);
    dshowdebug("  CropGranularityY\t%d\n", caps->CropGranularityY);
    dshowdebug("  CropAlignX\t%d\n", caps->CropAlignX);
    dshowdebug("  CropAlignY\t%d\n", caps->CropAlignY);
    dshowdebug("  MinOutputSize %ld\t%ld\n", caps->MinOutputSize.cx, caps->MinOutputSize.cy);
    dshowdebug("  MaxOutputSize %ld\t%ld\n", caps->MaxOutputSize.cx, caps->MaxOutputSize.cy);
    dshowdebug("  OutputGranularityX\t%d\n", caps->OutputGranularityX);
    dshowdebug("  OutputGranularityY\t%d\n", caps->OutputGranularityY);
    dshowdebug("  StretchTapsX\t%d\n", caps->StretchTapsX);
    dshowdebug("  StretchTapsY\t%d\n", caps->StretchTapsY);
    dshowdebug("  ShrinkTapsX\t%d\n", caps->ShrinkTapsX);
    dshowdebug("  ShrinkTapsY\t%d\n", caps->ShrinkTapsY);
    dshowdebug("  MinFrameInterval\t%"PRId64"\n", caps->MinFrameInterval);
    dshowdebug("  MaxFrameInterval\t%"PRId64"\n", caps->MaxFrameInterval);
    dshowdebug("  MinBitsPerSecond\t%ld\n", caps->MinBitsPerSecond);
    dshowdebug("  MaxBitsPerSecond\t%ld\n", caps->MaxBitsPerSecond);
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
          ff_print_VIDEO_STREAM_CONFIG_CAPS(caps);
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
          ff_print_VIDEO_STREAM_CONFIG_CAPS(caps);
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
          ff_print_VIDEO_STREAM_CONFIG_CAPS(caps);
          free(caps);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
