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
struct ath10k_htc_hdr {int /*<<< orphan*/  eid; } ;
typedef  enum ath10k_htc_ep_id { ____Placeholder_ath10k_htc_ep_id } ath10k_htc_ep_id ;

/* Variables and functions */

__attribute__((used)) static inline enum ath10k_htc_ep_id
eid_from_htc_hdr(struct ath10k_htc_hdr *htc_hdr)
{
	return (enum ath10k_htc_ep_id)htc_hdr->eid;
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
          int _len_htc_hdr0 = 1;
          struct ath10k_htc_hdr * htc_hdr = (struct ath10k_htc_hdr *) malloc(_len_htc_hdr0*sizeof(struct ath10k_htc_hdr));
          for(int _i0 = 0; _i0 < _len_htc_hdr0; _i0++) {
            htc_hdr[_i0].eid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum ath10k_htc_ep_id benchRet = eid_from_htc_hdr(htc_hdr);
          free(htc_hdr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_htc_hdr0 = 65025;
          struct ath10k_htc_hdr * htc_hdr = (struct ath10k_htc_hdr *) malloc(_len_htc_hdr0*sizeof(struct ath10k_htc_hdr));
          for(int _i0 = 0; _i0 < _len_htc_hdr0; _i0++) {
            htc_hdr[_i0].eid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum ath10k_htc_ep_id benchRet = eid_from_htc_hdr(htc_hdr);
          free(htc_hdr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_htc_hdr0 = 100;
          struct ath10k_htc_hdr * htc_hdr = (struct ath10k_htc_hdr *) malloc(_len_htc_hdr0*sizeof(struct ath10k_htc_hdr));
          for(int _i0 = 0; _i0 < _len_htc_hdr0; _i0++) {
            htc_hdr[_i0].eid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum ath10k_htc_ep_id benchRet = eid_from_htc_hdr(htc_hdr);
          free(htc_hdr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
