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
strtok_r(
	register char *s ,
	register const char *delim ,
	char **lasts
)
{
	int skip_leading_delim = 1;
	register char *spanp;
	register int c, sc;
	char *tok;


	if (s == NULL && (s = *lasts) == NULL)
		return (NULL);

	/*
	 * Skip (span) leading delimiters (s += strspn(s, delim), sort of).
	 */
cont:
	c = *s++;
	for (spanp = (char *)delim; (sc = *spanp++) != 0;) {
		if (c == sc) {
			if (skip_leading_delim) {
				goto cont;
			}
			else {
				*lasts = s;
				s[-1] = 0;
				return (s - 1);
			}
		}
	}

	if (c == 0) {		/* no non-delimiter characters */
		*lasts = NULL;
		return (NULL);
	}
	tok = s - 1;

	/*
	 * Scan token (scan for delimiters: s += strcspn(s, delim), sort of).
	 * Note that delim must have one NUL; we stop if we see that, too.
	 */
	for (;;) {
		c = *s++;
		spanp = (char *)delim;
		do {
			if ((sc = *spanp++) == c) {
				if (c == 0)
					s = NULL;
				else
					s[-1] = 0;
				*lasts = s;
				return (tok);
			}
		} while (sc != 0);
	}
	/* NOTREACHED */
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
          int _len_s0 = 1;
          char * s = (char *) malloc(_len_s0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_delim0 = 1;
          const char * delim = (const char *) malloc(_len_delim0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_delim0; _i0++) {
            delim[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lasts0 = 1;
          char ** lasts = (char **) malloc(_len_lasts0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_lasts0; _i0++) {
            int _len_lasts1 = 1;
            lasts[_i0] = (char *) malloc(_len_lasts1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_lasts1; _i1++) {
              lasts[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          char * benchRet = strtok_r(s,delim,lasts);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(s);
          free(delim);
          for(int i1 = 0; i1 < _len_lasts0; i1++) {
            int _len_lasts1 = 1;
              free(lasts[i1]);
          }
          free(lasts);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          char * s = (char *) malloc(_len_s0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_delim0 = 65025;
          const char * delim = (const char *) malloc(_len_delim0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_delim0; _i0++) {
            delim[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lasts0 = 65025;
          char ** lasts = (char **) malloc(_len_lasts0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_lasts0; _i0++) {
            int _len_lasts1 = 1;
            lasts[_i0] = (char *) malloc(_len_lasts1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_lasts1; _i1++) {
              lasts[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          char * benchRet = strtok_r(s,delim,lasts);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(s);
          free(delim);
          for(int i1 = 0; i1 < _len_lasts0; i1++) {
            int _len_lasts1 = 1;
              free(lasts[i1]);
          }
          free(lasts);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          char * s = (char *) malloc(_len_s0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_delim0 = 100;
          const char * delim = (const char *) malloc(_len_delim0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_delim0; _i0++) {
            delim[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lasts0 = 100;
          char ** lasts = (char **) malloc(_len_lasts0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_lasts0; _i0++) {
            int _len_lasts1 = 1;
            lasts[_i0] = (char *) malloc(_len_lasts1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_lasts1; _i1++) {
              lasts[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          char * benchRet = strtok_r(s,delim,lasts);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(s);
          free(delim);
          for(int i1 = 0; i1 < _len_lasts0; i1++) {
            int _len_lasts1 = 1;
              free(lasts[i1]);
          }
          free(lasts);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
