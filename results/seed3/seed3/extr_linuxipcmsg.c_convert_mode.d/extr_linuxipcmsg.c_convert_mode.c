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

/* Variables and functions */
 long LONG_MAX ; 
 long LONG_MIN ; 
 int MSG_COPY ; 
 int MSG_EXCEPT ; 
 int SEARCH_ANY ; 
 int SEARCH_EQUAL ; 
 int SEARCH_LESSEQUAL ; 
 int SEARCH_NOTEQUAL ; 
 int SEARCH_NUMBER ; 

__attribute__((used)) static inline int convert_mode(long *msgtyp, int msgflg)
{
	if (msgflg & MSG_COPY)
		return SEARCH_NUMBER;
	/*
	 *  find message of correct type.
	 *  msgtyp = 0 => get first.
	 *  msgtyp > 0 => get first message of matching type.
	 *  msgtyp < 0 => get message with least type must be < abs(msgtype).
	 */
	if (*msgtyp == 0)
		return SEARCH_ANY;
	if (*msgtyp < 0) {
		if (*msgtyp == LONG_MIN) /* -LONG_MIN is undefined */
			*msgtyp = LONG_MAX;
		else
			*msgtyp = -*msgtyp;
		return SEARCH_LESSEQUAL;
	}
	if (msgflg & MSG_EXCEPT)
		return SEARCH_NOTEQUAL;
	return SEARCH_EQUAL;
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
          int msgflg = 100;
          int _len_msgtyp0 = 1;
          long * msgtyp = (long *) malloc(_len_msgtyp0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_msgtyp0; _i0++) {
            msgtyp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = convert_mode(msgtyp,msgflg);
          printf("%d\n", benchRet); 
          free(msgtyp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int msgflg = 255;
          int _len_msgtyp0 = 65025;
          long * msgtyp = (long *) malloc(_len_msgtyp0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_msgtyp0; _i0++) {
            msgtyp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = convert_mode(msgtyp,msgflg);
          printf("%d\n", benchRet); 
          free(msgtyp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int msgflg = 10;
          int _len_msgtyp0 = 100;
          long * msgtyp = (long *) malloc(_len_msgtyp0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_msgtyp0; _i0++) {
            msgtyp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = convert_mode(msgtyp,msgflg);
          printf("%d\n", benchRet); 
          free(msgtyp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
