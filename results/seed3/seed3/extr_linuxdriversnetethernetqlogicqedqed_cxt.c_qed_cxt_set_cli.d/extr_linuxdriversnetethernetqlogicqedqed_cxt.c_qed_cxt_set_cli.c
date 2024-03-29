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
struct TYPE_4__ {scalar_t__ val; } ;
struct TYPE_3__ {scalar_t__ val; } ;
struct qed_ilt_client_cfg {int active; TYPE_2__ last; TYPE_1__ first; } ;

/* Variables and functions */

__attribute__((used)) static struct qed_ilt_client_cfg *qed_cxt_set_cli(struct qed_ilt_client_cfg
						  *p_cli)
{
	p_cli->active = false;
	p_cli->first.val = 0;
	p_cli->last.val = 0;
	return p_cli;
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
          int _len_p_cli0 = 1;
          struct qed_ilt_client_cfg * p_cli = (struct qed_ilt_client_cfg *) malloc(_len_p_cli0*sizeof(struct qed_ilt_client_cfg));
          for(int _i0 = 0; _i0 < _len_p_cli0; _i0++) {
            p_cli[_i0].active = ((-2 * (next_i()%2)) + 1) * next_i();
        p_cli[_i0].last.val = ((-2 * (next_i()%2)) + 1) * next_i();
        p_cli[_i0].first.val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct qed_ilt_client_cfg * benchRet = qed_cxt_set_cli(p_cli);
          printf("%d\n", (*benchRet).active);
          free(p_cli);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_p_cli0 = 65025;
          struct qed_ilt_client_cfg * p_cli = (struct qed_ilt_client_cfg *) malloc(_len_p_cli0*sizeof(struct qed_ilt_client_cfg));
          for(int _i0 = 0; _i0 < _len_p_cli0; _i0++) {
            p_cli[_i0].active = ((-2 * (next_i()%2)) + 1) * next_i();
        p_cli[_i0].last.val = ((-2 * (next_i()%2)) + 1) * next_i();
        p_cli[_i0].first.val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct qed_ilt_client_cfg * benchRet = qed_cxt_set_cli(p_cli);
          printf("%d\n", (*benchRet).active);
          free(p_cli);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_p_cli0 = 100;
          struct qed_ilt_client_cfg * p_cli = (struct qed_ilt_client_cfg *) malloc(_len_p_cli0*sizeof(struct qed_ilt_client_cfg));
          for(int _i0 = 0; _i0 < _len_p_cli0; _i0++) {
            p_cli[_i0].active = ((-2 * (next_i()%2)) + 1) * next_i();
        p_cli[_i0].last.val = ((-2 * (next_i()%2)) + 1) * next_i();
        p_cli[_i0].first.val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct qed_ilt_client_cfg * benchRet = qed_cxt_set_cli(p_cli);
          printf("%d\n", (*benchRet).active);
          free(p_cli);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
