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
union sctp_subtype {size_t chunk; } ;

/* Variables and functions */
#define  SCTP_CID_ASCONF 134 
#define  SCTP_CID_ASCONF_ACK 133 
#define  SCTP_CID_AUTH 132 
 size_t SCTP_CID_BASE_MAX ; 
#define  SCTP_CID_FWD_TSN 131 
#define  SCTP_CID_I_DATA 130 
#define  SCTP_CID_I_FWD_TSN 129 
#define  SCTP_CID_RECONF 128 
 char const** sctp_cid_tbl ; 

const char *sctp_cname(const union sctp_subtype cid)
{
	if (cid.chunk <= SCTP_CID_BASE_MAX)
		return sctp_cid_tbl[cid.chunk];

	switch (cid.chunk) {
	case SCTP_CID_ASCONF:
		return "ASCONF";

	case SCTP_CID_ASCONF_ACK:
		return "ASCONF_ACK";

	case SCTP_CID_FWD_TSN:
		return "FWD_TSN";

	case SCTP_CID_AUTH:
		return "AUTH";

	case SCTP_CID_RECONF:
		return "RECONF";

	case SCTP_CID_I_DATA:
		return "I_DATA";

	case SCTP_CID_I_FWD_TSN:
		return "I_FWD_TSN";

	default:
		break;
	}

	return "unknown chunk";
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
          const union sctp_subtype cid = 0;
          const char * benchRet = sctp_cname(cid);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
