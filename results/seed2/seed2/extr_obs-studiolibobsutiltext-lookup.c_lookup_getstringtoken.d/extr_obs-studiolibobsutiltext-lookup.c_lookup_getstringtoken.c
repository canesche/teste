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
struct strref {char* array; scalar_t__ len; } ;
struct lexer {char* offset; } ;

/* Variables and functions */

__attribute__((used)) static void lookup_getstringtoken(struct lexer *lex, struct strref *token)
{
	const char *temp = lex->offset;
	bool was_backslash  = false;

	while (*temp != 0 && *temp != '\n') {
		if (!was_backslash) {
			if (*temp == '\\') {
				was_backslash = true;
			} else if (*temp == '"') {
				temp++;
				break;
			}
		} else {
			was_backslash = false;
		}

		++temp;
	}

	token->len += (size_t)(temp - lex->offset);

	if (*token->array == '"') {
		token->array++;
		token->len--;

		if (*(temp-1) == '"')
			token->len--;
	}

	lex->offset = temp;
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
          struct lexer * lex = (struct lexer *) malloc(_len_lex0*sizeof(struct lexer));
          for(int _i0 = 0; _i0 < _len_lex0; _i0++) {
              int _len_lex__i0__offset0 = 1;
          lex[_i0].offset = (char *) malloc(_len_lex__i0__offset0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_lex__i0__offset0; _j0++) {
            lex[_i0].offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_token0 = 1;
          struct strref * token = (struct strref *) malloc(_len_token0*sizeof(struct strref));
          for(int _i0 = 0; _i0 < _len_token0; _i0++) {
              int _len_token__i0__array0 = 1;
          token[_i0].array = (char *) malloc(_len_token__i0__array0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_token__i0__array0; _j0++) {
            token[_i0].array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        token[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lookup_getstringtoken(lex,token);
          for(int _aux = 0; _aux < _len_lex0; _aux++) {
          free(lex[_aux].offset);
          }
          free(lex);
          for(int _aux = 0; _aux < _len_token0; _aux++) {
          free(token[_aux].array);
          }
          free(token);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_lex0 = 65025;
          struct lexer * lex = (struct lexer *) malloc(_len_lex0*sizeof(struct lexer));
          for(int _i0 = 0; _i0 < _len_lex0; _i0++) {
              int _len_lex__i0__offset0 = 1;
          lex[_i0].offset = (char *) malloc(_len_lex__i0__offset0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_lex__i0__offset0; _j0++) {
            lex[_i0].offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_token0 = 65025;
          struct strref * token = (struct strref *) malloc(_len_token0*sizeof(struct strref));
          for(int _i0 = 0; _i0 < _len_token0; _i0++) {
              int _len_token__i0__array0 = 1;
          token[_i0].array = (char *) malloc(_len_token__i0__array0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_token__i0__array0; _j0++) {
            token[_i0].array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        token[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lookup_getstringtoken(lex,token);
          for(int _aux = 0; _aux < _len_lex0; _aux++) {
          free(lex[_aux].offset);
          }
          free(lex);
          for(int _aux = 0; _aux < _len_token0; _aux++) {
          free(token[_aux].array);
          }
          free(token);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_lex0 = 100;
          struct lexer * lex = (struct lexer *) malloc(_len_lex0*sizeof(struct lexer));
          for(int _i0 = 0; _i0 < _len_lex0; _i0++) {
              int _len_lex__i0__offset0 = 1;
          lex[_i0].offset = (char *) malloc(_len_lex__i0__offset0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_lex__i0__offset0; _j0++) {
            lex[_i0].offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_token0 = 100;
          struct strref * token = (struct strref *) malloc(_len_token0*sizeof(struct strref));
          for(int _i0 = 0; _i0 < _len_token0; _i0++) {
              int _len_token__i0__array0 = 1;
          token[_i0].array = (char *) malloc(_len_token__i0__array0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_token__i0__array0; _j0++) {
            token[_i0].array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        token[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lookup_getstringtoken(lex,token);
          for(int _aux = 0; _aux < _len_lex0; _aux++) {
          free(lex[_aux].offset);
          }
          free(lex);
          for(int _aux = 0; _aux < _len_token0; _aux++) {
          free(token[_aux].array);
          }
          free(token);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
