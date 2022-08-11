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
typedef  size_t u32 ;
struct ddb_port {scalar_t__ lnr; scalar_t__ nr; TYPE_1__* i2c; struct ddb* dev; } ;
struct ddb {size_t i2c_num; TYPE_1__* i2c; } ;
struct TYPE_2__ {scalar_t__ link; scalar_t__ nr; } ;

/* Variables and functions */

__attribute__((used)) static int ddb_port_match_i2c(struct ddb_port *port)
{
	struct ddb *dev = port->dev;
	u32 i;

	for (i = 0; i < dev->i2c_num; i++) {
		if (dev->i2c[i].link == port->lnr &&
		    dev->i2c[i].nr == port->nr) {
			port->i2c = &dev->i2c[i];
			return 1;
		}
	}
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
          int _len_port0 = 1;
          struct ddb_port * port = (struct ddb_port *) malloc(_len_port0*sizeof(struct ddb_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].lnr = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_port__i0__i2c0 = 1;
          port[_i0].i2c = (struct TYPE_2__ *) malloc(_len_port__i0__i2c0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_port__i0__i2c0; _j0++) {
            port[_i0].i2c->link = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].i2c->nr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_port__i0__dev0 = 1;
          port[_i0].dev = (struct ddb *) malloc(_len_port__i0__dev0*sizeof(struct ddb));
          for(int _j0 = 0; _j0 < _len_port__i0__dev0; _j0++) {
            port[_i0].dev->i2c_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_port__i0__dev_i2c0 = 1;
          port[_i0].dev->i2c = (struct TYPE_2__ *) malloc(_len_port__i0__dev_i2c0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_port__i0__dev_i2c0; _j0++) {
            port[_i0].dev->i2c->link = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].dev->i2c->nr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = ddb_port_match_i2c(port);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_port0; _aux++) {
          free(port[_aux].i2c);
          }
          for(int _aux = 0; _aux < _len_port0; _aux++) {
          free(port[_aux].dev);
          }
          free(port);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_port0 = 65025;
          struct ddb_port * port = (struct ddb_port *) malloc(_len_port0*sizeof(struct ddb_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].lnr = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_port__i0__i2c0 = 1;
          port[_i0].i2c = (struct TYPE_2__ *) malloc(_len_port__i0__i2c0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_port__i0__i2c0; _j0++) {
            port[_i0].i2c->link = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].i2c->nr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_port__i0__dev0 = 1;
          port[_i0].dev = (struct ddb *) malloc(_len_port__i0__dev0*sizeof(struct ddb));
          for(int _j0 = 0; _j0 < _len_port__i0__dev0; _j0++) {
            port[_i0].dev->i2c_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_port__i0__dev_i2c0 = 1;
          port[_i0].dev->i2c = (struct TYPE_2__ *) malloc(_len_port__i0__dev_i2c0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_port__i0__dev_i2c0; _j0++) {
            port[_i0].dev->i2c->link = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].dev->i2c->nr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = ddb_port_match_i2c(port);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_port0; _aux++) {
          free(port[_aux].i2c);
          }
          for(int _aux = 0; _aux < _len_port0; _aux++) {
          free(port[_aux].dev);
          }
          free(port);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_port0 = 100;
          struct ddb_port * port = (struct ddb_port *) malloc(_len_port0*sizeof(struct ddb_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].lnr = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_port__i0__i2c0 = 1;
          port[_i0].i2c = (struct TYPE_2__ *) malloc(_len_port__i0__i2c0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_port__i0__i2c0; _j0++) {
            port[_i0].i2c->link = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].i2c->nr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_port__i0__dev0 = 1;
          port[_i0].dev = (struct ddb *) malloc(_len_port__i0__dev0*sizeof(struct ddb));
          for(int _j0 = 0; _j0 < _len_port__i0__dev0; _j0++) {
            port[_i0].dev->i2c_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_port__i0__dev_i2c0 = 1;
          port[_i0].dev->i2c = (struct TYPE_2__ *) malloc(_len_port__i0__dev_i2c0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_port__i0__dev_i2c0; _j0++) {
            port[_i0].dev->i2c->link = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].dev->i2c->nr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = ddb_port_match_i2c(port);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_port0; _aux++) {
          free(port[_aux].i2c);
          }
          for(int _aux = 0; _aux < _len_port0; _aux++) {
          free(port[_aux].dev);
          }
          free(port);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
