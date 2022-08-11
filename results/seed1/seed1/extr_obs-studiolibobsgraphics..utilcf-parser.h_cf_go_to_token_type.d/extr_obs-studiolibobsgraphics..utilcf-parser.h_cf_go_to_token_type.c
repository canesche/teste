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
struct cf_parser {TYPE_1__* cur_token; } ;
typedef  enum cf_token_type { ____Placeholder_cf_token_type } cf_token_type ;
struct TYPE_2__ {scalar_t__ type; } ;

/* Variables and functions */
 scalar_t__ CFTOKEN_NONE ; 

__attribute__((used)) static inline bool cf_go_to_token_type(struct cf_parser *p,
		enum cf_token_type type)
{
	while (p->cur_token->type != CFTOKEN_NONE &&
	       p->cur_token->type != type)
		p->cur_token++;

	return p->cur_token->type != CFTOKEN_NONE;
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
          enum cf_token_type type = 0;
          int _len_p0 = 1;
          struct cf_parser * p = (struct cf_parser *) malloc(_len_p0*sizeof(struct cf_parser));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__cur_token0 = 1;
          p[_i0].cur_token = (struct TYPE_2__ *) malloc(_len_p__i0__cur_token0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_p__i0__cur_token0; _j0++) {
            p[_i0].cur_token->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = cf_go_to_token_type(p,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].cur_token);
          }
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum cf_token_type type = 0;
          int _len_p0 = 65025;
          struct cf_parser * p = (struct cf_parser *) malloc(_len_p0*sizeof(struct cf_parser));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__cur_token0 = 1;
          p[_i0].cur_token = (struct TYPE_2__ *) malloc(_len_p__i0__cur_token0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_p__i0__cur_token0; _j0++) {
            p[_i0].cur_token->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = cf_go_to_token_type(p,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].cur_token);
          }
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum cf_token_type type = 0;
          int _len_p0 = 100;
          struct cf_parser * p = (struct cf_parser *) malloc(_len_p0*sizeof(struct cf_parser));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__cur_token0 = 1;
          p[_i0].cur_token = (struct TYPE_2__ *) malloc(_len_p__i0__cur_token0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_p__i0__cur_token0; _j0++) {
            p[_i0].cur_token->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = cf_go_to_token_type(p,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].cur_token);
          }
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
