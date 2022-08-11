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
typedef  size_t u32 ;
struct megasas_instance {struct fusion_context* ctrl_context; } ;
struct megasas_cmd_fusion {int dummy; } ;
struct fusion_context {struct megasas_cmd_fusion** cmd_list; } ;

/* Variables and functions */

inline struct megasas_cmd_fusion *megasas_get_cmd_fusion(struct megasas_instance
						  *instance, u32 blk_tag)
{
	struct fusion_context *fusion;

	fusion = instance->ctrl_context;
	return fusion->cmd_list[blk_tag];
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
          unsigned long blk_tag = 100;
          int _len_instance0 = 1;
          struct megasas_instance * instance = (struct megasas_instance *) malloc(_len_instance0*sizeof(struct megasas_instance));
          for(int _i0 = 0; _i0 < _len_instance0; _i0++) {
              int _len_instance__i0__ctrl_context0 = 1;
          instance[_i0].ctrl_context = (struct fusion_context *) malloc(_len_instance__i0__ctrl_context0*sizeof(struct fusion_context));
          for(int _j0 = 0; _j0 < _len_instance__i0__ctrl_context0; _j0++) {
              int _len_instance__i0__ctrl_context_cmd_list0 = 1;
          instance[_i0].ctrl_context->cmd_list = (struct megasas_cmd_fusion **) malloc(_len_instance__i0__ctrl_context_cmd_list0*sizeof(struct megasas_cmd_fusion *));
          for(int _j0 = 0; _j0 < _len_instance__i0__ctrl_context_cmd_list0; _j0++) {
            int _len_instance__i0__ctrl_context_cmd_list1 = 1;
            instance[_i0].ctrl_context->cmd_list[_j0] = (struct megasas_cmd_fusion *) malloc(_len_instance__i0__ctrl_context_cmd_list1*sizeof(struct megasas_cmd_fusion));
            for(int _j1 = 0; _j1 < _len_instance__i0__ctrl_context_cmd_list1; _j1++) {
              instance[_i0].ctrl_context->cmd_list[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct megasas_cmd_fusion * benchRet = megasas_get_cmd_fusion(instance,blk_tag);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_instance0; _aux++) {
          free(instance[_aux].ctrl_context);
          }
          free(instance);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long blk_tag = 255;
          int _len_instance0 = 65025;
          struct megasas_instance * instance = (struct megasas_instance *) malloc(_len_instance0*sizeof(struct megasas_instance));
          for(int _i0 = 0; _i0 < _len_instance0; _i0++) {
              int _len_instance__i0__ctrl_context0 = 1;
          instance[_i0].ctrl_context = (struct fusion_context *) malloc(_len_instance__i0__ctrl_context0*sizeof(struct fusion_context));
          for(int _j0 = 0; _j0 < _len_instance__i0__ctrl_context0; _j0++) {
              int _len_instance__i0__ctrl_context_cmd_list0 = 1;
          instance[_i0].ctrl_context->cmd_list = (struct megasas_cmd_fusion **) malloc(_len_instance__i0__ctrl_context_cmd_list0*sizeof(struct megasas_cmd_fusion *));
          for(int _j0 = 0; _j0 < _len_instance__i0__ctrl_context_cmd_list0; _j0++) {
            int _len_instance__i0__ctrl_context_cmd_list1 = 1;
            instance[_i0].ctrl_context->cmd_list[_j0] = (struct megasas_cmd_fusion *) malloc(_len_instance__i0__ctrl_context_cmd_list1*sizeof(struct megasas_cmd_fusion));
            for(int _j1 = 0; _j1 < _len_instance__i0__ctrl_context_cmd_list1; _j1++) {
              instance[_i0].ctrl_context->cmd_list[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct megasas_cmd_fusion * benchRet = megasas_get_cmd_fusion(instance,blk_tag);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_instance0; _aux++) {
          free(instance[_aux].ctrl_context);
          }
          free(instance);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long blk_tag = 10;
          int _len_instance0 = 100;
          struct megasas_instance * instance = (struct megasas_instance *) malloc(_len_instance0*sizeof(struct megasas_instance));
          for(int _i0 = 0; _i0 < _len_instance0; _i0++) {
              int _len_instance__i0__ctrl_context0 = 1;
          instance[_i0].ctrl_context = (struct fusion_context *) malloc(_len_instance__i0__ctrl_context0*sizeof(struct fusion_context));
          for(int _j0 = 0; _j0 < _len_instance__i0__ctrl_context0; _j0++) {
              int _len_instance__i0__ctrl_context_cmd_list0 = 1;
          instance[_i0].ctrl_context->cmd_list = (struct megasas_cmd_fusion **) malloc(_len_instance__i0__ctrl_context_cmd_list0*sizeof(struct megasas_cmd_fusion *));
          for(int _j0 = 0; _j0 < _len_instance__i0__ctrl_context_cmd_list0; _j0++) {
            int _len_instance__i0__ctrl_context_cmd_list1 = 1;
            instance[_i0].ctrl_context->cmd_list[_j0] = (struct megasas_cmd_fusion *) malloc(_len_instance__i0__ctrl_context_cmd_list1*sizeof(struct megasas_cmd_fusion));
            for(int _j1 = 0; _j1 < _len_instance__i0__ctrl_context_cmd_list1; _j1++) {
              instance[_i0].ctrl_context->cmd_list[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct megasas_cmd_fusion * benchRet = megasas_get_cmd_fusion(instance,blk_tag);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_instance0; _aux++) {
          free(instance[_aux].ctrl_context);
          }
          free(instance);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
