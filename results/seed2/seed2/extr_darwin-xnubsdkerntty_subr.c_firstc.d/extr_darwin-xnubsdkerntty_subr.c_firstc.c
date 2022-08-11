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
typedef  int u_char ;
struct clist {scalar_t__ c_cc; int* c_cf; int* c_cs; scalar_t__* c_cq; } ;

/* Variables and functions */
 int TTY_QUOTE ; 
 scalar_t__ cc ; 

u_char *
firstc(struct clist *clp, int *c)
{
	u_char *cp;

	cc = clp->c_cc;
	if (cc == 0)
		return NULL;
	cp = clp->c_cf;
	*c = *cp & 0xff;
	if(clp->c_cq) {
#ifdef QBITS
		if (isset(clp->c_cq, cp - clp->c_cs))
			*c |= TTY_QUOTE;
#else
		if (*(cp - clp->c_cs + clp->c_cq))
			*c |= TTY_QUOTE;
#endif
	}
	return clp->c_cf;
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
          int _len_clp0 = 1;
          struct clist * clp = (struct clist *) malloc(_len_clp0*sizeof(struct clist));
          for(int _i0 = 0; _i0 < _len_clp0; _i0++) {
            clp[_i0].c_cc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_clp__i0__c_cf0 = 1;
          clp[_i0].c_cf = (int *) malloc(_len_clp__i0__c_cf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_clp__i0__c_cf0; _j0++) {
            clp[_i0].c_cf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_clp__i0__c_cs0 = 1;
          clp[_i0].c_cs = (int *) malloc(_len_clp__i0__c_cs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_clp__i0__c_cs0; _j0++) {
            clp[_i0].c_cs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_clp__i0__c_cq0 = 1;
          clp[_i0].c_cq = (long *) malloc(_len_clp__i0__c_cq0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_clp__i0__c_cq0; _j0++) {
            clp[_i0].c_cq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_c0 = 1;
          int * c = (int *) malloc(_len_c0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = firstc(clp,c);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_clp0; _aux++) {
          free(clp[_aux].c_cf);
          }
          for(int _aux = 0; _aux < _len_clp0; _aux++) {
          free(clp[_aux].c_cs);
          }
          for(int _aux = 0; _aux < _len_clp0; _aux++) {
          free(clp[_aux].c_cq);
          }
          free(clp);
          free(c);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_clp0 = 65025;
          struct clist * clp = (struct clist *) malloc(_len_clp0*sizeof(struct clist));
          for(int _i0 = 0; _i0 < _len_clp0; _i0++) {
            clp[_i0].c_cc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_clp__i0__c_cf0 = 1;
          clp[_i0].c_cf = (int *) malloc(_len_clp__i0__c_cf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_clp__i0__c_cf0; _j0++) {
            clp[_i0].c_cf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_clp__i0__c_cs0 = 1;
          clp[_i0].c_cs = (int *) malloc(_len_clp__i0__c_cs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_clp__i0__c_cs0; _j0++) {
            clp[_i0].c_cs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_clp__i0__c_cq0 = 1;
          clp[_i0].c_cq = (long *) malloc(_len_clp__i0__c_cq0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_clp__i0__c_cq0; _j0++) {
            clp[_i0].c_cq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_c0 = 65025;
          int * c = (int *) malloc(_len_c0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = firstc(clp,c);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_clp0; _aux++) {
          free(clp[_aux].c_cf);
          }
          for(int _aux = 0; _aux < _len_clp0; _aux++) {
          free(clp[_aux].c_cs);
          }
          for(int _aux = 0; _aux < _len_clp0; _aux++) {
          free(clp[_aux].c_cq);
          }
          free(clp);
          free(c);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_clp0 = 100;
          struct clist * clp = (struct clist *) malloc(_len_clp0*sizeof(struct clist));
          for(int _i0 = 0; _i0 < _len_clp0; _i0++) {
            clp[_i0].c_cc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_clp__i0__c_cf0 = 1;
          clp[_i0].c_cf = (int *) malloc(_len_clp__i0__c_cf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_clp__i0__c_cf0; _j0++) {
            clp[_i0].c_cf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_clp__i0__c_cs0 = 1;
          clp[_i0].c_cs = (int *) malloc(_len_clp__i0__c_cs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_clp__i0__c_cs0; _j0++) {
            clp[_i0].c_cs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_clp__i0__c_cq0 = 1;
          clp[_i0].c_cq = (long *) malloc(_len_clp__i0__c_cq0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_clp__i0__c_cq0; _j0++) {
            clp[_i0].c_cq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_c0 = 100;
          int * c = (int *) malloc(_len_c0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = firstc(clp,c);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_clp0; _aux++) {
          free(clp[_aux].c_cf);
          }
          for(int _aux = 0; _aux < _len_clp0; _aux++) {
          free(clp[_aux].c_cs);
          }
          for(int _aux = 0; _aux < _len_clp0; _aux++) {
          free(clp[_aux].c_cq);
          }
          free(clp);
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
