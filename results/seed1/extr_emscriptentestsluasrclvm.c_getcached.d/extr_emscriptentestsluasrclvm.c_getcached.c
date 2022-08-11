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
typedef  struct TYPE_15__   TYPE_6__ ;
typedef  struct TYPE_14__   TYPE_5__ ;
typedef  struct TYPE_13__   TYPE_4__ ;
typedef  struct TYPE_12__   TYPE_3__ ;
typedef  struct TYPE_11__   TYPE_2__ ;
typedef  struct TYPE_10__   TYPE_1__ ;

/* Type definitions */
struct TYPE_12__ {int idx; scalar_t__ instack; } ;
typedef  TYPE_3__ Upvaldesc ;
struct TYPE_13__ {int /*<<< orphan*/ * v; } ;
typedef  TYPE_4__ UpVal ;
struct TYPE_11__ {TYPE_1__** upvals; } ;
struct TYPE_15__ {TYPE_2__ l; } ;
struct TYPE_14__ {int sizeupvalues; TYPE_3__* upvalues; TYPE_6__* cache; } ;
struct TYPE_10__ {int /*<<< orphan*/ * v; } ;
typedef  int /*<<< orphan*/  TValue ;
typedef  int /*<<< orphan*/ * StkId ;
typedef  TYPE_5__ Proto ;
typedef  TYPE_6__ Closure ;

/* Variables and functions */

