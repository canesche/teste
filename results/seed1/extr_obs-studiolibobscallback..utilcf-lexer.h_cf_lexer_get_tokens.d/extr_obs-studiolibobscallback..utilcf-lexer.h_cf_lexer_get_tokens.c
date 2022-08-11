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
struct cf_token {int dummy; } ;
struct TYPE_2__ {struct cf_token* array; } ;
struct cf_lexer {TYPE_1__ tokens; } ;

/* Variables and functions */

__attribute__((used)) static inline struct cf_token *cf_lexer_get_tokens(struct cf_lexer *lex)
{
	return lex->tokens.array;
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
          int _len_lex0 = 1;
          struct cf_lexer * lex = (struct cf_lexer *) malloc(_len_lex0*sizeof(struct cf_lexer));
          for(int _i0 = 0; _i0 < _len_lex0; _i0++) {
              int _len_lex__i0__tokens_array0 = 1;
          lex[_i0].tokens.array = (struct cf_token *) malloc(_len_lex__i0__tokens_array0*sizeof(struct cf_token));
          for(int _j0 = 0; _j0 < _len_lex__i0__tokens_array0; _j0++) {
            lex[_i0].tokens.array->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct cf_token * benchRet = cf_lexer_get_tokens(lex);
          printf("%d\n", (*benchRet).dummy);
          free(lex);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_lex0 = 65025;
          struct cf_lexer * lex = (struct cf_lexer *) malloc(_len_lex0*sizeof(struct cf_lexer));
          for(int _i0 = 0; _i0 < _len_lex0; _i0++) {
              int _len_lex__i0__tokens_array0 = 1;
          lex[_i0].tokens.array = (struct cf_token *) malloc(_len_lex__i0__tokens_array0*sizeof(struct cf_token));
          for(int _j0 = 0; _j0 < _len_lex__i0__tokens_array0; _j0++) {
            lex[_i0].tokens.array->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct cf_token * benchRet = cf_lexer_get_tokens(lex);
          printf("%d\n", (*benchRet).dummy);
          free(lex);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_lex0 = 100;
          struct cf_lexer * lex = (struct cf_lexer *) malloc(_len_lex0*sizeof(struct cf_lexer));
          for(int _i0 = 0; _i0 < _len_lex0; _i0++) {
              int _len_lex__i0__tokens_array0 = 1;
          lex[_i0].tokens.array = (struct cf_token *) malloc(_len_lex__i0__tokens_array0*sizeof(struct cf_token));
          for(int _j0 = 0; _j0 < _len_lex__i0__tokens_array0; _j0++) {
            lex[_i0].tokens.array->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct cf_token * benchRet = cf_lexer_get_tokens(lex);
          printf("%d\n", (*benchRet).dummy);
          free(lex);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
