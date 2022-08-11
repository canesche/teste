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
typedef  scalar_t__ yyscan_t ;
struct yyguts_t {int /*<<< orphan*/ * yy_start_stack; scalar_t__ yy_start_stack_depth; scalar_t__ yy_start_stack_ptr; scalar_t__ yy_start; scalar_t__ yy_init; int /*<<< orphan*/ * yy_c_buf_p; scalar_t__ yy_buffer_stack_max; scalar_t__ yy_buffer_stack_top; int /*<<< orphan*/ * yy_buffer_stack; } ;

/* Variables and functions */
 int /*<<< orphan*/ * yyin ; 
 int /*<<< orphan*/ * yyout ; 

__attribute__((used)) static int yy_init_globals (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    /* Initialization is the same as for the non-reentrant scanner.
     * This function is called from yylex_destroy(), so don't allocate here.
     */

    yyg->yy_buffer_stack = NULL;
    yyg->yy_buffer_stack_top = 0;
    yyg->yy_buffer_stack_max = 0;
    yyg->yy_c_buf_p = NULL;
    yyg->yy_init = 0;
    yyg->yy_start = 0;

    yyg->yy_start_stack_ptr = 0;
    yyg->yy_start_stack_depth = 0;
    yyg->yy_start_stack =  NULL;

/* Defined in main.c */
#ifdef YY_STDINIT
    yyin = stdin;
    yyout = stdout;
#else
    yyin = NULL;
    yyout = NULL;
#endif

    /* For future reference: Set errno on error, since we are called by
     * yylex_init()
     */
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
          long yyscanner = 100;
          int benchRet = yy_init_globals(yyscanner);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long yyscanner = 255;
          int benchRet = yy_init_globals(yyscanner);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long yyscanner = 10;
          int benchRet = yy_init_globals(yyscanner);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
