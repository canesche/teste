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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u_int16_t ;
struct in6_addr {int dummy; } ;
struct inpcb {int /*<<< orphan*/  inp_fport; int /*<<< orphan*/  inp_lport; struct in6_addr in6p_faddr; struct in6_addr in6p_laddr; } ;
struct TYPE_4__ {struct in6_addr addr6; } ;
struct TYPE_3__ {struct in6_addr addr6; } ;
struct cfil_hash_entry {int /*<<< orphan*/  cfentry_fport; int /*<<< orphan*/  cfentry_lport; TYPE_2__ cfentry_faddr; TYPE_1__ cfentry_laddr; } ;

/* Variables and functions */

__attribute__((used)) static void
cfil_get_flow_address_v6(struct cfil_hash_entry *entry, struct inpcb *inp,
						 struct in6_addr **laddr, struct in6_addr **faddr,
						 u_int16_t *lport, u_int16_t *fport)
{
	if (entry != NULL) {
		*laddr = &entry->cfentry_laddr.addr6;
		*faddr = &entry->cfentry_faddr.addr6;
		*lport = entry->cfentry_lport;
		*fport = entry->cfentry_fport;
	} else {
		*laddr = &inp->in6p_laddr;
		*faddr = &inp->in6p_faddr;
		*lport = inp->inp_lport;
		*fport = inp->inp_fport;
	}
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
          int _len_entry0 = 1;
          struct cfil_hash_entry * entry = (struct cfil_hash_entry *) malloc(_len_entry0*sizeof(struct cfil_hash_entry));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
            entry[_i0].cfentry_fport = ((-2 * (next_i()%2)) + 1) * next_i();
        entry[_i0].cfentry_lport = ((-2 * (next_i()%2)) + 1) * next_i();
        entry[_i0].cfentry_faddr.addr6.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        entry[_i0].cfentry_laddr.addr6.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inp0 = 1;
          struct inpcb * inp = (struct inpcb *) malloc(_len_inp0*sizeof(struct inpcb));
          for(int _i0 = 0; _i0 < _len_inp0; _i0++) {
            inp[_i0].inp_fport = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].inp_lport = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].in6p_faddr.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].in6p_laddr.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_laddr0 = 1;
          struct in6_addr ** laddr = (struct in6_addr **) malloc(_len_laddr0*sizeof(struct in6_addr *));
          for(int _i0 = 0; _i0 < _len_laddr0; _i0++) {
            int _len_laddr1 = 1;
            laddr[_i0] = (struct in6_addr *) malloc(_len_laddr1*sizeof(struct in6_addr));
            for(int _i1 = 0; _i1 < _len_laddr1; _i1++) {
              laddr[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_faddr0 = 1;
          struct in6_addr ** faddr = (struct in6_addr **) malloc(_len_faddr0*sizeof(struct in6_addr *));
          for(int _i0 = 0; _i0 < _len_faddr0; _i0++) {
            int _len_faddr1 = 1;
            faddr[_i0] = (struct in6_addr *) malloc(_len_faddr1*sizeof(struct in6_addr));
            for(int _i1 = 0; _i1 < _len_faddr1; _i1++) {
              faddr[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_lport0 = 1;
          int * lport = (int *) malloc(_len_lport0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lport0; _i0++) {
            lport[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fport0 = 1;
          int * fport = (int *) malloc(_len_fport0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fport0; _i0++) {
            fport[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cfil_get_flow_address_v6(entry,inp,laddr,faddr,lport,fport);
          free(entry);
          free(inp);
          for(int i1 = 0; i1 < _len_laddr0; i1++) {
            int _len_laddr1 = 1;
              free(laddr[i1]);
          }
          free(laddr);
          for(int i1 = 0; i1 < _len_faddr0; i1++) {
            int _len_faddr1 = 1;
              free(faddr[i1]);
          }
          free(faddr);
          free(lport);
          free(fport);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_entry0 = 65025;
          struct cfil_hash_entry * entry = (struct cfil_hash_entry *) malloc(_len_entry0*sizeof(struct cfil_hash_entry));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
            entry[_i0].cfentry_fport = ((-2 * (next_i()%2)) + 1) * next_i();
        entry[_i0].cfentry_lport = ((-2 * (next_i()%2)) + 1) * next_i();
        entry[_i0].cfentry_faddr.addr6.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        entry[_i0].cfentry_laddr.addr6.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inp0 = 65025;
          struct inpcb * inp = (struct inpcb *) malloc(_len_inp0*sizeof(struct inpcb));
          for(int _i0 = 0; _i0 < _len_inp0; _i0++) {
            inp[_i0].inp_fport = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].inp_lport = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].in6p_faddr.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].in6p_laddr.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_laddr0 = 65025;
          struct in6_addr ** laddr = (struct in6_addr **) malloc(_len_laddr0*sizeof(struct in6_addr *));
          for(int _i0 = 0; _i0 < _len_laddr0; _i0++) {
            int _len_laddr1 = 1;
            laddr[_i0] = (struct in6_addr *) malloc(_len_laddr1*sizeof(struct in6_addr));
            for(int _i1 = 0; _i1 < _len_laddr1; _i1++) {
              laddr[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_faddr0 = 65025;
          struct in6_addr ** faddr = (struct in6_addr **) malloc(_len_faddr0*sizeof(struct in6_addr *));
          for(int _i0 = 0; _i0 < _len_faddr0; _i0++) {
            int _len_faddr1 = 1;
            faddr[_i0] = (struct in6_addr *) malloc(_len_faddr1*sizeof(struct in6_addr));
            for(int _i1 = 0; _i1 < _len_faddr1; _i1++) {
              faddr[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_lport0 = 65025;
          int * lport = (int *) malloc(_len_lport0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lport0; _i0++) {
            lport[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fport0 = 65025;
          int * fport = (int *) malloc(_len_fport0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fport0; _i0++) {
            fport[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cfil_get_flow_address_v6(entry,inp,laddr,faddr,lport,fport);
          free(entry);
          free(inp);
          for(int i1 = 0; i1 < _len_laddr0; i1++) {
            int _len_laddr1 = 1;
              free(laddr[i1]);
          }
          free(laddr);
          for(int i1 = 0; i1 < _len_faddr0; i1++) {
            int _len_faddr1 = 1;
              free(faddr[i1]);
          }
          free(faddr);
          free(lport);
          free(fport);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_entry0 = 100;
          struct cfil_hash_entry * entry = (struct cfil_hash_entry *) malloc(_len_entry0*sizeof(struct cfil_hash_entry));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
            entry[_i0].cfentry_fport = ((-2 * (next_i()%2)) + 1) * next_i();
        entry[_i0].cfentry_lport = ((-2 * (next_i()%2)) + 1) * next_i();
        entry[_i0].cfentry_faddr.addr6.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        entry[_i0].cfentry_laddr.addr6.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inp0 = 100;
          struct inpcb * inp = (struct inpcb *) malloc(_len_inp0*sizeof(struct inpcb));
          for(int _i0 = 0; _i0 < _len_inp0; _i0++) {
            inp[_i0].inp_fport = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].inp_lport = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].in6p_faddr.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].in6p_laddr.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_laddr0 = 100;
          struct in6_addr ** laddr = (struct in6_addr **) malloc(_len_laddr0*sizeof(struct in6_addr *));
          for(int _i0 = 0; _i0 < _len_laddr0; _i0++) {
            int _len_laddr1 = 1;
            laddr[_i0] = (struct in6_addr *) malloc(_len_laddr1*sizeof(struct in6_addr));
            for(int _i1 = 0; _i1 < _len_laddr1; _i1++) {
              laddr[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_faddr0 = 100;
          struct in6_addr ** faddr = (struct in6_addr **) malloc(_len_faddr0*sizeof(struct in6_addr *));
          for(int _i0 = 0; _i0 < _len_faddr0; _i0++) {
            int _len_faddr1 = 1;
            faddr[_i0] = (struct in6_addr *) malloc(_len_faddr1*sizeof(struct in6_addr));
            for(int _i1 = 0; _i1 < _len_faddr1; _i1++) {
              faddr[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_lport0 = 100;
          int * lport = (int *) malloc(_len_lport0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lport0; _i0++) {
            lport[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fport0 = 100;
          int * fport = (int *) malloc(_len_fport0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fport0; _i0++) {
            fport[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cfil_get_flow_address_v6(entry,inp,laddr,faddr,lport,fport);
          free(entry);
          free(inp);
          for(int i1 = 0; i1 < _len_laddr0; i1++) {
            int _len_laddr1 = 1;
              free(laddr[i1]);
          }
          free(laddr);
          for(int i1 = 0; i1 < _len_faddr0; i1++) {
            int _len_faddr1 = 1;
              free(faddr[i1]);
          }
          free(faddr);
          free(lport);
          free(fport);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
