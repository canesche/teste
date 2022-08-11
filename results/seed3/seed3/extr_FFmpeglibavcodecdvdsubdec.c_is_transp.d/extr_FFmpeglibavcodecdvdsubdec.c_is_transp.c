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
typedef  size_t uint8_t ;

/* Variables and functions */

__attribute__((used)) static int is_transp(const uint8_t *buf, int pitch, int n,
                     const uint8_t *transp_color)
{
    int i;
    for(i = 0; i < n; i++) {
        if (!transp_color[*buf])
            return 0;
        buf += pitch;
    }
    return 1;
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
          int pitch = 100;
          int n = 100;
          int _len_buf0 = 1;
          const unsigned long * buf = (const unsigned long *) malloc(_len_buf0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_transp_color0 = 1;
          const unsigned long * transp_color = (const unsigned long *) malloc(_len_transp_color0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_transp_color0; _i0++) {
            transp_color[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_transp(buf,pitch,n,transp_color);
          printf("%d\n", benchRet); 
          free(buf);
          free(transp_color);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pitch = 255;
          int n = 255;
          int _len_buf0 = 65025;
          const unsigned long * buf = (const unsigned long *) malloc(_len_buf0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_transp_color0 = 65025;
          const unsigned long * transp_color = (const unsigned long *) malloc(_len_transp_color0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_transp_color0; _i0++) {
            transp_color[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_transp(buf,pitch,n,transp_color);
          printf("%d\n", benchRet); 
          free(buf);
          free(transp_color);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pitch = 10;
          int n = 10;
          int _len_buf0 = 100;
          const unsigned long * buf = (const unsigned long *) malloc(_len_buf0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_transp_color0 = 100;
          const unsigned long * transp_color = (const unsigned long *) malloc(_len_transp_color0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_transp_color0; _i0++) {
            transp_color[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_transp(buf,pitch,n,transp_color);
          printf("%d\n", benchRet); 
          free(buf);
          free(transp_color);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
