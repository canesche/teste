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
typedef  int /*<<< orphan*/  uint64_t ;
struct demux_packet {int dummy; } ;

/* Variables and functions */

int demux_packet_add_blockadditional(struct demux_packet *dp, uint64_t id,
                                     void *data, size_t size)
{
#if LIBAVCODEC_VERSION_MICRO >= 100
    if (!dp->avpacket)
        return -1;
    uint8_t *sd =  av_packet_new_side_data(dp->avpacket,
                                           AV_PKT_DATA_MATROSKA_BLOCKADDITIONAL,
                                           8 + size);
    if (!sd)
        return -1;
    AV_WB64(sd, id);
    if (size > 0)
        memcpy(sd + 8, data, size);
#endif
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
          int id = 100;
          unsigned long size = 100;
          int _len_dp0 = 1;
          struct demux_packet * dp = (struct demux_packet *) malloc(_len_dp0*sizeof(struct demux_packet));
          for(int _i0 = 0; _i0 < _len_dp0; _i0++) {
            dp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = demux_packet_add_blockadditional(dp,id,data,size);
          printf("%d\n", benchRet); 
          free(dp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int id = 255;
          unsigned long size = 255;
          int _len_dp0 = 65025;
          struct demux_packet * dp = (struct demux_packet *) malloc(_len_dp0*sizeof(struct demux_packet));
          for(int _i0 = 0; _i0 < _len_dp0; _i0++) {
            dp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = demux_packet_add_blockadditional(dp,id,data,size);
          printf("%d\n", benchRet); 
          free(dp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int id = 10;
          unsigned long size = 10;
          int _len_dp0 = 100;
          struct demux_packet * dp = (struct demux_packet *) malloc(_len_dp0*sizeof(struct demux_packet));
          for(int _i0 = 0; _i0 < _len_dp0; _i0++) {
            dp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = demux_packet_add_blockadditional(dp,id,data,size);
          printf("%d\n", benchRet); 
          free(dp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
