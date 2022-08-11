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
typedef  int /*<<< orphan*/  uint8_t ;
struct attack_target {int dummy; } ;
struct attack_option {int dummy; } ;

/* Variables and functions */

void attack_app_proxy(uint8_t targs_len, struct attack_target *targs, uint8_t opts_len, struct attack_option *opts)
{

}


// ------------------------------------------------------------------------- //




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
          int targs_len = 100;
          int opts_len = 100;
          int _len_targs0 = 1;
          struct attack_target * targs = (struct attack_target *) malloc(_len_targs0*sizeof(struct attack_target));
          for(int _i0 = 0; _i0 < _len_targs0; _i0++) {
            targs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_opts0 = 1;
          struct attack_option * opts = (struct attack_option *) malloc(_len_opts0*sizeof(struct attack_option));
          for(int _i0 = 0; _i0 < _len_opts0; _i0++) {
            opts[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          attack_app_proxy(targs_len,targs,opts_len,opts);
          free(targs);
          free(opts);
        
        break;
    }
    // big-arr
    case 1:
    {
          int targs_len = 255;
          int opts_len = 255;
          int _len_targs0 = 65025;
          struct attack_target * targs = (struct attack_target *) malloc(_len_targs0*sizeof(struct attack_target));
          for(int _i0 = 0; _i0 < _len_targs0; _i0++) {
            targs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_opts0 = 65025;
          struct attack_option * opts = (struct attack_option *) malloc(_len_opts0*sizeof(struct attack_option));
          for(int _i0 = 0; _i0 < _len_opts0; _i0++) {
            opts[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          attack_app_proxy(targs_len,targs,opts_len,opts);
          free(targs);
          free(opts);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int targs_len = 10;
          int opts_len = 10;
          int _len_targs0 = 100;
          struct attack_target * targs = (struct attack_target *) malloc(_len_targs0*sizeof(struct attack_target));
          for(int _i0 = 0; _i0 < _len_targs0; _i0++) {
            targs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_opts0 = 100;
          struct attack_option * opts = (struct attack_option *) malloc(_len_opts0*sizeof(struct attack_option));
          for(int _i0 = 0; _i0 < _len_opts0; _i0++) {
            opts[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          attack_app_proxy(targs_len,targs,opts_len,opts);
          free(targs);
          free(opts);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
