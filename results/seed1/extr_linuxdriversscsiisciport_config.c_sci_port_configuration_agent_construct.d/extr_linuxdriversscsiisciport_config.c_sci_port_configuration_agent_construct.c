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
struct sci_port_configuration_agent {int phy_configured_mask; int phy_ready_mask; int timer_pending; TYPE_1__* phy_valid_port_range; int /*<<< orphan*/ * link_down_handler; int /*<<< orphan*/ * link_up_handler; } ;
struct TYPE_2__ {scalar_t__ max_index; scalar_t__ min_index; } ;

/* Variables and functions */
 size_t SCI_MAX_PORTS ; 

void sci_port_configuration_agent_construct(
	struct sci_port_configuration_agent *port_agent)
{
	u32 index;

	port_agent->phy_configured_mask = 0x00;
	port_agent->phy_ready_mask = 0x00;

	port_agent->link_up_handler = NULL;
	port_agent->link_down_handler = NULL;

	port_agent->timer_pending = false;

	for (index = 0; index < SCI_MAX_PORTS; index++) {
		port_agent->phy_valid_port_range[index].min_index = 0;
		port_agent->phy_valid_port_range[index].max_index = 0;
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
          int _len_port_agent0 = 1;
          struct sci_port_configuration_agent * port_agent = (struct sci_port_configuration_agent *) malloc(_len_port_agent0*sizeof(struct sci_port_configuration_agent));
          for(int _i0 = 0; _i0 < _len_port_agent0; _i0++) {
            port_agent[_i0].phy_configured_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        port_agent[_i0].phy_ready_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        port_agent[_i0].timer_pending = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_port_agent__i0__phy_valid_port_range0 = 1;
          port_agent[_i0].phy_valid_port_range = (struct TYPE_2__ *) malloc(_len_port_agent__i0__phy_valid_port_range0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_port_agent__i0__phy_valid_port_range0; _j0++) {
            port_agent[_i0].phy_valid_port_range->max_index = ((-2 * (next_i()%2)) + 1) * next_i();
        port_agent[_i0].phy_valid_port_range->min_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_port_agent__i0__link_down_handler0 = 1;
          port_agent[_i0].link_down_handler = (int *) malloc(_len_port_agent__i0__link_down_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_port_agent__i0__link_down_handler0; _j0++) {
            port_agent[_i0].link_down_handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_port_agent__i0__link_up_handler0 = 1;
          port_agent[_i0].link_up_handler = (int *) malloc(_len_port_agent__i0__link_up_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_port_agent__i0__link_up_handler0; _j0++) {
            port_agent[_i0].link_up_handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sci_port_configuration_agent_construct(port_agent);
          for(int _aux = 0; _aux < _len_port_agent0; _aux++) {
          free(port_agent[_aux].phy_valid_port_range);
          }
          for(int _aux = 0; _aux < _len_port_agent0; _aux++) {
          free(port_agent[_aux].link_down_handler);
          }
          for(int _aux = 0; _aux < _len_port_agent0; _aux++) {
          free(port_agent[_aux].link_up_handler);
          }
          free(port_agent);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_port_agent0 = 65025;
          struct sci_port_configuration_agent * port_agent = (struct sci_port_configuration_agent *) malloc(_len_port_agent0*sizeof(struct sci_port_configuration_agent));
          for(int _i0 = 0; _i0 < _len_port_agent0; _i0++) {
            port_agent[_i0].phy_configured_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        port_agent[_i0].phy_ready_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        port_agent[_i0].timer_pending = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_port_agent__i0__phy_valid_port_range0 = 1;
          port_agent[_i0].phy_valid_port_range = (struct TYPE_2__ *) malloc(_len_port_agent__i0__phy_valid_port_range0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_port_agent__i0__phy_valid_port_range0; _j0++) {
            port_agent[_i0].phy_valid_port_range->max_index = ((-2 * (next_i()%2)) + 1) * next_i();
        port_agent[_i0].phy_valid_port_range->min_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_port_agent__i0__link_down_handler0 = 1;
          port_agent[_i0].link_down_handler = (int *) malloc(_len_port_agent__i0__link_down_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_port_agent__i0__link_down_handler0; _j0++) {
            port_agent[_i0].link_down_handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_port_agent__i0__link_up_handler0 = 1;
          port_agent[_i0].link_up_handler = (int *) malloc(_len_port_agent__i0__link_up_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_port_agent__i0__link_up_handler0; _j0++) {
            port_agent[_i0].link_up_handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sci_port_configuration_agent_construct(port_agent);
          for(int _aux = 0; _aux < _len_port_agent0; _aux++) {
          free(port_agent[_aux].phy_valid_port_range);
          }
          for(int _aux = 0; _aux < _len_port_agent0; _aux++) {
          free(port_agent[_aux].link_down_handler);
          }
          for(int _aux = 0; _aux < _len_port_agent0; _aux++) {
          free(port_agent[_aux].link_up_handler);
          }
          free(port_agent);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_port_agent0 = 100;
          struct sci_port_configuration_agent * port_agent = (struct sci_port_configuration_agent *) malloc(_len_port_agent0*sizeof(struct sci_port_configuration_agent));
          for(int _i0 = 0; _i0 < _len_port_agent0; _i0++) {
            port_agent[_i0].phy_configured_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        port_agent[_i0].phy_ready_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        port_agent[_i0].timer_pending = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_port_agent__i0__phy_valid_port_range0 = 1;
          port_agent[_i0].phy_valid_port_range = (struct TYPE_2__ *) malloc(_len_port_agent__i0__phy_valid_port_range0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_port_agent__i0__phy_valid_port_range0; _j0++) {
            port_agent[_i0].phy_valid_port_range->max_index = ((-2 * (next_i()%2)) + 1) * next_i();
        port_agent[_i0].phy_valid_port_range->min_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_port_agent__i0__link_down_handler0 = 1;
          port_agent[_i0].link_down_handler = (int *) malloc(_len_port_agent__i0__link_down_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_port_agent__i0__link_down_handler0; _j0++) {
            port_agent[_i0].link_down_handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_port_agent__i0__link_up_handler0 = 1;
          port_agent[_i0].link_up_handler = (int *) malloc(_len_port_agent__i0__link_up_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_port_agent__i0__link_up_handler0; _j0++) {
            port_agent[_i0].link_up_handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sci_port_configuration_agent_construct(port_agent);
          for(int _aux = 0; _aux < _len_port_agent0; _aux++) {
          free(port_agent[_aux].phy_valid_port_range);
          }
          for(int _aux = 0; _aux < _len_port_agent0; _aux++) {
          free(port_agent[_aux].link_down_handler);
          }
          for(int _aux = 0; _aux < _len_port_agent0; _aux++) {
          free(port_agent[_aux].link_up_handler);
          }
          free(port_agent);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
