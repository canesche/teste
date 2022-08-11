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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  size_t uint8_t ;
struct TYPE_5__ {TYPE_1__* dctx; } ;
struct TYPE_4__ {size_t mdmax; int /*<<< orphan*/  const** mdevp; } ;
typedef  TYPE_2__ SSL_DANE ;
typedef  int /*<<< orphan*/  EVP_MD ;

/* Variables and functions */

__attribute__((used)) static const EVP_MD *tlsa_md_get(SSL_DANE *dane, uint8_t mtype)
{
    if (mtype > dane->dctx->mdmax)
        return NULL;
    return dane->dctx->mdevp[mtype];
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
          unsigned long mtype = 100;
          int _len_dane0 = 1;
          struct TYPE_5__ * dane = (struct TYPE_5__ *) malloc(_len_dane0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_dane0; _i0++) {
              int _len_dane__i0__dctx0 = 1;
          dane[_i0].dctx = (struct TYPE_4__ *) malloc(_len_dane__i0__dctx0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dane__i0__dctx0; _j0++) {
            dane[_i0].dctx->mdmax = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dane__i0__dctx_mdevp0 = 1;
          dane[_i0].dctx->mdevp = (const int **) malloc(_len_dane__i0__dctx_mdevp0*sizeof(const int *));
          for(int _j0 = 0; _j0 < _len_dane__i0__dctx_mdevp0; _j0++) {
            int _len_dane__i0__dctx_mdevp1 = 1;
            dane[_i0].dctx->mdevp[_j0] = (const int *) malloc(_len_dane__i0__dctx_mdevp1*sizeof(const int));
            for(int _j1 = 0; _j1 < _len_dane__i0__dctx_mdevp1; _j1++) {
              dane[_i0].dctx->mdevp[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          const int * benchRet = tlsa_md_get(dane,mtype);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_dane0; _aux++) {
          free(dane[_aux].dctx);
          }
          free(dane);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long mtype = 255;
          int _len_dane0 = 65025;
          struct TYPE_5__ * dane = (struct TYPE_5__ *) malloc(_len_dane0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_dane0; _i0++) {
              int _len_dane__i0__dctx0 = 1;
          dane[_i0].dctx = (struct TYPE_4__ *) malloc(_len_dane__i0__dctx0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dane__i0__dctx0; _j0++) {
            dane[_i0].dctx->mdmax = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dane__i0__dctx_mdevp0 = 1;
          dane[_i0].dctx->mdevp = (const int **) malloc(_len_dane__i0__dctx_mdevp0*sizeof(const int *));
          for(int _j0 = 0; _j0 < _len_dane__i0__dctx_mdevp0; _j0++) {
            int _len_dane__i0__dctx_mdevp1 = 1;
            dane[_i0].dctx->mdevp[_j0] = (const int *) malloc(_len_dane__i0__dctx_mdevp1*sizeof(const int));
            for(int _j1 = 0; _j1 < _len_dane__i0__dctx_mdevp1; _j1++) {
              dane[_i0].dctx->mdevp[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          const int * benchRet = tlsa_md_get(dane,mtype);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_dane0; _aux++) {
          free(dane[_aux].dctx);
          }
          free(dane);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long mtype = 10;
          int _len_dane0 = 100;
          struct TYPE_5__ * dane = (struct TYPE_5__ *) malloc(_len_dane0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_dane0; _i0++) {
              int _len_dane__i0__dctx0 = 1;
          dane[_i0].dctx = (struct TYPE_4__ *) malloc(_len_dane__i0__dctx0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dane__i0__dctx0; _j0++) {
            dane[_i0].dctx->mdmax = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dane__i0__dctx_mdevp0 = 1;
          dane[_i0].dctx->mdevp = (const int **) malloc(_len_dane__i0__dctx_mdevp0*sizeof(const int *));
          for(int _j0 = 0; _j0 < _len_dane__i0__dctx_mdevp0; _j0++) {
            int _len_dane__i0__dctx_mdevp1 = 1;
            dane[_i0].dctx->mdevp[_j0] = (const int *) malloc(_len_dane__i0__dctx_mdevp1*sizeof(const int));
            for(int _j1 = 0; _j1 < _len_dane__i0__dctx_mdevp1; _j1++) {
              dane[_i0].dctx->mdevp[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          const int * benchRet = tlsa_md_get(dane,mtype);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_dane0; _aux++) {
          free(dane[_aux].dctx);
          }
          free(dane);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
