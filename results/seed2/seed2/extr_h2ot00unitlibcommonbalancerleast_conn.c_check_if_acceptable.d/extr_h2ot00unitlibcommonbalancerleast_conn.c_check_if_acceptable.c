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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {size_t size; TYPE_3__** entries; } ;
typedef  TYPE_4__ h2o_socketpool_target_vector_t ;
struct TYPE_6__ {scalar_t__ weight_m1; } ;
struct TYPE_7__ {double leased_count; } ;
struct TYPE_8__ {TYPE_1__ conf; TYPE_2__ _shared; } ;

/* Variables and functions */

__attribute__((used)) static int check_if_acceptable(h2o_socketpool_target_vector_t *targets, size_t selected)
{
    double conn_weight_quotient;
    size_t i;
    double selected_conn_weight_quotient = targets->entries[selected]->_shared.leased_count;
    selected_conn_weight_quotient /= ((int)targets->entries[selected]->conf.weight_m1) + 1;

    for (i = 0; i < targets->size; i++) {
        if (i == selected)
            continue;
        conn_weight_quotient = targets->entries[i]->_shared.leased_count;
        conn_weight_quotient /= ((unsigned)targets->entries[i]->conf.weight_m1) + 1;
        if (conn_weight_quotient < selected_conn_weight_quotient) {
            return -1;
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
          unsigned long selected = 100;
          int _len_targets0 = 1;
          struct TYPE_9__ * targets = (struct TYPE_9__ *) malloc(_len_targets0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_targets0; _i0++) {
            targets[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_targets__i0__entries0 = 1;
          targets[_i0].entries = (struct TYPE_8__ **) malloc(_len_targets__i0__entries0*sizeof(struct TYPE_8__ *));
          for(int _j0 = 0; _j0 < _len_targets__i0__entries0; _j0++) {
            int _len_targets__i0__entries1 = 1;
            targets[_i0].entries[_j0] = (struct TYPE_8__ *) malloc(_len_targets__i0__entries1*sizeof(struct TYPE_8__));
            for(int _j1 = 0; _j1 < _len_targets__i0__entries1; _j1++) {
              targets[_i0].entries[_j0]->conf.weight_m1 = ((-2 * (next_i()%2)) + 1) * next_i();
        targets[_i0].entries[_j0]->_shared.leased_count = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          }
          int benchRet = check_if_acceptable(targets,selected);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_targets0; _aux++) {
          free(*(targets[_aux].entries));
        free(targets[_aux].entries);
          }
          free(targets);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long selected = 255;
          int _len_targets0 = 65025;
          struct TYPE_9__ * targets = (struct TYPE_9__ *) malloc(_len_targets0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_targets0; _i0++) {
            targets[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_targets__i0__entries0 = 1;
          targets[_i0].entries = (struct TYPE_8__ **) malloc(_len_targets__i0__entries0*sizeof(struct TYPE_8__ *));
          for(int _j0 = 0; _j0 < _len_targets__i0__entries0; _j0++) {
            int _len_targets__i0__entries1 = 1;
            targets[_i0].entries[_j0] = (struct TYPE_8__ *) malloc(_len_targets__i0__entries1*sizeof(struct TYPE_8__));
            for(int _j1 = 0; _j1 < _len_targets__i0__entries1; _j1++) {
              targets[_i0].entries[_j0]->conf.weight_m1 = ((-2 * (next_i()%2)) + 1) * next_i();
        targets[_i0].entries[_j0]->_shared.leased_count = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          }
          int benchRet = check_if_acceptable(targets,selected);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_targets0; _aux++) {
          free(*(targets[_aux].entries));
        free(targets[_aux].entries);
          }
          free(targets);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long selected = 10;
          int _len_targets0 = 100;
          struct TYPE_9__ * targets = (struct TYPE_9__ *) malloc(_len_targets0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_targets0; _i0++) {
            targets[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_targets__i0__entries0 = 1;
          targets[_i0].entries = (struct TYPE_8__ **) malloc(_len_targets__i0__entries0*sizeof(struct TYPE_8__ *));
          for(int _j0 = 0; _j0 < _len_targets__i0__entries0; _j0++) {
            int _len_targets__i0__entries1 = 1;
            targets[_i0].entries[_j0] = (struct TYPE_8__ *) malloc(_len_targets__i0__entries1*sizeof(struct TYPE_8__));
            for(int _j1 = 0; _j1 < _len_targets__i0__entries1; _j1++) {
              targets[_i0].entries[_j0]->conf.weight_m1 = ((-2 * (next_i()%2)) + 1) * next_i();
        targets[_i0].entries[_j0]->_shared.leased_count = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          }
          int benchRet = check_if_acceptable(targets,selected);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_targets0; _aux++) {
          free(*(targets[_aux].entries));
        free(targets[_aux].entries);
          }
          free(targets);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
