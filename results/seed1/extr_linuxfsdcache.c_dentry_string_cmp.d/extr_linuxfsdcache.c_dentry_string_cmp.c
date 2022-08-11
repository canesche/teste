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

__attribute__((used)) static inline int dentry_string_cmp(const unsigned char *cs, const unsigned char *ct, unsigned tcount)
{
	do {
		if (*cs != *ct)
			return 1;
		cs++;
		ct++;
		tcount--;
	} while (tcount);
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
          unsigned int tcount = 100;
          int _len_cs0 = 1;
          const unsigned char * cs = (const unsigned char *) malloc(_len_cs0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_cs0; _i0++) {
            cs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ct0 = 1;
          const unsigned char * ct = (const unsigned char *) malloc(_len_ct0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_ct0; _i0++) {
            ct[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dentry_string_cmp(cs,ct,tcount);
          printf("%d\n", benchRet); 
          free(cs);
          free(ct);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int tcount = 255;
          int _len_cs0 = 65025;
          const unsigned char * cs = (const unsigned char *) malloc(_len_cs0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_cs0; _i0++) {
            cs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ct0 = 65025;
          const unsigned char * ct = (const unsigned char *) malloc(_len_ct0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_ct0; _i0++) {
            ct[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dentry_string_cmp(cs,ct,tcount);
          printf("%d\n", benchRet); 
          free(cs);
          free(ct);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int tcount = 10;
          int _len_cs0 = 100;
          const unsigned char * cs = (const unsigned char *) malloc(_len_cs0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_cs0; _i0++) {
            cs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ct0 = 100;
          const unsigned char * ct = (const unsigned char *) malloc(_len_ct0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_ct0; _i0++) {
            ct[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dentry_string_cmp(cs,ct,tcount);
          printf("%d\n", benchRet); 
          free(cs);
          free(ct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
