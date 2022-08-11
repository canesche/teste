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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int match_size; } ;
struct xt_entry_match {TYPE_1__ u; } ;
typedef  scalar_t__ pos ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int xt_check_entry_match(const char *match, const char *target,
				const size_t alignment)
{
	const struct xt_entry_match *pos;
	int length = target - match;

	if (length == 0) /* no matches */
		return 0;

	pos = (struct xt_entry_match *)match;
	do {
		if ((unsigned long)pos % alignment)
			return -EINVAL;

		if (length < (int)sizeof(struct xt_entry_match))
			return -EINVAL;

		if (pos->u.match_size < sizeof(struct xt_entry_match))
			return -EINVAL;

		if (pos->u.match_size > length)
			return -EINVAL;

		length -= pos->u.match_size;
		pos = ((void *)((char *)(pos) + (pos)->u.match_size));
	} while (length > 0);

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
          const unsigned long alignment = 100;
          int _len_match0 = 1;
          const char * match = (const char *) malloc(_len_match0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_match0; _i0++) {
            match[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_target0 = 1;
          const char * target = (const char *) malloc(_len_target0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xt_check_entry_match(match,target,alignment);
          printf("%d\n", benchRet); 
          free(match);
          free(target);
        
        break;
    }
    // big-arr
    case 1:
    {
          const unsigned long alignment = 255;
          int _len_match0 = 65025;
          const char * match = (const char *) malloc(_len_match0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_match0; _i0++) {
            match[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_target0 = 65025;
          const char * target = (const char *) malloc(_len_target0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xt_check_entry_match(match,target,alignment);
          printf("%d\n", benchRet); 
          free(match);
          free(target);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const unsigned long alignment = 10;
          int _len_match0 = 100;
          const char * match = (const char *) malloc(_len_match0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_match0; _i0++) {
            match[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_target0 = 100;
          const char * target = (const char *) malloc(_len_target0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xt_check_entry_match(match,target,alignment);
          printf("%d\n", benchRet); 
          free(match);
          free(target);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
