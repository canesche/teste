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
struct TemplatePacket {unsigned char* packet; unsigned int offset_app; unsigned int offset_tcp; int offset_ip; } ;

/* Variables and functions */

__attribute__((used)) static unsigned
tcp_checksum(struct TemplatePacket *tmpl)
{
    const unsigned char *px = tmpl->packet;
    unsigned xsum = 0;
    unsigned i;

    /* pseudo checksum */
    xsum = 6;
    xsum += tmpl->offset_app - tmpl->offset_tcp;
    xsum += px[tmpl->offset_ip + 12] << 8 | px[tmpl->offset_ip + 13];
    xsum += px[tmpl->offset_ip + 14] << 8 | px[tmpl->offset_ip + 15];
    xsum += px[tmpl->offset_ip + 16] << 8 | px[tmpl->offset_ip + 17];
    xsum += px[tmpl->offset_ip + 18] << 8 | px[tmpl->offset_ip + 19];

    /* tcp checksum */
    for (i=tmpl->offset_tcp; i<tmpl->offset_app; i += 2) {
        xsum += tmpl->packet[i]<<8 | tmpl->packet[i+1];
    }
    xsum = (xsum & 0xFFFF) + (xsum >> 16);
    xsum = (xsum & 0xFFFF) + (xsum >> 16);
    xsum = (xsum & 0xFFFF) + (xsum >> 16);

    return xsum;
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
          int _len_tmpl0 = 1;
          struct TemplatePacket * tmpl = (struct TemplatePacket *) malloc(_len_tmpl0*sizeof(struct TemplatePacket));
          for(int _i0 = 0; _i0 < _len_tmpl0; _i0++) {
              int _len_tmpl__i0__packet0 = 1;
          tmpl[_i0].packet = (unsigned char *) malloc(_len_tmpl__i0__packet0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_tmpl__i0__packet0; _j0++) {
            tmpl[_i0].packet[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tmpl[_i0].offset_app = ((-2 * (next_i()%2)) + 1) * next_i();
        tmpl[_i0].offset_tcp = ((-2 * (next_i()%2)) + 1) * next_i();
        tmpl[_i0].offset_ip = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = tcp_checksum(tmpl);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_tmpl0; _aux++) {
          free(tmpl[_aux].packet);
          }
          free(tmpl);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tmpl0 = 65025;
          struct TemplatePacket * tmpl = (struct TemplatePacket *) malloc(_len_tmpl0*sizeof(struct TemplatePacket));
          for(int _i0 = 0; _i0 < _len_tmpl0; _i0++) {
              int _len_tmpl__i0__packet0 = 1;
          tmpl[_i0].packet = (unsigned char *) malloc(_len_tmpl__i0__packet0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_tmpl__i0__packet0; _j0++) {
            tmpl[_i0].packet[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tmpl[_i0].offset_app = ((-2 * (next_i()%2)) + 1) * next_i();
        tmpl[_i0].offset_tcp = ((-2 * (next_i()%2)) + 1) * next_i();
        tmpl[_i0].offset_ip = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = tcp_checksum(tmpl);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_tmpl0; _aux++) {
          free(tmpl[_aux].packet);
          }
          free(tmpl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tmpl0 = 100;
          struct TemplatePacket * tmpl = (struct TemplatePacket *) malloc(_len_tmpl0*sizeof(struct TemplatePacket));
          for(int _i0 = 0; _i0 < _len_tmpl0; _i0++) {
              int _len_tmpl__i0__packet0 = 1;
          tmpl[_i0].packet = (unsigned char *) malloc(_len_tmpl__i0__packet0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_tmpl__i0__packet0; _j0++) {
            tmpl[_i0].packet[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tmpl[_i0].offset_app = ((-2 * (next_i()%2)) + 1) * next_i();
        tmpl[_i0].offset_tcp = ((-2 * (next_i()%2)) + 1) * next_i();
        tmpl[_i0].offset_ip = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = tcp_checksum(tmpl);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_tmpl0; _aux++) {
          free(tmpl[_aux].packet);
          }
          free(tmpl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
