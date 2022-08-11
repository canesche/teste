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
struct TYPE_3__ {int init; scalar_t__ flags; int /*<<< orphan*/ * ptr; } ;
typedef  TYPE_1__ BIO ;

/* Variables and functions */

__attribute__((used)) static int url_bio_create(BIO *b)
{
#if OPENSSL_VERSION_NUMBER >= 0x1010000fL
    BIO_set_init(b, 1);
    BIO_set_data(b, NULL);
    BIO_set_flags(b, 0);
#else
    b->init = 1;
    b->ptr = NULL;
    b->flags = 0;
#endif
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
          int _len_b0 = 1;
          struct TYPE_3__ * b = (struct TYPE_3__ *) malloc(_len_b0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].init = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_b__i0__ptr0 = 1;
          b[_i0].ptr = (int *) malloc(_len_b__i0__ptr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_b__i0__ptr0; _j0++) {
            b[_i0].ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = url_bio_create(b);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].ptr);
          }
          free(b);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_b0 = 65025;
          struct TYPE_3__ * b = (struct TYPE_3__ *) malloc(_len_b0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].init = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_b__i0__ptr0 = 1;
          b[_i0].ptr = (int *) malloc(_len_b__i0__ptr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_b__i0__ptr0; _j0++) {
            b[_i0].ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = url_bio_create(b);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].ptr);
          }
          free(b);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_b0 = 100;
          struct TYPE_3__ * b = (struct TYPE_3__ *) malloc(_len_b0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].init = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_b__i0__ptr0 = 1;
          b[_i0].ptr = (int *) malloc(_len_b__i0__ptr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_b__i0__ptr0; _j0++) {
            b[_i0].ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = url_bio_create(b);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].ptr);
          }
          free(b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
