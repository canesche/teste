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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct ddb_regmap {int dummy; } ;
struct ddb_io {TYPE_3__* port; } ;
struct ddb_info {struct ddb_regmap const* regmap; } ;
struct TYPE_6__ {size_t lnr; TYPE_2__* dev; } ;
struct TYPE_5__ {TYPE_1__* link; } ;
struct TYPE_4__ {struct ddb_info* info; } ;

/* Variables and functions */

__attribute__((used)) static const struct ddb_regmap *io_regmap(struct ddb_io *io, int link)
{
	const struct ddb_info *info;

	if (link)
		info = io->port->dev->link[io->port->lnr].info;
	else
		info = io->port->dev->link[0].info;

	if (!info)
		return NULL;

	return info->regmap;
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
          int link = 100;
          int _len_io0 = 1;
          struct ddb_io * io = (struct ddb_io *) malloc(_len_io0*sizeof(struct ddb_io));
          for(int _i0 = 0; _i0 < _len_io0; _i0++) {
              int _len_io__i0__port0 = 1;
          io[_i0].port = (struct TYPE_6__ *) malloc(_len_io__i0__port0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_io__i0__port0; _j0++) {
            io[_i0].port->lnr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_io__i0__port_dev0 = 1;
          io[_i0].port->dev = (struct TYPE_5__ *) malloc(_len_io__i0__port_dev0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_io__i0__port_dev0; _j0++) {
              int _len_io__i0__port_dev_link0 = 1;
          io[_i0].port->dev->link = (struct TYPE_4__ *) malloc(_len_io__i0__port_dev_link0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_io__i0__port_dev_link0; _j0++) {
              int _len_io__i0__port_dev_link_info0 = 1;
          io[_i0].port->dev->link->info = (struct ddb_info *) malloc(_len_io__i0__port_dev_link_info0*sizeof(struct ddb_info));
          for(int _j0 = 0; _j0 < _len_io__i0__port_dev_link_info0; _j0++) {
              int _len_io__i0__port_dev_link_info_regmap0 = 1;
          io[_i0].port->dev->link->info->regmap = (const struct ddb_regmap *) malloc(_len_io__i0__port_dev_link_info_regmap0*sizeof(const struct ddb_regmap));
          for(int _j0 = 0; _j0 < _len_io__i0__port_dev_link_info_regmap0; _j0++) {
              }
          }
          }
          }
          }
          }
          const struct ddb_regmap * benchRet = io_regmap(io,link);
          for(int _aux = 0; _aux < _len_io0; _aux++) {
          free(io[_aux].port);
          }
          free(io);
        
        break;
    }
    // big-arr
    case 1:
    {
          int link = 255;
          int _len_io0 = 65025;
          struct ddb_io * io = (struct ddb_io *) malloc(_len_io0*sizeof(struct ddb_io));
          for(int _i0 = 0; _i0 < _len_io0; _i0++) {
              int _len_io__i0__port0 = 1;
          io[_i0].port = (struct TYPE_6__ *) malloc(_len_io__i0__port0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_io__i0__port0; _j0++) {
            io[_i0].port->lnr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_io__i0__port_dev0 = 1;
          io[_i0].port->dev = (struct TYPE_5__ *) malloc(_len_io__i0__port_dev0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_io__i0__port_dev0; _j0++) {
              int _len_io__i0__port_dev_link0 = 1;
          io[_i0].port->dev->link = (struct TYPE_4__ *) malloc(_len_io__i0__port_dev_link0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_io__i0__port_dev_link0; _j0++) {
              int _len_io__i0__port_dev_link_info0 = 1;
          io[_i0].port->dev->link->info = (struct ddb_info *) malloc(_len_io__i0__port_dev_link_info0*sizeof(struct ddb_info));
          for(int _j0 = 0; _j0 < _len_io__i0__port_dev_link_info0; _j0++) {
              int _len_io__i0__port_dev_link_info_regmap0 = 1;
          io[_i0].port->dev->link->info->regmap = (const struct ddb_regmap *) malloc(_len_io__i0__port_dev_link_info_regmap0*sizeof(const struct ddb_regmap));
          for(int _j0 = 0; _j0 < _len_io__i0__port_dev_link_info_regmap0; _j0++) {
              }
          }
          }
          }
          }
          }
          const struct ddb_regmap * benchRet = io_regmap(io,link);
          for(int _aux = 0; _aux < _len_io0; _aux++) {
          free(io[_aux].port);
          }
          free(io);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int link = 10;
          int _len_io0 = 100;
          struct ddb_io * io = (struct ddb_io *) malloc(_len_io0*sizeof(struct ddb_io));
          for(int _i0 = 0; _i0 < _len_io0; _i0++) {
              int _len_io__i0__port0 = 1;
          io[_i0].port = (struct TYPE_6__ *) malloc(_len_io__i0__port0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_io__i0__port0; _j0++) {
            io[_i0].port->lnr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_io__i0__port_dev0 = 1;
          io[_i0].port->dev = (struct TYPE_5__ *) malloc(_len_io__i0__port_dev0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_io__i0__port_dev0; _j0++) {
              int _len_io__i0__port_dev_link0 = 1;
          io[_i0].port->dev->link = (struct TYPE_4__ *) malloc(_len_io__i0__port_dev_link0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_io__i0__port_dev_link0; _j0++) {
              int _len_io__i0__port_dev_link_info0 = 1;
          io[_i0].port->dev->link->info = (struct ddb_info *) malloc(_len_io__i0__port_dev_link_info0*sizeof(struct ddb_info));
          for(int _j0 = 0; _j0 < _len_io__i0__port_dev_link_info0; _j0++) {
              int _len_io__i0__port_dev_link_info_regmap0 = 1;
          io[_i0].port->dev->link->info->regmap = (const struct ddb_regmap *) malloc(_len_io__i0__port_dev_link_info_regmap0*sizeof(const struct ddb_regmap));
          for(int _j0 = 0; _j0 < _len_io__i0__port_dev_link_info_regmap0; _j0++) {
              }
          }
          }
          }
          }
          }
          const struct ddb_regmap * benchRet = io_regmap(io,link);
          for(int _aux = 0; _aux < _len_io0; _aux++) {
          free(io[_aux].port);
          }
          free(io);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
