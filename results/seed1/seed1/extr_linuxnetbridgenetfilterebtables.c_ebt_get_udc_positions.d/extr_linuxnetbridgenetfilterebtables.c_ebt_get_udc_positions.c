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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct ebt_table_info {struct ebt_entries** hook_entry; } ;
struct ebt_entry {scalar_t__ bitmask; } ;
struct ebt_entries {int dummy; } ;
struct TYPE_2__ {scalar_t__ n; struct ebt_entries* chaininfo; } ;
struct ebt_cl_stack {scalar_t__ hookmask; TYPE_1__ cs; } ;

/* Variables and functions */
 int NF_BR_NUMHOOKS ; 

__attribute__((used)) static inline int
ebt_get_udc_positions(struct ebt_entry *e, struct ebt_table_info *newinfo,
		      unsigned int *n, struct ebt_cl_stack *udc)
{
	int i;

	/* we're only interested in chain starts */
	if (e->bitmask)
		return 0;
	for (i = 0; i < NF_BR_NUMHOOKS; i++) {
		if (newinfo->hook_entry[i] == (struct ebt_entries *)e)
			break;
	}
	/* only care about udc */
	if (i != NF_BR_NUMHOOKS)
		return 0;

	udc[*n].cs.chaininfo = (struct ebt_entries *)e;
	/* these initialisations are depended on later in check_chainloops() */
	udc[*n].cs.n = 0;
	udc[*n].hookmask = 0;

	(*n)++;
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
          int _len_e0 = 1;
          struct ebt_entry * e = (struct ebt_entry *) malloc(_len_e0*sizeof(struct ebt_entry));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0].bitmask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_newinfo0 = 1;
          struct ebt_table_info * newinfo = (struct ebt_table_info *) malloc(_len_newinfo0*sizeof(struct ebt_table_info));
          for(int _i0 = 0; _i0 < _len_newinfo0; _i0++) {
              int _len_newinfo__i0__hook_entry0 = 1;
          newinfo[_i0].hook_entry = (struct ebt_entries **) malloc(_len_newinfo__i0__hook_entry0*sizeof(struct ebt_entries *));
          for(int _j0 = 0; _j0 < _len_newinfo__i0__hook_entry0; _j0++) {
            int _len_newinfo__i0__hook_entry1 = 1;
            newinfo[_i0].hook_entry[_j0] = (struct ebt_entries *) malloc(_len_newinfo__i0__hook_entry1*sizeof(struct ebt_entries));
            for(int _j1 = 0; _j1 < _len_newinfo__i0__hook_entry1; _j1++) {
              newinfo[_i0].hook_entry[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_n0 = 1;
          unsigned int * n = (unsigned int *) malloc(_len_n0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_udc0 = 1;
          struct ebt_cl_stack * udc = (struct ebt_cl_stack *) malloc(_len_udc0*sizeof(struct ebt_cl_stack));
          for(int _i0 = 0; _i0 < _len_udc0; _i0++) {
            udc[_i0].hookmask = ((-2 * (next_i()%2)) + 1) * next_i();
        udc[_i0].cs.n = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_udc__i0__cs_chaininfo0 = 1;
          udc[_i0].cs.chaininfo = (struct ebt_entries *) malloc(_len_udc__i0__cs_chaininfo0*sizeof(struct ebt_entries));
          for(int _j0 = 0; _j0 < _len_udc__i0__cs_chaininfo0; _j0++) {
            udc[_i0].cs.chaininfo->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ebt_get_udc_positions(e,newinfo,n,udc);
          printf("%d\n", benchRet); 
          free(e);
          for(int _aux = 0; _aux < _len_newinfo0; _aux++) {
          free(*(newinfo[_aux].hook_entry));
        free(newinfo[_aux].hook_entry);
          }
          free(newinfo);
          free(n);
          free(udc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_e0 = 65025;
          struct ebt_entry * e = (struct ebt_entry *) malloc(_len_e0*sizeof(struct ebt_entry));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0].bitmask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_newinfo0 = 65025;
          struct ebt_table_info * newinfo = (struct ebt_table_info *) malloc(_len_newinfo0*sizeof(struct ebt_table_info));
          for(int _i0 = 0; _i0 < _len_newinfo0; _i0++) {
              int _len_newinfo__i0__hook_entry0 = 1;
          newinfo[_i0].hook_entry = (struct ebt_entries **) malloc(_len_newinfo__i0__hook_entry0*sizeof(struct ebt_entries *));
          for(int _j0 = 0; _j0 < _len_newinfo__i0__hook_entry0; _j0++) {
            int _len_newinfo__i0__hook_entry1 = 1;
            newinfo[_i0].hook_entry[_j0] = (struct ebt_entries *) malloc(_len_newinfo__i0__hook_entry1*sizeof(struct ebt_entries));
            for(int _j1 = 0; _j1 < _len_newinfo__i0__hook_entry1; _j1++) {
              newinfo[_i0].hook_entry[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_n0 = 65025;
          unsigned int * n = (unsigned int *) malloc(_len_n0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_udc0 = 65025;
          struct ebt_cl_stack * udc = (struct ebt_cl_stack *) malloc(_len_udc0*sizeof(struct ebt_cl_stack));
          for(int _i0 = 0; _i0 < _len_udc0; _i0++) {
            udc[_i0].hookmask = ((-2 * (next_i()%2)) + 1) * next_i();
        udc[_i0].cs.n = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_udc__i0__cs_chaininfo0 = 1;
          udc[_i0].cs.chaininfo = (struct ebt_entries *) malloc(_len_udc__i0__cs_chaininfo0*sizeof(struct ebt_entries));
          for(int _j0 = 0; _j0 < _len_udc__i0__cs_chaininfo0; _j0++) {
            udc[_i0].cs.chaininfo->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ebt_get_udc_positions(e,newinfo,n,udc);
          printf("%d\n", benchRet); 
          free(e);
          for(int _aux = 0; _aux < _len_newinfo0; _aux++) {
          free(*(newinfo[_aux].hook_entry));
        free(newinfo[_aux].hook_entry);
          }
          free(newinfo);
          free(n);
          free(udc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_e0 = 100;
          struct ebt_entry * e = (struct ebt_entry *) malloc(_len_e0*sizeof(struct ebt_entry));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0].bitmask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_newinfo0 = 100;
          struct ebt_table_info * newinfo = (struct ebt_table_info *) malloc(_len_newinfo0*sizeof(struct ebt_table_info));
          for(int _i0 = 0; _i0 < _len_newinfo0; _i0++) {
              int _len_newinfo__i0__hook_entry0 = 1;
          newinfo[_i0].hook_entry = (struct ebt_entries **) malloc(_len_newinfo__i0__hook_entry0*sizeof(struct ebt_entries *));
          for(int _j0 = 0; _j0 < _len_newinfo__i0__hook_entry0; _j0++) {
            int _len_newinfo__i0__hook_entry1 = 1;
            newinfo[_i0].hook_entry[_j0] = (struct ebt_entries *) malloc(_len_newinfo__i0__hook_entry1*sizeof(struct ebt_entries));
            for(int _j1 = 0; _j1 < _len_newinfo__i0__hook_entry1; _j1++) {
              newinfo[_i0].hook_entry[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_n0 = 100;
          unsigned int * n = (unsigned int *) malloc(_len_n0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_udc0 = 100;
          struct ebt_cl_stack * udc = (struct ebt_cl_stack *) malloc(_len_udc0*sizeof(struct ebt_cl_stack));
          for(int _i0 = 0; _i0 < _len_udc0; _i0++) {
            udc[_i0].hookmask = ((-2 * (next_i()%2)) + 1) * next_i();
        udc[_i0].cs.n = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_udc__i0__cs_chaininfo0 = 1;
          udc[_i0].cs.chaininfo = (struct ebt_entries *) malloc(_len_udc__i0__cs_chaininfo0*sizeof(struct ebt_entries));
          for(int _j0 = 0; _j0 < _len_udc__i0__cs_chaininfo0; _j0++) {
            udc[_i0].cs.chaininfo->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ebt_get_udc_positions(e,newinfo,n,udc);
          printf("%d\n", benchRet); 
          free(e);
          for(int _aux = 0; _aux < _len_newinfo0; _aux++) {
          free(*(newinfo[_aux].hook_entry));
        free(newinfo[_aux].hook_entry);
          }
          free(newinfo);
          free(n);
          free(udc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
