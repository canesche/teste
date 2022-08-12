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
struct qman_portal {struct qm_portal_config const* config; } ;
struct qm_portal_config {int dummy; } ;

/* Variables and functions */

const struct qm_portal_config *qman_get_qm_portal_config(
						struct qman_portal *portal)
{
	return portal->config;
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
          int _len_portal0 = 1;
          struct qman_portal * portal = (struct qman_portal *) malloc(_len_portal0*sizeof(struct qman_portal));
          for(int _i0 = 0; _i0 < _len_portal0; _i0++) {
              int _len_portal__i0__config0 = 1;
          portal[_i0].config = (const struct qm_portal_config *) malloc(_len_portal__i0__config0*sizeof(const struct qm_portal_config));
          for(int _j0 = 0; _j0 < _len_portal__i0__config0; _j0++) {
              }
          }
          const struct qm_portal_config * benchRet = qman_get_qm_portal_config(portal);
          for(int _aux = 0; _aux < _len_portal0; _aux++) {
          free(portal[_aux].config);
          }
          free(portal);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_portal0 = 65025;
          struct qman_portal * portal = (struct qman_portal *) malloc(_len_portal0*sizeof(struct qman_portal));
          for(int _i0 = 0; _i0 < _len_portal0; _i0++) {
              int _len_portal__i0__config0 = 1;
          portal[_i0].config = (const struct qm_portal_config *) malloc(_len_portal__i0__config0*sizeof(const struct qm_portal_config));
          for(int _j0 = 0; _j0 < _len_portal__i0__config0; _j0++) {
              }
          }
          const struct qm_portal_config * benchRet = qman_get_qm_portal_config(portal);
          for(int _aux = 0; _aux < _len_portal0; _aux++) {
          free(portal[_aux].config);
          }
          free(portal);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_portal0 = 100;
          struct qman_portal * portal = (struct qman_portal *) malloc(_len_portal0*sizeof(struct qman_portal));
          for(int _i0 = 0; _i0 < _len_portal0; _i0++) {
              int _len_portal__i0__config0 = 1;
          portal[_i0].config = (const struct qm_portal_config *) malloc(_len_portal__i0__config0*sizeof(const struct qm_portal_config));
          for(int _j0 = 0; _j0 < _len_portal__i0__config0; _j0++) {
              }
          }
          const struct qm_portal_config * benchRet = qman_get_qm_portal_config(portal);
          for(int _aux = 0; _aux < _len_portal0; _aux++) {
          free(portal[_aux].config);
          }
          free(portal);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
