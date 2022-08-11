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
struct hwdec_info {scalar_t__ auto_pos; scalar_t__ copying; scalar_t__ rank; } ;

/* Variables and functions */
 scalar_t__ INT_MAX ; 

__attribute__((used)) static int hwdec_compare(const void *p1, const void *p2)
{
    struct hwdec_info *h1 = (void *)p1;
    struct hwdec_info *h2 = (void *)p2;

    if (h1 == h2)
        return 0;

    // Strictly put non-preferred hwdecs to the end of the list.
    if ((h1->auto_pos == INT_MAX) != (h2->auto_pos == INT_MAX))
        return h1->auto_pos == INT_MAX ? 1 : -1;
    // List non-copying entries first, so --hwdec=auto takes them.
    if (h1->copying != h2->copying)
        return h1->copying ? 1 : -1;
    // Order by autoprobe preferrence order.
    if (h1->auto_pos != h2->auto_pos)
        return h1->auto_pos > h2->auto_pos ? 1 : -1;
    // Fallback sort order to make sorting stable.
    return h1->rank > h2->rank ? 1 :-1;
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
          int _len_p10 = 1;
          const void * p1 = (const void *) malloc(_len_p10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_p10; _i0++) {
            p1[_i0] = 0;
          }
          int _len_p20 = 1;
          const void * p2 = (const void *) malloc(_len_p20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_p20; _i0++) {
            p2[_i0] = 0;
          }
          int benchRet = hwdec_compare(p1,p2);
          printf("%d\n", benchRet); 
          free(p1);
          free(p2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_p10 = 65025;
          const void * p1 = (const void *) malloc(_len_p10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_p10; _i0++) {
            p1[_i0] = 0;
          }
          int _len_p20 = 65025;
          const void * p2 = (const void *) malloc(_len_p20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_p20; _i0++) {
            p2[_i0] = 0;
          }
          int benchRet = hwdec_compare(p1,p2);
          printf("%d\n", benchRet); 
          free(p1);
          free(p2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_p10 = 100;
          const void * p1 = (const void *) malloc(_len_p10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_p10; _i0++) {
            p1[_i0] = 0;
          }
          int _len_p20 = 100;
          const void * p2 = (const void *) malloc(_len_p20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_p20; _i0++) {
            p2[_i0] = 0;
          }
          int benchRet = hwdec_compare(p1,p2);
          printf("%d\n", benchRet); 
          free(p1);
          free(p2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
