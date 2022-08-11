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
struct rdmacg_resource_pool {TYPE_1__* resources; int /*<<< orphan*/  num_max_cnt; } ;
struct TYPE_2__ {int max; } ;

/* Variables and functions */
 int S32_MAX ; 

__attribute__((used)) static void set_resource_limit(struct rdmacg_resource_pool *rpool,
			       int index, int new_max)
{
	if (new_max == S32_MAX) {
		if (rpool->resources[index].max != S32_MAX)
			rpool->num_max_cnt++;
	} else {
		if (rpool->resources[index].max == S32_MAX)
			rpool->num_max_cnt--;
	}
	rpool->resources[index].max = new_max;
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
          int index = 100;
          int new_max = 100;
          int _len_rpool0 = 1;
          struct rdmacg_resource_pool * rpool = (struct rdmacg_resource_pool *) malloc(_len_rpool0*sizeof(struct rdmacg_resource_pool));
          for(int _i0 = 0; _i0 < _len_rpool0; _i0++) {
              int _len_rpool__i0__resources0 = 1;
          rpool[_i0].resources = (struct TYPE_2__ *) malloc(_len_rpool__i0__resources0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rpool__i0__resources0; _j0++) {
            rpool[_i0].resources->max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rpool[_i0].num_max_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_resource_limit(rpool,index,new_max);
          for(int _aux = 0; _aux < _len_rpool0; _aux++) {
          free(rpool[_aux].resources);
          }
          free(rpool);
        
        break;
    }
    // big-arr
    case 1:
    {
          int index = 255;
          int new_max = 255;
          int _len_rpool0 = 65025;
          struct rdmacg_resource_pool * rpool = (struct rdmacg_resource_pool *) malloc(_len_rpool0*sizeof(struct rdmacg_resource_pool));
          for(int _i0 = 0; _i0 < _len_rpool0; _i0++) {
              int _len_rpool__i0__resources0 = 1;
          rpool[_i0].resources = (struct TYPE_2__ *) malloc(_len_rpool__i0__resources0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rpool__i0__resources0; _j0++) {
            rpool[_i0].resources->max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rpool[_i0].num_max_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_resource_limit(rpool,index,new_max);
          for(int _aux = 0; _aux < _len_rpool0; _aux++) {
          free(rpool[_aux].resources);
          }
          free(rpool);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int index = 10;
          int new_max = 10;
          int _len_rpool0 = 100;
          struct rdmacg_resource_pool * rpool = (struct rdmacg_resource_pool *) malloc(_len_rpool0*sizeof(struct rdmacg_resource_pool));
          for(int _i0 = 0; _i0 < _len_rpool0; _i0++) {
              int _len_rpool__i0__resources0 = 1;
          rpool[_i0].resources = (struct TYPE_2__ *) malloc(_len_rpool__i0__resources0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rpool__i0__resources0; _j0++) {
            rpool[_i0].resources->max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rpool[_i0].num_max_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_resource_limit(rpool,index,new_max);
          for(int _aux = 0; _aux < _len_rpool0; _aux++) {
          free(rpool[_aux].resources);
          }
          free(rpool);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
