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

/* Variables and functions */
 int const WLAN_EID_FRAGMENT ; 

__attribute__((used)) static size_t skip_ie(const u8 *ies, size_t ielen, size_t pos)
{
	/* we assume a validly formed IEs buffer */
	u8 len = ies[pos + 1];

	pos += 2 + len;

	/* the IE itself must have 255 bytes for fragments to follow */
	if (len < 255)
		return pos;

	while (pos < ielen && ies[pos] == WLAN_EID_FRAGMENT) {
		len = ies[pos + 1];
		pos += 2 + len;
	}

	return pos;
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
          unsigned long ielen = 100;
          unsigned long pos = 100;
          int _len_ies0 = 1;
          const int * ies = (const int *) malloc(_len_ies0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ies0; _i0++) {
            ies[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = skip_ie(ies,ielen,pos);
          printf("%lu\n", benchRet); 
          free(ies);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long ielen = 255;
          unsigned long pos = 255;
          int _len_ies0 = 65025;
          const int * ies = (const int *) malloc(_len_ies0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ies0; _i0++) {
            ies[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = skip_ie(ies,ielen,pos);
          printf("%lu\n", benchRet); 
          free(ies);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long ielen = 10;
          unsigned long pos = 10;
          int _len_ies0 = 100;
          const int * ies = (const int *) malloc(_len_ies0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ies0; _i0++) {
            ies[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = skip_ie(ies,ielen,pos);
          printf("%lu\n", benchRet); 
          free(ies);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
