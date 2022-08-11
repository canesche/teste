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

__attribute__((used)) static char *get_binary(char *buffer, int value)
{
	int i, j, pos;
	pos = 0;
	for (i = 0; i < 4; ++i) {
		for (j = 0; j < 8; ++j) {
			if (value & (1 << (31-(i*8 + j))))
				buffer[pos] = '1';
			else
				buffer[pos] = '0';
			pos++;
		}
		if (i < 3) {
			buffer[pos] = ' ';
			pos++;
		}
	}
	buffer[pos] = '\0';
	return buffer;
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
          int value = 100;
          int _len_buffer0 = 1;
          char * buffer = (char *) malloc(_len_buffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = get_binary(buffer,value);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(buffer);
        
        break;
    }
    // big-arr
    case 1:
    {
          int value = 255;
          int _len_buffer0 = 65025;
          char * buffer = (char *) malloc(_len_buffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = get_binary(buffer,value);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(buffer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int value = 10;
          int _len_buffer0 = 100;
          char * buffer = (char *) malloc(_len_buffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = get_binary(buffer,value);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
