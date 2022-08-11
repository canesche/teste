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
typedef  struct TYPE_16__   TYPE_7__ ;
typedef  struct TYPE_15__   TYPE_6__ ;
typedef  struct TYPE_14__   TYPE_5__ ;
typedef  struct TYPE_13__   TYPE_4__ ;
typedef  struct TYPE_12__   TYPE_3__ ;
typedef  struct TYPE_11__   TYPE_2__ ;
typedef  struct TYPE_10__   TYPE_1__ ;

/* Type definitions */
struct TYPE_13__ {int definition; int use_chain; int /*<<< orphan*/ * phi_use_chain; } ;
typedef  TYPE_4__ zend_ssa_var ;
struct TYPE_14__ {int result_def; } ;
typedef  TYPE_5__ zend_ssa_op ;
struct TYPE_12__ {int /*<<< orphan*/  var; } ;
struct TYPE_15__ {int opcode; TYPE_3__ result; int /*<<< orphan*/  result_type; } ;
typedef  TYPE_6__ zend_op ;
typedef  int zend_bool ;
struct TYPE_16__ {TYPE_2__* op_array; TYPE_1__* ssa; } ;
typedef  TYPE_7__ context ;
struct TYPE_11__ {TYPE_6__* opcodes; } ;
struct TYPE_10__ {TYPE_5__* ops; TYPE_4__* vars; } ;

/* Variables and functions */
 int /*<<< orphan*/  IS_UNUSED ; 
#define  ZEND_ASSERT_CHECK 160 
#define  ZEND_ASSIGN 159 
#define  ZEND_ASSIGN_ADD 158 
#define  ZEND_ASSIGN_BW_AND 157 
#define  ZEND_ASSIGN_BW_OR 156 
#define  ZEND_ASSIGN_BW_XOR 155 
#define  ZEND_ASSIGN_CONCAT 154 
#define  ZEND_ASSIGN_DIM 153 
#define  ZEND_ASSIGN_DIV 152 
#define  ZEND_ASSIGN_MOD 151 
#define  ZEND_ASSIGN_MUL 150 
#define  ZEND_ASSIGN_OBJ 149 
#define  ZEND_ASSIGN_OBJ_REF 148 
#define  ZEND_ASSIGN_POW 147 
#define  ZEND_ASSIGN_REF 146 
#define  ZEND_ASSIGN_SL 145 
#define  ZEND_ASSIGN_SR 144 
#define  ZEND_ASSIGN_STATIC_PROP 143 
#define  ZEND_ASSIGN_STATIC_PROP_REF 142 
#define  ZEND_ASSIGN_SUB 141 
#define  ZEND_DO_FCALL 140 
#define  ZEND_DO_FCALL_BY_NAME 139 
#define  ZEND_DO_ICALL 138 
#define  ZEND_DO_UCALL 137 
#define  ZEND_INCLUDE_OR_EVAL 136 
#define  ZEND_POST_DEC_OBJ 135 
#define  ZEND_POST_INC_OBJ 134 
#define  ZEND_PRE_DEC 133 
#define  ZEND_PRE_DEC_OBJ 132 
#define  ZEND_PRE_INC 131 
#define  ZEND_PRE_INC_OBJ 130 
#define  ZEND_YIELD 129 
#define  ZEND_YIELD_FROM 128 

