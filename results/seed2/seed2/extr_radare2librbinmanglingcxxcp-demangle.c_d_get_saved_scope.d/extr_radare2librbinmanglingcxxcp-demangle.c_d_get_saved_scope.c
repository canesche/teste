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

/* Type definitions */
struct demangle_component {int dummy; } ;
struct d_saved_scope {struct demangle_component const* container; } ;
struct d_print_info {int next_saved_scope; struct d_saved_scope* saved_scopes; } ;

/* Variables and functions */

__attribute__((used)) static struct d_saved_scope *
d_get_saved_scope (struct d_print_info *dpi,
		   const struct demangle_component *container)
{
  int i;

  for (i = 0; i < dpi->next_saved_scope; i++)
    if (dpi->saved_scopes[i].container == container)
      return &dpi->saved_scopes[i];

  return NULL;
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
          int _len_dpi0 = 1;
          struct d_print_info * dpi = (struct d_print_info *) malloc(_len_dpi0*sizeof(struct d_print_info));
          for(int _i0 = 0; _i0 < _len_dpi0; _i0++) {
            dpi[_i0].next_saved_scope = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dpi__i0__saved_scopes0 = 1;
          dpi[_i0].saved_scopes = (struct d_saved_scope *) malloc(_len_dpi__i0__saved_scopes0*sizeof(struct d_saved_scope));
          for(int _j0 = 0; _j0 < _len_dpi__i0__saved_scopes0; _j0++) {
              int _len_dpi__i0__saved_scopes_container0 = 1;
          dpi[_i0].saved_scopes->container = (const struct demangle_component *) malloc(_len_dpi__i0__saved_scopes_container0*sizeof(const struct demangle_component));
          for(int _j0 = 0; _j0 < _len_dpi__i0__saved_scopes_container0; _j0++) {
              }
          }
          }
          int _len_container0 = 1;
          const struct demangle_component * container = (const struct demangle_component *) malloc(_len_container0*sizeof(const struct demangle_component));
          for(int _i0 = 0; _i0 < _len_container0; _i0++) {
              }
          struct d_saved_scope * benchRet = d_get_saved_scope(dpi,container);
          for(int _aux = 0; _aux < _len_dpi0; _aux++) {
          free(dpi[_aux].saved_scopes);
          }
          free(dpi);
          free(container);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dpi0 = 65025;
          struct d_print_info * dpi = (struct d_print_info *) malloc(_len_dpi0*sizeof(struct d_print_info));
          for(int _i0 = 0; _i0 < _len_dpi0; _i0++) {
            dpi[_i0].next_saved_scope = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dpi__i0__saved_scopes0 = 1;
          dpi[_i0].saved_scopes = (struct d_saved_scope *) malloc(_len_dpi__i0__saved_scopes0*sizeof(struct d_saved_scope));
          for(int _j0 = 0; _j0 < _len_dpi__i0__saved_scopes0; _j0++) {
              int _len_dpi__i0__saved_scopes_container0 = 1;
          dpi[_i0].saved_scopes->container = (const struct demangle_component *) malloc(_len_dpi__i0__saved_scopes_container0*sizeof(const struct demangle_component));
          for(int _j0 = 0; _j0 < _len_dpi__i0__saved_scopes_container0; _j0++) {
              }
          }
          }
          int _len_container0 = 65025;
          const struct demangle_component * container = (const struct demangle_component *) malloc(_len_container0*sizeof(const struct demangle_component));
          for(int _i0 = 0; _i0 < _len_container0; _i0++) {
              }
          struct d_saved_scope * benchRet = d_get_saved_scope(dpi,container);
          for(int _aux = 0; _aux < _len_dpi0; _aux++) {
          free(dpi[_aux].saved_scopes);
          }
          free(dpi);
          free(container);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dpi0 = 100;
          struct d_print_info * dpi = (struct d_print_info *) malloc(_len_dpi0*sizeof(struct d_print_info));
          for(int _i0 = 0; _i0 < _len_dpi0; _i0++) {
            dpi[_i0].next_saved_scope = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dpi__i0__saved_scopes0 = 1;
          dpi[_i0].saved_scopes = (struct d_saved_scope *) malloc(_len_dpi__i0__saved_scopes0*sizeof(struct d_saved_scope));
          for(int _j0 = 0; _j0 < _len_dpi__i0__saved_scopes0; _j0++) {
              int _len_dpi__i0__saved_scopes_container0 = 1;
          dpi[_i0].saved_scopes->container = (const struct demangle_component *) malloc(_len_dpi__i0__saved_scopes_container0*sizeof(const struct demangle_component));
          for(int _j0 = 0; _j0 < _len_dpi__i0__saved_scopes_container0; _j0++) {
              }
          }
          }
          int _len_container0 = 100;
          const struct demangle_component * container = (const struct demangle_component *) malloc(_len_container0*sizeof(const struct demangle_component));
          for(int _i0 = 0; _i0 < _len_container0; _i0++) {
              }
          struct d_saved_scope * benchRet = d_get_saved_scope(dpi,container);
          for(int _aux = 0; _aux < _len_dpi0; _aux++) {
          free(dpi[_aux].saved_scopes);
          }
          free(dpi);
          free(container);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
