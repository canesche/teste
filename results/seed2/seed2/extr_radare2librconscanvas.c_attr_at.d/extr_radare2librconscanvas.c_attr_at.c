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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int attrslen; TYPE_1__* attrs; int /*<<< orphan*/  color; } ;
struct TYPE_4__ {int loc; char const* a; } ;
typedef  TYPE_2__ RConsCanvas ;

/* Variables and functions */

__attribute__((used)) static const char **attr_at(RConsCanvas *c, int loc) {
	int i, j, delta;
	if (!c->color || c->attrslen == 0) {
		return NULL;
	}
	j = c->attrslen / 2;
	delta = c->attrslen / 2;
	for (i = 0; i < (c->attrslen); i++) {
		delta /= 2;
		if (delta == 0) {
			delta = 1;
		}
		if (c->attrs[j].loc == loc) {
			return &c->attrs[j].a;
		}
		if (c->attrs[j].loc < loc) {
			j += delta;
			if (j >= c->attrslen) {
				break;
			}
			if (c->attrs[j].loc > loc && delta == 1) {
				break;
			}
		} else if (c->attrs[j].loc > loc) {
			j -= delta;
			if (j <= 0) {
				break;
			}
			if (c->attrs[j].loc < loc && delta == 1) {
				break;
			}
		}
	}
	return NULL;
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
          int loc = 100;
          int _len_c0 = 1;
          struct TYPE_5__ * c = (struct TYPE_5__ *) malloc(_len_c0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].attrslen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__attrs0 = 1;
          c[_i0].attrs = (struct TYPE_4__ *) malloc(_len_c__i0__attrs0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_c__i0__attrs0; _j0++) {
            c[_i0].attrs->loc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__attrs_a0 = 1;
          c[_i0].attrs->a = (const char *) malloc(_len_c__i0__attrs_a0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_c__i0__attrs_a0; _j0++) {
            c[_i0].attrs->a[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        c[_i0].color = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char ** benchRet = attr_at(c,loc);
          printf("%c\n", ((**benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].attrs);
          }
          free(c);
        
        break;
    }
    // big-arr
    case 1:
    {
          int loc = 255;
          int _len_c0 = 65025;
          struct TYPE_5__ * c = (struct TYPE_5__ *) malloc(_len_c0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].attrslen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__attrs0 = 1;
          c[_i0].attrs = (struct TYPE_4__ *) malloc(_len_c__i0__attrs0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_c__i0__attrs0; _j0++) {
            c[_i0].attrs->loc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__attrs_a0 = 1;
          c[_i0].attrs->a = (const char *) malloc(_len_c__i0__attrs_a0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_c__i0__attrs_a0; _j0++) {
            c[_i0].attrs->a[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        c[_i0].color = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char ** benchRet = attr_at(c,loc);
          printf("%c\n", ((**benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].attrs);
          }
          free(c);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int loc = 10;
          int _len_c0 = 100;
          struct TYPE_5__ * c = (struct TYPE_5__ *) malloc(_len_c0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].attrslen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__attrs0 = 1;
          c[_i0].attrs = (struct TYPE_4__ *) malloc(_len_c__i0__attrs0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_c__i0__attrs0; _j0++) {
            c[_i0].attrs->loc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__attrs_a0 = 1;
          c[_i0].attrs->a = (const char *) malloc(_len_c__i0__attrs_a0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_c__i0__attrs_a0; _j0++) {
            c[_i0].attrs->a[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        c[_i0].color = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char ** benchRet = attr_at(c,loc);
          printf("%c\n", ((**benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].attrs);
          }
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
