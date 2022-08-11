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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int* weights; int till_rescale; int tot_weight; int upd_val; int num_syms; int* freqs; int max_upd_val; } ;
typedef  TYPE_1__ Model ;

/* Variables and functions */

__attribute__((used)) static void model_update(Model *m, int val)
{
    int i, sum = 0;
    unsigned scale;

    m->weights[val]++;
    m->till_rescale--;
    if (m->till_rescale)
        return;
    m->tot_weight += m->upd_val;

    if (m->tot_weight > 0x8000) {
        m->tot_weight = 0;
        for (i = 0; i < m->num_syms; i++) {
            m->weights[i]  = (m->weights[i] + 1) >> 1;
            m->tot_weight +=  m->weights[i];
        }
    }
    scale = 0x80000000u / m->tot_weight;
    for (i = 0; i < m->num_syms; i++) {
        m->freqs[i] = sum * scale >> 16;
        sum += m->weights[i];
    }

    m->upd_val = m->upd_val * 5 >> 2;
    if (m->upd_val > m->max_upd_val)
        m->upd_val = m->max_upd_val;
    m->till_rescale = m->upd_val;
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
          int val = 100;
          int _len_m0 = 1;
          struct TYPE_3__ * m = (struct TYPE_3__ *) malloc(_len_m0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              int _len_m__i0__weights0 = 1;
          m[_i0].weights = (int *) malloc(_len_m__i0__weights0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_m__i0__weights0; _j0++) {
            m[_i0].weights[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        m[_i0].till_rescale = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].tot_weight = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].upd_val = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].num_syms = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_m__i0__freqs0 = 1;
          m[_i0].freqs = (int *) malloc(_len_m__i0__freqs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_m__i0__freqs0; _j0++) {
            m[_i0].freqs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        m[_i0].max_upd_val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          model_update(m,val);
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].weights);
          }
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].freqs);
          }
          free(m);
        
        break;
    }
    // big-arr
    case 1:
    {
          int val = 255;
          int _len_m0 = 65025;
          struct TYPE_3__ * m = (struct TYPE_3__ *) malloc(_len_m0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              int _len_m__i0__weights0 = 1;
          m[_i0].weights = (int *) malloc(_len_m__i0__weights0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_m__i0__weights0; _j0++) {
            m[_i0].weights[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        m[_i0].till_rescale = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].tot_weight = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].upd_val = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].num_syms = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_m__i0__freqs0 = 1;
          m[_i0].freqs = (int *) malloc(_len_m__i0__freqs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_m__i0__freqs0; _j0++) {
            m[_i0].freqs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        m[_i0].max_upd_val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          model_update(m,val);
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].weights);
          }
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].freqs);
          }
          free(m);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int val = 10;
          int _len_m0 = 100;
          struct TYPE_3__ * m = (struct TYPE_3__ *) malloc(_len_m0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              int _len_m__i0__weights0 = 1;
          m[_i0].weights = (int *) malloc(_len_m__i0__weights0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_m__i0__weights0; _j0++) {
            m[_i0].weights[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        m[_i0].till_rescale = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].tot_weight = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].upd_val = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].num_syms = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_m__i0__freqs0 = 1;
          m[_i0].freqs = (int *) malloc(_len_m__i0__freqs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_m__i0__freqs0; _j0++) {
            m[_i0].freqs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        m[_i0].max_upd_val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          model_update(m,val);
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].weights);
          }
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].freqs);
          }
          free(m);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
