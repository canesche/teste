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
struct pcs_conf_vals {int param; unsigned int val; unsigned int enable; unsigned int disable; unsigned int mask; } ;
typedef  enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;

/* Variables and functions */

__attribute__((used)) static void add_config(struct pcs_conf_vals **conf, enum pin_config_param param,
		       unsigned value, unsigned enable, unsigned disable,
		       unsigned mask)
{
	(*conf)->param = param;
	(*conf)->val = value;
	(*conf)->enable = enable;
	(*conf)->disable = disable;
	(*conf)->mask = mask;
	(*conf)++;
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
          enum pin_config_param param = 0;
          unsigned int value = 100;
          unsigned int enable = 100;
          unsigned int disable = 100;
          unsigned int mask = 100;
          int _len_conf0 = 1;
          struct pcs_conf_vals ** conf = (struct pcs_conf_vals **) malloc(_len_conf0*sizeof(struct pcs_conf_vals *));
          for(int _i0 = 0; _i0 < _len_conf0; _i0++) {
            int _len_conf1 = 1;
            conf[_i0] = (struct pcs_conf_vals *) malloc(_len_conf1*sizeof(struct pcs_conf_vals));
            for(int _i1 = 0; _i1 < _len_conf1; _i1++) {
              conf[_i0][_i1].param = ((-2 * (next_i()%2)) + 1) * next_i();
        conf[_i0][_i1].val = ((-2 * (next_i()%2)) + 1) * next_i();
        conf[_i0][_i1].enable = ((-2 * (next_i()%2)) + 1) * next_i();
        conf[_i0][_i1].disable = ((-2 * (next_i()%2)) + 1) * next_i();
        conf[_i0][_i1].mask = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          add_config(conf,param,value,enable,disable,mask);
          for(int i1 = 0; i1 < _len_conf0; i1++) {
            int _len_conf1 = 1;
              free(conf[i1]);
          }
          free(conf);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum pin_config_param param = 0;
          unsigned int value = 255;
          unsigned int enable = 255;
          unsigned int disable = 255;
          unsigned int mask = 255;
          int _len_conf0 = 65025;
          struct pcs_conf_vals ** conf = (struct pcs_conf_vals **) malloc(_len_conf0*sizeof(struct pcs_conf_vals *));
          for(int _i0 = 0; _i0 < _len_conf0; _i0++) {
            int _len_conf1 = 1;
            conf[_i0] = (struct pcs_conf_vals *) malloc(_len_conf1*sizeof(struct pcs_conf_vals));
            for(int _i1 = 0; _i1 < _len_conf1; _i1++) {
              conf[_i0][_i1].param = ((-2 * (next_i()%2)) + 1) * next_i();
        conf[_i0][_i1].val = ((-2 * (next_i()%2)) + 1) * next_i();
        conf[_i0][_i1].enable = ((-2 * (next_i()%2)) + 1) * next_i();
        conf[_i0][_i1].disable = ((-2 * (next_i()%2)) + 1) * next_i();
        conf[_i0][_i1].mask = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          add_config(conf,param,value,enable,disable,mask);
          for(int i1 = 0; i1 < _len_conf0; i1++) {
            int _len_conf1 = 1;
              free(conf[i1]);
          }
          free(conf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum pin_config_param param = 0;
          unsigned int value = 10;
          unsigned int enable = 10;
          unsigned int disable = 10;
          unsigned int mask = 10;
          int _len_conf0 = 100;
          struct pcs_conf_vals ** conf = (struct pcs_conf_vals **) malloc(_len_conf0*sizeof(struct pcs_conf_vals *));
          for(int _i0 = 0; _i0 < _len_conf0; _i0++) {
            int _len_conf1 = 1;
            conf[_i0] = (struct pcs_conf_vals *) malloc(_len_conf1*sizeof(struct pcs_conf_vals));
            for(int _i1 = 0; _i1 < _len_conf1; _i1++) {
              conf[_i0][_i1].param = ((-2 * (next_i()%2)) + 1) * next_i();
        conf[_i0][_i1].val = ((-2 * (next_i()%2)) + 1) * next_i();
        conf[_i0][_i1].enable = ((-2 * (next_i()%2)) + 1) * next_i();
        conf[_i0][_i1].disable = ((-2 * (next_i()%2)) + 1) * next_i();
        conf[_i0][_i1].mask = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          add_config(conf,param,value,enable,disable,mask);
          for(int i1 = 0; i1 < _len_conf0; i1++) {
            int _len_conf1 = 1;
              free(conf[i1]);
          }
          free(conf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
