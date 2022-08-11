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
struct TYPE_3__ {int* bufptr; scalar_t__ cofs; scalar_t__ maxofs; } ;
typedef  TYPE_1__ T3dsLoaderPers ;

/* Variables and functions */

__attribute__((used)) static int GetASCIIZ( T3dsLoaderPers *pers, char *dest, int max ){
	int pos = 0;
	int ch;

	for (;; )
	{
		ch = pers->bufptr[ pers->cofs++ ];
		if ( ch == '\0' ) {
			break;
		}
		if ( pers->cofs >= pers->maxofs ) {
			dest[ pos ] = '\0';
			return 0;
		}
		dest[ pos++ ] = ch;
		if ( pos >= max ) {
			break;
		}
	}
	dest[ pos ] = '\0';
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
          int max = 100;
          int _len_pers0 = 1;
          struct TYPE_3__ * pers = (struct TYPE_3__ *) malloc(_len_pers0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pers0; _i0++) {
              int _len_pers__i0__bufptr0 = 1;
          pers[_i0].bufptr = (int *) malloc(_len_pers__i0__bufptr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pers__i0__bufptr0; _j0++) {
            pers[_i0].bufptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pers[_i0].cofs = ((-2 * (next_i()%2)) + 1) * next_i();
        pers[_i0].maxofs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest0 = 1;
          char * dest = (char *) malloc(_len_dest0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = GetASCIIZ(pers,dest,max);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pers0; _aux++) {
          free(pers[_aux].bufptr);
          }
          free(pers);
          free(dest);
        
        break;
    }
    // big-arr
    case 1:
    {
          int max = 255;
          int _len_pers0 = 65025;
          struct TYPE_3__ * pers = (struct TYPE_3__ *) malloc(_len_pers0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pers0; _i0++) {
              int _len_pers__i0__bufptr0 = 1;
          pers[_i0].bufptr = (int *) malloc(_len_pers__i0__bufptr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pers__i0__bufptr0; _j0++) {
            pers[_i0].bufptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pers[_i0].cofs = ((-2 * (next_i()%2)) + 1) * next_i();
        pers[_i0].maxofs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest0 = 65025;
          char * dest = (char *) malloc(_len_dest0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = GetASCIIZ(pers,dest,max);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pers0; _aux++) {
          free(pers[_aux].bufptr);
          }
          free(pers);
          free(dest);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int max = 10;
          int _len_pers0 = 100;
          struct TYPE_3__ * pers = (struct TYPE_3__ *) malloc(_len_pers0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pers0; _i0++) {
              int _len_pers__i0__bufptr0 = 1;
          pers[_i0].bufptr = (int *) malloc(_len_pers__i0__bufptr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pers__i0__bufptr0; _j0++) {
            pers[_i0].bufptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pers[_i0].cofs = ((-2 * (next_i()%2)) + 1) * next_i();
        pers[_i0].maxofs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest0 = 100;
          char * dest = (char *) malloc(_len_dest0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = GetASCIIZ(pers,dest,max);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pers0; _aux++) {
          free(pers[_aux].bufptr);
          }
          free(pers);
          free(dest);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
