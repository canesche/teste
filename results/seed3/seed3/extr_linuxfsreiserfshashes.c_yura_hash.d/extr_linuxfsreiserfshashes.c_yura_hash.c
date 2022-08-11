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
typedef  int u32 ;

/* Variables and functions */

u32 yura_hash(const signed char *msg, int len)
{
	int j, pow;
	u32 a, c;
	int i;

	for (pow = 1, i = 1; i < len; i++)
		pow = pow * 10;

	if (len == 1)
		a = msg[0] - 48;
	else
		a = (msg[0] - 48) * pow;

	for (i = 1; i < len; i++) {
		c = msg[i] - 48;
		for (pow = 1, j = i; j < len - 1; j++)
			pow = pow * 10;
		a = a + c * pow;
	}

	for (; i < 40; i++) {
		c = '0' - 48;
		for (pow = 1, j = i; j < len - 1; j++)
			pow = pow * 10;
		a = a + c * pow;
	}

	for (; i < 256; i++) {
		c = i;
		for (pow = 1, j = i; j < len - 1; j++)
			pow = pow * 10;
		a = a + c * pow;
	}

	a = a << 7;
	return a;
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
          int len = 100;
          int _len_msg0 = 1;
          const signed char * msg = (const signed char *) malloc(_len_msg0*sizeof(const signed char));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = yura_hash(msg,len);
          printf("%d\n", benchRet); 
          free(msg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int len = 255;
          int _len_msg0 = 65025;
          const signed char * msg = (const signed char *) malloc(_len_msg0*sizeof(const signed char));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = yura_hash(msg,len);
          printf("%d\n", benchRet); 
          free(msg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int len = 10;
          int _len_msg0 = 100;
          const signed char * msg = (const signed char *) malloc(_len_msg0*sizeof(const signed char));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = yura_hash(msg,len);
          printf("%d\n", benchRet); 
          free(msg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
