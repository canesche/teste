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
struct crypto_alg {int /*<<< orphan*/  cra_flags; int /*<<< orphan*/ * cra_type; } ;
struct shash_alg {int digestsize; int descsize; int statesize; scalar_t__ setkey; int /*<<< orphan*/  import; scalar_t__ export; scalar_t__ digest; scalar_t__ finup; struct crypto_alg base; } ;

/* Variables and functions */
 int /*<<< orphan*/  CRYPTO_ALG_TYPE_MASK ; 
 int /*<<< orphan*/  CRYPTO_ALG_TYPE_SHASH ; 
 int EINVAL ; 
 int PAGE_SIZE ; 
 int /*<<< orphan*/  crypto_shash_type ; 
 scalar_t__ shash_default_export ; 
 int /*<<< orphan*/  shash_default_import ; 
 scalar_t__ shash_digest_unaligned ; 
 scalar_t__ shash_finup_unaligned ; 
 scalar_t__ shash_no_setkey ; 

__attribute__((used)) static int shash_prepare_alg(struct shash_alg *alg)
{
	struct crypto_alg *base = &alg->base;

	if (alg->digestsize > PAGE_SIZE / 8 ||
	    alg->descsize > PAGE_SIZE / 8 ||
	    alg->statesize > PAGE_SIZE / 8)
		return -EINVAL;

	base->cra_type = &crypto_shash_type;
	base->cra_flags &= ~CRYPTO_ALG_TYPE_MASK;
	base->cra_flags |= CRYPTO_ALG_TYPE_SHASH;

	if (!alg->finup)
		alg->finup = shash_finup_unaligned;
	if (!alg->digest)
		alg->digest = shash_digest_unaligned;
	if (!alg->export) {
		alg->export = shash_default_export;
		alg->import = shash_default_import;
		alg->statesize = alg->descsize;
	}
	if (!alg->setkey)
		alg->setkey = shash_no_setkey;

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
          struct shash_alg * alg = (struct shash_alg *) malloc(_len_alg0*sizeof(struct shash_alg));
          for(int _i0 = 0; _i0 < _len_alg0; _i0++) {
            alg[_i0].digestsize = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].descsize = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].statesize = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].setkey = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].import = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].export = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].digest = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].finup = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].base.cra_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_alg__i0__base_cra_type0 = 1;
          alg[_i0].base.cra_type = (int *) malloc(_len_alg__i0__base_cra_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_alg__i0__base_cra_type0; _j0++) {
            alg[_i0].base.cra_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = shash_prepare_alg(alg);
          printf("%d\n", benchRet); 
          free(alg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_alg0 = 65025;
          struct shash_alg * alg = (struct shash_alg *) malloc(_len_alg0*sizeof(struct shash_alg));
          for(int _i0 = 0; _i0 < _len_alg0; _i0++) {
            alg[_i0].digestsize = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].descsize = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].statesize = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].setkey = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].import = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].export = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].digest = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].finup = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].base.cra_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_alg__i0__base_cra_type0 = 1;
          alg[_i0].base.cra_type = (int *) malloc(_len_alg__i0__base_cra_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_alg__i0__base_cra_type0; _j0++) {
            alg[_i0].base.cra_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = shash_prepare_alg(alg);
          printf("%d\n", benchRet); 
          free(alg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_alg0 = 100;
          struct shash_alg * alg = (struct shash_alg *) malloc(_len_alg0*sizeof(struct shash_alg));
          for(int _i0 = 0; _i0 < _len_alg0; _i0++) {
            alg[_i0].digestsize = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].descsize = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].statesize = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].setkey = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].import = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].export = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].digest = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].finup = ((-2 * (next_i()%2)) + 1) * next_i();
        alg[_i0].base.cra_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_alg__i0__base_cra_type0 = 1;
          alg[_i0].base.cra_type = (int *) malloc(_len_alg__i0__base_cra_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_alg__i0__base_cra_type0; _j0++) {
            alg[_i0].base.cra_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = shash_prepare_alg(alg);
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
