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
struct ipv6hdr {int priority; int* flow_lbl; } ;

/* Variables and functions */

__attribute__((used)) static inline void lowpan_iphc_tf_set_dscp(struct ipv6hdr *hdr, const u8 *tf)
{
	/* DSCP is at place after ECN */
	u8 dscp = tf[0] & 0x3f;

	/* The four highest bits need to be set at hdr->priority */
	hdr->priority |= ((dscp & 0x3c) >> 2);
	/* The two lower bits is part of hdr->flow_lbl[0] */
	hdr->flow_lbl[0] |= ((dscp & 0x03) << 6);
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
          int _len_hdr0 = 1;
          struct ipv6hdr * hdr = (struct ipv6hdr *) malloc(_len_hdr0*sizeof(struct ipv6hdr));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0].priority = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdr__i0__flow_lbl0 = 1;
          hdr[_i0].flow_lbl = (int *) malloc(_len_hdr__i0__flow_lbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hdr__i0__flow_lbl0; _j0++) {
            hdr[_i0].flow_lbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tf0 = 1;
          const int * tf = (const int *) malloc(_len_tf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_tf0; _i0++) {
            tf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lowpan_iphc_tf_set_dscp(hdr,tf);
          for(int _aux = 0; _aux < _len_hdr0; _aux++) {
          free(hdr[_aux].flow_lbl);
          }
          free(hdr);
          free(tf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hdr0 = 65025;
          struct ipv6hdr * hdr = (struct ipv6hdr *) malloc(_len_hdr0*sizeof(struct ipv6hdr));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0].priority = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdr__i0__flow_lbl0 = 1;
          hdr[_i0].flow_lbl = (int *) malloc(_len_hdr__i0__flow_lbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hdr__i0__flow_lbl0; _j0++) {
            hdr[_i0].flow_lbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tf0 = 65025;
          const int * tf = (const int *) malloc(_len_tf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_tf0; _i0++) {
            tf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lowpan_iphc_tf_set_dscp(hdr,tf);
          for(int _aux = 0; _aux < _len_hdr0; _aux++) {
          free(hdr[_aux].flow_lbl);
          }
          free(hdr);
          free(tf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hdr0 = 100;
          struct ipv6hdr * hdr = (struct ipv6hdr *) malloc(_len_hdr0*sizeof(struct ipv6hdr));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0].priority = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdr__i0__flow_lbl0 = 1;
          hdr[_i0].flow_lbl = (int *) malloc(_len_hdr__i0__flow_lbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hdr__i0__flow_lbl0; _j0++) {
            hdr[_i0].flow_lbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tf0 = 100;
          const int * tf = (const int *) malloc(_len_tf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_tf0; _i0++) {
            tf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lowpan_iphc_tf_set_dscp(hdr,tf);
          for(int _aux = 0; _aux < _len_hdr0; _aux++) {
          free(hdr[_aux].flow_lbl);
          }
          free(hdr);
          free(tf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
