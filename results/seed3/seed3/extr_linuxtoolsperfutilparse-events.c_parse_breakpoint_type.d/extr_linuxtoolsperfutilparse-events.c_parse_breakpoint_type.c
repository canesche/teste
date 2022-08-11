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
struct perf_event_attr {int bp_type; } ;

/* Variables and functions */
 int EINVAL ; 
 int HW_BREAKPOINT_R ; 
 int HW_BREAKPOINT_W ; 
 int HW_BREAKPOINT_X ; 

__attribute__((used)) static int
parse_breakpoint_type(const char *type, struct perf_event_attr *attr)
{
	int i;

	for (i = 0; i < 3; i++) {
		if (!type || !type[i])
			break;

#define CHECK_SET_TYPE(bit)		\
do {					\
	if (attr->bp_type & bit)	\
		return -EINVAL;		\
	else				\
		attr->bp_type |= bit;	\
} while (0)

		switch (type[i]) {
		case 'r':
			CHECK_SET_TYPE(HW_BREAKPOINT_R);
			break;
		case 'w':
			CHECK_SET_TYPE(HW_BREAKPOINT_W);
			break;
		case 'x':
			CHECK_SET_TYPE(HW_BREAKPOINT_X);
			break;
		default:
			return -EINVAL;
		}
	}

#undef CHECK_SET_TYPE

	if (!attr->bp_type) /* Default */
		attr->bp_type = HW_BREAKPOINT_R | HW_BREAKPOINT_W;

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
          int _len_type0 = 1;
          const char * type = (const char *) malloc(_len_type0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_attr0 = 1;
          struct perf_event_attr * attr = (struct perf_event_attr *) malloc(_len_attr0*sizeof(struct perf_event_attr));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            attr[_i0].bp_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = parse_breakpoint_type(type,attr);
          printf("%d\n", benchRet); 
          free(type);
          free(attr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_type0 = 65025;
          const char * type = (const char *) malloc(_len_type0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_attr0 = 65025;
          struct perf_event_attr * attr = (struct perf_event_attr *) malloc(_len_attr0*sizeof(struct perf_event_attr));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            attr[_i0].bp_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = parse_breakpoint_type(type,attr);
          printf("%d\n", benchRet); 
          free(type);
          free(attr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_type0 = 100;
          const char * type = (const char *) malloc(_len_type0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_attr0 = 100;
          struct perf_event_attr * attr = (struct perf_event_attr *) malloc(_len_attr0*sizeof(struct perf_event_attr));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            attr[_i0].bp_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = parse_breakpoint_type(type,attr);
          printf("%d\n", benchRet); 
          free(type);
          free(attr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
