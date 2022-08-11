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
struct tegra_gpio_port {unsigned int pins; } ;
struct tegra_gpio {TYPE_1__* soc; } ;
struct TYPE_2__ {unsigned int num_ports; struct tegra_gpio_port* ports; } ;

/* Variables and functions */

__attribute__((used)) static const struct tegra_gpio_port *
tegra186_gpio_get_port(struct tegra_gpio *gpio, unsigned int *pin)
{
	unsigned int start = 0, i;

	for (i = 0; i < gpio->soc->num_ports; i++) {
		const struct tegra_gpio_port *port = &gpio->soc->ports[i];

		if (*pin >= start && *pin < start + port->pins) {
			*pin -= start;
			return port;
		}

		start += port->pins;
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
          int _len_gpio0 = 1;
          struct tegra_gpio * gpio = (struct tegra_gpio *) malloc(_len_gpio0*sizeof(struct tegra_gpio));
          for(int _i0 = 0; _i0 < _len_gpio0; _i0++) {
              int _len_gpio__i0__soc0 = 1;
          gpio[_i0].soc = (struct TYPE_2__ *) malloc(_len_gpio__i0__soc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_gpio__i0__soc0; _j0++) {
            gpio[_i0].soc->num_ports = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gpio__i0__soc_ports0 = 1;
          gpio[_i0].soc->ports = (struct tegra_gpio_port *) malloc(_len_gpio__i0__soc_ports0*sizeof(struct tegra_gpio_port));
          for(int _j0 = 0; _j0 < _len_gpio__i0__soc_ports0; _j0++) {
            gpio[_i0].soc->ports->pins = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_pin0 = 1;
          unsigned int * pin = (unsigned int *) malloc(_len_pin0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_pin0; _i0++) {
            pin[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const struct tegra_gpio_port * benchRet = tegra186_gpio_get_port(gpio,pin);
          for(int _aux = 0; _aux < _len_gpio0; _aux++) {
          free(gpio[_aux].soc);
          }
          free(gpio);
          free(pin);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_gpio0 = 65025;
          struct tegra_gpio * gpio = (struct tegra_gpio *) malloc(_len_gpio0*sizeof(struct tegra_gpio));
          for(int _i0 = 0; _i0 < _len_gpio0; _i0++) {
              int _len_gpio__i0__soc0 = 1;
          gpio[_i0].soc = (struct TYPE_2__ *) malloc(_len_gpio__i0__soc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_gpio__i0__soc0; _j0++) {
            gpio[_i0].soc->num_ports = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gpio__i0__soc_ports0 = 1;
          gpio[_i0].soc->ports = (struct tegra_gpio_port *) malloc(_len_gpio__i0__soc_ports0*sizeof(struct tegra_gpio_port));
          for(int _j0 = 0; _j0 < _len_gpio__i0__soc_ports0; _j0++) {
            gpio[_i0].soc->ports->pins = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_pin0 = 65025;
          unsigned int * pin = (unsigned int *) malloc(_len_pin0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_pin0; _i0++) {
            pin[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const struct tegra_gpio_port * benchRet = tegra186_gpio_get_port(gpio,pin);
          for(int _aux = 0; _aux < _len_gpio0; _aux++) {
          free(gpio[_aux].soc);
          }
          free(gpio);
          free(pin);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_gpio0 = 100;
          struct tegra_gpio * gpio = (struct tegra_gpio *) malloc(_len_gpio0*sizeof(struct tegra_gpio));
          for(int _i0 = 0; _i0 < _len_gpio0; _i0++) {
              int _len_gpio__i0__soc0 = 1;
          gpio[_i0].soc = (struct TYPE_2__ *) malloc(_len_gpio__i0__soc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_gpio__i0__soc0; _j0++) {
            gpio[_i0].soc->num_ports = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gpio__i0__soc_ports0 = 1;
          gpio[_i0].soc->ports = (struct tegra_gpio_port *) malloc(_len_gpio__i0__soc_ports0*sizeof(struct tegra_gpio_port));
          for(int _j0 = 0; _j0 < _len_gpio__i0__soc_ports0; _j0++) {
            gpio[_i0].soc->ports->pins = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_pin0 = 100;
          unsigned int * pin = (unsigned int *) malloc(_len_pin0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_pin0; _i0++) {
            pin[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const struct tegra_gpio_port * benchRet = tegra186_gpio_get_port(gpio,pin);
          for(int _aux = 0; _aux < _len_gpio0; _aux++) {
          free(gpio[_aux].soc);
          }
          free(gpio);
          free(pin);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