__attribute__((used)) static zend_bool try_remove_var_def(context *ctx, int free_var, int use_chain, zend_op *opline) {
	if (use_chain >= 0) {
		return 0;
	}
	zend_ssa_var *var = &ctx->ssa->vars[free_var];
	int def = var->definition;

	if (def >= 0) {
		zend_ssa_op *def_op = &ctx->ssa->ops[def];

		if (def_op->result_def == free_var
				&& var->phi_use_chain == NULL
				&& var->use_chain == (opline - ctx->op_array->opcodes)) {
			zend_op *def_opline = &ctx->op_array->opcodes[def];

			switch (def_opline->opcode) {
				case ZEND_ASSIGN:
				case ZEND_ASSIGN_REF:
				case ZEND_ASSIGN_DIM:
				case ZEND_ASSIGN_OBJ:
				case ZEND_ASSIGN_OBJ_REF:
				case ZEND_ASSIGN_STATIC_PROP:
				case ZEND_ASSIGN_STATIC_PROP_REF:
				case ZEND_ASSIGN_ADD:
				case ZEND_ASSIGN_SUB:
				case ZEND_ASSIGN_MUL:
				case ZEND_ASSIGN_DIV:
				case ZEND_ASSIGN_MOD:
				case ZEND_ASSIGN_SL:
				case ZEND_ASSIGN_SR:
				case ZEND_ASSIGN_CONCAT:
				case ZEND_ASSIGN_BW_OR:
				case ZEND_ASSIGN_BW_AND:
				case ZEND_ASSIGN_BW_XOR:
				case ZEND_ASSIGN_POW:
				case ZEND_PRE_INC:
				case ZEND_PRE_DEC:
				case ZEND_PRE_INC_OBJ:
				case ZEND_POST_INC_OBJ:
				case ZEND_PRE_DEC_OBJ:
				case ZEND_POST_DEC_OBJ:
				case ZEND_DO_ICALL:
				case ZEND_DO_UCALL:
				case ZEND_DO_FCALL_BY_NAME:
				case ZEND_DO_FCALL:
				case ZEND_INCLUDE_OR_EVAL:
				case ZEND_YIELD:
				case ZEND_YIELD_FROM:
				case ZEND_ASSERT_CHECK:
					def_opline->result_type = IS_UNUSED;
					def_opline->result.var = 0;
					def_op->result_def = -1;
					var->definition = -1;
					return 1;
				default:
					break;
			}
		}
	}
	return 0;
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
          int free_var = 100;
          int use_chain = 100;
          int _len_ctx0 = 1;
          struct TYPE_16__ * ctx = (struct TYPE_16__ *) malloc(_len_ctx0*sizeof(struct TYPE_16__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__op_array0 = 1;
          ctx[_i0].op_array = (struct TYPE_11__ *) malloc(_len_ctx__i0__op_array0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__op_array0; _j0++) {
              int _len_ctx__i0__op_array_opcodes0 = 1;
          ctx[_i0].op_array->opcodes = (struct TYPE_15__ *) malloc(_len_ctx__i0__op_array_opcodes0*sizeof(struct TYPE_15__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__op_array_opcodes0; _j0++) {
            ctx[_i0].op_array->opcodes->opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].op_array->opcodes->result.var = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].op_array->opcodes->result_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx__i0__ssa0 = 1;
          ctx[_i0].ssa = (struct TYPE_10__ *) malloc(_len_ctx__i0__ssa0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ssa0; _j0++) {
              int _len_ctx__i0__ssa_ops0 = 1;
          ctx[_i0].ssa->ops = (struct TYPE_14__ *) malloc(_len_ctx__i0__ssa_ops0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ssa_ops0; _j0++) {
            ctx[_i0].ssa->ops->result_def = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__ssa_vars0 = 1;
          ctx[_i0].ssa->vars = (struct TYPE_13__ *) malloc(_len_ctx__i0__ssa_vars0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ssa_vars0; _j0++) {
            ctx[_i0].ssa->vars->definition = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].ssa->vars->use_chain = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__ssa_vars_phi_use_chain0 = 1;
          ctx[_i0].ssa->vars->phi_use_chain = (int *) malloc(_len_ctx__i0__ssa_vars_phi_use_chain0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ssa_vars_phi_use_chain0; _j0++) {
            ctx[_i0].ssa->vars->phi_use_chain[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_opline0 = 1;
          struct TYPE_15__ * opline = (struct TYPE_15__ *) malloc(_len_opline0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_opline0; _i0++) {
            opline[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        opline[_i0].result.var = ((-2 * (next_i()%2)) + 1) * next_i();
        opline[_i0].result_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = try_remove_var_def(ctx,free_var,use_chain,opline);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].op_array);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].ssa);
          }
          free(ctx);
          free(opline);
        
        break;
    }
    // big-arr
    case 1:
    {
          int free_var = 255;
          int use_chain = 255;
          int _len_ctx0 = 65025;
          struct TYPE_16__ * ctx = (struct TYPE_16__ *) malloc(_len_ctx0*sizeof(struct TYPE_16__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__op_array0 = 1;
          ctx[_i0].op_array = (struct TYPE_11__ *) malloc(_len_ctx__i0__op_array0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__op_array0; _j0++) {
              int _len_ctx__i0__op_array_opcodes0 = 1;
          ctx[_i0].op_array->opcodes = (struct TYPE_15__ *) malloc(_len_ctx__i0__op_array_opcodes0*sizeof(struct TYPE_15__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__op_array_opcodes0; _j0++) {
            ctx[_i0].op_array->opcodes->opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].op_array->opcodes->result.var = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].op_array->opcodes->result_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx__i0__ssa0 = 1;
          ctx[_i0].ssa = (struct TYPE_10__ *) malloc(_len_ctx__i0__ssa0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ssa0; _j0++) {
              int _len_ctx__i0__ssa_ops0 = 1;
          ctx[_i0].ssa->ops = (struct TYPE_14__ *) malloc(_len_ctx__i0__ssa_ops0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ssa_ops0; _j0++) {
            ctx[_i0].ssa->ops->result_def = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__ssa_vars0 = 1;
          ctx[_i0].ssa->vars = (struct TYPE_13__ *) malloc(_len_ctx__i0__ssa_vars0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ssa_vars0; _j0++) {
            ctx[_i0].ssa->vars->definition = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].ssa->vars->use_chain = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__ssa_vars_phi_use_chain0 = 1;
          ctx[_i0].ssa->vars->phi_use_chain = (int *) malloc(_len_ctx__i0__ssa_vars_phi_use_chain0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ssa_vars_phi_use_chain0; _j0++) {
            ctx[_i0].ssa->vars->phi_use_chain[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_opline0 = 65025;
          struct TYPE_15__ * opline = (struct TYPE_15__ *) malloc(_len_opline0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_opline0; _i0++) {
            opline[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        opline[_i0].result.var = ((-2 * (next_i()%2)) + 1) * next_i();
        opline[_i0].result_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = try_remove_var_def(ctx,free_var,use_chain,opline);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].op_array);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].ssa);
          }
          free(ctx);
          free(opline);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int free_var = 10;
          int use_chain = 10;
          int _len_ctx0 = 100;
          struct TYPE_16__ * ctx = (struct TYPE_16__ *) malloc(_len_ctx0*sizeof(struct TYPE_16__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__op_array0 = 1;
          ctx[_i0].op_array = (struct TYPE_11__ *) malloc(_len_ctx__i0__op_array0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__op_array0; _j0++) {
              int _len_ctx__i0__op_array_opcodes0 = 1;
          ctx[_i0].op_array->opcodes = (struct TYPE_15__ *) malloc(_len_ctx__i0__op_array_opcodes0*sizeof(struct TYPE_15__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__op_array_opcodes0; _j0++) {
            ctx[_i0].op_array->opcodes->opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].op_array->opcodes->result.var = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].op_array->opcodes->result_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx__i0__ssa0 = 1;
          ctx[_i0].ssa = (struct TYPE_10__ *) malloc(_len_ctx__i0__ssa0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ssa0; _j0++) {
              int _len_ctx__i0__ssa_ops0 = 1;
          ctx[_i0].ssa->ops = (struct TYPE_14__ *) malloc(_len_ctx__i0__ssa_ops0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ssa_ops0; _j0++) {
            ctx[_i0].ssa->ops->result_def = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__ssa_vars0 = 1;
          ctx[_i0].ssa->vars = (struct TYPE_13__ *) malloc(_len_ctx__i0__ssa_vars0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ssa_vars0; _j0++) {
            ctx[_i0].ssa->vars->definition = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].ssa->vars->use_chain = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__ssa_vars_phi_use_chain0 = 1;
          ctx[_i0].ssa->vars->phi_use_chain = (int *) malloc(_len_ctx__i0__ssa_vars_phi_use_chain0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ssa_vars_phi_use_chain0; _j0++) {
            ctx[_i0].ssa->vars->phi_use_chain[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_opline0 = 100;
          struct TYPE_15__ * opline = (struct TYPE_15__ *) malloc(_len_opline0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_opline0; _i0++) {
            opline[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        opline[_i0].result.var = ((-2 * (next_i()%2)) + 1) * next_i();
        opline[_i0].result_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = try_remove_var_def(ctx,free_var,use_chain,opline);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].op_array);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].ssa);
          }
          free(ctx);
          free(opline);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
