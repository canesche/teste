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
typedef  int ut8 ;
typedef  int const ut64 ;

/* Variables and functions */

__attribute__((used)) static const char *mal_dis(ut64 c, const ut8 *buf, ut64 len) {
	if (len) {
		switch ((buf[0] + c) % 94) {
		case 4: return "jmp [d]";
		case 5: return "out a";
		case 23: return "in a";
		case 39: return "rotr [d], mov a, [d]";
		case 40: return "mov d, [d]";
		case 62: return "crz [d], a, mov a, [d]";
		case 81: return "end";
		default: return "nop";
		}
	}
	return NULL;
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
          const int c = 100;
          const int len = 100;
          int _len_buf0 = 1;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = mal_dis(c,buf,len);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          const int c = 255;
          const int len = 255;
          int _len_buf0 = 65025;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = mal_dis(c,buf,len);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int c = 10;
          const int len = 10;
          int _len_buf0 = 100;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = mal_dis(c,buf,len);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
