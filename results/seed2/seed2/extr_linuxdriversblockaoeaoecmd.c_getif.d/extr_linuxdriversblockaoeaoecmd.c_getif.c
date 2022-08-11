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
struct net_device {int dummy; } ;
struct aoetgt {struct aoeif* ifs; } ;
struct aoeif {struct net_device* nd; } ;

/* Variables and functions */
 int NAOEIFS ; 

__attribute__((used)) static struct aoeif *
getif(struct aoetgt *t, struct net_device *nd)
{
	struct aoeif *p, *e;

	p = t->ifs;
	e = p + NAOEIFS;
	for (; p < e; p++)
		if (p->nd == nd)
			return p;
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
          int _len_t0 = 1;
          struct aoetgt * t = (struct aoetgt *) malloc(_len_t0*sizeof(struct aoetgt));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              int _len_t__i0__ifs0 = 1;
          t[_i0].ifs = (struct aoeif *) malloc(_len_t__i0__ifs0*sizeof(struct aoeif));
          for(int _j0 = 0; _j0 < _len_t__i0__ifs0; _j0++) {
              int _len_t__i0__ifs_nd0 = 1;
          t[_i0].ifs->nd = (struct net_device *) malloc(_len_t__i0__ifs_nd0*sizeof(struct net_device));
          for(int _j0 = 0; _j0 < _len_t__i0__ifs_nd0; _j0++) {
            t[_i0].ifs->nd->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_nd0 = 1;
          struct net_device * nd = (struct net_device *) malloc(_len_nd0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_nd0; _i0++) {
            nd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct aoeif * benchRet = getif(t,nd);
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].ifs);
          }
          free(t);
          free(nd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_t0 = 65025;
          struct aoetgt * t = (struct aoetgt *) malloc(_len_t0*sizeof(struct aoetgt));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              int _len_t__i0__ifs0 = 1;
          t[_i0].ifs = (struct aoeif *) malloc(_len_t__i0__ifs0*sizeof(struct aoeif));
          for(int _j0 = 0; _j0 < _len_t__i0__ifs0; _j0++) {
              int _len_t__i0__ifs_nd0 = 1;
          t[_i0].ifs->nd = (struct net_device *) malloc(_len_t__i0__ifs_nd0*sizeof(struct net_device));
          for(int _j0 = 0; _j0 < _len_t__i0__ifs_nd0; _j0++) {
            t[_i0].ifs->nd->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_nd0 = 65025;
          struct net_device * nd = (struct net_device *) malloc(_len_nd0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_nd0; _i0++) {
            nd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct aoeif * benchRet = getif(t,nd);
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].ifs);
          }
          free(t);
          free(nd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_t0 = 100;
          struct aoetgt * t = (struct aoetgt *) malloc(_len_t0*sizeof(struct aoetgt));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              int _len_t__i0__ifs0 = 1;
          t[_i0].ifs = (struct aoeif *) malloc(_len_t__i0__ifs0*sizeof(struct aoeif));
          for(int _j0 = 0; _j0 < _len_t__i0__ifs0; _j0++) {
              int _len_t__i0__ifs_nd0 = 1;
          t[_i0].ifs->nd = (struct net_device *) malloc(_len_t__i0__ifs_nd0*sizeof(struct net_device));
          for(int _j0 = 0; _j0 < _len_t__i0__ifs_nd0; _j0++) {
            t[_i0].ifs->nd->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_nd0 = 100;
          struct net_device * nd = (struct net_device *) malloc(_len_nd0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_nd0; _i0++) {
            nd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct aoeif * benchRet = getif(t,nd);
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].ifs);
          }
          free(t);
          free(nd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
