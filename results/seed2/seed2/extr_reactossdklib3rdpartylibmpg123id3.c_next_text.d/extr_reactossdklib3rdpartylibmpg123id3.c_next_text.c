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
typedef  int ssize_t ;

/* Variables and functions */
 size_t* encoding_widths ; 

__attribute__((used)) static unsigned char *next_text(unsigned char* prev, unsigned char encoding, size_t limit)
{
	unsigned char *text = prev;
	size_t width = encoding_widths[encoding];

	/* So I go lengths to find zero or double zero...
	   Remember bug 2834636: Only check for aligned NULLs! */
	while(text-prev < (ssize_t)limit)
	{
		if(text[0] == 0)
		{
			if(width <= limit-(text-prev))
			{
				size_t i = 1;
				for(; i<width; ++i) if(text[i] != 0) break;

				if(i == width) /* found a null wide enough! */
				{
					text += width;
					break;
				}
			}
			else return NULL; /* No full character left? This text is broken */
		}

		text += width;
	}
	if((size_t)(text-prev) >= limit) text = NULL;

	return text;
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
          unsigned char encoding = 100;
          unsigned long limit = 100;
          int _len_prev0 = 1;
          unsigned char * prev = (unsigned char *) malloc(_len_prev0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_prev0; _i0++) {
            prev[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned char * benchRet = next_text(prev,encoding,limit);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(prev);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned char encoding = 255;
          unsigned long limit = 255;
          int _len_prev0 = 65025;
          unsigned char * prev = (unsigned char *) malloc(_len_prev0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_prev0; _i0++) {
            prev[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned char * benchRet = next_text(prev,encoding,limit);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(prev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned char encoding = 10;
          unsigned long limit = 10;
          int _len_prev0 = 100;
          unsigned char * prev = (unsigned char *) malloc(_len_prev0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_prev0; _i0++) {
            prev[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned char * benchRet = next_text(prev,encoding,limit);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(prev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
