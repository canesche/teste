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
struct cf_token {scalar_t__ type; } ;

/* Variables and functions */
 scalar_t__ CFTOKEN_NEWLINE ; 
 scalar_t__ CFTOKEN_NONE ; 
 scalar_t__ CFTOKEN_SPACETAB ; 

__attribute__((used)) static inline bool next_token(struct cf_token **p_cur_token, bool preprocessor)
{
	struct cf_token *cur_token = *p_cur_token;

	if (cur_token->type != CFTOKEN_NONE)
		cur_token++;

	/* if preprocessor, stop at newline */
	while (cur_token->type == CFTOKEN_SPACETAB && 
	       (preprocessor || cur_token->type == CFTOKEN_NEWLINE))
		cur_token++;

	*p_cur_token = cur_token;
	return cur_token->type != CFTOKEN_NONE;
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
          int preprocessor = 100;
          int _len_p_cur_token0 = 1;
          struct cf_token ** p_cur_token = (struct cf_token **) malloc(_len_p_cur_token0*sizeof(struct cf_token *));
          for(int _i0 = 0; _i0 < _len_p_cur_token0; _i0++) {
            int _len_p_cur_token1 = 1;
            p_cur_token[_i0] = (struct cf_token *) malloc(_len_p_cur_token1*sizeof(struct cf_token));
            for(int _i1 = 0; _i1 < _len_p_cur_token1; _i1++) {
              p_cur_token[_i0][_i1].type = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = next_token(p_cur_token,preprocessor);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_p_cur_token0; i1++) {
            int _len_p_cur_token1 = 1;
              free(p_cur_token[i1]);
          }
          free(p_cur_token);
        
        break;
    }
    // big-arr
    case 1:
    {
          int preprocessor = 255;
          int _len_p_cur_token0 = 65025;
          struct cf_token ** p_cur_token = (struct cf_token **) malloc(_len_p_cur_token0*sizeof(struct cf_token *));
          for(int _i0 = 0; _i0 < _len_p_cur_token0; _i0++) {
            int _len_p_cur_token1 = 1;
            p_cur_token[_i0] = (struct cf_token *) malloc(_len_p_cur_token1*sizeof(struct cf_token));
            for(int _i1 = 0; _i1 < _len_p_cur_token1; _i1++) {
              p_cur_token[_i0][_i1].type = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = next_token(p_cur_token,preprocessor);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_p_cur_token0; i1++) {
            int _len_p_cur_token1 = 1;
              free(p_cur_token[i1]);
          }
          free(p_cur_token);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int preprocessor = 10;
          int _len_p_cur_token0 = 100;
          struct cf_token ** p_cur_token = (struct cf_token **) malloc(_len_p_cur_token0*sizeof(struct cf_token *));
          for(int _i0 = 0; _i0 < _len_p_cur_token0; _i0++) {
            int _len_p_cur_token1 = 1;
            p_cur_token[_i0] = (struct cf_token *) malloc(_len_p_cur_token1*sizeof(struct cf_token));
            for(int _i1 = 0; _i1 < _len_p_cur_token1; _i1++) {
              p_cur_token[_i0][_i1].type = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = next_token(p_cur_token,preprocessor);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_p_cur_token0; i1++) {
            int _len_p_cur_token1 = 1;
              free(p_cur_token[i1]);
          }
          free(p_cur_token);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
