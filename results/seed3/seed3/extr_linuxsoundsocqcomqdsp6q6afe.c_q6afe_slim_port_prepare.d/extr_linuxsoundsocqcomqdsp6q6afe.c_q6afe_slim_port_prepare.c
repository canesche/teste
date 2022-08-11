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
struct TYPE_2__ {int /*<<< orphan*/ * shared_ch_mapping; int /*<<< orphan*/  data_format; int /*<<< orphan*/  num_channels; int /*<<< orphan*/  bit_width; int /*<<< orphan*/  sample_rate; int /*<<< orphan*/  sb_cfg_minor_version; } ;
union afe_port_config {TYPE_1__ slim_cfg; } ;
struct q6afe_slim_cfg {int /*<<< orphan*/ * ch_mapping; int /*<<< orphan*/  data_format; int /*<<< orphan*/  num_channels; int /*<<< orphan*/  bit_width; int /*<<< orphan*/  sample_rate; } ;
struct q6afe_port {union afe_port_config port_cfg; } ;

/* Variables and functions */
 int /*<<< orphan*/  AFE_API_VERSION_SLIMBUS_CONFIG ; 

void q6afe_slim_port_prepare(struct q6afe_port *port,
			     struct q6afe_slim_cfg *cfg)
{
	union afe_port_config *pcfg = &port->port_cfg;

	pcfg->slim_cfg.sb_cfg_minor_version = AFE_API_VERSION_SLIMBUS_CONFIG;
	pcfg->slim_cfg.sample_rate = cfg->sample_rate;
	pcfg->slim_cfg.bit_width = cfg->bit_width;
	pcfg->slim_cfg.num_channels = cfg->num_channels;
	pcfg->slim_cfg.data_format = cfg->data_format;
	pcfg->slim_cfg.shared_ch_mapping[0] = cfg->ch_mapping[0];
	pcfg->slim_cfg.shared_ch_mapping[1] = cfg->ch_mapping[1];
	pcfg->slim_cfg.shared_ch_mapping[2] = cfg->ch_mapping[2];
	pcfg->slim_cfg.shared_ch_mapping[3] = cfg->ch_mapping[3];

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
          struct q6afe_port * port = (struct q6afe_port *) malloc(_len_port0*sizeof(struct q6afe_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].port_cfg = 0;
          }
          int _len_cfg0 = 1;
          struct q6afe_slim_cfg * cfg = (struct q6afe_slim_cfg *) malloc(_len_cfg0*sizeof(struct q6afe_slim_cfg));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
              int _len_cfg__i0__ch_mapping0 = 1;
          cfg[_i0].ch_mapping = (int *) malloc(_len_cfg__i0__ch_mapping0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cfg__i0__ch_mapping0; _j0++) {
            cfg[_i0].ch_mapping[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cfg[_i0].data_format = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].num_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].bit_width = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          q6afe_slim_port_prepare(port,cfg);
          free(port);
          for(int _aux = 0; _aux < _len_cfg0; _aux++) {
          free(cfg[_aux].ch_mapping);
          }
          free(cfg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_port0 = 65025;
          struct q6afe_port * port = (struct q6afe_port *) malloc(_len_port0*sizeof(struct q6afe_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].port_cfg = 0;
          }
          int _len_cfg0 = 65025;
          struct q6afe_slim_cfg * cfg = (struct q6afe_slim_cfg *) malloc(_len_cfg0*sizeof(struct q6afe_slim_cfg));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
              int _len_cfg__i0__ch_mapping0 = 1;
          cfg[_i0].ch_mapping = (int *) malloc(_len_cfg__i0__ch_mapping0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cfg__i0__ch_mapping0; _j0++) {
            cfg[_i0].ch_mapping[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cfg[_i0].data_format = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].num_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].bit_width = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          q6afe_slim_port_prepare(port,cfg);
          free(port);
          for(int _aux = 0; _aux < _len_cfg0; _aux++) {
          free(cfg[_aux].ch_mapping);
          }
          free(cfg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_port0 = 100;
          struct q6afe_port * port = (struct q6afe_port *) malloc(_len_port0*sizeof(struct q6afe_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].port_cfg = 0;
          }
          int _len_cfg0 = 100;
          struct q6afe_slim_cfg * cfg = (struct q6afe_slim_cfg *) malloc(_len_cfg0*sizeof(struct q6afe_slim_cfg));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
              int _len_cfg__i0__ch_mapping0 = 1;
          cfg[_i0].ch_mapping = (int *) malloc(_len_cfg__i0__ch_mapping0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cfg__i0__ch_mapping0; _j0++) {
            cfg[_i0].ch_mapping[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cfg[_i0].data_format = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].num_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].bit_width = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          q6afe_slim_port_prepare(port,cfg);
          free(port);
          for(int _aux = 0; _aux < _len_cfg0; _aux++) {
          free(cfg[_aux].ch_mapping);
          }
          free(cfg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
