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
typedef  int /*<<< orphan*/  lua_State ;
struct TYPE_3__ {char const* src_init; char const* src_end; char const* p_end; int /*<<< orphan*/  matchdepth; int /*<<< orphan*/ * L; } ;
typedef  TYPE_1__ MatchState ;

/* Variables and functions */
 int /*<<< orphan*/  MAXCCALLS ; 

__attribute__((used)) static void prepstate (MatchState *ms, lua_State *L,
                       const char *s, size_t ls, const char *p, size_t lp) {
  ms->L = L;
  ms->matchdepth = MAXCCALLS;
  ms->src_init = s;
  ms->src_end = s + ls;
  ms->p_end = p + lp;
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
          unsigned long ls = 100;
          unsigned long lp = 100;
          int _len_ms0 = 1;
          struct TYPE_3__ * ms = (struct TYPE_3__ *) malloc(_len_ms0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ms0; _i0++) {
              int _len_ms__i0__src_init0 = 1;
          ms[_i0].src_init = (const char *) malloc(_len_ms__i0__src_init0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_ms__i0__src_init0; _j0++) {
            ms[_i0].src_init[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ms__i0__src_end0 = 1;
          ms[_i0].src_end = (const char *) malloc(_len_ms__i0__src_end0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_ms__i0__src_end0; _j0++) {
            ms[_i0].src_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ms__i0__p_end0 = 1;
          ms[_i0].p_end = (const char *) malloc(_len_ms__i0__p_end0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_ms__i0__p_end0; _j0++) {
            ms[_i0].p_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ms[_i0].matchdepth = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ms__i0__L0 = 1;
          ms[_i0].L = (int *) malloc(_len_ms__i0__L0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ms__i0__L0; _j0++) {
            ms[_i0].L[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_L0 = 1;
          int * L = (int *) malloc(_len_L0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_L0; _i0++) {
            L[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s0 = 1;
          const char * s = (const char *) malloc(_len_s0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 1;
          const char * p = (const char *) malloc(_len_p0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          prepstate(ms,L,s,ls,p,lp);
          for(int _aux = 0; _aux < _len_ms0; _aux++) {
          free(ms[_aux].src_init);
          }
          for(int _aux = 0; _aux < _len_ms0; _aux++) {
          free(ms[_aux].src_end);
          }
          for(int _aux = 0; _aux < _len_ms0; _aux++) {
          free(ms[_aux].p_end);
          }
          for(int _aux = 0; _aux < _len_ms0; _aux++) {
          free(ms[_aux].L);
          }
          free(ms);
          free(L);
          free(s);
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long ls = 255;
          unsigned long lp = 255;
          int _len_ms0 = 65025;
          struct TYPE_3__ * ms = (struct TYPE_3__ *) malloc(_len_ms0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ms0; _i0++) {
              int _len_ms__i0__src_init0 = 1;
          ms[_i0].src_init = (const char *) malloc(_len_ms__i0__src_init0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_ms__i0__src_init0; _j0++) {
            ms[_i0].src_init[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ms__i0__src_end0 = 1;
          ms[_i0].src_end = (const char *) malloc(_len_ms__i0__src_end0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_ms__i0__src_end0; _j0++) {
            ms[_i0].src_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ms__i0__p_end0 = 1;
          ms[_i0].p_end = (const char *) malloc(_len_ms__i0__p_end0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_ms__i0__p_end0; _j0++) {
            ms[_i0].p_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ms[_i0].matchdepth = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ms__i0__L0 = 1;
          ms[_i0].L = (int *) malloc(_len_ms__i0__L0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ms__i0__L0; _j0++) {
            ms[_i0].L[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_L0 = 65025;
          int * L = (int *) malloc(_len_L0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_L0; _i0++) {
            L[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s0 = 65025;
          const char * s = (const char *) malloc(_len_s0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 65025;
          const char * p = (const char *) malloc(_len_p0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          prepstate(ms,L,s,ls,p,lp);
          for(int _aux = 0; _aux < _len_ms0; _aux++) {
          free(ms[_aux].src_init);
          }
          for(int _aux = 0; _aux < _len_ms0; _aux++) {
          free(ms[_aux].src_end);
          }
          for(int _aux = 0; _aux < _len_ms0; _aux++) {
          free(ms[_aux].p_end);
          }
          for(int _aux = 0; _aux < _len_ms0; _aux++) {
          free(ms[_aux].L);
          }
          free(ms);
          free(L);
          free(s);
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long ls = 10;
          unsigned long lp = 10;
          int _len_ms0 = 100;
          struct TYPE_3__ * ms = (struct TYPE_3__ *) malloc(_len_ms0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ms0; _i0++) {
              int _len_ms__i0__src_init0 = 1;
          ms[_i0].src_init = (const char *) malloc(_len_ms__i0__src_init0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_ms__i0__src_init0; _j0++) {
            ms[_i0].src_init[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ms__i0__src_end0 = 1;
          ms[_i0].src_end = (const char *) malloc(_len_ms__i0__src_end0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_ms__i0__src_end0; _j0++) {
            ms[_i0].src_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ms__i0__p_end0 = 1;
          ms[_i0].p_end = (const char *) malloc(_len_ms__i0__p_end0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_ms__i0__p_end0; _j0++) {
            ms[_i0].p_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ms[_i0].matchdepth = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ms__i0__L0 = 1;
          ms[_i0].L = (int *) malloc(_len_ms__i0__L0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ms__i0__L0; _j0++) {
            ms[_i0].L[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_L0 = 100;
          int * L = (int *) malloc(_len_L0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_L0; _i0++) {
            L[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s0 = 100;
          const char * s = (const char *) malloc(_len_s0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 100;
          const char * p = (const char *) malloc(_len_p0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          prepstate(ms,L,s,ls,p,lp);
          for(int _aux = 0; _aux < _len_ms0; _aux++) {
          free(ms[_aux].src_init);
          }
          for(int _aux = 0; _aux < _len_ms0; _aux++) {
          free(ms[_aux].src_end);
          }
          for(int _aux = 0; _aux < _len_ms0; _aux++) {
          free(ms[_aux].p_end);
          }
          for(int _aux = 0; _aux < _len_ms0; _aux++) {
          free(ms[_aux].L);
          }
          free(ms);
          free(L);
          free(s);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
