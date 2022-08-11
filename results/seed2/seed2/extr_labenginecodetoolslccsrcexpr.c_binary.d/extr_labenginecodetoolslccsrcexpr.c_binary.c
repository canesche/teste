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
typedef  struct TYPE_14__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_1__* Type ;
struct TYPE_14__ {scalar_t__ size; } ;

/* Variables and functions */
 TYPE_1__* doubletype ; 
 TYPE_1__* floattype ; 
 TYPE_1__* inttype ; 
 TYPE_1__* longdouble ; 
 TYPE_1__* longlong ; 
 TYPE_1__* longtype ; 
 TYPE_1__* unsignedlong ; 
 TYPE_1__* unsignedlonglong ; 
 TYPE_1__* unsignedtype ; 

Type binary(Type xty, Type yty) {
#define xx(t) if (xty == t || yty == t) return t
	xx(longdouble);
	xx(doubletype);
	xx(floattype);
	xx(unsignedlonglong);
	xx(longlong);
	xx(unsignedlong);
	if ((xty == longtype     && yty == unsignedtype)
	||  (xty == unsignedtype && yty == longtype)) {
		if (longtype->size > unsignedtype->size)
			return longtype;
		else
			return unsignedlong;
	}
	xx(longtype);
	xx(unsignedtype);
	return inttype;
#undef xx
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
          int _len_xty0 = 1;
          struct TYPE_14__ * xty = (struct TYPE_14__ *) malloc(_len_xty0*sizeof(struct TYPE_14__));
          for(int _i0 = 0; _i0 < _len_xty0; _i0++) {
            xty[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_yty0 = 1;
          struct TYPE_14__ * yty = (struct TYPE_14__ *) malloc(_len_yty0*sizeof(struct TYPE_14__));
          for(int _i0 = 0; _i0 < _len_yty0; _i0++) {
            yty[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_14__ * benchRet = binary(xty,yty);
          printf("%ld\n", (*benchRet).size);
          free(xty);
          free(yty);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_xty0 = 65025;
          struct TYPE_14__ * xty = (struct TYPE_14__ *) malloc(_len_xty0*sizeof(struct TYPE_14__));
          for(int _i0 = 0; _i0 < _len_xty0; _i0++) {
            xty[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_yty0 = 65025;
          struct TYPE_14__ * yty = (struct TYPE_14__ *) malloc(_len_yty0*sizeof(struct TYPE_14__));
          for(int _i0 = 0; _i0 < _len_yty0; _i0++) {
            yty[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_14__ * benchRet = binary(xty,yty);
          printf("%ld\n", (*benchRet).size);
          free(xty);
          free(yty);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_xty0 = 100;
          struct TYPE_14__ * xty = (struct TYPE_14__ *) malloc(_len_xty0*sizeof(struct TYPE_14__));
          for(int _i0 = 0; _i0 < _len_xty0; _i0++) {
            xty[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_yty0 = 100;
          struct TYPE_14__ * yty = (struct TYPE_14__ *) malloc(_len_yty0*sizeof(struct TYPE_14__));
          for(int _i0 = 0; _i0 < _len_yty0; _i0++) {
            yty[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_14__ * benchRet = binary(xty,yty);
          printf("%ld\n", (*benchRet).size);
          free(xty);
          free(yty);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
