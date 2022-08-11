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
struct dvb_net_priv {int ule_dbit; scalar_t__ ule_bridged; scalar_t__ ule_sndu_remain; scalar_t__ ule_sndu_type_1; scalar_t__ ule_sndu_type; scalar_t__ ule_sndu_len; int /*<<< orphan*/ * ule_next_hdr; int /*<<< orphan*/ * ule_skb; } ;

/* Variables and functions */

__attribute__((used)) static inline void reset_ule( struct dvb_net_priv *p )
{
	p->ule_skb = NULL;
	p->ule_next_hdr = NULL;
	p->ule_sndu_len = 0;
	p->ule_sndu_type = 0;
	p->ule_sndu_type_1 = 0;
	p->ule_sndu_remain = 0;
	p->ule_dbit = 0xFF;
	p->ule_bridged = 0;
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
          int _len_p0 = 1;
          struct dvb_net_priv * p = (struct dvb_net_priv *) malloc(_len_p0*sizeof(struct dvb_net_priv));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].ule_dbit = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ule_bridged = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ule_sndu_remain = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ule_sndu_type_1 = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ule_sndu_type = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ule_sndu_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__ule_next_hdr0 = 1;
          p[_i0].ule_next_hdr = (int *) malloc(_len_p__i0__ule_next_hdr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__ule_next_hdr0; _j0++) {
            p[_i0].ule_next_hdr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__ule_skb0 = 1;
          p[_i0].ule_skb = (int *) malloc(_len_p__i0__ule_skb0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__ule_skb0; _j0++) {
            p[_i0].ule_skb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          reset_ule(p);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].ule_next_hdr);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].ule_skb);
          }
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_p0 = 65025;
          struct dvb_net_priv * p = (struct dvb_net_priv *) malloc(_len_p0*sizeof(struct dvb_net_priv));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].ule_dbit = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ule_bridged = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ule_sndu_remain = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ule_sndu_type_1 = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ule_sndu_type = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ule_sndu_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__ule_next_hdr0 = 1;
          p[_i0].ule_next_hdr = (int *) malloc(_len_p__i0__ule_next_hdr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__ule_next_hdr0; _j0++) {
            p[_i0].ule_next_hdr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__ule_skb0 = 1;
          p[_i0].ule_skb = (int *) malloc(_len_p__i0__ule_skb0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__ule_skb0; _j0++) {
            p[_i0].ule_skb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          reset_ule(p);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].ule_next_hdr);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].ule_skb);
          }
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_p0 = 100;
          struct dvb_net_priv * p = (struct dvb_net_priv *) malloc(_len_p0*sizeof(struct dvb_net_priv));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].ule_dbit = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ule_bridged = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ule_sndu_remain = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ule_sndu_type_1 = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ule_sndu_type = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ule_sndu_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__ule_next_hdr0 = 1;
          p[_i0].ule_next_hdr = (int *) malloc(_len_p__i0__ule_next_hdr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__ule_next_hdr0; _j0++) {
            p[_i0].ule_next_hdr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__ule_skb0 = 1;
          p[_i0].ule_skb = (int *) malloc(_len_p__i0__ule_skb0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__ule_skb0; _j0++) {
            p[_i0].ule_skb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          reset_ule(p);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].ule_next_hdr);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].ule_skb);
          }
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
