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
       3            linked\n\
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
struct mg_mgr {int num_ifaces; struct mg_iface** ifaces; } ;
struct mg_iface_vtable {int dummy; } ;
struct mg_iface {struct mg_iface_vtable const* vtable; } ;

/* Variables and functions */

struct mg_iface *mg_find_iface(struct mg_mgr *mgr,
                               const struct mg_iface_vtable *vtable,
                               struct mg_iface *from) {
  int i = 0;
  if (from != NULL) {
    for (i = 0; i < mgr->num_ifaces; i++) {
      if (mgr->ifaces[i] == from) {
        i++;
        break;
      }
    }
  }

  for (; i < mgr->num_ifaces; i++) {
    if (mgr->ifaces[i]->vtable == vtable) {
      return mgr->ifaces[i];
    }
  }
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
          int _len_mgr0 = 1;
          struct mg_mgr * mgr = (struct mg_mgr *) malloc(_len_mgr0*sizeof(struct mg_mgr));
          for(int _i0 = 0; _i0 < _len_mgr0; _i0++) {
            mgr[_i0].num_ifaces = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mgr__i0__ifaces0 = 1;
          mgr[_i0].ifaces = (struct mg_iface **) malloc(_len_mgr__i0__ifaces0*sizeof(struct mg_iface *));
          for(int _j0 = 0; _j0 < _len_mgr__i0__ifaces0; _j0++) {
            int _len_mgr__i0__ifaces1 = 1;
            mgr[_i0].ifaces[_j0] = (struct mg_iface *) malloc(_len_mgr__i0__ifaces1*sizeof(struct mg_iface));
            for(int _j1 = 0; _j1 < _len_mgr__i0__ifaces1; _j1++) {
                int _len_mgr__i0__ifaces__j0__vtable0 = 1;
          mgr[_i0].ifaces[_j0]->vtable = (const struct mg_iface_vtable *) malloc(_len_mgr__i0__ifaces__j0__vtable0*sizeof(const struct mg_iface_vtable));
          for(int _j0 = 0; _j0 < _len_mgr__i0__ifaces__j0__vtable0; _j0++) {
              }
            }
          }
          }
          int _len_vtable0 = 1;
          const struct mg_iface_vtable * vtable = (const struct mg_iface_vtable *) malloc(_len_vtable0*sizeof(const struct mg_iface_vtable));
          for(int _i0 = 0; _i0 < _len_vtable0; _i0++) {
              }
          int _len_from0 = 1;
          struct mg_iface * from = (struct mg_iface *) malloc(_len_from0*sizeof(struct mg_iface));
          for(int _i0 = 0; _i0 < _len_from0; _i0++) {
              int _len_from__i0__vtable0 = 1;
          from[_i0].vtable = (const struct mg_iface_vtable *) malloc(_len_from__i0__vtable0*sizeof(const struct mg_iface_vtable));
          for(int _j0 = 0; _j0 < _len_from__i0__vtable0; _j0++) {
              }
          }
          struct mg_iface * benchRet = mg_find_iface(mgr,vtable,from);
          for(int _aux = 0; _aux < _len_mgr0; _aux++) {
          free(*(mgr[_aux].ifaces));
        free(mgr[_aux].ifaces);
          }
          free(mgr);
          free(vtable);
          for(int _aux = 0; _aux < _len_from0; _aux++) {
          free(from[_aux].vtable);
          }
          free(from);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mgr0 = 65025;
          struct mg_mgr * mgr = (struct mg_mgr *) malloc(_len_mgr0*sizeof(struct mg_mgr));
          for(int _i0 = 0; _i0 < _len_mgr0; _i0++) {
            mgr[_i0].num_ifaces = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mgr__i0__ifaces0 = 1;
          mgr[_i0].ifaces = (struct mg_iface **) malloc(_len_mgr__i0__ifaces0*sizeof(struct mg_iface *));
          for(int _j0 = 0; _j0 < _len_mgr__i0__ifaces0; _j0++) {
            int _len_mgr__i0__ifaces1 = 1;
            mgr[_i0].ifaces[_j0] = (struct mg_iface *) malloc(_len_mgr__i0__ifaces1*sizeof(struct mg_iface));
            for(int _j1 = 0; _j1 < _len_mgr__i0__ifaces1; _j1++) {
                int _len_mgr__i0__ifaces__j0__vtable0 = 1;
          mgr[_i0].ifaces[_j0]->vtable = (const struct mg_iface_vtable *) malloc(_len_mgr__i0__ifaces__j0__vtable0*sizeof(const struct mg_iface_vtable));
          for(int _j0 = 0; _j0 < _len_mgr__i0__ifaces__j0__vtable0; _j0++) {
              }
            }
          }
          }
          int _len_vtable0 = 65025;
          const struct mg_iface_vtable * vtable = (const struct mg_iface_vtable *) malloc(_len_vtable0*sizeof(const struct mg_iface_vtable));
          for(int _i0 = 0; _i0 < _len_vtable0; _i0++) {
              }
          int _len_from0 = 65025;
          struct mg_iface * from = (struct mg_iface *) malloc(_len_from0*sizeof(struct mg_iface));
          for(int _i0 = 0; _i0 < _len_from0; _i0++) {
              int _len_from__i0__vtable0 = 1;
          from[_i0].vtable = (const struct mg_iface_vtable *) malloc(_len_from__i0__vtable0*sizeof(const struct mg_iface_vtable));
          for(int _j0 = 0; _j0 < _len_from__i0__vtable0; _j0++) {
              }
          }
          struct mg_iface * benchRet = mg_find_iface(mgr,vtable,from);
          for(int _aux = 0; _aux < _len_mgr0; _aux++) {
          free(*(mgr[_aux].ifaces));
        free(mgr[_aux].ifaces);
          }
          free(mgr);
          free(vtable);
          for(int _aux = 0; _aux < _len_from0; _aux++) {
          free(from[_aux].vtable);
          }
          free(from);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mgr0 = 100;
          struct mg_mgr * mgr = (struct mg_mgr *) malloc(_len_mgr0*sizeof(struct mg_mgr));
          for(int _i0 = 0; _i0 < _len_mgr0; _i0++) {
            mgr[_i0].num_ifaces = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mgr__i0__ifaces0 = 1;
          mgr[_i0].ifaces = (struct mg_iface **) malloc(_len_mgr__i0__ifaces0*sizeof(struct mg_iface *));
          for(int _j0 = 0; _j0 < _len_mgr__i0__ifaces0; _j0++) {
            int _len_mgr__i0__ifaces1 = 1;
            mgr[_i0].ifaces[_j0] = (struct mg_iface *) malloc(_len_mgr__i0__ifaces1*sizeof(struct mg_iface));
            for(int _j1 = 0; _j1 < _len_mgr__i0__ifaces1; _j1++) {
                int _len_mgr__i0__ifaces__j0__vtable0 = 1;
          mgr[_i0].ifaces[_j0]->vtable = (const struct mg_iface_vtable *) malloc(_len_mgr__i0__ifaces__j0__vtable0*sizeof(const struct mg_iface_vtable));
          for(int _j0 = 0; _j0 < _len_mgr__i0__ifaces__j0__vtable0; _j0++) {
              }
            }
          }
          }
          int _len_vtable0 = 100;
          const struct mg_iface_vtable * vtable = (const struct mg_iface_vtable *) malloc(_len_vtable0*sizeof(const struct mg_iface_vtable));
          for(int _i0 = 0; _i0 < _len_vtable0; _i0++) {
              }
          int _len_from0 = 100;
          struct mg_iface * from = (struct mg_iface *) malloc(_len_from0*sizeof(struct mg_iface));
          for(int _i0 = 0; _i0 < _len_from0; _i0++) {
              int _len_from__i0__vtable0 = 1;
          from[_i0].vtable = (const struct mg_iface_vtable *) malloc(_len_from__i0__vtable0*sizeof(const struct mg_iface_vtable));
          for(int _j0 = 0; _j0 < _len_from__i0__vtable0; _j0++) {
              }
          }
          struct mg_iface * benchRet = mg_find_iface(mgr,vtable,from);
          for(int _aux = 0; _aux < _len_mgr0; _aux++) {
          free(*(mgr[_aux].ifaces));
        free(mgr[_aux].ifaces);
          }
          free(mgr);
          free(vtable);
          for(int _aux = 0; _aux < _len_from0; _aux++) {
          free(from[_aux].vtable);
          }
          free(from);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_mgr0 = 1;
          struct mg_mgr * mgr = (struct mg_mgr *) malloc(_len_mgr0*sizeof(struct mg_mgr));
          for(int _i0 = 0; _i0 < _len_mgr0; _i0++) {
            mgr[_i0].num_ifaces = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mgr__i0__ifaces0 = 1;
          mgr[_i0].ifaces = (struct mg_iface **) malloc(_len_mgr__i0__ifaces0*sizeof(struct mg_iface *));
          for(int _j0 = 0; _j0 < _len_mgr__i0__ifaces0; _j0++) {
            int _len_mgr__i0__ifaces1 = 1;
            mgr[_i0].ifaces[_j0] = (struct mg_iface *) malloc(_len_mgr__i0__ifaces1*sizeof(struct mg_iface));
            for(int _j1 = 0; _j1 < _len_mgr__i0__ifaces1; _j1++) {
                int _len_mgr__i0__ifaces__j0__vtable0 = 1;
          mgr[_i0].ifaces[_j0]->vtable = (const struct mg_iface_vtable *) malloc(_len_mgr__i0__ifaces__j0__vtable0*sizeof(const struct mg_iface_vtable));
          for(int _j0 = 0; _j0 < _len_mgr__i0__ifaces__j0__vtable0; _j0++) {
              }
            }
          }
          }
          int _len_vtable0 = 1;
          const struct mg_iface_vtable * vtable = (const struct mg_iface_vtable *) malloc(_len_vtable0*sizeof(const struct mg_iface_vtable));
          for(int _i0 = 0; _i0 < _len_vtable0; _i0++) {
              }
          int _len_from0 = 1;
          struct mg_iface * from = (struct mg_iface *) malloc(_len_from0*sizeof(struct mg_iface));
          for(int _i0 = 0; _i0 < _len_from0; _i0++) {
              int _len_from__i0__vtable0 = 1;
          from[_i0].vtable = (const struct mg_iface_vtable *) malloc(_len_from__i0__vtable0*sizeof(const struct mg_iface_vtable));
          for(int _j0 = 0; _j0 < _len_from__i0__vtable0; _j0++) {
              }
          }
          struct mg_iface * benchRet = mg_find_iface(mgr,vtable,from);
          for(int _aux = 0; _aux < _len_mgr0; _aux++) {
          free(*(mgr[_aux].ifaces));
        free(mgr[_aux].ifaces);
          }
          free(mgr);
          free(vtable);
          for(int _aux = 0; _aux < _len_from0; _aux++) {
          free(from[_aux].vtable);
          }
          free(from);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
