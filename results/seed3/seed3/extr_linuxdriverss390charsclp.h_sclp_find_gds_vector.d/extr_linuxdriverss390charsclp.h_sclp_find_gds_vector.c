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
typedef  scalar_t__ u16 ;
struct gds_vector {int length; scalar_t__ gds_id; } ;

/* Variables and functions */

__attribute__((used)) static inline struct gds_vector *
sclp_find_gds_vector(void *start, void *end, u16 id)
{
	struct gds_vector *v;

	for (v = start; (void *) v < end; v = (void *) v + v->length)
		if (v->gds_id == id)
			return v;
	return NULL;
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
          long id = 100;
          void * start;
          void * end;
          struct gds_vector * benchRet = sclp_find_gds_vector(start,end,id);
          printf("%d\n", (*benchRet).length);
          printf("%ld\n", (*benchRet).gds_id);
        
        break;
    }
    // big-arr
    case 1:
    {
          long id = 255;
          void * start;
          void * end;
          struct gds_vector * benchRet = sclp_find_gds_vector(start,end,id);
          printf("%d\n", (*benchRet).length);
          printf("%ld\n", (*benchRet).gds_id);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long id = 10;
          void * start;
          void * end;
          struct gds_vector * benchRet = sclp_find_gds_vector(start,end,id);
          printf("%d\n", (*benchRet).length);
          printf("%ld\n", (*benchRet).gds_id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
