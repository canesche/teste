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
typedef  struct TYPE_15__   TYPE_7__ ;
typedef  struct TYPE_14__   TYPE_6__ ;
typedef  struct TYPE_13__   TYPE_5__ ;
typedef  struct TYPE_12__   TYPE_4__ ;
typedef  struct TYPE_11__   TYPE_3__ ;
typedef  struct TYPE_10__   TYPE_2__ ;
typedef  struct TYPE_9__   TYPE_1__ ;

/* Type definitions */
struct TYPE_14__ {TYPE_5__** kids; scalar_t__ copy; } ;
struct TYPE_15__ {TYPE_6__ x; TYPE_2__** syms; } ;
struct TYPE_13__ {TYPE_4__** syms; } ;
struct TYPE_11__ {scalar_t__ name; } ;
struct TYPE_12__ {TYPE_3__ x; } ;
struct TYPE_9__ {scalar_t__ name; } ;
struct TYPE_10__ {TYPE_1__ x; } ;
typedef  TYPE_7__* Node ;

/* Variables and functions */
 size_t RX ; 

__attribute__((used)) static int moveself(Node p) {
	return p->x.copy
	&& p->syms[RX]->x.name == p->x.kids[0]->syms[RX]->x.name;
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
          struct TYPE_15__ * p = (struct TYPE_15__ *) malloc(_len_p0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__x_kids0 = 1;
          p[_i0].x.kids = (struct TYPE_13__ **) malloc(_len_p__i0__x_kids0*sizeof(struct TYPE_13__ *));
          for(int _j0 = 0; _j0 < _len_p__i0__x_kids0; _j0++) {
            int _len_p__i0__x_kids1 = 1;
            p[_i0].x.kids[_j0] = (struct TYPE_13__ *) malloc(_len_p__i0__x_kids1*sizeof(struct TYPE_13__));
            for(int _j1 = 0; _j1 < _len_p__i0__x_kids1; _j1++) {
                int _len_p__i0__x_kids__j0__syms0 = 1;
          p[_i0].x.kids[_j0]->syms = (struct TYPE_12__ **) malloc(_len_p__i0__x_kids__j0__syms0*sizeof(struct TYPE_12__ *));
          for(int _j0 = 0; _j0 < _len_p__i0__x_kids__j0__syms0; _j0++) {
            int _len_p__i0__x_kids__j0__syms1 = 1;
            p[_i0].x.kids[_j0]->syms[_j0] = (struct TYPE_12__ *) malloc(_len_p__i0__x_kids__j0__syms1*sizeof(struct TYPE_12__));
            for(int _j1 = 0; _j1 < _len_p__i0__x_kids__j0__syms1; _j1++) {
              p[_i0].x.kids[_j0]->syms[_j0]->x.name = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
            }
          }
        p[_i0].x.copy = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__syms0 = 1;
          p[_i0].syms = (struct TYPE_10__ **) malloc(_len_p__i0__syms0*sizeof(struct TYPE_10__ *));
          for(int _j0 = 0; _j0 < _len_p__i0__syms0; _j0++) {
            int _len_p__i0__syms1 = 1;
            p[_i0].syms[_j0] = (struct TYPE_10__ *) malloc(_len_p__i0__syms1*sizeof(struct TYPE_10__));
            for(int _j1 = 0; _j1 < _len_p__i0__syms1; _j1++) {
              p[_i0].syms[_j0]->x.name = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = moveself(p);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(*(p[_aux].syms));
        free(p[_aux].syms);
          }
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_p0 = 65025;
          struct TYPE_15__ * p = (struct TYPE_15__ *) malloc(_len_p0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__x_kids0 = 1;
          p[_i0].x.kids = (struct TYPE_13__ **) malloc(_len_p__i0__x_kids0*sizeof(struct TYPE_13__ *));
          for(int _j0 = 0; _j0 < _len_p__i0__x_kids0; _j0++) {
            int _len_p__i0__x_kids1 = 1;
            p[_i0].x.kids[_j0] = (struct TYPE_13__ *) malloc(_len_p__i0__x_kids1*sizeof(struct TYPE_13__));
            for(int _j1 = 0; _j1 < _len_p__i0__x_kids1; _j1++) {
                int _len_p__i0__x_kids__j0__syms0 = 1;
          p[_i0].x.kids[_j0]->syms = (struct TYPE_12__ **) malloc(_len_p__i0__x_kids__j0__syms0*sizeof(struct TYPE_12__ *));
          for(int _j0 = 0; _j0 < _len_p__i0__x_kids__j0__syms0; _j0++) {
            int _len_p__i0__x_kids__j0__syms1 = 1;
            p[_i0].x.kids[_j0]->syms[_j0] = (struct TYPE_12__ *) malloc(_len_p__i0__x_kids__j0__syms1*sizeof(struct TYPE_12__));
            for(int _j1 = 0; _j1 < _len_p__i0__x_kids__j0__syms1; _j1++) {
              p[_i0].x.kids[_j0]->syms[_j0]->x.name = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
            }
          }
        p[_i0].x.copy = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__syms0 = 1;
          p[_i0].syms = (struct TYPE_10__ **) malloc(_len_p__i0__syms0*sizeof(struct TYPE_10__ *));
          for(int _j0 = 0; _j0 < _len_p__i0__syms0; _j0++) {
            int _len_p__i0__syms1 = 1;
            p[_i0].syms[_j0] = (struct TYPE_10__ *) malloc(_len_p__i0__syms1*sizeof(struct TYPE_10__));
            for(int _j1 = 0; _j1 < _len_p__i0__syms1; _j1++) {
              p[_i0].syms[_j0]->x.name = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = moveself(p);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(*(p[_aux].syms));
        free(p[_aux].syms);
          }
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_p0 = 100;
          struct TYPE_15__ * p = (struct TYPE_15__ *) malloc(_len_p0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__x_kids0 = 1;
          p[_i0].x.kids = (struct TYPE_13__ **) malloc(_len_p__i0__x_kids0*sizeof(struct TYPE_13__ *));
          for(int _j0 = 0; _j0 < _len_p__i0__x_kids0; _j0++) {
            int _len_p__i0__x_kids1 = 1;
            p[_i0].x.kids[_j0] = (struct TYPE_13__ *) malloc(_len_p__i0__x_kids1*sizeof(struct TYPE_13__));
            for(int _j1 = 0; _j1 < _len_p__i0__x_kids1; _j1++) {
                int _len_p__i0__x_kids__j0__syms0 = 1;
          p[_i0].x.kids[_j0]->syms = (struct TYPE_12__ **) malloc(_len_p__i0__x_kids__j0__syms0*sizeof(struct TYPE_12__ *));
          for(int _j0 = 0; _j0 < _len_p__i0__x_kids__j0__syms0; _j0++) {
            int _len_p__i0__x_kids__j0__syms1 = 1;
            p[_i0].x.kids[_j0]->syms[_j0] = (struct TYPE_12__ *) malloc(_len_p__i0__x_kids__j0__syms1*sizeof(struct TYPE_12__));
            for(int _j1 = 0; _j1 < _len_p__i0__x_kids__j0__syms1; _j1++) {
              p[_i0].x.kids[_j0]->syms[_j0]->x.name = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
            }
          }
        p[_i0].x.copy = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__syms0 = 1;
          p[_i0].syms = (struct TYPE_10__ **) malloc(_len_p__i0__syms0*sizeof(struct TYPE_10__ *));
          for(int _j0 = 0; _j0 < _len_p__i0__syms0; _j0++) {
            int _len_p__i0__syms1 = 1;
            p[_i0].syms[_j0] = (struct TYPE_10__ *) malloc(_len_p__i0__syms1*sizeof(struct TYPE_10__));
            for(int _j1 = 0; _j1 < _len_p__i0__syms1; _j1++) {
              p[_i0].syms[_j0]->x.name = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = moveself(p);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(*(p[_aux].syms));
        free(p[_aux].syms);
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
