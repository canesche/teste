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
struct btf_verifier_env {size_t top_stack; int /*<<< orphan*/ * visit_states; struct btf* btf; TYPE_1__* stack; } ;
struct btf {size_t* resolved_sizes; size_t* resolved_ids; } ;
struct TYPE_2__ {size_t type_id; } ;

/* Variables and functions */
 int /*<<< orphan*/  RESOLVED ; 

__attribute__((used)) static void env_stack_pop_resolved(struct btf_verifier_env *env,
				   u32 resolved_type_id,
				   u32 resolved_size)
{
	u32 type_id = env->stack[--(env->top_stack)].type_id;
	struct btf *btf = env->btf;

	btf->resolved_sizes[type_id] = resolved_size;
	btf->resolved_ids[type_id] = resolved_type_id;
	env->visit_states[type_id] = RESOLVED;
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
          unsigned long resolved_type_id = 100;
          unsigned long resolved_size = 100;
          int _len_env0 = 1;
          struct btf_verifier_env * env = (struct btf_verifier_env *) malloc(_len_env0*sizeof(struct btf_verifier_env));
          for(int _i0 = 0; _i0 < _len_env0; _i0++) {
            env[_i0].top_stack = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_env__i0__visit_states0 = 1;
          env[_i0].visit_states = (int *) malloc(_len_env__i0__visit_states0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_env__i0__visit_states0; _j0++) {
            env[_i0].visit_states[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_env__i0__btf0 = 1;
          env[_i0].btf = (struct btf *) malloc(_len_env__i0__btf0*sizeof(struct btf));
          for(int _j0 = 0; _j0 < _len_env__i0__btf0; _j0++) {
              int _len_env__i0__btf_resolved_sizes0 = 1;
          env[_i0].btf->resolved_sizes = (unsigned long *) malloc(_len_env__i0__btf_resolved_sizes0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_env__i0__btf_resolved_sizes0; _j0++) {
            env[_i0].btf->resolved_sizes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_env__i0__btf_resolved_ids0 = 1;
          env[_i0].btf->resolved_ids = (unsigned long *) malloc(_len_env__i0__btf_resolved_ids0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_env__i0__btf_resolved_ids0; _j0++) {
            env[_i0].btf->resolved_ids[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_env__i0__stack0 = 1;
          env[_i0].stack = (struct TYPE_2__ *) malloc(_len_env__i0__stack0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_env__i0__stack0; _j0++) {
            env[_i0].stack->type_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          env_stack_pop_resolved(env,resolved_type_id,resolved_size);
          for(int _aux = 0; _aux < _len_env0; _aux++) {
          free(env[_aux].visit_states);
          }
          for(int _aux = 0; _aux < _len_env0; _aux++) {
          free(env[_aux].btf);
          }
          for(int _aux = 0; _aux < _len_env0; _aux++) {
          free(env[_aux].stack);
          }
          free(env);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long resolved_type_id = 255;
          unsigned long resolved_size = 255;
          int _len_env0 = 65025;
          struct btf_verifier_env * env = (struct btf_verifier_env *) malloc(_len_env0*sizeof(struct btf_verifier_env));
          for(int _i0 = 0; _i0 < _len_env0; _i0++) {
            env[_i0].top_stack = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_env__i0__visit_states0 = 1;
          env[_i0].visit_states = (int *) malloc(_len_env__i0__visit_states0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_env__i0__visit_states0; _j0++) {
            env[_i0].visit_states[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_env__i0__btf0 = 1;
          env[_i0].btf = (struct btf *) malloc(_len_env__i0__btf0*sizeof(struct btf));
          for(int _j0 = 0; _j0 < _len_env__i0__btf0; _j0++) {
              int _len_env__i0__btf_resolved_sizes0 = 1;
          env[_i0].btf->resolved_sizes = (unsigned long *) malloc(_len_env__i0__btf_resolved_sizes0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_env__i0__btf_resolved_sizes0; _j0++) {
            env[_i0].btf->resolved_sizes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_env__i0__btf_resolved_ids0 = 1;
          env[_i0].btf->resolved_ids = (unsigned long *) malloc(_len_env__i0__btf_resolved_ids0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_env__i0__btf_resolved_ids0; _j0++) {
            env[_i0].btf->resolved_ids[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_env__i0__stack0 = 1;
          env[_i0].stack = (struct TYPE_2__ *) malloc(_len_env__i0__stack0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_env__i0__stack0; _j0++) {
            env[_i0].stack->type_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          env_stack_pop_resolved(env,resolved_type_id,resolved_size);
          for(int _aux = 0; _aux < _len_env0; _aux++) {
          free(env[_aux].visit_states);
          }
          for(int _aux = 0; _aux < _len_env0; _aux++) {
          free(env[_aux].btf);
          }
          for(int _aux = 0; _aux < _len_env0; _aux++) {
          free(env[_aux].stack);
          }
          free(env);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long resolved_type_id = 10;
          unsigned long resolved_size = 10;
          int _len_env0 = 100;
          struct btf_verifier_env * env = (struct btf_verifier_env *) malloc(_len_env0*sizeof(struct btf_verifier_env));
          for(int _i0 = 0; _i0 < _len_env0; _i0++) {
            env[_i0].top_stack = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_env__i0__visit_states0 = 1;
          env[_i0].visit_states = (int *) malloc(_len_env__i0__visit_states0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_env__i0__visit_states0; _j0++) {
            env[_i0].visit_states[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_env__i0__btf0 = 1;
          env[_i0].btf = (struct btf *) malloc(_len_env__i0__btf0*sizeof(struct btf));
          for(int _j0 = 0; _j0 < _len_env__i0__btf0; _j0++) {
              int _len_env__i0__btf_resolved_sizes0 = 1;
          env[_i0].btf->resolved_sizes = (unsigned long *) malloc(_len_env__i0__btf_resolved_sizes0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_env__i0__btf_resolved_sizes0; _j0++) {
            env[_i0].btf->resolved_sizes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_env__i0__btf_resolved_ids0 = 1;
          env[_i0].btf->resolved_ids = (unsigned long *) malloc(_len_env__i0__btf_resolved_ids0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_env__i0__btf_resolved_ids0; _j0++) {
            env[_i0].btf->resolved_ids[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_env__i0__stack0 = 1;
          env[_i0].stack = (struct TYPE_2__ *) malloc(_len_env__i0__stack0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_env__i0__stack0; _j0++) {
            env[_i0].stack->type_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          env_stack_pop_resolved(env,resolved_type_id,resolved_size);
          for(int _aux = 0; _aux < _len_env0; _aux++) {
          free(env[_aux].visit_states);
          }
          for(int _aux = 0; _aux < _len_env0; _aux++) {
          free(env[_aux].btf);
          }
          for(int _aux = 0; _aux < _len_env0; _aux++) {
          free(env[_aux].stack);
          }
          free(env);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
