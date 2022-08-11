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
typedef  int ssize_t ;

/* Variables and functions */

__attribute__((used)) static void
getattrlist_findnamecomp(const char *mn, const char **np, ssize_t *nl)
{
	int		counting;
	const char	*cp;

	/*
	 * We're looking for the last sequence of non / characters, but
	 * not including any trailing / characters.
	 */
	*np = NULL;
	*nl = 0;
	counting = 0;
	for (cp = mn; *cp != 0; cp++) {
		if (!counting) {
			/* start of run of chars */
			if (*cp != '/') {
				*np = cp;
				counting = 1;
			}
		} else {
			/* end of run of chars */
			if (*cp == '/') {
				*nl = cp - *np;
				counting = 0;
			}
		}
	}
	/* need to close run? */
	if (counting)
		*nl = cp - *np;
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
          int _len_mn0 = 1;
          const char * mn = (const char *) malloc(_len_mn0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_mn0; _i0++) {
            mn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_np0 = 1;
          const char ** np = (const char **) malloc(_len_np0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
            int _len_np1 = 1;
            np[_i0] = (const char *) malloc(_len_np1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_np1; _i1++) {
              np[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_nl0 = 1;
          int * nl = (int *) malloc(_len_nl0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_nl0; _i0++) {
            nl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          getattrlist_findnamecomp(mn,np,nl);
          free(mn);
          for(int i1 = 0; i1 < _len_np0; i1++) {
            int _len_np1 = 1;
              free(np[i1]);
          }
          free(np);
          free(nl);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mn0 = 65025;
          const char * mn = (const char *) malloc(_len_mn0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_mn0; _i0++) {
            mn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_np0 = 65025;
          const char ** np = (const char **) malloc(_len_np0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
            int _len_np1 = 1;
            np[_i0] = (const char *) malloc(_len_np1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_np1; _i1++) {
              np[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_nl0 = 65025;
          int * nl = (int *) malloc(_len_nl0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_nl0; _i0++) {
            nl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          getattrlist_findnamecomp(mn,np,nl);
          free(mn);
          for(int i1 = 0; i1 < _len_np0; i1++) {
            int _len_np1 = 1;
              free(np[i1]);
          }
          free(np);
          free(nl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mn0 = 100;
          const char * mn = (const char *) malloc(_len_mn0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_mn0; _i0++) {
            mn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_np0 = 100;
          const char ** np = (const char **) malloc(_len_np0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
            int _len_np1 = 1;
            np[_i0] = (const char *) malloc(_len_np1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_np1; _i1++) {
              np[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_nl0 = 100;
          int * nl = (int *) malloc(_len_nl0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_nl0; _i0++) {
            nl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          getattrlist_findnamecomp(mn,np,nl);
          free(mn);
          for(int i1 = 0; i1 < _len_np0; i1++) {
            int _len_np1 = 1;
              free(np[i1]);
          }
          free(np);
          free(nl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
