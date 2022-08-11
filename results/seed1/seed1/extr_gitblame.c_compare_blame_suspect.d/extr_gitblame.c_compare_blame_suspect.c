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
struct blame_entry {scalar_t__ suspect; scalar_t__ s_lno; } ;

/* Variables and functions */

__attribute__((used)) static int compare_blame_suspect(const void *p1, const void *p2)
{
	const struct blame_entry *s1 = p1, *s2 = p2;
	/*
	 * to allow for collating suspects, we sort according to the
	 * respective pointer value as the primary sorting criterion.
	 * The actual relation is pretty unimportant as long as it
	 * establishes a total order.  Comparing as integers gives us
	 * that.
	 */
	if (s1->suspect != s2->suspect)
		return (intptr_t)s1->suspect > (intptr_t)s2->suspect ? 1 : -1;
	if (s1->s_lno == s2->s_lno)
		return 0;
	return s1->s_lno > s2->s_lno ? 1 : -1;
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
          int benchRet = compare_blame_suspect(p1,p2);
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
          int benchRet = compare_blame_suspect(p1,p2);
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
          int benchRet = compare_blame_suspect(p1,p2);
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
