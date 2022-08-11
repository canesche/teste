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
struct TYPE_3__ {int /*<<< orphan*/ * priv_key; int /*<<< orphan*/ * pub_key; } ;
typedef  TYPE_1__ DH ;
typedef  int /*<<< orphan*/  BIGNUM ;

/* Variables and functions */

__attribute__((used)) static int DH_set0_key(DH *dh, BIGNUM *pub_key, BIGNUM *priv_key)
{
	dh->pub_key = pub_key;
	dh->priv_key = priv_key;

	return 1;
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
          int _len_dh0 = 1;
          struct TYPE_3__ * dh = (struct TYPE_3__ *) malloc(_len_dh0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dh0; _i0++) {
              int _len_dh__i0__priv_key0 = 1;
          dh[_i0].priv_key = (int *) malloc(_len_dh__i0__priv_key0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dh__i0__priv_key0; _j0++) {
            dh[_i0].priv_key[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dh__i0__pub_key0 = 1;
          dh[_i0].pub_key = (int *) malloc(_len_dh__i0__pub_key0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dh__i0__pub_key0; _j0++) {
            dh[_i0].pub_key[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pub_key0 = 1;
          int * pub_key = (int *) malloc(_len_pub_key0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pub_key0; _i0++) {
            pub_key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv_key0 = 1;
          int * priv_key = (int *) malloc(_len_priv_key0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_priv_key0; _i0++) {
            priv_key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = DH_set0_key(dh,pub_key,priv_key);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dh0; _aux++) {
          free(dh[_aux].priv_key);
          }
          for(int _aux = 0; _aux < _len_dh0; _aux++) {
          free(dh[_aux].pub_key);
          }
          free(dh);
          free(pub_key);
          free(priv_key);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dh0 = 65025;
          struct TYPE_3__ * dh = (struct TYPE_3__ *) malloc(_len_dh0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dh0; _i0++) {
              int _len_dh__i0__priv_key0 = 1;
          dh[_i0].priv_key = (int *) malloc(_len_dh__i0__priv_key0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dh__i0__priv_key0; _j0++) {
            dh[_i0].priv_key[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dh__i0__pub_key0 = 1;
          dh[_i0].pub_key = (int *) malloc(_len_dh__i0__pub_key0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dh__i0__pub_key0; _j0++) {
            dh[_i0].pub_key[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pub_key0 = 65025;
          int * pub_key = (int *) malloc(_len_pub_key0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pub_key0; _i0++) {
            pub_key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv_key0 = 65025;
          int * priv_key = (int *) malloc(_len_priv_key0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_priv_key0; _i0++) {
            priv_key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = DH_set0_key(dh,pub_key,priv_key);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dh0; _aux++) {
          free(dh[_aux].priv_key);
          }
          for(int _aux = 0; _aux < _len_dh0; _aux++) {
          free(dh[_aux].pub_key);
          }
          free(dh);
          free(pub_key);
          free(priv_key);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dh0 = 100;
          struct TYPE_3__ * dh = (struct TYPE_3__ *) malloc(_len_dh0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dh0; _i0++) {
              int _len_dh__i0__priv_key0 = 1;
          dh[_i0].priv_key = (int *) malloc(_len_dh__i0__priv_key0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dh__i0__priv_key0; _j0++) {
            dh[_i0].priv_key[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dh__i0__pub_key0 = 1;
          dh[_i0].pub_key = (int *) malloc(_len_dh__i0__pub_key0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dh__i0__pub_key0; _j0++) {
            dh[_i0].pub_key[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pub_key0 = 100;
          int * pub_key = (int *) malloc(_len_pub_key0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pub_key0; _i0++) {
            pub_key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv_key0 = 100;
          int * priv_key = (int *) malloc(_len_priv_key0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_priv_key0; _i0++) {
            priv_key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = DH_set0_key(dh,pub_key,priv_key);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dh0; _aux++) {
          free(dh[_aux].priv_key);
          }
          for(int _aux = 0; _aux < _len_dh0; _aux++) {
          free(dh[_aux].pub_key);
          }
          free(dh);
          free(pub_key);
          free(priv_key);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
