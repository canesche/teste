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
struct dsa_switch_tree {struct dsa_switch** ds; } ;
struct dsa_switch {int num_ports; struct dsa_port* ports; } ;
struct dsa_port {struct device_node* dn; } ;
struct device_node {int dummy; } ;

/* Variables and functions */
 int DSA_MAX_SWITCHES ; 

__attribute__((used)) static struct dsa_port *dsa_tree_find_port_by_node(struct dsa_switch_tree *dst,
						   struct device_node *dn)
{
	struct dsa_switch *ds;
	struct dsa_port *dp;
	int device, port;

	for (device = 0; device < DSA_MAX_SWITCHES; device++) {
		ds = dst->ds[device];
		if (!ds)
			continue;

		for (port = 0; port < ds->num_ports; port++) {
			dp = &ds->ports[port];

			if (dp->dn == dn)
				return dp;
		}
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
          int _len_dst0 = 1;
          struct dsa_switch_tree * dst = (struct dsa_switch_tree *) malloc(_len_dst0*sizeof(struct dsa_switch_tree));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
              int _len_dst__i0__ds0 = 1;
          dst[_i0].ds = (struct dsa_switch **) malloc(_len_dst__i0__ds0*sizeof(struct dsa_switch *));
          for(int _j0 = 0; _j0 < _len_dst__i0__ds0; _j0++) {
            int _len_dst__i0__ds1 = 1;
            dst[_i0].ds[_j0] = (struct dsa_switch *) malloc(_len_dst__i0__ds1*sizeof(struct dsa_switch));
            for(int _j1 = 0; _j1 < _len_dst__i0__ds1; _j1++) {
              dst[_i0].ds[_j0]->num_ports = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dst__i0__ds__j0__ports0 = 1;
          dst[_i0].ds[_j0]->ports = (struct dsa_port *) malloc(_len_dst__i0__ds__j0__ports0*sizeof(struct dsa_port));
          for(int _j0 = 0; _j0 < _len_dst__i0__ds__j0__ports0; _j0++) {
              int _len_dst__i0__ds__j0__ports_dn0 = 1;
          dst[_i0].ds[_j0]->ports->dn = (struct device_node *) malloc(_len_dst__i0__ds__j0__ports_dn0*sizeof(struct device_node));
          for(int _j0 = 0; _j0 < _len_dst__i0__ds__j0__ports_dn0; _j0++) {
            dst[_i0].ds[_j0]->ports->dn->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
            }
          }
          }
          int _len_dn0 = 1;
          struct device_node * dn = (struct device_node *) malloc(_len_dn0*sizeof(struct device_node));
          for(int _i0 = 0; _i0 < _len_dn0; _i0++) {
            dn[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct dsa_port * benchRet = dsa_tree_find_port_by_node(dst,dn);
          for(int _aux = 0; _aux < _len_dst0; _aux++) {
          free(*(dst[_aux].ds));
        free(dst[_aux].ds);
          }
          free(dst);
          free(dn);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dst0 = 65025;
          struct dsa_switch_tree * dst = (struct dsa_switch_tree *) malloc(_len_dst0*sizeof(struct dsa_switch_tree));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
              int _len_dst__i0__ds0 = 1;
          dst[_i0].ds = (struct dsa_switch **) malloc(_len_dst__i0__ds0*sizeof(struct dsa_switch *));
          for(int _j0 = 0; _j0 < _len_dst__i0__ds0; _j0++) {
            int _len_dst__i0__ds1 = 1;
            dst[_i0].ds[_j0] = (struct dsa_switch *) malloc(_len_dst__i0__ds1*sizeof(struct dsa_switch));
            for(int _j1 = 0; _j1 < _len_dst__i0__ds1; _j1++) {
              dst[_i0].ds[_j0]->num_ports = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dst__i0__ds__j0__ports0 = 1;
          dst[_i0].ds[_j0]->ports = (struct dsa_port *) malloc(_len_dst__i0__ds__j0__ports0*sizeof(struct dsa_port));
          for(int _j0 = 0; _j0 < _len_dst__i0__ds__j0__ports0; _j0++) {
              int _len_dst__i0__ds__j0__ports_dn0 = 1;
          dst[_i0].ds[_j0]->ports->dn = (struct device_node *) malloc(_len_dst__i0__ds__j0__ports_dn0*sizeof(struct device_node));
          for(int _j0 = 0; _j0 < _len_dst__i0__ds__j0__ports_dn0; _j0++) {
            dst[_i0].ds[_j0]->ports->dn->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
            }
          }
          }
          int _len_dn0 = 65025;
          struct device_node * dn = (struct device_node *) malloc(_len_dn0*sizeof(struct device_node));
          for(int _i0 = 0; _i0 < _len_dn0; _i0++) {
            dn[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct dsa_port * benchRet = dsa_tree_find_port_by_node(dst,dn);
          for(int _aux = 0; _aux < _len_dst0; _aux++) {
          free(*(dst[_aux].ds));
        free(dst[_aux].ds);
          }
          free(dst);
          free(dn);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dst0 = 100;
          struct dsa_switch_tree * dst = (struct dsa_switch_tree *) malloc(_len_dst0*sizeof(struct dsa_switch_tree));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
              int _len_dst__i0__ds0 = 1;
          dst[_i0].ds = (struct dsa_switch **) malloc(_len_dst__i0__ds0*sizeof(struct dsa_switch *));
          for(int _j0 = 0; _j0 < _len_dst__i0__ds0; _j0++) {
            int _len_dst__i0__ds1 = 1;
            dst[_i0].ds[_j0] = (struct dsa_switch *) malloc(_len_dst__i0__ds1*sizeof(struct dsa_switch));
            for(int _j1 = 0; _j1 < _len_dst__i0__ds1; _j1++) {
              dst[_i0].ds[_j0]->num_ports = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dst__i0__ds__j0__ports0 = 1;
          dst[_i0].ds[_j0]->ports = (struct dsa_port *) malloc(_len_dst__i0__ds__j0__ports0*sizeof(struct dsa_port));
          for(int _j0 = 0; _j0 < _len_dst__i0__ds__j0__ports0; _j0++) {
              int _len_dst__i0__ds__j0__ports_dn0 = 1;
          dst[_i0].ds[_j0]->ports->dn = (struct device_node *) malloc(_len_dst__i0__ds__j0__ports_dn0*sizeof(struct device_node));
          for(int _j0 = 0; _j0 < _len_dst__i0__ds__j0__ports_dn0; _j0++) {
            dst[_i0].ds[_j0]->ports->dn->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
            }
          }
          }
          int _len_dn0 = 100;
          struct device_node * dn = (struct device_node *) malloc(_len_dn0*sizeof(struct device_node));
          for(int _i0 = 0; _i0 < _len_dn0; _i0++) {
            dn[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct dsa_port * benchRet = dsa_tree_find_port_by_node(dst,dn);
          for(int _aux = 0; _aux < _len_dst0; _aux++) {
          free(*(dst[_aux].ds));
        free(dst[_aux].ds);
          }
          free(dst);
          free(dn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
