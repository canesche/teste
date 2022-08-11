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
typedef  scalar_t__ timestamp_t ;
struct rev_name {int from_tag; scalar_t__ taggerdate; int distance; } ;

/* Variables and functions */

__attribute__((used)) static int is_better_name(struct rev_name *name,
			  const char *tip_name,
			  timestamp_t taggerdate,
			  int generation,
			  int distance,
			  int from_tag)
{
	/*
	 * When comparing names based on tags, prefer names
	 * based on the older tag, even if it is farther away.
	 */
	if (from_tag && name->from_tag)
		return (name->taggerdate > taggerdate ||
			(name->taggerdate == taggerdate &&
			 name->distance > distance));

	/*
	 * We know that at least one of them is a non-tag at this point.
	 * favor a tag over a non-tag.
	 */
	if (name->from_tag != from_tag)
		return from_tag;

	/*
	 * We are now looking at two non-tags.  Tiebreak to favor
	 * shorter hops.
	 */
	if (name->distance != distance)
		return name->distance > distance;

	/* ... or tiebreak to favor older date */
	if (name->taggerdate != taggerdate)
		return name->taggerdate > taggerdate;

	/* keep the current one if we cannot decide */
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
          long taggerdate = 100;
          int generation = 100;
          int distance = 100;
          int from_tag = 100;
          int _len_name0 = 1;
          struct rev_name * name = (struct rev_name *) malloc(_len_name0*sizeof(struct rev_name));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0].from_tag = ((-2 * (next_i()%2)) + 1) * next_i();
        name[_i0].taggerdate = ((-2 * (next_i()%2)) + 1) * next_i();
        name[_i0].distance = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tip_name0 = 1;
          const char * tip_name = (const char *) malloc(_len_tip_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_tip_name0; _i0++) {
            tip_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_better_name(name,tip_name,taggerdate,generation,distance,from_tag);
          printf("%d\n", benchRet); 
          free(name);
          free(tip_name);
        
        break;
    }
    // big-arr
    case 1:
    {
          long taggerdate = 255;
          int generation = 255;
          int distance = 255;
          int from_tag = 255;
          int _len_name0 = 65025;
          struct rev_name * name = (struct rev_name *) malloc(_len_name0*sizeof(struct rev_name));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0].from_tag = ((-2 * (next_i()%2)) + 1) * next_i();
        name[_i0].taggerdate = ((-2 * (next_i()%2)) + 1) * next_i();
        name[_i0].distance = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tip_name0 = 65025;
          const char * tip_name = (const char *) malloc(_len_tip_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_tip_name0; _i0++) {
            tip_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_better_name(name,tip_name,taggerdate,generation,distance,from_tag);
          printf("%d\n", benchRet); 
          free(name);
          free(tip_name);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long taggerdate = 10;
          int generation = 10;
          int distance = 10;
          int from_tag = 10;
          int _len_name0 = 100;
          struct rev_name * name = (struct rev_name *) malloc(_len_name0*sizeof(struct rev_name));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0].from_tag = ((-2 * (next_i()%2)) + 1) * next_i();
        name[_i0].taggerdate = ((-2 * (next_i()%2)) + 1) * next_i();
        name[_i0].distance = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tip_name0 = 100;
          const char * tip_name = (const char *) malloc(_len_tip_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_tip_name0; _i0++) {
            tip_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_better_name(name,tip_name,taggerdate,generation,distance,from_tag);
          printf("%d\n", benchRet); 
          free(name);
          free(tip_name);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
