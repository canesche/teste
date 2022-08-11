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
typedef  size_t yy_state_type ;
typedef  size_t YY_CHAR ;

/* Variables and functions */
 scalar_t__* yy_accept ; 
 size_t* yy_base ; 
 char* yy_c_buf_p ; 
 size_t* yy_chk ; 
 scalar_t__* yy_def ; 
 char* yy_last_accepting_cpos ; 
 size_t yy_last_accepting_state ; 
 size_t* yy_meta ; 
 size_t* yy_nxt ; 

__attribute__((used)) static yy_state_type yy_try_NUL_trans  (yy_state_type yy_current_state )
{
	register int yy_is_jam;
    	register char *yy_cp = (yy_c_buf_p);

	register YY_CHAR yy_c = 1;
	if ( yy_accept[yy_current_state] )
		{
		(yy_last_accepting_state) = yy_current_state;
		(yy_last_accepting_cpos) = yy_cp;
		}
	while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
		{
		yy_current_state = (int) yy_def[yy_current_state];
		if ( yy_current_state >= 210 )
			yy_c = yy_meta[(unsigned int) yy_c];
		}
	yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int) yy_c];
	yy_is_jam = (yy_current_state == 209);

		return yy_is_jam ? 0 : yy_current_state;
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
          unsigned long yy_current_state = 100;
          unsigned long benchRet = yy_try_NUL_trans(yy_current_state);
          printf("%lu\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long yy_current_state = 255;
          unsigned long benchRet = yy_try_NUL_trans(yy_current_state);
          printf("%lu\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long yy_current_state = 10;
          unsigned long benchRet = yy_try_NUL_trans(yy_current_state);
          printf("%lu\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
