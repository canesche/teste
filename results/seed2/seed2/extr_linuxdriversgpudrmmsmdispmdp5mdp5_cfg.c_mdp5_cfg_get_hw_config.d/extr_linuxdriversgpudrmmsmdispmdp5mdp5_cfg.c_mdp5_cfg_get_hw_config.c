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
struct mdp5_cfg_hw {int dummy; } ;
struct TYPE_2__ {struct mdp5_cfg_hw const* hw; } ;
struct mdp5_cfg_handler {TYPE_1__ config; } ;

/* Variables and functions */

const struct mdp5_cfg_hw *mdp5_cfg_get_hw_config(struct mdp5_cfg_handler *cfg_handler)
{
	return cfg_handler->config.hw;
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
          int _len_cfg_handler0 = 1;
          struct mdp5_cfg_handler * cfg_handler = (struct mdp5_cfg_handler *) malloc(_len_cfg_handler0*sizeof(struct mdp5_cfg_handler));
          for(int _i0 = 0; _i0 < _len_cfg_handler0; _i0++) {
              int _len_cfg_handler__i0__config_hw0 = 1;
          cfg_handler[_i0].config.hw = (const struct mdp5_cfg_hw *) malloc(_len_cfg_handler__i0__config_hw0*sizeof(const struct mdp5_cfg_hw));
          for(int _j0 = 0; _j0 < _len_cfg_handler__i0__config_hw0; _j0++) {
              }
          }
          const struct mdp5_cfg_hw * benchRet = mdp5_cfg_get_hw_config(cfg_handler);
          free(cfg_handler);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cfg_handler0 = 65025;
          struct mdp5_cfg_handler * cfg_handler = (struct mdp5_cfg_handler *) malloc(_len_cfg_handler0*sizeof(struct mdp5_cfg_handler));
          for(int _i0 = 0; _i0 < _len_cfg_handler0; _i0++) {
              int _len_cfg_handler__i0__config_hw0 = 1;
          cfg_handler[_i0].config.hw = (const struct mdp5_cfg_hw *) malloc(_len_cfg_handler__i0__config_hw0*sizeof(const struct mdp5_cfg_hw));
          for(int _j0 = 0; _j0 < _len_cfg_handler__i0__config_hw0; _j0++) {
              }
          }
          const struct mdp5_cfg_hw * benchRet = mdp5_cfg_get_hw_config(cfg_handler);
          free(cfg_handler);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cfg_handler0 = 100;
          struct mdp5_cfg_handler * cfg_handler = (struct mdp5_cfg_handler *) malloc(_len_cfg_handler0*sizeof(struct mdp5_cfg_handler));
          for(int _i0 = 0; _i0 < _len_cfg_handler0; _i0++) {
              int _len_cfg_handler__i0__config_hw0 = 1;
          cfg_handler[_i0].config.hw = (const struct mdp5_cfg_hw *) malloc(_len_cfg_handler__i0__config_hw0*sizeof(const struct mdp5_cfg_hw));
          for(int _j0 = 0; _j0 < _len_cfg_handler__i0__config_hw0; _j0++) {
              }
          }
          const struct mdp5_cfg_hw * benchRet = mdp5_cfg_get_hw_config(cfg_handler);
          free(cfg_handler);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
