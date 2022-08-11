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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct iwl_trans {TYPE_2__* cfg; } ;
struct TYPE_4__ {TYPE_1__* base_params; } ;
struct TYPE_3__ {int max_tfd_queue_size; } ;

/* Variables and functions */

__attribute__((used)) static inline int iwl_queue_inc_wrap(struct iwl_trans *trans, int index)
{
	return ++index & (trans->cfg->base_params->max_tfd_queue_size - 1);
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
          int index = 100;
          int _len_trans0 = 1;
          struct iwl_trans * trans = (struct iwl_trans *) malloc(_len_trans0*sizeof(struct iwl_trans));
          for(int _i0 = 0; _i0 < _len_trans0; _i0++) {
              int _len_trans__i0__cfg0 = 1;
          trans[_i0].cfg = (struct TYPE_4__ *) malloc(_len_trans__i0__cfg0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_trans__i0__cfg0; _j0++) {
              int _len_trans__i0__cfg_base_params0 = 1;
          trans[_i0].cfg->base_params = (struct TYPE_3__ *) malloc(_len_trans__i0__cfg_base_params0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_trans__i0__cfg_base_params0; _j0++) {
            trans[_i0].cfg->base_params->max_tfd_queue_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = iwl_queue_inc_wrap(trans,index);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_trans0; _aux++) {
          free(trans[_aux].cfg);
          }
          free(trans);
        
        break;
    }
    // big-arr
    case 1:
    {
          int index = 255;
          int _len_trans0 = 65025;
          struct iwl_trans * trans = (struct iwl_trans *) malloc(_len_trans0*sizeof(struct iwl_trans));
          for(int _i0 = 0; _i0 < _len_trans0; _i0++) {
              int _len_trans__i0__cfg0 = 1;
          trans[_i0].cfg = (struct TYPE_4__ *) malloc(_len_trans__i0__cfg0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_trans__i0__cfg0; _j0++) {
              int _len_trans__i0__cfg_base_params0 = 1;
          trans[_i0].cfg->base_params = (struct TYPE_3__ *) malloc(_len_trans__i0__cfg_base_params0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_trans__i0__cfg_base_params0; _j0++) {
            trans[_i0].cfg->base_params->max_tfd_queue_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = iwl_queue_inc_wrap(trans,index);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_trans0; _aux++) {
          free(trans[_aux].cfg);
          }
          free(trans);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int index = 10;
          int _len_trans0 = 100;
          struct iwl_trans * trans = (struct iwl_trans *) malloc(_len_trans0*sizeof(struct iwl_trans));
          for(int _i0 = 0; _i0 < _len_trans0; _i0++) {
              int _len_trans__i0__cfg0 = 1;
          trans[_i0].cfg = (struct TYPE_4__ *) malloc(_len_trans__i0__cfg0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_trans__i0__cfg0; _j0++) {
              int _len_trans__i0__cfg_base_params0 = 1;
          trans[_i0].cfg->base_params = (struct TYPE_3__ *) malloc(_len_trans__i0__cfg_base_params0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_trans__i0__cfg_base_params0; _j0++) {
            trans[_i0].cfg->base_params->max_tfd_queue_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = iwl_queue_inc_wrap(trans,index);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_trans0; _aux++) {
          free(trans[_aux].cfg);
          }
          free(trans);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
