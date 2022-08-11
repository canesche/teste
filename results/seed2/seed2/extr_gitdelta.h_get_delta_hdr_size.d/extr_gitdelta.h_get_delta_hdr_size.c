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

__attribute__((used)) static inline unsigned long get_delta_hdr_size(const unsigned char **datap,
					       const unsigned char *top)
{
	const unsigned char *data = *datap;
	unsigned long cmd, size = 0;
	int i = 0;
	do {
		cmd = *data++;
		size |= (cmd & 0x7f) << i;
		i += 7;
	} while (cmd & 0x80 && data < top);
	*datap = data;
	return size;
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
          int _len_datap0 = 1;
          const unsigned char ** datap = (const unsigned char **) malloc(_len_datap0*sizeof(const unsigned char *));
          for(int _i0 = 0; _i0 < _len_datap0; _i0++) {
            int _len_datap1 = 1;
            datap[_i0] = (const unsigned char *) malloc(_len_datap1*sizeof(const unsigned char));
            for(int _i1 = 0; _i1 < _len_datap1; _i1++) {
              datap[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_top0 = 1;
          const unsigned char * top = (const unsigned char *) malloc(_len_top0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_top0; _i0++) {
            top[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = get_delta_hdr_size(datap,top);
          printf("%lu\n", benchRet); 
          for(int i1 = 0; i1 < _len_datap0; i1++) {
            int _len_datap1 = 1;
              free(datap[i1]);
          }
          free(datap);
          free(top);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_datap0 = 65025;
          const unsigned char ** datap = (const unsigned char **) malloc(_len_datap0*sizeof(const unsigned char *));
          for(int _i0 = 0; _i0 < _len_datap0; _i0++) {
            int _len_datap1 = 1;
            datap[_i0] = (const unsigned char *) malloc(_len_datap1*sizeof(const unsigned char));
            for(int _i1 = 0; _i1 < _len_datap1; _i1++) {
              datap[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_top0 = 65025;
          const unsigned char * top = (const unsigned char *) malloc(_len_top0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_top0; _i0++) {
            top[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = get_delta_hdr_size(datap,top);
          printf("%lu\n", benchRet); 
          for(int i1 = 0; i1 < _len_datap0; i1++) {
            int _len_datap1 = 1;
              free(datap[i1]);
          }
          free(datap);
          free(top);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_datap0 = 100;
          const unsigned char ** datap = (const unsigned char **) malloc(_len_datap0*sizeof(const unsigned char *));
          for(int _i0 = 0; _i0 < _len_datap0; _i0++) {
            int _len_datap1 = 1;
            datap[_i0] = (const unsigned char *) malloc(_len_datap1*sizeof(const unsigned char));
            for(int _i1 = 0; _i1 < _len_datap1; _i1++) {
              datap[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_top0 = 100;
          const unsigned char * top = (const unsigned char *) malloc(_len_top0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_top0; _i0++) {
            top[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = get_delta_hdr_size(datap,top);
          printf("%lu\n", benchRet); 
          for(int i1 = 0; i1 < _len_datap0; i1++) {
            int _len_datap1 = 1;
              free(datap[i1]);
          }
          free(datap);
          free(top);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
