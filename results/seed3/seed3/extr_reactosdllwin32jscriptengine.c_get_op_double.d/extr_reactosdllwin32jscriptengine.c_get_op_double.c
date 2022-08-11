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
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_10__ {TYPE_5__* call_ctx; } ;
typedef  TYPE_4__ script_ctx_t ;
struct TYPE_11__ {size_t ip; TYPE_3__* bytecode; } ;
typedef  TYPE_5__ call_frame_t ;
struct TYPE_9__ {TYPE_2__* instrs; } ;
struct TYPE_7__ {double dbl; } ;
struct TYPE_8__ {TYPE_1__ u; } ;

/* Variables and functions */

__attribute__((used)) static inline double get_op_double(script_ctx_t *ctx)
{
    call_frame_t *frame = ctx->call_ctx;
    return frame->bytecode->instrs[frame->ip].u.dbl;
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
          int _len_ctx0 = 1;
          struct TYPE_10__ * ctx = (struct TYPE_10__ *) malloc(_len_ctx0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__call_ctx0 = 1;
          ctx[_i0].call_ctx = (struct TYPE_11__ *) malloc(_len_ctx__i0__call_ctx0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__call_ctx0; _j0++) {
            ctx[_i0].call_ctx->ip = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__call_ctx_bytecode0 = 1;
          ctx[_i0].call_ctx->bytecode = (struct TYPE_9__ *) malloc(_len_ctx__i0__call_ctx_bytecode0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__call_ctx_bytecode0; _j0++) {
              int _len_ctx__i0__call_ctx_bytecode_instrs0 = 1;
          ctx[_i0].call_ctx->bytecode->instrs = (struct TYPE_8__ *) malloc(_len_ctx__i0__call_ctx_bytecode_instrs0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__call_ctx_bytecode_instrs0; _j0++) {
            ctx[_i0].call_ctx->bytecode->instrs->u.dbl = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          }
          }
          double benchRet = get_op_double(ctx);
          printf("%lf\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].call_ctx);
          }
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctx0 = 65025;
          struct TYPE_10__ * ctx = (struct TYPE_10__ *) malloc(_len_ctx0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__call_ctx0 = 1;
          ctx[_i0].call_ctx = (struct TYPE_11__ *) malloc(_len_ctx__i0__call_ctx0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__call_ctx0; _j0++) {
            ctx[_i0].call_ctx->ip = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__call_ctx_bytecode0 = 1;
          ctx[_i0].call_ctx->bytecode = (struct TYPE_9__ *) malloc(_len_ctx__i0__call_ctx_bytecode0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__call_ctx_bytecode0; _j0++) {
              int _len_ctx__i0__call_ctx_bytecode_instrs0 = 1;
          ctx[_i0].call_ctx->bytecode->instrs = (struct TYPE_8__ *) malloc(_len_ctx__i0__call_ctx_bytecode_instrs0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__call_ctx_bytecode_instrs0; _j0++) {
            ctx[_i0].call_ctx->bytecode->instrs->u.dbl = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          }
          }
          double benchRet = get_op_double(ctx);
          printf("%lf\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].call_ctx);
          }
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctx0 = 100;
          struct TYPE_10__ * ctx = (struct TYPE_10__ *) malloc(_len_ctx0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__call_ctx0 = 1;
          ctx[_i0].call_ctx = (struct TYPE_11__ *) malloc(_len_ctx__i0__call_ctx0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__call_ctx0; _j0++) {
            ctx[_i0].call_ctx->ip = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__call_ctx_bytecode0 = 1;
          ctx[_i0].call_ctx->bytecode = (struct TYPE_9__ *) malloc(_len_ctx__i0__call_ctx_bytecode0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__call_ctx_bytecode0; _j0++) {
              int _len_ctx__i0__call_ctx_bytecode_instrs0 = 1;
          ctx[_i0].call_ctx->bytecode->instrs = (struct TYPE_8__ *) malloc(_len_ctx__i0__call_ctx_bytecode_instrs0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__call_ctx_bytecode_instrs0; _j0++) {
            ctx[_i0].call_ctx->bytecode->instrs->u.dbl = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          }
          }
          double benchRet = get_op_double(ctx);
          printf("%lf\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].call_ctx);
          }
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
