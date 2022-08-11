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
typedef  struct TYPE_16__   TYPE_8__ ;
typedef  struct TYPE_15__   TYPE_7__ ;
typedef  struct TYPE_14__   TYPE_6__ ;
typedef  struct TYPE_13__   TYPE_5__ ;
typedef  struct TYPE_12__   TYPE_4__ ;
typedef  struct TYPE_11__   TYPE_3__ ;
typedef  struct TYPE_10__   TYPE_2__ ;
typedef  struct TYPE_9__   TYPE_1__ ;

/* Type definitions */
struct TYPE_16__ {size_t num; TYPE_7__* array; } ;
struct TYPE_14__ {size_t num; TYPE_5__* array; } ;
struct TYPE_12__ {size_t num; TYPE_3__* array; } ;
struct TYPE_10__ {size_t num; TYPE_1__* array; } ;
struct effect_parser {TYPE_8__ samplers; TYPE_6__ funcs; TYPE_4__ structs; TYPE_2__ params; } ;
struct TYPE_15__ {int written; } ;
struct TYPE_13__ {int written; } ;
struct TYPE_11__ {int written; } ;
struct TYPE_9__ {int written; } ;

/* Variables and functions */

__attribute__((used)) static inline void ep_reset_written(struct effect_parser *ep)
{
	size_t i;
	for (i = 0; i <ep->params.num; i++)
		ep->params.array[i].written = false;
	for (i = 0; i <ep->structs.num; i++)
		ep->structs.array[i].written = false;
	for (i = 0; i <ep->funcs.num; i++)
		ep->funcs.array[i].written = false;
	for (i = 0; i <ep->samplers.num; i++)
		ep->samplers.array[i].written = false;
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
          int _len_ep0 = 1;
          struct effect_parser * ep = (struct effect_parser *) malloc(_len_ep0*sizeof(struct effect_parser));
          for(int _i0 = 0; _i0 < _len_ep0; _i0++) {
            ep[_i0].samplers.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ep__i0__samplers_array0 = 1;
          ep[_i0].samplers.array = (struct TYPE_15__ *) malloc(_len_ep__i0__samplers_array0*sizeof(struct TYPE_15__));
          for(int _j0 = 0; _j0 < _len_ep__i0__samplers_array0; _j0++) {
            ep[_i0].samplers.array->written = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ep[_i0].funcs.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ep__i0__funcs_array0 = 1;
          ep[_i0].funcs.array = (struct TYPE_13__ *) malloc(_len_ep__i0__funcs_array0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_ep__i0__funcs_array0; _j0++) {
            ep[_i0].funcs.array->written = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ep[_i0].structs.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ep__i0__structs_array0 = 1;
          ep[_i0].structs.array = (struct TYPE_11__ *) malloc(_len_ep__i0__structs_array0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_ep__i0__structs_array0; _j0++) {
            ep[_i0].structs.array->written = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ep[_i0].params.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ep__i0__params_array0 = 1;
          ep[_i0].params.array = (struct TYPE_9__ *) malloc(_len_ep__i0__params_array0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_ep__i0__params_array0; _j0++) {
            ep[_i0].params.array->written = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ep_reset_written(ep);
          free(ep);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ep0 = 65025;
          struct effect_parser * ep = (struct effect_parser *) malloc(_len_ep0*sizeof(struct effect_parser));
          for(int _i0 = 0; _i0 < _len_ep0; _i0++) {
            ep[_i0].samplers.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ep__i0__samplers_array0 = 1;
          ep[_i0].samplers.array = (struct TYPE_15__ *) malloc(_len_ep__i0__samplers_array0*sizeof(struct TYPE_15__));
          for(int _j0 = 0; _j0 < _len_ep__i0__samplers_array0; _j0++) {
            ep[_i0].samplers.array->written = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ep[_i0].funcs.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ep__i0__funcs_array0 = 1;
          ep[_i0].funcs.array = (struct TYPE_13__ *) malloc(_len_ep__i0__funcs_array0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_ep__i0__funcs_array0; _j0++) {
            ep[_i0].funcs.array->written = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ep[_i0].structs.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ep__i0__structs_array0 = 1;
          ep[_i0].structs.array = (struct TYPE_11__ *) malloc(_len_ep__i0__structs_array0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_ep__i0__structs_array0; _j0++) {
            ep[_i0].structs.array->written = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ep[_i0].params.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ep__i0__params_array0 = 1;
          ep[_i0].params.array = (struct TYPE_9__ *) malloc(_len_ep__i0__params_array0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_ep__i0__params_array0; _j0++) {
            ep[_i0].params.array->written = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ep_reset_written(ep);
          free(ep);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ep0 = 100;
          struct effect_parser * ep = (struct effect_parser *) malloc(_len_ep0*sizeof(struct effect_parser));
          for(int _i0 = 0; _i0 < _len_ep0; _i0++) {
            ep[_i0].samplers.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ep__i0__samplers_array0 = 1;
          ep[_i0].samplers.array = (struct TYPE_15__ *) malloc(_len_ep__i0__samplers_array0*sizeof(struct TYPE_15__));
          for(int _j0 = 0; _j0 < _len_ep__i0__samplers_array0; _j0++) {
            ep[_i0].samplers.array->written = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ep[_i0].funcs.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ep__i0__funcs_array0 = 1;
          ep[_i0].funcs.array = (struct TYPE_13__ *) malloc(_len_ep__i0__funcs_array0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_ep__i0__funcs_array0; _j0++) {
            ep[_i0].funcs.array->written = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ep[_i0].structs.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ep__i0__structs_array0 = 1;
          ep[_i0].structs.array = (struct TYPE_11__ *) malloc(_len_ep__i0__structs_array0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_ep__i0__structs_array0; _j0++) {
            ep[_i0].structs.array->written = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ep[_i0].params.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ep__i0__params_array0 = 1;
          ep[_i0].params.array = (struct TYPE_9__ *) malloc(_len_ep__i0__params_array0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_ep__i0__params_array0; _j0++) {
            ep[_i0].params.array->written = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ep_reset_written(ep);
          free(ep);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
