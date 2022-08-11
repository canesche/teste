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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int verbose; int line; scalar_t__ col; scalar_t__ pos; scalar_t__ len; int /*<<< orphan*/ * buf; } ;
typedef  TYPE_1__ parser_t ;

/* Variables and functions */

__attribute__((used)) static void
parser_init(parser_t *parser, bool verbose) {
	parser->verbose = verbose;
	parser->buf = NULL;
	parser->len = 0;
	parser->pos = 0;
	parser->line = 1;
	parser->col = 0;
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
          int verbose = 100;
          int _len_parser0 = 1;
          struct TYPE_3__ * parser = (struct TYPE_3__ *) malloc(_len_parser0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_parser0; _i0++) {
            parser[_i0].verbose = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].line = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].col = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_parser__i0__buf0 = 1;
          parser[_i0].buf = (int *) malloc(_len_parser__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_parser__i0__buf0; _j0++) {
            parser[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          parser_init(parser,verbose);
          for(int _aux = 0; _aux < _len_parser0; _aux++) {
          free(parser[_aux].buf);
          }
          free(parser);
        
        break;
    }
    // big-arr
    case 1:
    {
          int verbose = 255;
          int _len_parser0 = 65025;
          struct TYPE_3__ * parser = (struct TYPE_3__ *) malloc(_len_parser0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_parser0; _i0++) {
            parser[_i0].verbose = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].line = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].col = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_parser__i0__buf0 = 1;
          parser[_i0].buf = (int *) malloc(_len_parser__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_parser__i0__buf0; _j0++) {
            parser[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          parser_init(parser,verbose);
          for(int _aux = 0; _aux < _len_parser0; _aux++) {
          free(parser[_aux].buf);
          }
          free(parser);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int verbose = 10;
          int _len_parser0 = 100;
          struct TYPE_3__ * parser = (struct TYPE_3__ *) malloc(_len_parser0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_parser0; _i0++) {
            parser[_i0].verbose = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].line = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].col = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_parser__i0__buf0 = 1;
          parser[_i0].buf = (int *) malloc(_len_parser__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_parser__i0__buf0; _j0++) {
            parser[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          parser_init(parser,verbose);
          for(int _aux = 0; _aux < _len_parser0; _aux++) {
          free(parser[_aux].buf);
          }
          free(parser);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
