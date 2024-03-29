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
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int start; int end; scalar_t__ size; } ;
typedef  TYPE_1__ jsmntok_t ;
struct TYPE_7__ {scalar_t__ toknext; } ;
typedef  TYPE_2__ jsmn_parser ;

/* Variables and functions */

__attribute__((used)) static jsmntok_t *jsmn_alloc_token(jsmn_parser *parser,
				   jsmntok_t *tokens, size_t num_tokens)
{
	jsmntok_t *tok;

	if ((unsigned)parser->toknext >= num_tokens)
		return NULL;
	tok = &tokens[parser->toknext++];
	tok->start = tok->end = -1;
	tok->size = 0;
	return tok;
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
          unsigned long num_tokens = 100;
          int _len_parser0 = 1;
          struct TYPE_7__ * parser = (struct TYPE_7__ *) malloc(_len_parser0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_parser0; _i0++) {
            parser[_i0].toknext = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tokens0 = 1;
          struct TYPE_6__ * tokens = (struct TYPE_6__ *) malloc(_len_tokens0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_tokens0; _i0++) {
            tokens[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        tokens[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
        tokens[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_6__ * benchRet = jsmn_alloc_token(parser,tokens,num_tokens);
          printf("%d\n", (*benchRet).start);
          printf("%d\n", (*benchRet).end);
          printf("%ld\n", (*benchRet).size);
          free(parser);
          free(tokens);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long num_tokens = 255;
          int _len_parser0 = 65025;
          struct TYPE_7__ * parser = (struct TYPE_7__ *) malloc(_len_parser0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_parser0; _i0++) {
            parser[_i0].toknext = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tokens0 = 65025;
          struct TYPE_6__ * tokens = (struct TYPE_6__ *) malloc(_len_tokens0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_tokens0; _i0++) {
            tokens[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        tokens[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
        tokens[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_6__ * benchRet = jsmn_alloc_token(parser,tokens,num_tokens);
          printf("%d\n", (*benchRet).start);
          printf("%d\n", (*benchRet).end);
          printf("%ld\n", (*benchRet).size);
          free(parser);
          free(tokens);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long num_tokens = 10;
          int _len_parser0 = 100;
          struct TYPE_7__ * parser = (struct TYPE_7__ *) malloc(_len_parser0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_parser0; _i0++) {
            parser[_i0].toknext = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tokens0 = 100;
          struct TYPE_6__ * tokens = (struct TYPE_6__ *) malloc(_len_tokens0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_tokens0; _i0++) {
            tokens[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        tokens[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
        tokens[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_6__ * benchRet = jsmn_alloc_token(parser,tokens,num_tokens);
          printf("%d\n", (*benchRet).start);
          printf("%d\n", (*benchRet).end);
          printf("%ld\n", (*benchRet).size);
          free(parser);
          free(tokens);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
