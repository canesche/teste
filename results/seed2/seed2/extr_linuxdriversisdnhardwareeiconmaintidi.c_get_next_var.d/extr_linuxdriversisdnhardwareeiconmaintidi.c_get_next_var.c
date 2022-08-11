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
typedef  int /*<<< orphan*/  diva_man_var_header_t ;
typedef  scalar_t__ byte ;

/* Variables and functions */
 scalar_t__ ESC ; 

__attribute__((used)) static diva_man_var_header_t *get_next_var(diva_man_var_header_t *pVar) {
	byte *msg = (byte *)pVar;
	byte *start;
	int msg_length;

	if (*msg != ESC) return NULL;

	start = msg + 2;
	msg_length = *(msg + 1);
	msg = (start + msg_length);

	if (*msg != ESC) return NULL;

	return ((diva_man_var_header_t *)msg);
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
          int _len_pVar0 = 1;
          int * pVar = (int *) malloc(_len_pVar0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pVar0; _i0++) {
            pVar[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = get_next_var(pVar);
          printf("%d\n", (*benchRet)); 
          free(pVar);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pVar0 = 65025;
          int * pVar = (int *) malloc(_len_pVar0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pVar0; _i0++) {
            pVar[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = get_next_var(pVar);
          printf("%d\n", (*benchRet)); 
          free(pVar);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pVar0 = 100;
          int * pVar = (int *) malloc(_len_pVar0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pVar0; _i0++) {
            pVar[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = get_next_var(pVar);
          printf("%d\n", (*benchRet)); 
          free(pVar);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
