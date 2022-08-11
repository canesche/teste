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
struct parser {int const* start; int* token; int token_len; } ;
typedef  scalar_t__ ULONG ;
typedef  scalar_t__ SIZE_T ;
typedef  int CHAR ;

/* Variables and functions */
 scalar_t__ MAX_FIELD_LEN ; 

__attribute__((used)) static
int
push_token(
    struct parser *parser,
    const CHAR *pos)
{
    SIZE_T len = pos - parser->start;
    const CHAR *src = parser->start;
    CHAR *dst = parser->token + parser->token_len;

    if (len > MAX_FIELD_LEN - parser->token_len)
        len = MAX_FIELD_LEN - parser->token_len;

    parser->token_len += (ULONG)len;
    for ( ; len > 0; len--, dst++, src++)
        *dst = *src ? (CHAR)*src : L' ';
    *dst = 0;
    parser->start = pos;

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
          int _len_parser0 = 1;
          struct parser * parser = (struct parser *) malloc(_len_parser0*sizeof(struct parser));
          for(int _i0 = 0; _i0 < _len_parser0; _i0++) {
              int _len_parser__i0__start0 = 1;
          parser[_i0].start = (const int *) malloc(_len_parser__i0__start0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_parser__i0__start0; _j0++) {
            parser[_i0].start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parser__i0__token0 = 1;
          parser[_i0].token = (int *) malloc(_len_parser__i0__token0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_parser__i0__token0; _j0++) {
            parser[_i0].token[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        parser[_i0].token_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pos0 = 1;
          const int * pos = (const int *) malloc(_len_pos0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pos0; _i0++) {
            pos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = push_token(parser,pos);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_parser0; _aux++) {
          free(parser[_aux].start);
          }
          for(int _aux = 0; _aux < _len_parser0; _aux++) {
          free(parser[_aux].token);
          }
          free(parser);
          free(pos);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_parser0 = 65025;
          struct parser * parser = (struct parser *) malloc(_len_parser0*sizeof(struct parser));
          for(int _i0 = 0; _i0 < _len_parser0; _i0++) {
              int _len_parser__i0__start0 = 1;
          parser[_i0].start = (const int *) malloc(_len_parser__i0__start0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_parser__i0__start0; _j0++) {
            parser[_i0].start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parser__i0__token0 = 1;
          parser[_i0].token = (int *) malloc(_len_parser__i0__token0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_parser__i0__token0; _j0++) {
            parser[_i0].token[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        parser[_i0].token_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pos0 = 65025;
          const int * pos = (const int *) malloc(_len_pos0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pos0; _i0++) {
            pos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = push_token(parser,pos);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_parser0; _aux++) {
          free(parser[_aux].start);
          }
          for(int _aux = 0; _aux < _len_parser0; _aux++) {
          free(parser[_aux].token);
          }
          free(parser);
          free(pos);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_parser0 = 100;
          struct parser * parser = (struct parser *) malloc(_len_parser0*sizeof(struct parser));
          for(int _i0 = 0; _i0 < _len_parser0; _i0++) {
              int _len_parser__i0__start0 = 1;
          parser[_i0].start = (const int *) malloc(_len_parser__i0__start0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_parser__i0__start0; _j0++) {
            parser[_i0].start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parser__i0__token0 = 1;
          parser[_i0].token = (int *) malloc(_len_parser__i0__token0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_parser__i0__token0; _j0++) {
            parser[_i0].token[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        parser[_i0].token_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pos0 = 100;
          const int * pos = (const int *) malloc(_len_pos0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pos0; _i0++) {
            pos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = push_token(parser,pos);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_parser0; _aux++) {
          free(parser[_aux].start);
          }
          for(int _aux = 0; _aux < _len_parser0; _aux++) {
          free(parser[_aux].token);
          }
          free(parser);
          free(pos);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
