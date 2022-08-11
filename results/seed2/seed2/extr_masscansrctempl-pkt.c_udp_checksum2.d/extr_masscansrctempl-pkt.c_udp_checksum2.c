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
typedef  size_t uint64_t ;

/* Variables and functions */

unsigned
udp_checksum2(const unsigned char *px, unsigned offset_ip,
              unsigned offset_tcp, size_t tcp_length)
{
    uint64_t xsum = 0;
    unsigned i;

    /* pseudo checksum */
    xsum = 17;
    xsum += tcp_length;
    xsum += px[offset_ip + 12] << 8 | px[offset_ip + 13];
    xsum += px[offset_ip + 14] << 8 | px[offset_ip + 15];
    xsum += px[offset_ip + 16] << 8 | px[offset_ip + 17];
    xsum += px[offset_ip + 18] << 8 | px[offset_ip + 19];

    /* tcp checksum */
    for (i=0; i<tcp_length; i += 2) {
        xsum += px[offset_tcp + i]<<8 | px[offset_tcp + i + 1];
    }

    xsum -= (tcp_length & 1) * px[offset_tcp + i - 1]; /* yea I know going off end of packet is bad so sue me */
    xsum = (xsum & 0xFFFF) + (xsum >> 16);
    xsum = (xsum & 0xFFFF) + (xsum >> 16);
    xsum = (xsum & 0xFFFF) + (xsum >> 16);

    return (unsigned)xsum;
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
          unsigned int offset_ip = 100;
          unsigned int offset_tcp = 100;
          unsigned long tcp_length = 100;
          int _len_px0 = 1;
          const unsigned char * px = (const unsigned char *) malloc(_len_px0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_px0; _i0++) {
            px[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = udp_checksum2(px,offset_ip,offset_tcp,tcp_length);
          printf("%u\n", benchRet); 
          free(px);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int offset_ip = 255;
          unsigned int offset_tcp = 255;
          unsigned long tcp_length = 255;
          int _len_px0 = 65025;
          const unsigned char * px = (const unsigned char *) malloc(_len_px0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_px0; _i0++) {
            px[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = udp_checksum2(px,offset_ip,offset_tcp,tcp_length);
          printf("%u\n", benchRet); 
          free(px);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int offset_ip = 10;
          unsigned int offset_tcp = 10;
          unsigned long tcp_length = 10;
          int _len_px0 = 100;
          const unsigned char * px = (const unsigned char *) malloc(_len_px0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_px0; _i0++) {
            px[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = udp_checksum2(px,offset_ip,offset_tcp,tcp_length);
          printf("%u\n", benchRet); 
          free(px);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
