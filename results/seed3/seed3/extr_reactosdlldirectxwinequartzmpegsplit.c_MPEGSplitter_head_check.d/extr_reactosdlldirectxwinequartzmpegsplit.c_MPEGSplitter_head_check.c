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
typedef  int BYTE ;

/* Variables and functions */
 int const AUDIO_ELEMENTARY_STREAM ; 
 int MPEG_AUDIO_HEADER ; 
 int MPEG_NO_HEADER ; 
 int MPEG_SYSTEM_HEADER ; 
 int MPEG_VIDEO_HEADER ; 
 int const PACK_START_CODE ; 
 int const SEQUENCE_HEADER_CODE ; 
 int const VIDEO_ELEMENTARY_STREAM ; 

__attribute__((used)) static int MPEGSplitter_head_check(const BYTE *header)
{
    /* If this is a possible start code, check for a system or video header */
    if (header[0] == 0 && header[1] == 0 && header[2] == 1)
    {
        /* Check if we got a system or elementary stream start code */
        if (header[3] == PACK_START_CODE ||
            header[3] == VIDEO_ELEMENTARY_STREAM ||
            header[3] == AUDIO_ELEMENTARY_STREAM)
            return MPEG_SYSTEM_HEADER;

        /* Check for a MPEG video sequence start code */
        if (header[3] == SEQUENCE_HEADER_CODE)
            return MPEG_VIDEO_HEADER;
    }

    /* This should give a good guess if we have an MPEG audio header */
    if(header[0] == 0xff && ((header[1]>>5)&0x7) == 0x7 &&
       ((header[1]>>1)&0x3) != 0 && ((header[2]>>4)&0xf) != 0xf &&
       ((header[2]>>2)&0x3) != 0x3)
        return MPEG_AUDIO_HEADER;

    /* Nothing yet.. */
    return MPEG_NO_HEADER;
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
          int _len_header0 = 1;
          const int * header = (const int *) malloc(_len_header0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_header0; _i0++) {
            header[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = MPEGSplitter_head_check(header);
          printf("%d\n", benchRet); 
          free(header);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_header0 = 65025;
          const int * header = (const int *) malloc(_len_header0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_header0; _i0++) {
            header[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = MPEGSplitter_head_check(header);
          printf("%d\n", benchRet); 
          free(header);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_header0 = 100;
          const int * header = (const int *) malloc(_len_header0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_header0; _i0++) {
            header[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = MPEGSplitter_head_check(header);
          printf("%d\n", benchRet); 
          free(header);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
