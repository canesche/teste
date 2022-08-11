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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct ddb_output {TYPE_2__* port; } ;
struct ddb {TYPE_4__* link; } ;
struct TYPE_7__ {int regmapid; } ;
struct TYPE_8__ {TYPE_3__ ids; TYPE_1__* info; } ;
struct TYPE_6__ {int obr; int gap; int nr; struct ddb* dev; } ;
struct TYPE_5__ {scalar_t__ type; } ;

/* Variables and functions */
 scalar_t__ DDB_OCTOPUS_CI ; 

__attribute__((used)) static void calc_con(struct ddb_output *output, u32 *con, u32 *con2, u32 flags)
{
	struct ddb *dev = output->port->dev;
	u32 bitrate = output->port->obr, max_bitrate = 72000;
	u32 gap = 4, nco = 0;

	*con = 0x1c;
	if (output->port->gap != 0xffffffff) {
		flags |= 1;
		gap = output->port->gap;
		max_bitrate = 0;
	}
	if (dev->link[0].info->type == DDB_OCTOPUS_CI && output->port->nr > 1) {
		*con = 0x10c;
		if (dev->link[0].ids.regmapid >= 0x10003 && !(flags & 1)) {
			if (!(flags & 2)) {
				/* NCO */
				max_bitrate = 0;
				gap = 0;
				if (bitrate != 72000) {
					if (bitrate >= 96000) {
						*con |= 0x800;
					} else {
						*con |= 0x1000;
						nco = (bitrate * 8192 + 71999)
							/ 72000;
					}
				}
			} else {
				/* Divider and gap */
				*con |= 0x1810;
				if (bitrate <= 64000) {
					max_bitrate = 64000;
					nco = 8;
				} else if (bitrate <= 72000) {
					max_bitrate = 72000;
					nco = 7;
				} else {
					max_bitrate = 96000;
					nco = 5;
				}
			}
		} else {
			if (bitrate > 72000) {
				*con |= 0x810; /* 96 MBit/s and gap */
				max_bitrate = 96000;
			}
			*con |= 0x10; /* enable gap */
		}
	}
	if (max_bitrate > 0) {
		if (bitrate > max_bitrate)
			bitrate = max_bitrate;
		if (bitrate < 31000)
			bitrate = 31000;
		gap = ((max_bitrate - bitrate) * 94) / bitrate;
		if (gap < 2)
			*con &= ~0x10; /* Disable gap */
		else
			gap -= 2;
		if (gap > 127)
			gap = 127;
	}

	*con2 = (nco << 16) | gap;
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
          int flags = 100;
          int _len_output0 = 1;
          struct ddb_output * output = (struct ddb_output *) malloc(_len_output0*sizeof(struct ddb_output));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
              int _len_output__i0__port0 = 1;
          output[_i0].port = (struct TYPE_6__ *) malloc(_len_output__i0__port0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_output__i0__port0; _j0++) {
            output[_i0].port->obr = ((-2 * (next_i()%2)) + 1) * next_i();
        output[_i0].port->gap = ((-2 * (next_i()%2)) + 1) * next_i();
        output[_i0].port->nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_output__i0__port_dev0 = 1;
          output[_i0].port->dev = (struct ddb *) malloc(_len_output__i0__port_dev0*sizeof(struct ddb));
          for(int _j0 = 0; _j0 < _len_output__i0__port_dev0; _j0++) {
              int _len_output__i0__port_dev_link0 = 1;
          output[_i0].port->dev->link = (struct TYPE_8__ *) malloc(_len_output__i0__port_dev_link0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_output__i0__port_dev_link0; _j0++) {
            output[_i0].port->dev->link->ids.regmapid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_output__i0__port_dev_link_info0 = 1;
          output[_i0].port->dev->link->info = (struct TYPE_5__ *) malloc(_len_output__i0__port_dev_link_info0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_output__i0__port_dev_link_info0; _j0++) {
            output[_i0].port->dev->link->info->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          int _len_con0 = 1;
          int * con = (int *) malloc(_len_con0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_con0; _i0++) {
            con[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_con20 = 1;
          int * con2 = (int *) malloc(_len_con20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_con20; _i0++) {
            con2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          calc_con(output,con,con2,flags);
          for(int _aux = 0; _aux < _len_output0; _aux++) {
          free(output[_aux].port);
          }
          free(output);
          free(con);
          free(con2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int flags = 255;
          int _len_output0 = 65025;
          struct ddb_output * output = (struct ddb_output *) malloc(_len_output0*sizeof(struct ddb_output));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
              int _len_output__i0__port0 = 1;
          output[_i0].port = (struct TYPE_6__ *) malloc(_len_output__i0__port0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_output__i0__port0; _j0++) {
            output[_i0].port->obr = ((-2 * (next_i()%2)) + 1) * next_i();
        output[_i0].port->gap = ((-2 * (next_i()%2)) + 1) * next_i();
        output[_i0].port->nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_output__i0__port_dev0 = 1;
          output[_i0].port->dev = (struct ddb *) malloc(_len_output__i0__port_dev0*sizeof(struct ddb));
          for(int _j0 = 0; _j0 < _len_output__i0__port_dev0; _j0++) {
              int _len_output__i0__port_dev_link0 = 1;
          output[_i0].port->dev->link = (struct TYPE_8__ *) malloc(_len_output__i0__port_dev_link0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_output__i0__port_dev_link0; _j0++) {
            output[_i0].port->dev->link->ids.regmapid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_output__i0__port_dev_link_info0 = 1;
          output[_i0].port->dev->link->info = (struct TYPE_5__ *) malloc(_len_output__i0__port_dev_link_info0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_output__i0__port_dev_link_info0; _j0++) {
            output[_i0].port->dev->link->info->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          int _len_con0 = 65025;
          int * con = (int *) malloc(_len_con0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_con0; _i0++) {
            con[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_con20 = 65025;
          int * con2 = (int *) malloc(_len_con20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_con20; _i0++) {
            con2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          calc_con(output,con,con2,flags);
          for(int _aux = 0; _aux < _len_output0; _aux++) {
          free(output[_aux].port);
          }
          free(output);
          free(con);
          free(con2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int flags = 10;
          int _len_output0 = 100;
          struct ddb_output * output = (struct ddb_output *) malloc(_len_output0*sizeof(struct ddb_output));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
              int _len_output__i0__port0 = 1;
          output[_i0].port = (struct TYPE_6__ *) malloc(_len_output__i0__port0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_output__i0__port0; _j0++) {
            output[_i0].port->obr = ((-2 * (next_i()%2)) + 1) * next_i();
        output[_i0].port->gap = ((-2 * (next_i()%2)) + 1) * next_i();
        output[_i0].port->nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_output__i0__port_dev0 = 1;
          output[_i0].port->dev = (struct ddb *) malloc(_len_output__i0__port_dev0*sizeof(struct ddb));
          for(int _j0 = 0; _j0 < _len_output__i0__port_dev0; _j0++) {
              int _len_output__i0__port_dev_link0 = 1;
          output[_i0].port->dev->link = (struct TYPE_8__ *) malloc(_len_output__i0__port_dev_link0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_output__i0__port_dev_link0; _j0++) {
            output[_i0].port->dev->link->ids.regmapid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_output__i0__port_dev_link_info0 = 1;
          output[_i0].port->dev->link->info = (struct TYPE_5__ *) malloc(_len_output__i0__port_dev_link_info0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_output__i0__port_dev_link_info0; _j0++) {
            output[_i0].port->dev->link->info->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          int _len_con0 = 100;
          int * con = (int *) malloc(_len_con0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_con0; _i0++) {
            con[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_con20 = 100;
          int * con2 = (int *) malloc(_len_con20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_con20; _i0++) {
            con2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          calc_con(output,con,con2,flags);
          for(int _aux = 0; _aux < _len_output0; _aux++) {
          free(output[_aux].port);
          }
          free(output);
          free(con);
          free(con2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
