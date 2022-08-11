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
typedef  scalar_t__ uint16_t ;
struct outbuffer {int fill; scalar_t__ data; } ;
typedef  scalar_t__ int16_t ;

/* Variables and functions */

__attribute__((used)) static void conv_s16_to_u16(struct outbuffer *buf)
{
	size_t i;
	int16_t  *ssamples = (int16_t*) buf->data;
	uint16_t *usamples = (uint16_t*)buf->data;
	size_t count = buf->fill/sizeof(int16_t);

	for(i=0; i<count; ++i)
	{
		long tmp = (long)ssamples[i]+32768;
		usamples[i] = (uint16_t)tmp;
	}
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
          int _len_buf0 = 1;
          struct outbuffer * buf = (struct outbuffer *) malloc(_len_buf0*sizeof(struct outbuffer));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].fill = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          conv_s16_to_u16(buf);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_buf0 = 65025;
          struct outbuffer * buf = (struct outbuffer *) malloc(_len_buf0*sizeof(struct outbuffer));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].fill = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          conv_s16_to_u16(buf);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_buf0 = 100;
          struct outbuffer * buf = (struct outbuffer *) malloc(_len_buf0*sizeof(struct outbuffer));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].fill = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          conv_s16_to_u16(buf);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