__attribute__((used)) static Closure *getcached (Proto *p, UpVal **encup, StkId base) {
  Closure *c = p->cache;
  if (c != NULL) {  /* is there a cached closure? */
    int nup = p->sizeupvalues;
    Upvaldesc *uv = p->upvalues;
    int i;
    for (i = 0; i < nup; i++) {  /* check whether it has right upvalues */
      TValue *v = uv[i].instack ? base + uv[i].idx : encup[uv[i].idx]->v;
      if (c->l.upvals[i]->v != v)
        return NULL;  /* wrong upvalue; cannot reuse closure */
    }
  }
  return c;  /* return cached closure (or NULL if no cached closure) */
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
          int _len_p0 = 1;
          struct TYPE_14__ * p = (struct TYPE_14__ *) malloc(_len_p0*sizeof(struct TYPE_14__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].sizeupvalues = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__upvalues0 = 1;
          p[_i0].upvalues = (struct TYPE_12__ *) malloc(_len_p__i0__upvalues0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_p__i0__upvalues0; _j0++) {
            p[_i0].upvalues->idx = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].upvalues->instack = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__cache0 = 1;
          p[_i0].cache = (struct TYPE_15__ *) malloc(_len_p__i0__cache0*sizeof(struct TYPE_15__));
          for(int _j0 = 0; _j0 < _len_p__i0__cache0; _j0++) {
              int _len_p__i0__cache_l_upvals0 = 1;
          p[_i0].cache->l.upvals = (struct TYPE_10__ **) malloc(_len_p__i0__cache_l_upvals0*sizeof(struct TYPE_10__ *));
          for(int _j0 = 0; _j0 < _len_p__i0__cache_l_upvals0; _j0++) {
            int _len_p__i0__cache_l_upvals1 = 1;
            p[_i0].cache->l.upvals[_j0] = (struct TYPE_10__ *) malloc(_len_p__i0__cache_l_upvals1*sizeof(struct TYPE_10__));
            for(int _j1 = 0; _j1 < _len_p__i0__cache_l_upvals1; _j1++) {
                int _len_p__i0__cache_l_upvals__j0__v0 = 1;
          p[_i0].cache->l.upvals[_j0]->v = (int *) malloc(_len_p__i0__cache_l_upvals__j0__v0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__cache_l_upvals__j0__v0; _j0++) {
            p[_i0].cache->l.upvals[_j0]->v[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          }
          int _len_encup0 = 1;
          struct TYPE_13__ ** encup = (struct TYPE_13__ **) malloc(_len_encup0*sizeof(struct TYPE_13__ *));
          for(int _i0 = 0; _i0 < _len_encup0; _i0++) {
            int _len_encup1 = 1;
            encup[_i0] = (struct TYPE_13__ *) malloc(_len_encup1*sizeof(struct TYPE_13__));
            for(int _i1 = 0; _i1 < _len_encup1; _i1++) {
                int _len_encup__i0___i1__v0 = 1;
          encup[_i0][_i1].v = (int *) malloc(_len_encup__i0___i1__v0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_encup__i0___i1__v0; _j0++) {
            encup[_i0][_i1].v[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          int _len_base0 = 1;
          int * base = (int *) malloc(_len_base0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_15__ * benchRet = getcached(p,encup,base);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].upvalues);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].cache);
          }
          free(p);
          for(int i1 = 0; i1 < _len_encup0; i1++) {
            int _len_encup1 = 1;
              for(int _aux = 0; _aux < _len_encup1; _aux++) {
          free(encup[_aux].v);
          }
          free(encup[i1]);
          }
          free(encup);
          free(base);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_p0 = 65025;
          struct TYPE_14__ * p = (struct TYPE_14__ *) malloc(_len_p0*sizeof(struct TYPE_14__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].sizeupvalues = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__upvalues0 = 1;
          p[_i0].upvalues = (struct TYPE_12__ *) malloc(_len_p__i0__upvalues0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_p__i0__upvalues0; _j0++) {
            p[_i0].upvalues->idx = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].upvalues->instack = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__cache0 = 1;
          p[_i0].cache = (struct TYPE_15__ *) malloc(_len_p__i0__cache0*sizeof(struct TYPE_15__));
          for(int _j0 = 0; _j0 < _len_p__i0__cache0; _j0++) {
              int _len_p__i0__cache_l_upvals0 = 1;
          p[_i0].cache->l.upvals = (struct TYPE_10__ **) malloc(_len_p__i0__cache_l_upvals0*sizeof(struct TYPE_10__ *));
          for(int _j0 = 0; _j0 < _len_p__i0__cache_l_upvals0; _j0++) {
            int _len_p__i0__cache_l_upvals1 = 1;
            p[_i0].cache->l.upvals[_j0] = (struct TYPE_10__ *) malloc(_len_p__i0__cache_l_upvals1*sizeof(struct TYPE_10__));
            for(int _j1 = 0; _j1 < _len_p__i0__cache_l_upvals1; _j1++) {
                int _len_p__i0__cache_l_upvals__j0__v0 = 1;
          p[_i0].cache->l.upvals[_j0]->v = (int *) malloc(_len_p__i0__cache_l_upvals__j0__v0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__cache_l_upvals__j0__v0; _j0++) {
            p[_i0].cache->l.upvals[_j0]->v[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          }
          int _len_encup0 = 65025;
          struct TYPE_13__ ** encup = (struct TYPE_13__ **) malloc(_len_encup0*sizeof(struct TYPE_13__ *));
          for(int _i0 = 0; _i0 < _len_encup0; _i0++) {
            int _len_encup1 = 1;
            encup[_i0] = (struct TYPE_13__ *) malloc(_len_encup1*sizeof(struct TYPE_13__));
            for(int _i1 = 0; _i1 < _len_encup1; _i1++) {
                int _len_encup__i0___i1__v0 = 1;
          encup[_i0][_i1].v = (int *) malloc(_len_encup__i0___i1__v0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_encup__i0___i1__v0; _j0++) {
            encup[_i0][_i1].v[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          int _len_base0 = 65025;
          int * base = (int *) malloc(_len_base0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_15__ * benchRet = getcached(p,encup,base);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].upvalues);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].cache);
          }
          free(p);
          for(int i1 = 0; i1 < _len_encup0; i1++) {
            int _len_encup1 = 1;
              for(int _aux = 0; _aux < _len_encup1; _aux++) {
          free(encup[_aux].v);
          }
          free(encup[i1]);
          }
          free(encup);
          free(base);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_p0 = 100;
          struct TYPE_14__ * p = (struct TYPE_14__ *) malloc(_len_p0*sizeof(struct TYPE_14__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].sizeupvalues = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__upvalues0 = 1;
          p[_i0].upvalues = (struct TYPE_12__ *) malloc(_len_p__i0__upvalues0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_p__i0__upvalues0; _j0++) {
            p[_i0].upvalues->idx = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].upvalues->instack = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__cache0 = 1;
          p[_i0].cache = (struct TYPE_15__ *) malloc(_len_p__i0__cache0*sizeof(struct TYPE_15__));
          for(int _j0 = 0; _j0 < _len_p__i0__cache0; _j0++) {
              int _len_p__i0__cache_l_upvals0 = 1;
          p[_i0].cache->l.upvals = (struct TYPE_10__ **) malloc(_len_p__i0__cache_l_upvals0*sizeof(struct TYPE_10__ *));
          for(int _j0 = 0; _j0 < _len_p__i0__cache_l_upvals0; _j0++) {
            int _len_p__i0__cache_l_upvals1 = 1;
            p[_i0].cache->l.upvals[_j0] = (struct TYPE_10__ *) malloc(_len_p__i0__cache_l_upvals1*sizeof(struct TYPE_10__));
            for(int _j1 = 0; _j1 < _len_p__i0__cache_l_upvals1; _j1++) {
                int _len_p__i0__cache_l_upvals__j0__v0 = 1;
          p[_i0].cache->l.upvals[_j0]->v = (int *) malloc(_len_p__i0__cache_l_upvals__j0__v0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__cache_l_upvals__j0__v0; _j0++) {
            p[_i0].cache->l.upvals[_j0]->v[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          }
          int _len_encup0 = 100;
          struct TYPE_13__ ** encup = (struct TYPE_13__ **) malloc(_len_encup0*sizeof(struct TYPE_13__ *));
          for(int _i0 = 0; _i0 < _len_encup0; _i0++) {
            int _len_encup1 = 1;
            encup[_i0] = (struct TYPE_13__ *) malloc(_len_encup1*sizeof(struct TYPE_13__));
            for(int _i1 = 0; _i1 < _len_encup1; _i1++) {
                int _len_encup__i0___i1__v0 = 1;
          encup[_i0][_i1].v = (int *) malloc(_len_encup__i0___i1__v0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_encup__i0___i1__v0; _j0++) {
            encup[_i0][_i1].v[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          int _len_base0 = 100;
          int * base = (int *) malloc(_len_base0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_15__ * benchRet = getcached(p,encup,base);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].upvalues);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].cache);
          }
          free(p);
          for(int i1 = 0; i1 < _len_encup0; i1++) {
            int _len_encup1 = 1;
              for(int _aux = 0; _aux < _len_encup1; _aux++) {
          free(encup[_aux].v);
          }
          free(encup[i1]);
          }
          free(encup);
          free(base);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
