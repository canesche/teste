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
 long XDL_KPDIS_RUN ; 
 long XDL_SIMSCAN_WINDOW ; 

__attribute__((used)) static int xdl_clean_mmatch(char const *dis, long i, long s, long e) {
	long r, rdis0, rpdis0, rdis1, rpdis1;

	/*
	 * Limits the window the is examined during the similar-lines
	 * scan. The loops below stops when dis[i - r] == 1 (line that
	 * has no match), but there are corner cases where the loop
	 * proceed all the way to the extremities by causing huge
	 * performance penalties in case of big files.
	 */
	if (i - s > XDL_SIMSCAN_WINDOW)
		s = i - XDL_SIMSCAN_WINDOW;
	if (e - i > XDL_SIMSCAN_WINDOW)
		e = i + XDL_SIMSCAN_WINDOW;

	/*
	 * Scans the lines before 'i' to find a run of lines that either
	 * have no match (dis[j] == 0) or have multiple matches (dis[j] > 1).
	 * Note that we always call this function with dis[i] > 1, so the
	 * current line (i) is already a multimatch line.
	 */
	for (r = 1, rdis0 = 0, rpdis0 = 1; (i - r) >= s; r++) {
		if (!dis[i - r])
			rdis0++;
		else if (dis[i - r] == 2)
			rpdis0++;
		else
			break;
	}
	/*
	 * If the run before the line 'i' found only multimatch lines, we
	 * return 0 and hence we don't make the current line (i) discarded.
	 * We want to discard multimatch lines only when they appear in the
	 * middle of runs with nomatch lines (dis[j] == 0).
	 */
	if (rdis0 == 0)
		return 0;
	for (r = 1, rdis1 = 0, rpdis1 = 1; (i + r) <= e; r++) {
		if (!dis[i + r])
			rdis1++;
		else if (dis[i + r] == 2)
			rpdis1++;
		else
			break;
	}
	/*
	 * If the run after the line 'i' found only multimatch lines, we
	 * return 0 and hence we don't make the current line (i) discarded.
	 */
	if (rdis1 == 0)
		return 0;
	rdis1 += rdis0;
	rpdis1 += rpdis0;

	return rpdis1 * XDL_KPDIS_RUN < (rpdis1 + rdis1);
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
          long i = 100;
          long s = 100;
          long e = 100;
          int _len_dis0 = 1;
          const char * dis = (const char *) malloc(_len_dis0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_dis0; _i0++) {
            dis[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xdl_clean_mmatch(dis,i,s,e);
          printf("%d\n", benchRet); 
          free(dis);
        
        break;
    }
    // big-arr
    case 1:
    {
          long i = 255;
          long s = 255;
          long e = 255;
          int _len_dis0 = 65025;
          const char * dis = (const char *) malloc(_len_dis0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_dis0; _i0++) {
            dis[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xdl_clean_mmatch(dis,i,s,e);
          printf("%d\n", benchRet); 
          free(dis);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long i = 10;
          long s = 10;
          long e = 10;
          int _len_dis0 = 100;
          const char * dis = (const char *) malloc(_len_dis0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_dis0; _i0++) {
            dis[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xdl_clean_mmatch(dis,i,s,e);
          printf("%d\n", benchRet); 
          free(dis);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
