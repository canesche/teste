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
typedef  int u8 ;
struct input_mt_pos {int x; int y; } ;

/* Variables and functions */

__attribute__((used)) static void ektf2127_parse_coordinates(const u8* buf, unsigned int touch_count,
				       struct input_mt_pos *touches)
{
	int index = 0;
	int i;

	for (i = 0; i < touch_count; i++) {
		index = 2 + i * 3;

		touches[i].x = (buf[index] & 0x0f);
		touches[i].x <<= 8;
		touches[i].x |= buf[index + 2];

		touches[i].y = (buf[index] & 0xf0);
		touches[i].y <<= 4;
		touches[i].y |= buf[index + 1];
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
          unsigned int touch_count = 100;
          int _len_buf0 = 1;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_touches0 = 1;
          struct input_mt_pos * touches = (struct input_mt_pos *) malloc(_len_touches0*sizeof(struct input_mt_pos));
          for(int _i0 = 0; _i0 < _len_touches0; _i0++) {
            touches[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        touches[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ektf2127_parse_coordinates(buf,touch_count,touches);
          free(buf);
          free(touches);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int touch_count = 255;
          int _len_buf0 = 65025;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_touches0 = 65025;
          struct input_mt_pos * touches = (struct input_mt_pos *) malloc(_len_touches0*sizeof(struct input_mt_pos));
          for(int _i0 = 0; _i0 < _len_touches0; _i0++) {
            touches[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        touches[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ektf2127_parse_coordinates(buf,touch_count,touches);
          free(buf);
          free(touches);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int touch_count = 10;
          int _len_buf0 = 100;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_touches0 = 100;
          struct input_mt_pos * touches = (struct input_mt_pos *) malloc(_len_touches0*sizeof(struct input_mt_pos));
          for(int _i0 = 0; _i0 < _len_touches0; _i0++) {
            touches[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        touches[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ektf2127_parse_coordinates(buf,touch_count,touches);
          free(buf);
          free(touches);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
