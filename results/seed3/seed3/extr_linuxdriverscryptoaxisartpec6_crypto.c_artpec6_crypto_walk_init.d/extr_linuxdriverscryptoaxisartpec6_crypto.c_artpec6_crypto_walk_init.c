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
struct scatterlist {int dummy; } ;
struct artpec6_crypto_walk {scalar_t__ offset; struct scatterlist* sg; } ;

/* Variables and functions */

__attribute__((used)) static void artpec6_crypto_walk_init(struct artpec6_crypto_walk *awalk,
				     struct scatterlist *sg)
{
	awalk->sg = sg;
	awalk->offset = 0;
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
          int _len_awalk0 = 1;
          struct artpec6_crypto_walk * awalk = (struct artpec6_crypto_walk *) malloc(_len_awalk0*sizeof(struct artpec6_crypto_walk));
          for(int _i0 = 0; _i0 < _len_awalk0; _i0++) {
            awalk[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_awalk__i0__sg0 = 1;
          awalk[_i0].sg = (struct scatterlist *) malloc(_len_awalk__i0__sg0*sizeof(struct scatterlist));
          for(int _j0 = 0; _j0 < _len_awalk__i0__sg0; _j0++) {
            awalk[_i0].sg->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_sg0 = 1;
          struct scatterlist * sg = (struct scatterlist *) malloc(_len_sg0*sizeof(struct scatterlist));
          for(int _i0 = 0; _i0 < _len_sg0; _i0++) {
            sg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          artpec6_crypto_walk_init(awalk,sg);
          for(int _aux = 0; _aux < _len_awalk0; _aux++) {
          free(awalk[_aux].sg);
          }
          free(awalk);
          free(sg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_awalk0 = 65025;
          struct artpec6_crypto_walk * awalk = (struct artpec6_crypto_walk *) malloc(_len_awalk0*sizeof(struct artpec6_crypto_walk));
          for(int _i0 = 0; _i0 < _len_awalk0; _i0++) {
            awalk[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_awalk__i0__sg0 = 1;
          awalk[_i0].sg = (struct scatterlist *) malloc(_len_awalk__i0__sg0*sizeof(struct scatterlist));
          for(int _j0 = 0; _j0 < _len_awalk__i0__sg0; _j0++) {
            awalk[_i0].sg->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_sg0 = 65025;
          struct scatterlist * sg = (struct scatterlist *) malloc(_len_sg0*sizeof(struct scatterlist));
          for(int _i0 = 0; _i0 < _len_sg0; _i0++) {
            sg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          artpec6_crypto_walk_init(awalk,sg);
          for(int _aux = 0; _aux < _len_awalk0; _aux++) {
          free(awalk[_aux].sg);
          }
          free(awalk);
          free(sg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_awalk0 = 100;
          struct artpec6_crypto_walk * awalk = (struct artpec6_crypto_walk *) malloc(_len_awalk0*sizeof(struct artpec6_crypto_walk));
          for(int _i0 = 0; _i0 < _len_awalk0; _i0++) {
            awalk[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_awalk__i0__sg0 = 1;
          awalk[_i0].sg = (struct scatterlist *) malloc(_len_awalk__i0__sg0*sizeof(struct scatterlist));
          for(int _j0 = 0; _j0 < _len_awalk__i0__sg0; _j0++) {
            awalk[_i0].sg->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_sg0 = 100;
          struct scatterlist * sg = (struct scatterlist *) malloc(_len_sg0*sizeof(struct scatterlist));
          for(int _i0 = 0; _i0 < _len_sg0; _i0++) {
            sg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          artpec6_crypto_walk_init(awalk,sg);
          for(int _aux = 0; _aux < _len_awalk0; _aux++) {
          free(awalk[_aux].sg);
          }
          free(awalk);
          free(sg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
