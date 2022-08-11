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
struct TYPE_3__ {char* buffer; char* cursor; char* max; size_t tokenSize; char* token; int /*<<< orphan*/  curLine; } ;
typedef  TYPE_1__ picoParser_t ;

/* Variables and functions */

int _pico_parse_ex( picoParser_t *p, int allowLFs, int handleQuoted ){
	int hasLFs = 0;
	char *old;

	/* sanity checks */
	if ( p == NULL || p->buffer == NULL ||
		 p->cursor <  p->buffer ||
		 p->cursor >= p->max ) {
		return 0;
	}
	/* clear parser token */
	p->tokenSize = 0;
	p->token[ 0 ] = '\0';
	old = p->cursor;

	/* skip whitespaces */
	while ( p->cursor < p->max && *p->cursor <= 32 )
	{
		if ( *p->cursor == '\n' ) {
			p->curLine++;
			hasLFs++;
		}
		p->cursor++;
	}
	/* return if we're not allowed to go beyond lfs */
	if ( ( hasLFs > 0 ) && !allowLFs ) {
		p->cursor = old;
		return 0;
	}
	/* get next quoted string */
	if ( *p->cursor == '\"' && handleQuoted ) {
		p->cursor++;
		while ( p->cursor < p->max && *p->cursor )
		{
			if ( *p->cursor == '\\' ) {
				if ( *( p->cursor + 1 ) == '"' ) {
					p->cursor++;
				}
				p->token[ p->tokenSize++ ] = *p->cursor++;
				continue;
			}
			else if ( *p->cursor == '\"' ) {
				p->cursor++;
				break;
			}
			else if ( *p->cursor == '\n' ) {
				p->curLine++;
			}
			p->token[ p->tokenSize++ ] = *p->cursor++;
		}
		/* terminate token */
		p->token[ p->tokenSize ] = '\0';
		return 1;
	}
	/* otherwise get next word */
	while ( p->cursor < p->max && *p->cursor > 32 )
	{
		if ( *p->cursor == '\n' ) {
			p->curLine++;
		}
		p->token[ p->tokenSize++ ] = *p->cursor++;
	}
	/* terminate token */
	p->token[ p->tokenSize ] = '\0';
	return 1;
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
          int allowLFs = 100;
          int handleQuoted = 100;
          int _len_p0 = 1;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__buffer0 = 1;
          p[_i0].buffer = (char *) malloc(_len_p__i0__buffer0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_p__i0__buffer0; _j0++) {
            p[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__cursor0 = 1;
          p[_i0].cursor = (char *) malloc(_len_p__i0__cursor0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_p__i0__cursor0; _j0++) {
            p[_i0].cursor[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__max0 = 1;
          p[_i0].max = (char *) malloc(_len_p__i0__max0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_p__i0__max0; _j0++) {
            p[_i0].max[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p[_i0].tokenSize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__token0 = 1;
          p[_i0].token = (char *) malloc(_len_p__i0__token0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_p__i0__token0; _j0++) {
            p[_i0].token[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p[_i0].curLine = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _pico_parse_ex(p,allowLFs,handleQuoted);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].buffer);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].cursor);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].max);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].token);
          }
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int allowLFs = 255;
          int handleQuoted = 255;
          int _len_p0 = 65025;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__buffer0 = 1;
          p[_i0].buffer = (char *) malloc(_len_p__i0__buffer0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_p__i0__buffer0; _j0++) {
            p[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__cursor0 = 1;
          p[_i0].cursor = (char *) malloc(_len_p__i0__cursor0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_p__i0__cursor0; _j0++) {
            p[_i0].cursor[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__max0 = 1;
          p[_i0].max = (char *) malloc(_len_p__i0__max0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_p__i0__max0; _j0++) {
            p[_i0].max[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p[_i0].tokenSize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__token0 = 1;
          p[_i0].token = (char *) malloc(_len_p__i0__token0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_p__i0__token0; _j0++) {
            p[_i0].token[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p[_i0].curLine = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _pico_parse_ex(p,allowLFs,handleQuoted);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].buffer);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].cursor);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].max);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].token);
          }
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int allowLFs = 10;
          int handleQuoted = 10;
          int _len_p0 = 100;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__buffer0 = 1;
          p[_i0].buffer = (char *) malloc(_len_p__i0__buffer0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_p__i0__buffer0; _j0++) {
            p[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__cursor0 = 1;
          p[_i0].cursor = (char *) malloc(_len_p__i0__cursor0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_p__i0__cursor0; _j0++) {
            p[_i0].cursor[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__max0 = 1;
          p[_i0].max = (char *) malloc(_len_p__i0__max0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_p__i0__max0; _j0++) {
            p[_i0].max[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p[_i0].tokenSize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__token0 = 1;
          p[_i0].token = (char *) malloc(_len_p__i0__token0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_p__i0__token0; _j0++) {
            p[_i0].token[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p[_i0].curLine = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _pico_parse_ex(p,allowLFs,handleQuoted);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].buffer);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].cursor);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].max);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].token);
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
