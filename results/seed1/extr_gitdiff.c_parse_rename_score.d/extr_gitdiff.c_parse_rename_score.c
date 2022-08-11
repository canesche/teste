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
 unsigned long MAX_SCORE ; 

int parse_rename_score(const char **cp_p)
{
	unsigned long num, scale;
	int ch, dot;
	const char *cp = *cp_p;

	num = 0;
	scale = 1;
	dot = 0;
	for (;;) {
		ch = *cp;
		if ( !dot && ch == '.' ) {
			scale = 1;
			dot = 1;
		} else if ( ch == '%' ) {
			scale = dot ? scale*100 : 100;
			cp++;	/* % is always at the end */
			break;
		} else if ( ch >= '0' && ch <= '9' ) {
			if ( scale < 100000 ) {
				scale *= 10;
				num = (num*10) + (ch-'0');
			}
		} else {
			break;
		}
		cp++;
	}
	*cp_p = cp;

	/* user says num divided by scale and we say internally that
	 * is MAX_SCORE * num / scale.
	 */
	return (int)((num >= scale) ? MAX_SCORE : (MAX_SCORE * num / scale));
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
          int _len_cp_p0 = 1;
          const char ** cp_p = (const char **) malloc(_len_cp_p0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_cp_p0; _i0++) {
            int _len_cp_p1 = 1;
            cp_p[_i0] = (const char *) malloc(_len_cp_p1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_cp_p1; _i1++) {
              cp_p[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = parse_rename_score(cp_p);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_cp_p0; i1++) {
            int _len_cp_p1 = 1;
              free(cp_p[i1]);
          }
          free(cp_p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cp_p0 = 65025;
          const char ** cp_p = (const char **) malloc(_len_cp_p0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_cp_p0; _i0++) {
            int _len_cp_p1 = 1;
            cp_p[_i0] = (const char *) malloc(_len_cp_p1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_cp_p1; _i1++) {
              cp_p[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = parse_rename_score(cp_p);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_cp_p0; i1++) {
            int _len_cp_p1 = 1;
              free(cp_p[i1]);
          }
          free(cp_p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cp_p0 = 100;
          const char ** cp_p = (const char **) malloc(_len_cp_p0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_cp_p0; _i0++) {
            int _len_cp_p1 = 1;
            cp_p[_i0] = (const char *) malloc(_len_cp_p1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_cp_p1; _i1++) {
              cp_p[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = parse_rename_score(cp_p);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_cp_p0; i1++) {
            int _len_cp_p1 = 1;
              free(cp_p[i1]);
          }
          free(cp_p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
