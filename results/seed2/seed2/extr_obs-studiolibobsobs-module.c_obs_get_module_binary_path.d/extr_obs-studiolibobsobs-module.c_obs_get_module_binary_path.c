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
struct TYPE_3__ {char const* bin_path; } ;
typedef  TYPE_1__ obs_module_t ;

/* Variables and functions */

const char *obs_get_module_binary_path(obs_module_t *module)
{
	return module ? module->bin_path : NULL;
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
          int _len_module0 = 1;
          struct TYPE_3__ * module = (struct TYPE_3__ *) malloc(_len_module0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_module0; _i0++) {
              int _len_module__i0__bin_path0 = 1;
          module[_i0].bin_path = (const char *) malloc(_len_module__i0__bin_path0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_module__i0__bin_path0; _j0++) {
            module[_i0].bin_path[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          const char * benchRet = obs_get_module_binary_path(module);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_module0; _aux++) {
          free(module[_aux].bin_path);
          }
          free(module);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_module0 = 65025;
          struct TYPE_3__ * module = (struct TYPE_3__ *) malloc(_len_module0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_module0; _i0++) {
              int _len_module__i0__bin_path0 = 1;
          module[_i0].bin_path = (const char *) malloc(_len_module__i0__bin_path0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_module__i0__bin_path0; _j0++) {
            module[_i0].bin_path[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          const char * benchRet = obs_get_module_binary_path(module);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_module0; _aux++) {
          free(module[_aux].bin_path);
          }
          free(module);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_module0 = 100;
          struct TYPE_3__ * module = (struct TYPE_3__ *) malloc(_len_module0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_module0; _i0++) {
              int _len_module__i0__bin_path0 = 1;
          module[_i0].bin_path = (const char *) malloc(_len_module__i0__bin_path0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_module__i0__bin_path0; _j0++) {
            module[_i0].bin_path[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          const char * benchRet = obs_get_module_binary_path(module);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_module0; _aux++) {
          free(module[_aux].bin_path);
          }
          free(module);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
