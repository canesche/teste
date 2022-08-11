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
strsep(char **stringp, const char *delim)
{
	char *s;
	const char *spanp;
	int c, sc;
	char *tok;

	if ((s = *stringp) == NULL)
		return (NULL);
	for (tok = s;;) {
		c = *s++;
		spanp = delim;
		do {
			if ((sc = *spanp++) == c) {
				if (c == 0)
					s = NULL;
				else
					s[-1] = 0;
				*stringp = s;
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
          int _len_stringp0 = 1;
          char ** stringp = (char **) malloc(_len_stringp0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_stringp0; _i0++) {
            int _len_stringp1 = 1;
            stringp[_i0] = (char *) malloc(_len_stringp1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_stringp1; _i1++) {
              stringp[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_delim0 = 1;
          const char * delim = (const char *) malloc(_len_delim0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_delim0; _i0++) {
            delim[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = strsep(stringp,delim);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int i1 = 0; i1 < _len_stringp0; i1++) {
            int _len_stringp1 = 1;
              free(stringp[i1]);
          }
          free(stringp);
          free(delim);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_stringp0 = 65025;
          char ** stringp = (char **) malloc(_len_stringp0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_stringp0; _i0++) {
            int _len_stringp1 = 1;
            stringp[_i0] = (char *) malloc(_len_stringp1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_stringp1; _i1++) {
              stringp[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_delim0 = 65025;
          const char * delim = (const char *) malloc(_len_delim0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_delim0; _i0++) {
            delim[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = strsep(stringp,delim);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int i1 = 0; i1 < _len_stringp0; i1++) {
            int _len_stringp1 = 1;
              free(stringp[i1]);
          }
          free(stringp);
          free(delim);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_stringp0 = 100;
          char ** stringp = (char **) malloc(_len_stringp0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_stringp0; _i0++) {
            int _len_stringp1 = 1;
            stringp[_i0] = (char *) malloc(_len_stringp1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_stringp1; _i1++) {
              stringp[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_delim0 = 100;
          const char * delim = (const char *) malloc(_len_delim0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_delim0; _i0++) {
            delim[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = strsep(stringp,delim);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int i1 = 0; i1 < _len_stringp0; i1++) {
            int _len_stringp1 = 1;
              free(stringp[i1]);
          }
          free(stringp);
          free(delim);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
