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

__attribute__((used)) static inline int rtllib_is_empty_essid(const char *essid, int essid_len)
{
	/* Single white space is for Linksys APs */
	if (essid_len == 1 && essid[0] == ' ')
		return 1;

	/* Otherwise, if the entire essid is 0, we assume it is hidden */
	while (essid_len) {
		essid_len--;
		if (essid[essid_len] != '\0')
			return 0;
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
          int essid_len = 100;
          int _len_essid0 = 1;
          const char * essid = (const char *) malloc(_len_essid0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_essid0; _i0++) {
            essid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rtllib_is_empty_essid(essid,essid_len);
          printf("%d\n", benchRet); 
          free(essid);
        
        break;
    }
    // big-arr
    case 1:
    {
          int essid_len = 255;
          int _len_essid0 = 65025;
          const char * essid = (const char *) malloc(_len_essid0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_essid0; _i0++) {
            essid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rtllib_is_empty_essid(essid,essid_len);
          printf("%d\n", benchRet); 
          free(essid);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int essid_len = 10;
          int _len_essid0 = 100;
          const char * essid = (const char *) malloc(_len_essid0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_essid0; _i0++) {
            essid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rtllib_is_empty_essid(essid,essid_len);
          printf("%d\n", benchRet); 
          free(essid);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
