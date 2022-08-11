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
struct advert {int ad_id; struct advert* hash_next; } ;

/* Variables and functions */
 int AD_TABLE_SIZE ; 
 struct advert** Ads ; 

__attribute__((used)) static inline struct advert *get_ad (int ad_id) {
  struct advert *A;
  for (A = Ads[ad_id & (AD_TABLE_SIZE - 1)]; A && A->ad_id != ad_id; A = A->hash_next);
  return A;
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
          int ad_id = 100;
          struct advert * benchRet = get_ad(ad_id);
          printf("%d\n", (*benchRet).ad_id);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ad_id = 255;
          struct advert * benchRet = get_ad(ad_id);
          printf("%d\n", (*benchRet).ad_id);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ad_id = 10;
          struct advert * benchRet = get_ad(ad_id);
          printf("%d\n", (*benchRet).ad_id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
