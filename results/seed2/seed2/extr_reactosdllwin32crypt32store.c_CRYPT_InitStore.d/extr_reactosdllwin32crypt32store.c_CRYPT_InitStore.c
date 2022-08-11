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
typedef  int /*<<< orphan*/  store_vtbl_t ;
struct TYPE_3__ {int ref; int /*<<< orphan*/ * properties; int /*<<< orphan*/  const* vtbl; int /*<<< orphan*/  dwOpenFlags; int /*<<< orphan*/  type; int /*<<< orphan*/  dwMagic; } ;
typedef  TYPE_1__ WINECRYPT_CERTSTORE ;
typedef  int /*<<< orphan*/  DWORD ;
typedef  int /*<<< orphan*/  CertStoreType ;

/* Variables and functions */
 int /*<<< orphan*/  WINE_CRYPTCERTSTORE_MAGIC ; 

void CRYPT_InitStore(WINECRYPT_CERTSTORE *store, DWORD dwFlags, CertStoreType type, const store_vtbl_t *vtbl)
{
    store->ref = 1;
    store->dwMagic = WINE_CRYPTCERTSTORE_MAGIC;
    store->type = type;
    store->dwOpenFlags = dwFlags;
    store->vtbl = vtbl;
    store->properties = NULL;
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
          int dwFlags = 100;
          int type = 100;
          int _len_store0 = 1;
          struct TYPE_3__ * store = (struct TYPE_3__ *) malloc(_len_store0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_store0; _i0++) {
            store[_i0].ref = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_store__i0__properties0 = 1;
          store[_i0].properties = (int *) malloc(_len_store__i0__properties0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_store__i0__properties0; _j0++) {
            store[_i0].properties[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_store__i0__vtbl0 = 1;
          store[_i0].vtbl = (const int *) malloc(_len_store__i0__vtbl0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_store__i0__vtbl0; _j0++) {
            store[_i0].vtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        store[_i0].dwOpenFlags = ((-2 * (next_i()%2)) + 1) * next_i();
        store[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        store[_i0].dwMagic = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vtbl0 = 1;
          const int * vtbl = (const int *) malloc(_len_vtbl0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_vtbl0; _i0++) {
            vtbl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          CRYPT_InitStore(store,dwFlags,type,vtbl);
          for(int _aux = 0; _aux < _len_store0; _aux++) {
          free(store[_aux].properties);
          }
          for(int _aux = 0; _aux < _len_store0; _aux++) {
          free(store[_aux].vtbl);
          }
          free(store);
          free(vtbl);
        
        break;
    }
    // big-arr
    case 1:
    {
          int dwFlags = 255;
          int type = 255;
          int _len_store0 = 65025;
          struct TYPE_3__ * store = (struct TYPE_3__ *) malloc(_len_store0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_store0; _i0++) {
            store[_i0].ref = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_store__i0__properties0 = 1;
          store[_i0].properties = (int *) malloc(_len_store__i0__properties0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_store__i0__properties0; _j0++) {
            store[_i0].properties[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_store__i0__vtbl0 = 1;
          store[_i0].vtbl = (const int *) malloc(_len_store__i0__vtbl0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_store__i0__vtbl0; _j0++) {
            store[_i0].vtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        store[_i0].dwOpenFlags = ((-2 * (next_i()%2)) + 1) * next_i();
        store[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        store[_i0].dwMagic = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vtbl0 = 65025;
          const int * vtbl = (const int *) malloc(_len_vtbl0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_vtbl0; _i0++) {
            vtbl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          CRYPT_InitStore(store,dwFlags,type,vtbl);
          for(int _aux = 0; _aux < _len_store0; _aux++) {
          free(store[_aux].properties);
          }
          for(int _aux = 0; _aux < _len_store0; _aux++) {
          free(store[_aux].vtbl);
          }
          free(store);
          free(vtbl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int dwFlags = 10;
          int type = 10;
          int _len_store0 = 100;
          struct TYPE_3__ * store = (struct TYPE_3__ *) malloc(_len_store0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_store0; _i0++) {
            store[_i0].ref = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_store__i0__properties0 = 1;
          store[_i0].properties = (int *) malloc(_len_store__i0__properties0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_store__i0__properties0; _j0++) {
            store[_i0].properties[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_store__i0__vtbl0 = 1;
          store[_i0].vtbl = (const int *) malloc(_len_store__i0__vtbl0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_store__i0__vtbl0; _j0++) {
            store[_i0].vtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        store[_i0].dwOpenFlags = ((-2 * (next_i()%2)) + 1) * next_i();
        store[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        store[_i0].dwMagic = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vtbl0 = 100;
          const int * vtbl = (const int *) malloc(_len_vtbl0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_vtbl0; _i0++) {
            vtbl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          CRYPT_InitStore(store,dwFlags,type,vtbl);
          for(int _aux = 0; _aux < _len_store0; _aux++) {
          free(store[_aux].properties);
          }
          for(int _aux = 0; _aux < _len_store0; _aux++) {
          free(store[_aux].vtbl);
          }
          free(store);
          free(vtbl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
