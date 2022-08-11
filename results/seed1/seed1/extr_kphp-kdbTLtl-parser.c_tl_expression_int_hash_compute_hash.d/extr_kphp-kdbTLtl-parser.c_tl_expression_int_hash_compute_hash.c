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
struct tl_hashmap {unsigned int size; } ;
struct tl_expression {scalar_t__ magic; } ;

/* Variables and functions */

__attribute__((used)) static void tl_expression_int_hash_compute_hash (struct tl_hashmap *self, void *p, int *h1, int *h2) {
  const struct tl_expression *E = p;
  *h1 = ((unsigned) E->magic) % self->size;
  *h2 = 1 + (((unsigned) E->magic) % (self->size - 1));
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
          int _len_self0 = 1;
          struct tl_hashmap * self = (struct tl_hashmap *) malloc(_len_self0*sizeof(struct tl_hashmap));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
            self[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * p;
          int _len_h10 = 1;
          int * h1 = (int *) malloc(_len_h10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_h10; _i0++) {
            h1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_h20 = 1;
          int * h2 = (int *) malloc(_len_h20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_h20; _i0++) {
            h2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tl_expression_int_hash_compute_hash(self,p,h1,h2);
          free(self);
          free(h1);
          free(h2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_self0 = 65025;
          struct tl_hashmap * self = (struct tl_hashmap *) malloc(_len_self0*sizeof(struct tl_hashmap));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
            self[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * p;
          int _len_h10 = 65025;
          int * h1 = (int *) malloc(_len_h10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_h10; _i0++) {
            h1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_h20 = 65025;
          int * h2 = (int *) malloc(_len_h20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_h20; _i0++) {
            h2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tl_expression_int_hash_compute_hash(self,p,h1,h2);
          free(self);
          free(h1);
          free(h2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_self0 = 100;
          struct tl_hashmap * self = (struct tl_hashmap *) malloc(_len_self0*sizeof(struct tl_hashmap));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
            self[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * p;
          int _len_h10 = 100;
          int * h1 = (int *) malloc(_len_h10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_h10; _i0++) {
            h1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_h20 = 100;
          int * h2 = (int *) malloc(_len_h20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_h20; _i0++) {
            h2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tl_expression_int_hash_compute_hash(self,p,h1,h2);
          free(self);
          free(h1);
          free(h2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
