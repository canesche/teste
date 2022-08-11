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
struct siu_port {int /*<<< orphan*/  trdat; int /*<<< orphan*/  stfifo; } ;
struct siu_firmware {size_t* yram0; TYPE_1__* spbpar; } ;
struct siu_info {int /*<<< orphan*/  port_id; struct siu_firmware fw; } ;
struct TYPE_2__ {int ab1a; int ab0a; size_t event; int /*<<< orphan*/  trdat; int /*<<< orphan*/  stfifo; } ;

/* Variables and functions */
 struct siu_info* siu_i2s_data ; 

__attribute__((used)) static void siu_dai_spbBselect(struct siu_port *port_info)
{
	struct siu_info *info = siu_i2s_data;
	struct siu_firmware *fw = &info->fw;
	u32 *ydef = fw->yram0;
	u32 idx;

	/* path B use */
	if (!info->port_id)
		idx = 7;		/* portA */
	else
		idx = 8;		/* portB */

	ydef[5] = (fw->spbpar[idx].ab1a << 16) |
		(fw->spbpar[idx].ab0a << 8) | 1;
	ydef[6] = fw->spbpar[idx].event;
	port_info->stfifo |= fw->spbpar[idx].stfifo;
	port_info->trdat |= fw->spbpar[idx].trdat;
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
          int _len_port_info0 = 1;
          struct siu_port * port_info = (struct siu_port *) malloc(_len_port_info0*sizeof(struct siu_port));
          for(int _i0 = 0; _i0 < _len_port_info0; _i0++) {
            port_info[_i0].trdat = ((-2 * (next_i()%2)) + 1) * next_i();
        port_info[_i0].stfifo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          siu_dai_spbBselect(port_info);
          free(port_info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_port_info0 = 65025;
          struct siu_port * port_info = (struct siu_port *) malloc(_len_port_info0*sizeof(struct siu_port));
          for(int _i0 = 0; _i0 < _len_port_info0; _i0++) {
            port_info[_i0].trdat = ((-2 * (next_i()%2)) + 1) * next_i();
        port_info[_i0].stfifo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          siu_dai_spbBselect(port_info);
          free(port_info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_port_info0 = 100;
          struct siu_port * port_info = (struct siu_port *) malloc(_len_port_info0*sizeof(struct siu_port));
          for(int _i0 = 0; _i0 < _len_port_info0; _i0++) {
            port_info[_i0].trdat = ((-2 * (next_i()%2)) + 1) * next_i();
        port_info[_i0].stfifo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          siu_dai_spbBselect(port_info);
          free(port_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
