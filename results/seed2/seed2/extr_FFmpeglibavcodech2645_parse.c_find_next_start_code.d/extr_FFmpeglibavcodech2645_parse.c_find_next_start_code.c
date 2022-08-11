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
typedef  int uint8_t ;

/* Variables and functions */

__attribute__((used)) static int find_next_start_code(const uint8_t *buf, const uint8_t *next_avc)
{
    int i = 0;

    if (buf + 3 >= next_avc)
        return next_avc - buf;

    while (buf + i + 3 < next_avc) {
        if (buf[i] == 0 && buf[i + 1] == 0 && buf[i + 2] == 1)
            break;
        i++;
    }
    return i + 3;
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
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_next_avc0 = 1;
          const int * next_avc = (const int *) malloc(_len_next_avc0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_next_avc0; _i0++) {
            next_avc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = find_next_start_code(buf,next_avc);
          printf("%d\n", benchRet); 
          free(buf);
          free(next_avc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_buf0 = 65025;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_next_avc0 = 65025;
          const int * next_avc = (const int *) malloc(_len_next_avc0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_next_avc0; _i0++) {
            next_avc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = find_next_start_code(buf,next_avc);
          printf("%d\n", benchRet); 
          free(buf);
          free(next_avc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_buf0 = 100;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_next_avc0 = 100;
          const int * next_avc = (const int *) malloc(_len_next_avc0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_next_avc0; _i0++) {
            next_avc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = find_next_start_code(buf,next_avc);
          printf("%d\n", benchRet); 
          free(buf);
          free(next_avc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
