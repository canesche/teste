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
typedef  size_t u8 ;
struct keygen_scheme {int dummy; } ;
struct fman_keygen {struct keygen_scheme* schemes; } ;

/* Variables and functions */
 size_t FM_KG_MAX_NUM_OF_SCHEMES ; 

__attribute__((used)) static struct keygen_scheme *get_scheme(struct fman_keygen *keygen,
					u8 scheme_id)
{
	if (scheme_id >= FM_KG_MAX_NUM_OF_SCHEMES)
		return NULL;
	return &keygen->schemes[scheme_id];
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
          unsigned long scheme_id = 100;
          int _len_keygen0 = 1;
          struct fman_keygen * keygen = (struct fman_keygen *) malloc(_len_keygen0*sizeof(struct fman_keygen));
          for(int _i0 = 0; _i0 < _len_keygen0; _i0++) {
              int _len_keygen__i0__schemes0 = 1;
          keygen[_i0].schemes = (struct keygen_scheme *) malloc(_len_keygen__i0__schemes0*sizeof(struct keygen_scheme));
          for(int _j0 = 0; _j0 < _len_keygen__i0__schemes0; _j0++) {
            keygen[_i0].schemes->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct keygen_scheme * benchRet = get_scheme(keygen,scheme_id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_keygen0; _aux++) {
          free(keygen[_aux].schemes);
          }
          free(keygen);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long scheme_id = 255;
          int _len_keygen0 = 65025;
          struct fman_keygen * keygen = (struct fman_keygen *) malloc(_len_keygen0*sizeof(struct fman_keygen));
          for(int _i0 = 0; _i0 < _len_keygen0; _i0++) {
              int _len_keygen__i0__schemes0 = 1;
          keygen[_i0].schemes = (struct keygen_scheme *) malloc(_len_keygen__i0__schemes0*sizeof(struct keygen_scheme));
          for(int _j0 = 0; _j0 < _len_keygen__i0__schemes0; _j0++) {
            keygen[_i0].schemes->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct keygen_scheme * benchRet = get_scheme(keygen,scheme_id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_keygen0; _aux++) {
          free(keygen[_aux].schemes);
          }
          free(keygen);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long scheme_id = 10;
          int _len_keygen0 = 100;
          struct fman_keygen * keygen = (struct fman_keygen *) malloc(_len_keygen0*sizeof(struct fman_keygen));
          for(int _i0 = 0; _i0 < _len_keygen0; _i0++) {
              int _len_keygen__i0__schemes0 = 1;
          keygen[_i0].schemes = (struct keygen_scheme *) malloc(_len_keygen__i0__schemes0*sizeof(struct keygen_scheme));
          for(int _j0 = 0; _j0 < _len_keygen__i0__schemes0; _j0++) {
            keygen[_i0].schemes->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct keygen_scheme * benchRet = get_scheme(keygen,scheme_id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_keygen0; _aux++) {
          free(keygen[_aux].schemes);
          }
          free(keygen);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
