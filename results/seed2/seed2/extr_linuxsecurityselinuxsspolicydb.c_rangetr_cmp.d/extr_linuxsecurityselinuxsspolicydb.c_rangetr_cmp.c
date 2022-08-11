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
struct range_trans {int source_type; int target_type; int target_class; } ;
struct hashtab {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int rangetr_cmp(struct hashtab *h, const void *k1, const void *k2)
{
	const struct range_trans *key1 = k1, *key2 = k2;
	int v;

	v = key1->source_type - key2->source_type;
	if (v)
		return v;

	v = key1->target_type - key2->target_type;
	if (v)
		return v;

	v = key1->target_class - key2->target_class;

	return v;
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
          int _len_h0 = 1;
          struct hashtab * h = (struct hashtab *) malloc(_len_h0*sizeof(struct hashtab));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_k10 = 1;
          const void * k1 = (const void *) malloc(_len_k10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_k10; _i0++) {
            k1[_i0] = 0;
          }
          int _len_k20 = 1;
          const void * k2 = (const void *) malloc(_len_k20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_k20; _i0++) {
            k2[_i0] = 0;
          }
          int benchRet = rangetr_cmp(h,k1,k2);
          printf("%d\n", benchRet); 
          free(h);
          free(k1);
          free(k2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_h0 = 65025;
          struct hashtab * h = (struct hashtab *) malloc(_len_h0*sizeof(struct hashtab));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_k10 = 65025;
          const void * k1 = (const void *) malloc(_len_k10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_k10; _i0++) {
            k1[_i0] = 0;
          }
          int _len_k20 = 65025;
          const void * k2 = (const void *) malloc(_len_k20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_k20; _i0++) {
            k2[_i0] = 0;
          }
          int benchRet = rangetr_cmp(h,k1,k2);
          printf("%d\n", benchRet); 
          free(h);
          free(k1);
          free(k2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_h0 = 100;
          struct hashtab * h = (struct hashtab *) malloc(_len_h0*sizeof(struct hashtab));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_k10 = 100;
          const void * k1 = (const void *) malloc(_len_k10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_k10; _i0++) {
            k1[_i0] = 0;
          }
          int _len_k20 = 100;
          const void * k2 = (const void *) malloc(_len_k20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_k20; _i0++) {
            k2[_i0] = 0;
          }
          int benchRet = rangetr_cmp(h,k1,k2);
          printf("%d\n", benchRet); 
          free(h);
          free(k1);
          free(k2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
