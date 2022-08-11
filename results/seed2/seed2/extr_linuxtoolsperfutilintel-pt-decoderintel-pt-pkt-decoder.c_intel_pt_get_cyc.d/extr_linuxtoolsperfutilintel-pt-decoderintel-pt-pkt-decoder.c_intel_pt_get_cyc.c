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
typedef  int uint64_t ;
struct intel_pt_pkt {int payload; int /*<<< orphan*/  type; } ;

/* Variables and functions */
 int INTEL_PT_BAD_PACKET ; 
 int /*<<< orphan*/  INTEL_PT_CYC ; 
 int INTEL_PT_NEED_MORE_BYTES ; 

__attribute__((used)) static int intel_pt_get_cyc(unsigned int byte, const unsigned char *buf,
			    size_t len, struct intel_pt_pkt *packet)
{
	unsigned int offs = 1, shift;
	uint64_t payload = byte >> 3;

	byte >>= 2;
	len -= 1;
	for (shift = 5; byte & 1; shift += 7) {
		if (offs > 9)
			return INTEL_PT_BAD_PACKET;
		if (len < offs)
			return INTEL_PT_NEED_MORE_BYTES;
		byte = buf[offs++];
		payload |= ((uint64_t)byte >> 1) << shift;
	}

	packet->type = INTEL_PT_CYC;
	packet->payload = payload;
	return offs;
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
          unsigned int byte = 100;
          unsigned long len = 100;
          int _len_buf0 = 1;
          const unsigned char * buf = (const unsigned char *) malloc(_len_buf0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_packet0 = 1;
          struct intel_pt_pkt * packet = (struct intel_pt_pkt *) malloc(_len_packet0*sizeof(struct intel_pt_pkt));
          for(int _i0 = 0; _i0 < _len_packet0; _i0++) {
            packet[_i0].payload = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intel_pt_get_cyc(byte,buf,len,packet);
          printf("%d\n", benchRet); 
          free(buf);
          free(packet);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int byte = 255;
          unsigned long len = 255;
          int _len_buf0 = 65025;
          const unsigned char * buf = (const unsigned char *) malloc(_len_buf0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_packet0 = 65025;
          struct intel_pt_pkt * packet = (struct intel_pt_pkt *) malloc(_len_packet0*sizeof(struct intel_pt_pkt));
          for(int _i0 = 0; _i0 < _len_packet0; _i0++) {
            packet[_i0].payload = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intel_pt_get_cyc(byte,buf,len,packet);
          printf("%d\n", benchRet); 
          free(buf);
          free(packet);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int byte = 10;
          unsigned long len = 10;
          int _len_buf0 = 100;
          const unsigned char * buf = (const unsigned char *) malloc(_len_buf0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_packet0 = 100;
          struct intel_pt_pkt * packet = (struct intel_pt_pkt *) malloc(_len_packet0*sizeof(struct intel_pt_pkt));
          for(int _i0 = 0; _i0 < _len_packet0; _i0++) {
            packet[_i0].payload = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intel_pt_get_cyc(byte,buf,len,packet);
          printf("%d\n", benchRet); 
          free(buf);
          free(packet);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
