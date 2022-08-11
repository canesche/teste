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
struct TYPE_3__ {scalar_t__ dwFlags; scalar_t__ dwSessionLifespan; scalar_t__ dwMaximumCipherStrength; scalar_t__ dwMinimumCipherStrength; scalar_t__ grbitEnabledProtocols; int /*<<< orphan*/ * palgSupportedAlgs; scalar_t__ cSupportedAlgs; int /*<<< orphan*/ * aphMappers; scalar_t__ cMappers; int /*<<< orphan*/ * hRootStore; scalar_t__ paCred; scalar_t__ cCreds; int /*<<< orphan*/  dwVersion; } ;
typedef  TYPE_1__ SCHANNEL_CRED ;

/* Variables and functions */
 int /*<<< orphan*/  SCHANNEL_CRED_VERSION ; 

__attribute__((used)) static void init_cred(SCHANNEL_CRED *cred)
{
    cred->dwVersion = SCHANNEL_CRED_VERSION;
    cred->cCreds = 0;
    cred->paCred = 0;
    cred->hRootStore = NULL;
    cred->cMappers = 0;
    cred->aphMappers = NULL;
    cred->cSupportedAlgs = 0;
    cred->palgSupportedAlgs = NULL;
    cred->grbitEnabledProtocols = 0;
    cred->dwMinimumCipherStrength = 0;
    cred->dwMaximumCipherStrength = 0;
    cred->dwSessionLifespan = 0;
    cred->dwFlags = 0;
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
          int _len_cred0 = 1;
          struct TYPE_3__ * cred = (struct TYPE_3__ *) malloc(_len_cred0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_cred0; _i0++) {
            cred[_i0].dwFlags = ((-2 * (next_i()%2)) + 1) * next_i();
        cred[_i0].dwSessionLifespan = ((-2 * (next_i()%2)) + 1) * next_i();
        cred[_i0].dwMaximumCipherStrength = ((-2 * (next_i()%2)) + 1) * next_i();
        cred[_i0].dwMinimumCipherStrength = ((-2 * (next_i()%2)) + 1) * next_i();
        cred[_i0].grbitEnabledProtocols = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cred__i0__palgSupportedAlgs0 = 1;
          cred[_i0].palgSupportedAlgs = (int *) malloc(_len_cred__i0__palgSupportedAlgs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cred__i0__palgSupportedAlgs0; _j0++) {
            cred[_i0].palgSupportedAlgs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cred[_i0].cSupportedAlgs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cred__i0__aphMappers0 = 1;
          cred[_i0].aphMappers = (int *) malloc(_len_cred__i0__aphMappers0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cred__i0__aphMappers0; _j0++) {
            cred[_i0].aphMappers[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cred[_i0].cMappers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cred__i0__hRootStore0 = 1;
          cred[_i0].hRootStore = (int *) malloc(_len_cred__i0__hRootStore0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cred__i0__hRootStore0; _j0++) {
            cred[_i0].hRootStore[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cred[_i0].paCred = ((-2 * (next_i()%2)) + 1) * next_i();
        cred[_i0].cCreds = ((-2 * (next_i()%2)) + 1) * next_i();
        cred[_i0].dwVersion = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_cred(cred);
          for(int _aux = 0; _aux < _len_cred0; _aux++) {
          free(cred[_aux].palgSupportedAlgs);
          }
          for(int _aux = 0; _aux < _len_cred0; _aux++) {
          free(cred[_aux].aphMappers);
          }
          for(int _aux = 0; _aux < _len_cred0; _aux++) {
          free(cred[_aux].hRootStore);
          }
          free(cred);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cred0 = 65025;
          struct TYPE_3__ * cred = (struct TYPE_3__ *) malloc(_len_cred0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_cred0; _i0++) {
            cred[_i0].dwFlags = ((-2 * (next_i()%2)) + 1) * next_i();
        cred[_i0].dwSessionLifespan = ((-2 * (next_i()%2)) + 1) * next_i();
        cred[_i0].dwMaximumCipherStrength = ((-2 * (next_i()%2)) + 1) * next_i();
        cred[_i0].dwMinimumCipherStrength = ((-2 * (next_i()%2)) + 1) * next_i();
        cred[_i0].grbitEnabledProtocols = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cred__i0__palgSupportedAlgs0 = 1;
          cred[_i0].palgSupportedAlgs = (int *) malloc(_len_cred__i0__palgSupportedAlgs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cred__i0__palgSupportedAlgs0; _j0++) {
            cred[_i0].palgSupportedAlgs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cred[_i0].cSupportedAlgs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cred__i0__aphMappers0 = 1;
          cred[_i0].aphMappers = (int *) malloc(_len_cred__i0__aphMappers0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cred__i0__aphMappers0; _j0++) {
            cred[_i0].aphMappers[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cred[_i0].cMappers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cred__i0__hRootStore0 = 1;
          cred[_i0].hRootStore = (int *) malloc(_len_cred__i0__hRootStore0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cred__i0__hRootStore0; _j0++) {
            cred[_i0].hRootStore[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cred[_i0].paCred = ((-2 * (next_i()%2)) + 1) * next_i();
        cred[_i0].cCreds = ((-2 * (next_i()%2)) + 1) * next_i();
        cred[_i0].dwVersion = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_cred(cred);
          for(int _aux = 0; _aux < _len_cred0; _aux++) {
          free(cred[_aux].palgSupportedAlgs);
          }
          for(int _aux = 0; _aux < _len_cred0; _aux++) {
          free(cred[_aux].aphMappers);
          }
          for(int _aux = 0; _aux < _len_cred0; _aux++) {
          free(cred[_aux].hRootStore);
          }
          free(cred);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cred0 = 100;
          struct TYPE_3__ * cred = (struct TYPE_3__ *) malloc(_len_cred0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_cred0; _i0++) {
            cred[_i0].dwFlags = ((-2 * (next_i()%2)) + 1) * next_i();
        cred[_i0].dwSessionLifespan = ((-2 * (next_i()%2)) + 1) * next_i();
        cred[_i0].dwMaximumCipherStrength = ((-2 * (next_i()%2)) + 1) * next_i();
        cred[_i0].dwMinimumCipherStrength = ((-2 * (next_i()%2)) + 1) * next_i();
        cred[_i0].grbitEnabledProtocols = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cred__i0__palgSupportedAlgs0 = 1;
          cred[_i0].palgSupportedAlgs = (int *) malloc(_len_cred__i0__palgSupportedAlgs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cred__i0__palgSupportedAlgs0; _j0++) {
            cred[_i0].palgSupportedAlgs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cred[_i0].cSupportedAlgs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cred__i0__aphMappers0 = 1;
          cred[_i0].aphMappers = (int *) malloc(_len_cred__i0__aphMappers0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cred__i0__aphMappers0; _j0++) {
            cred[_i0].aphMappers[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cred[_i0].cMappers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cred__i0__hRootStore0 = 1;
          cred[_i0].hRootStore = (int *) malloc(_len_cred__i0__hRootStore0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cred__i0__hRootStore0; _j0++) {
            cred[_i0].hRootStore[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cred[_i0].paCred = ((-2 * (next_i()%2)) + 1) * next_i();
        cred[_i0].cCreds = ((-2 * (next_i()%2)) + 1) * next_i();
        cred[_i0].dwVersion = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_cred(cred);
          for(int _aux = 0; _aux < _len_cred0; _aux++) {
          free(cred[_aux].palgSupportedAlgs);
          }
          for(int _aux = 0; _aux < _len_cred0; _aux++) {
          free(cred[_aux].aphMappers);
          }
          for(int _aux = 0; _aux < _len_cred0; _aux++) {
          free(cred[_aux].hRootStore);
          }
          free(cred);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
