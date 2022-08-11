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

/* Variables and functions */

char *
strtokc(char *parsestr, const char *delims, char **context)
{
	char *cp;
	const char *cp2;
	char c, c2;
	char *start;

	if (parsestr == NULL)
		start = *context;
	else
		start = parsestr;

	if ((start == NULL) || (delims == NULL)) {
		*context = NULL;
		return NULL;
	}

	/* Eat leading delimiters. */
	for (cp = start; ; ) {
next1:
		c = *cp++;
		if (c == '\0') {
			/* No more tokens. */
			*context = NULL;
			return (NULL);
		}
		for (cp2 = delims; ; ) {
			c2 = (char) *cp2++;
			if (c2 == '\0') {
				/* This character was not a delimiter.
				 * The token starts here.
				 */
				start = cp - 1;
				goto starttok;
			}
			if (c2 == c) {
				/* This char was a delimiter. */
				/* Skip it, look at next character. */
				goto next1;
			}
		}
		/*NOTREACHED*/
	}

starttok:
	for ( ; ; cp++) {
		c = *cp;
		if (c == '\0') {
			/* Token is finished. */
			*context = cp;
			break;
		}
		for (cp2 = delims; ; ) {
			c2 = (char) *cp2++;
			if (c2 == '\0') {
				/* This character was not a delimiter.
				 * Keep it as part of current token.
				 */
				break;
			}
			if (c2 == c) {
				/* This char was a delimiter. */
				/* End of token. */
				*cp++ = '\0';
				*context = cp;
				return (start);
			}
		}
	}
	return (start);
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
          int _len_parsestr0 = 1;
          char * parsestr = (char *) malloc(_len_parsestr0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_parsestr0; _i0++) {
            parsestr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_delims0 = 1;
          const char * delims = (const char *) malloc(_len_delims0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_delims0; _i0++) {
            delims[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_context0 = 1;
          char ** context = (char **) malloc(_len_context0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
            int _len_context1 = 1;
            context[_i0] = (char *) malloc(_len_context1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_context1; _i1++) {
              context[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          char * benchRet = strtokc(parsestr,delims,context);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(parsestr);
          free(delims);
          for(int i1 = 0; i1 < _len_context0; i1++) {
            int _len_context1 = 1;
              free(context[i1]);
          }
          free(context);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_parsestr0 = 65025;
          char * parsestr = (char *) malloc(_len_parsestr0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_parsestr0; _i0++) {
            parsestr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_delims0 = 65025;
          const char * delims = (const char *) malloc(_len_delims0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_delims0; _i0++) {
            delims[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_context0 = 65025;
          char ** context = (char **) malloc(_len_context0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
            int _len_context1 = 1;
            context[_i0] = (char *) malloc(_len_context1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_context1; _i1++) {
              context[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          char * benchRet = strtokc(parsestr,delims,context);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(parsestr);
          free(delims);
          for(int i1 = 0; i1 < _len_context0; i1++) {
            int _len_context1 = 1;
              free(context[i1]);
          }
          free(context);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_parsestr0 = 100;
          char * parsestr = (char *) malloc(_len_parsestr0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_parsestr0; _i0++) {
            parsestr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_delims0 = 100;
          const char * delims = (const char *) malloc(_len_delims0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_delims0; _i0++) {
            delims[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_context0 = 100;
          char ** context = (char **) malloc(_len_context0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
            int _len_context1 = 1;
            context[_i0] = (char *) malloc(_len_context1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_context1; _i1++) {
              context[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          char * benchRet = strtokc(parsestr,delims,context);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(parsestr);
          free(delims);
          for(int i1 = 0; i1 < _len_context0; i1++) {
            int _len_context1 = 1;
              free(context[i1]);
          }
          free(context);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
