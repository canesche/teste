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
struct error_item {int dummy; } ;
struct TYPE_2__ {struct error_item const* array; } ;
struct error_data {TYPE_1__ errors; } ;

/* Variables and functions */

__attribute__((used)) static inline const struct error_item *error_data_item(struct error_data *ed,
		size_t idx)
{
	return ed->errors.array+idx;
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
          unsigned long idx = 100;
          int _len_ed0 = 1;
          struct error_data * ed = (struct error_data *) malloc(_len_ed0*sizeof(struct error_data));
          for(int _i0 = 0; _i0 < _len_ed0; _i0++) {
              int _len_ed__i0__errors_array0 = 1;
          ed[_i0].errors.array = (const struct error_item *) malloc(_len_ed__i0__errors_array0*sizeof(const struct error_item));
          for(int _j0 = 0; _j0 < _len_ed__i0__errors_array0; _j0++) {
              }
          }
          const struct error_item * benchRet = error_data_item(ed,idx);
          free(ed);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long idx = 255;
          int _len_ed0 = 65025;
          struct error_data * ed = (struct error_data *) malloc(_len_ed0*sizeof(struct error_data));
          for(int _i0 = 0; _i0 < _len_ed0; _i0++) {
              int _len_ed__i0__errors_array0 = 1;
          ed[_i0].errors.array = (const struct error_item *) malloc(_len_ed__i0__errors_array0*sizeof(const struct error_item));
          for(int _j0 = 0; _j0 < _len_ed__i0__errors_array0; _j0++) {
              }
          }
          const struct error_item * benchRet = error_data_item(ed,idx);
          free(ed);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long idx = 10;
          int _len_ed0 = 100;
          struct error_data * ed = (struct error_data *) malloc(_len_ed0*sizeof(struct error_data));
          for(int _i0 = 0; _i0 < _len_ed0; _i0++) {
              int _len_ed__i0__errors_array0 = 1;
          ed[_i0].errors.array = (const struct error_item *) malloc(_len_ed__i0__errors_array0*sizeof(const struct error_item));
          for(int _j0 = 0; _j0 < _len_ed__i0__errors_array0; _j0++) {
              }
          }
          const struct error_item * benchRet = error_data_item(ed,idx);
          free(ed);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
