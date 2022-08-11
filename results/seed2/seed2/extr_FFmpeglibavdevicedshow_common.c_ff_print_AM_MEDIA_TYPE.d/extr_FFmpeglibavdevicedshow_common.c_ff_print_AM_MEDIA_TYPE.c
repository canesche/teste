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
typedef  int /*<<< orphan*/  AM_MEDIA_TYPE ;

/* Variables and functions */

void ff_print_AM_MEDIA_TYPE(const AM_MEDIA_TYPE *type)
{
#if DSHOWDEBUG
    dshowdebug("    majortype\t");
    ff_printGUID(&type->majortype);
    dshowdebug("\n");
    dshowdebug("    subtype\t");
    ff_printGUID(&type->subtype);
    dshowdebug("\n");
    dshowdebug("    bFixedSizeSamples\t%d\n", type->bFixedSizeSamples);
    dshowdebug("    bTemporalCompression\t%d\n", type->bTemporalCompression);
    dshowdebug("    lSampleSize\t%lu\n", type->lSampleSize);
    dshowdebug("    formattype\t");
    ff_printGUID(&type->formattype);
    dshowdebug("\n");
    dshowdebug("    pUnk\t%p\n", type->pUnk);
    dshowdebug("    cbFormat\t%lu\n", type->cbFormat);
    dshowdebug("    pbFormat\t%p\n", type->pbFormat);

    if (IsEqualGUID(&type->formattype, &FORMAT_VideoInfo)) {
        VIDEOINFOHEADER *v = (void *) type->pbFormat;
        dshowdebug("      rcSource: left %ld top %ld right %ld bottom %ld\n",
                   v->rcSource.left, v->rcSource.top, v->rcSource.right, v->rcSource.bottom);
        dshowdebug("      rcTarget: left %ld top %ld right %ld bottom %ld\n",
                   v->rcTarget.left, v->rcTarget.top, v->rcTarget.right, v->rcTarget.bottom);
        dshowdebug("      dwBitRate: %lu\n", v->dwBitRate);
        dshowdebug("      dwBitErrorRate: %lu\n", v->dwBitErrorRate);
        dshowdebug("      AvgTimePerFrame: %"PRId64"\n", v->AvgTimePerFrame);
        dump_bih(NULL, &v->bmiHeader);
    } else if (IsEqualGUID(&type->formattype, &FORMAT_VideoInfo2)) {
        VIDEOINFOHEADER2 *v = (void *) type->pbFormat;
        dshowdebug("      rcSource: left %ld top %ld right %ld bottom %ld\n",
                   v->rcSource.left, v->rcSource.top, v->rcSource.right, v->rcSource.bottom);
        dshowdebug("      rcTarget: left %ld top %ld right %ld bottom %ld\n",
                   v->rcTarget.left, v->rcTarget.top, v->rcTarget.right, v->rcTarget.bottom);
        dshowdebug("      dwBitRate: %lu\n", v->dwBitRate);
        dshowdebug("      dwBitErrorRate: %lu\n", v->dwBitErrorRate);
        dshowdebug("      AvgTimePerFrame: %"PRId64"\n", v->AvgTimePerFrame);
        dshowdebug("      dwInterlaceFlags: %lu\n", v->dwInterlaceFlags);
        dshowdebug("      dwCopyProtectFlags: %lu\n", v->dwCopyProtectFlags);
        dshowdebug("      dwPictAspectRatioX: %lu\n", v->dwPictAspectRatioX);
        dshowdebug("      dwPictAspectRatioY: %lu\n", v->dwPictAspectRatioY);
//        dshowdebug("      dwReserved1: %lu\n", v->u.dwReserved1); /* mingw-w64 is buggy and doesn't name unnamed unions */
        dshowdebug("      dwReserved2: %lu\n", v->dwReserved2);
        dump_bih(NULL, &v->bmiHeader);
    } else if (IsEqualGUID(&type->formattype, &FORMAT_WaveFormatEx)) {
        WAVEFORMATEX *fx = (void *) type->pbFormat;
        dshowdebug("      wFormatTag: %u\n", fx->wFormatTag);
        dshowdebug("      nChannels: %u\n", fx->nChannels);
        dshowdebug("      nSamplesPerSec: %lu\n", fx->nSamplesPerSec);
        dshowdebug("      nAvgBytesPerSec: %lu\n", fx->nAvgBytesPerSec);
        dshowdebug("      nBlockAlign: %u\n", fx->nBlockAlign);
        dshowdebug("      wBitsPerSample: %u\n", fx->wBitsPerSample);
        dshowdebug("      cbSize: %u\n", fx->cbSize);
    }
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
          int _len_type0 = 1;
          const int * type = (const int *) malloc(_len_type0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_print_AM_MEDIA_TYPE(type);
          free(type);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_type0 = 65025;
          const int * type = (const int *) malloc(_len_type0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_print_AM_MEDIA_TYPE(type);
          free(type);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_type0 = 100;
          const int * type = (const int *) malloc(_len_type0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_print_AM_MEDIA_TYPE(type);
          free(type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
