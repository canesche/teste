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

/* Variables and functions */

__attribute__((used)) static int
parse_port_unreachable(const unsigned char *px, unsigned length,
        unsigned *r_ip_me, unsigned *r_ip_them,
        unsigned *r_port_me, unsigned *r_port_them,
        unsigned *r_ip_proto)
{
    if (length < 24)
        return -1;
    *r_ip_me = px[12]<<24 | px[13]<<16 | px[14]<<8 | px[15];
    *r_ip_them = px[16]<<24 | px[17]<<16 | px[18]<<8 | px[19];
    *r_ip_proto = px[9]; /* TCP=6, UDP=17 */

    px += (px[0]&0xF)<<2;
    length -= (px[0]&0xF)<<2;

    if (length < 4)
        return -1;

    *r_port_me = px[0]<<8 | px[1];
    *r_port_them = px[2]<<8 | px[3];

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
          unsigned int length = 100;
          int _len_px0 = 1;
          const unsigned char * px = (const unsigned char *) malloc(_len_px0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_px0; _i0++) {
            px[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r_ip_me0 = 1;
          unsigned int * r_ip_me = (unsigned int *) malloc(_len_r_ip_me0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_r_ip_me0; _i0++) {
            r_ip_me[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r_ip_them0 = 1;
          unsigned int * r_ip_them = (unsigned int *) malloc(_len_r_ip_them0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_r_ip_them0; _i0++) {
            r_ip_them[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r_port_me0 = 1;
          unsigned int * r_port_me = (unsigned int *) malloc(_len_r_port_me0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_r_port_me0; _i0++) {
            r_port_me[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r_port_them0 = 1;
          unsigned int * r_port_them = (unsigned int *) malloc(_len_r_port_them0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_r_port_them0; _i0++) {
            r_port_them[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r_ip_proto0 = 1;
          unsigned int * r_ip_proto = (unsigned int *) malloc(_len_r_ip_proto0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_r_ip_proto0; _i0++) {
            r_ip_proto[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = parse_port_unreachable(px,length,r_ip_me,r_ip_them,r_port_me,r_port_them,r_ip_proto);
          printf("%d\n", benchRet); 
          free(px);
          free(r_ip_me);
          free(r_ip_them);
          free(r_port_me);
          free(r_port_them);
          free(r_ip_proto);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int length = 255;
          int _len_px0 = 65025;
          const unsigned char * px = (const unsigned char *) malloc(_len_px0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_px0; _i0++) {
            px[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r_ip_me0 = 65025;
          unsigned int * r_ip_me = (unsigned int *) malloc(_len_r_ip_me0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_r_ip_me0; _i0++) {
            r_ip_me[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r_ip_them0 = 65025;
          unsigned int * r_ip_them = (unsigned int *) malloc(_len_r_ip_them0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_r_ip_them0; _i0++) {
            r_ip_them[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r_port_me0 = 65025;
          unsigned int * r_port_me = (unsigned int *) malloc(_len_r_port_me0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_r_port_me0; _i0++) {
            r_port_me[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r_port_them0 = 65025;
          unsigned int * r_port_them = (unsigned int *) malloc(_len_r_port_them0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_r_port_them0; _i0++) {
            r_port_them[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r_ip_proto0 = 65025;
          unsigned int * r_ip_proto = (unsigned int *) malloc(_len_r_ip_proto0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_r_ip_proto0; _i0++) {
            r_ip_proto[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = parse_port_unreachable(px,length,r_ip_me,r_ip_them,r_port_me,r_port_them,r_ip_proto);
          printf("%d\n", benchRet); 
          free(px);
          free(r_ip_me);
          free(r_ip_them);
          free(r_port_me);
          free(r_port_them);
          free(r_ip_proto);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int length = 10;
          int _len_px0 = 100;
          const unsigned char * px = (const unsigned char *) malloc(_len_px0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_px0; _i0++) {
            px[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r_ip_me0 = 100;
          unsigned int * r_ip_me = (unsigned int *) malloc(_len_r_ip_me0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_r_ip_me0; _i0++) {
            r_ip_me[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r_ip_them0 = 100;
          unsigned int * r_ip_them = (unsigned int *) malloc(_len_r_ip_them0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_r_ip_them0; _i0++) {
            r_ip_them[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r_port_me0 = 100;
          unsigned int * r_port_me = (unsigned int *) malloc(_len_r_port_me0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_r_port_me0; _i0++) {
            r_port_me[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r_port_them0 = 100;
          unsigned int * r_port_them = (unsigned int *) malloc(_len_r_port_them0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_r_port_them0; _i0++) {
            r_port_them[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r_ip_proto0 = 100;
          unsigned int * r_ip_proto = (unsigned int *) malloc(_len_r_ip_proto0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_r_ip_proto0; _i0++) {
            r_ip_proto[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = parse_port_unreachable(px,length,r_ip_me,r_ip_them,r_port_me,r_port_them,r_ip_proto);
          printf("%d\n", benchRet); 
          free(px);
          free(r_ip_me);
          free(r_ip_them);
          free(r_port_me);
          free(r_port_them);
          free(r_ip_proto);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
