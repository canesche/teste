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
struct intel_vss {int dummy; } ;
struct ep_name_entry {int len; scalar_t__ type; scalar_t__ data; } ;

/* Variables and functions */
 scalar_t__ EP_NAME_INTEL_VSS ; 

__attribute__((used)) static const struct intel_vss *parse_intel_vss(const void *ep_name, size_t size)
{
	const void *end = ep_name + size;

	while (ep_name < end) {
		const struct ep_name_entry *ep = ep_name;

		if (!ep->len)
			break;
		if (ep_name + ep->len > end)
			break;

		if (ep->type == EP_NAME_INTEL_VSS)
			return (const struct intel_vss *)ep->data;

		ep_name += ep->len;
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
          unsigned long size = 100;
          int _len_ep_name0 = 1;
          const void * ep_name = (const void *) malloc(_len_ep_name0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_ep_name0; _i0++) {
            ep_name[_i0] = 0;
          }
          const struct intel_vss * benchRet = parse_intel_vss(ep_name,size);
          free(ep_name);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long size = 255;
          int _len_ep_name0 = 65025;
          const void * ep_name = (const void *) malloc(_len_ep_name0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_ep_name0; _i0++) {
            ep_name[_i0] = 0;
          }
          const struct intel_vss * benchRet = parse_intel_vss(ep_name,size);
          free(ep_name);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long size = 10;
          int _len_ep_name0 = 100;
          const void * ep_name = (const void *) malloc(_len_ep_name0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_ep_name0; _i0++) {
            ep_name[_i0] = 0;
          }
          const struct intel_vss * benchRet = parse_intel_vss(ep_name,size);
          free(ep_name);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
