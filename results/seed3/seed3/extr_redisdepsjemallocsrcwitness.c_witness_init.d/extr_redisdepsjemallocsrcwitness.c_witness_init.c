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
struct TYPE_3__ {char const* name; void* opaque; int /*<<< orphan*/ * comp; int /*<<< orphan*/  rank; } ;
typedef  TYPE_1__ witness_t ;
typedef  int /*<<< orphan*/  witness_rank_t ;
typedef  int /*<<< orphan*/  witness_comp_t ;

/* Variables and functions */

void
witness_init(witness_t *witness, const char *name, witness_rank_t rank,
    witness_comp_t *comp, void *opaque) {
	witness->name = name;
	witness->rank = rank;
	witness->comp = comp;
	witness->opaque = opaque;
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
          int rank = 100;
          int _len_witness0 = 1;
          struct TYPE_3__ * witness = (struct TYPE_3__ *) malloc(_len_witness0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_witness0; _i0++) {
              int _len_witness__i0__name0 = 1;
          witness[_i0].name = (const char *) malloc(_len_witness__i0__name0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_witness__i0__name0; _j0++) {
            witness[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_witness__i0__comp0 = 1;
          witness[_i0].comp = (int *) malloc(_len_witness__i0__comp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_witness__i0__comp0; _j0++) {
            witness[_i0].comp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        witness[_i0].rank = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 1;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_comp0 = 1;
          int * comp = (int *) malloc(_len_comp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_comp0; _i0++) {
            comp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * opaque;
          witness_init(witness,name,rank,comp,opaque);
          for(int _aux = 0; _aux < _len_witness0; _aux++) {
          free(witness[_aux].name);
          }
          for(int _aux = 0; _aux < _len_witness0; _aux++) {
          free(witness[_aux].comp);
          }
          free(witness);
          free(name);
          free(comp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int rank = 255;
          int _len_witness0 = 65025;
          struct TYPE_3__ * witness = (struct TYPE_3__ *) malloc(_len_witness0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_witness0; _i0++) {
              int _len_witness__i0__name0 = 1;
          witness[_i0].name = (const char *) malloc(_len_witness__i0__name0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_witness__i0__name0; _j0++) {
            witness[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_witness__i0__comp0 = 1;
          witness[_i0].comp = (int *) malloc(_len_witness__i0__comp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_witness__i0__comp0; _j0++) {
            witness[_i0].comp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        witness[_i0].rank = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 65025;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_comp0 = 65025;
          int * comp = (int *) malloc(_len_comp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_comp0; _i0++) {
            comp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * opaque;
          witness_init(witness,name,rank,comp,opaque);
          for(int _aux = 0; _aux < _len_witness0; _aux++) {
          free(witness[_aux].name);
          }
          for(int _aux = 0; _aux < _len_witness0; _aux++) {
          free(witness[_aux].comp);
          }
          free(witness);
          free(name);
          free(comp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int rank = 10;
          int _len_witness0 = 100;
          struct TYPE_3__ * witness = (struct TYPE_3__ *) malloc(_len_witness0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_witness0; _i0++) {
              int _len_witness__i0__name0 = 1;
          witness[_i0].name = (const char *) malloc(_len_witness__i0__name0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_witness__i0__name0; _j0++) {
            witness[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_witness__i0__comp0 = 1;
          witness[_i0].comp = (int *) malloc(_len_witness__i0__comp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_witness__i0__comp0; _j0++) {
            witness[_i0].comp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        witness[_i0].rank = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 100;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_comp0 = 100;
          int * comp = (int *) malloc(_len_comp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_comp0; _i0++) {
            comp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * opaque;
          witness_init(witness,name,rank,comp,opaque);
          for(int _aux = 0; _aux < _len_witness0; _aux++) {
          free(witness[_aux].name);
          }
          for(int _aux = 0; _aux < _len_witness0; _aux++) {
          free(witness[_aux].comp);
          }
          free(witness);
          free(name);
          free(comp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
