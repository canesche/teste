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
typedef  int /*<<< orphan*/  u32 ;
struct mwifiex_private {int dummy; } ;
struct cmd_ctrl_node {int wait_q_enabled; int cmd_wait_q_woken; int* condition; int /*<<< orphan*/  skb; int /*<<< orphan*/  cmd_skb; void* data_buf; int /*<<< orphan*/  cmd_oid; struct mwifiex_private* priv; } ;

/* Variables and functions */

__attribute__((used)) static void
mwifiex_init_cmd_node(struct mwifiex_private *priv,
		      struct cmd_ctrl_node *cmd_node,
		      u32 cmd_oid, void *data_buf, bool sync)
{
	cmd_node->priv = priv;
	cmd_node->cmd_oid = cmd_oid;
	if (sync) {
		cmd_node->wait_q_enabled = true;
		cmd_node->cmd_wait_q_woken = false;
		cmd_node->condition = &cmd_node->cmd_wait_q_woken;
	}
	cmd_node->data_buf = data_buf;
	cmd_node->cmd_skb = cmd_node->skb;
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
          int cmd_oid = 100;
          int sync = 100;
          int _len_priv0 = 1;
          struct mwifiex_private * priv = (struct mwifiex_private *) malloc(_len_priv0*sizeof(struct mwifiex_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd_node0 = 1;
          struct cmd_ctrl_node * cmd_node = (struct cmd_ctrl_node *) malloc(_len_cmd_node0*sizeof(struct cmd_ctrl_node));
          for(int _i0 = 0; _i0 < _len_cmd_node0; _i0++) {
            cmd_node[_i0].wait_q_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_node[_i0].cmd_wait_q_woken = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd_node__i0__condition0 = 1;
          cmd_node[_i0].condition = (int *) malloc(_len_cmd_node__i0__condition0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cmd_node__i0__condition0; _j0++) {
            cmd_node[_i0].condition[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cmd_node[_i0].skb = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_node[_i0].cmd_skb = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_node[_i0].cmd_oid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd_node__i0__priv0 = 1;
          cmd_node[_i0].priv = (struct mwifiex_private *) malloc(_len_cmd_node__i0__priv0*sizeof(struct mwifiex_private));
          for(int _j0 = 0; _j0 < _len_cmd_node__i0__priv0; _j0++) {
            cmd_node[_i0].priv->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * data_buf;
          mwifiex_init_cmd_node(priv,cmd_node,cmd_oid,data_buf,sync);
          free(priv);
          for(int _aux = 0; _aux < _len_cmd_node0; _aux++) {
          free(cmd_node[_aux].condition);
          }
          for(int _aux = 0; _aux < _len_cmd_node0; _aux++) {
          free(cmd_node[_aux].priv);
          }
          free(cmd_node);
        
        break;
    }
    // big-arr
    case 1:
    {
          int cmd_oid = 255;
          int sync = 255;
          int _len_priv0 = 65025;
          struct mwifiex_private * priv = (struct mwifiex_private *) malloc(_len_priv0*sizeof(struct mwifiex_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd_node0 = 65025;
          struct cmd_ctrl_node * cmd_node = (struct cmd_ctrl_node *) malloc(_len_cmd_node0*sizeof(struct cmd_ctrl_node));
          for(int _i0 = 0; _i0 < _len_cmd_node0; _i0++) {
            cmd_node[_i0].wait_q_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_node[_i0].cmd_wait_q_woken = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd_node__i0__condition0 = 1;
          cmd_node[_i0].condition = (int *) malloc(_len_cmd_node__i0__condition0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cmd_node__i0__condition0; _j0++) {
            cmd_node[_i0].condition[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cmd_node[_i0].skb = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_node[_i0].cmd_skb = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_node[_i0].cmd_oid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd_node__i0__priv0 = 1;
          cmd_node[_i0].priv = (struct mwifiex_private *) malloc(_len_cmd_node__i0__priv0*sizeof(struct mwifiex_private));
          for(int _j0 = 0; _j0 < _len_cmd_node__i0__priv0; _j0++) {
            cmd_node[_i0].priv->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * data_buf;
          mwifiex_init_cmd_node(priv,cmd_node,cmd_oid,data_buf,sync);
          free(priv);
          for(int _aux = 0; _aux < _len_cmd_node0; _aux++) {
          free(cmd_node[_aux].condition);
          }
          for(int _aux = 0; _aux < _len_cmd_node0; _aux++) {
          free(cmd_node[_aux].priv);
          }
          free(cmd_node);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cmd_oid = 10;
          int sync = 10;
          int _len_priv0 = 100;
          struct mwifiex_private * priv = (struct mwifiex_private *) malloc(_len_priv0*sizeof(struct mwifiex_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd_node0 = 100;
          struct cmd_ctrl_node * cmd_node = (struct cmd_ctrl_node *) malloc(_len_cmd_node0*sizeof(struct cmd_ctrl_node));
          for(int _i0 = 0; _i0 < _len_cmd_node0; _i0++) {
            cmd_node[_i0].wait_q_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_node[_i0].cmd_wait_q_woken = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd_node__i0__condition0 = 1;
          cmd_node[_i0].condition = (int *) malloc(_len_cmd_node__i0__condition0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cmd_node__i0__condition0; _j0++) {
            cmd_node[_i0].condition[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cmd_node[_i0].skb = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_node[_i0].cmd_skb = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_node[_i0].cmd_oid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd_node__i0__priv0 = 1;
          cmd_node[_i0].priv = (struct mwifiex_private *) malloc(_len_cmd_node__i0__priv0*sizeof(struct mwifiex_private));
          for(int _j0 = 0; _j0 < _len_cmd_node__i0__priv0; _j0++) {
            cmd_node[_i0].priv->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * data_buf;
          mwifiex_init_cmd_node(priv,cmd_node,cmd_oid,data_buf,sync);
          free(priv);
          for(int _aux = 0; _aux < _len_cmd_node0; _aux++) {
          free(cmd_node[_aux].condition);
          }
          for(int _aux = 0; _aux < _len_cmd_node0; _aux++) {
          free(cmd_node[_aux].priv);
          }
          free(cmd_node);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
