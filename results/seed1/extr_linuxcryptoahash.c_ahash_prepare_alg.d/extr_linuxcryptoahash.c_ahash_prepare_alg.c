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
struct crypto_alg {int /*<<< orphan*/  cra_flags; int /*<<< orphan*/ * cra_type; } ;
struct TYPE_2__ {int digestsize; int statesize; struct crypto_alg base; } ;
struct ahash_alg {TYPE_1__ halg; } ;

/* Variables and functions */
 int /*<<< orphan*/  CRYPTO_ALG_TYPE_AHASH ; 
 int /*<<< orphan*/  CRYPTO_ALG_TYPE_MASK ; 
 int EINVAL ; 
 int PAGE_SIZE ; 
 int /*<<< orphan*/  crypto_ahash_type ; 

__attribute__((used)) static int ahash_prepare_alg(struct ahash_alg *alg)
{
	struct crypto_alg *base = &alg->halg.base;

	if (alg->halg.digestsize > PAGE_SIZE / 8 ||
	    alg->halg.statesize > PAGE_SIZE / 8 ||
	    alg->halg.statesize == 0)
		return -EINVAL;

	base->cra_type = &crypto_ahash_type;
	base->cra_flags &= ~CRYPTO_ALG_TYPE_MASK;
	base->cra_flags |= CRYPTO_ALG_TYPE_AHASH;

	return 0;
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
          int _len_alg0 = 1;
          struct ahash_alg * alg = (struct ahash_alg *) malloc(_len_alg0*sizeof(struct ahash_alg));
          for(int _i0 = 0; _i0 < _len_alg0; _i0++) {
            alg[_i0].halg.digestsize = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].halg.statesize = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].halg.base.cra_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_alg__i0__halg_base_cra_type0 = 1;
          alg[_i0].halg.base.cra_type = (int *) malloc(_len_alg__i0__halg_base_cra_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_alg__i0__halg_base_cra_type0; _j0++) {
            alg[_i0].halg.base.cra_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ahash_prepare_alg(alg);
          printf("%d\n", benchRet); 
          free(alg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_alg0 = 65025;
          struct ahash_alg * alg = (struct ahash_alg *) malloc(_len_alg0*sizeof(struct ahash_alg));
          for(int _i0 = 0; _i0 < _len_alg0; _i0++) {
            alg[_i0].halg.digestsize = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].halg.statesize = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].halg.base.cra_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_alg__i0__halg_base_cra_type0 = 1;
          alg[_i0].halg.base.cra_type = (int *) malloc(_len_alg__i0__halg_base_cra_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_alg__i0__halg_base_cra_type0; _j0++) {
            alg[_i0].halg.base.cra_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ahash_prepare_alg(alg);
          printf("%d\n", benchRet); 
          free(alg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_alg0 = 100;
          struct ahash_alg * alg = (struct ahash_alg *) malloc(_len_alg0*sizeof(struct ahash_alg));
          for(int _i0 = 0; _i0 < _len_alg0; _i0++) {
            alg[_i0].halg.digestsize = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].halg.statesize = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].halg.base.cra_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_alg__i0__halg_base_cra_type0 = 1;
          alg[_i0].halg.base.cra_type = (int *) malloc(_len_alg__i0__halg_base_cra_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_alg__i0__halg_base_cra_type0; _j0++) {
            alg[_i0].halg.base.cra_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ahash_prepare_alg(alg);
          printf("%d\n", benchRet); 
          free(alg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
