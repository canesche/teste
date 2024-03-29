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
typedef  struct TYPE_13__   TYPE_6__ ;
typedef  struct TYPE_12__   TYPE_5__ ;
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
struct TYPE_10__ {int renderfx; scalar_t__* origin; scalar_t__ radius; } ;
struct TYPE_11__ {TYPE_3__ e; } ;
typedef  TYPE_4__ trRefEntity_t ;
struct TYPE_12__ {scalar_t__** bounds; } ;
typedef  TYPE_5__ fog_t ;
struct TYPE_8__ {int rdflags; } ;
struct TYPE_13__ {TYPE_2__* world; TYPE_1__ refdef; } ;
struct TYPE_9__ {int numfogs; TYPE_5__* fogs; } ;

/* Variables and functions */
 int RDF_NOWORLDMODEL ; 
 int RF_CROSSHAIR ; 
 TYPE_6__ tr ; 

int R_SpriteFogNum( trRefEntity_t *ent ) {
	int				i, j;
	fog_t			*fog;

	if ( tr.refdef.rdflags & RDF_NOWORLDMODEL ) {
		return 0;
	}

	if ( ent->e.renderfx & RF_CROSSHAIR ) {
		return 0;
	}

	for ( i = 1 ; i < tr.world->numfogs ; i++ ) {
		fog = &tr.world->fogs[i];
		for ( j = 0 ; j < 3 ; j++ ) {
			if ( ent->e.origin[j] - ent->e.radius >= fog->bounds[1][j] ) {
				break;
			}
			if ( ent->e.origin[j] + ent->e.radius <= fog->bounds[0][j] ) {
				break;
			}
		}
		if ( j == 3 ) {
			return i;
		}
	}

	return 0;
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
          int _len_ent0 = 1;
          struct TYPE_11__ * ent = (struct TYPE_11__ *) malloc(_len_ent0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_ent0; _i0++) {
            ent[_i0].e.renderfx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ent__i0__e_origin0 = 1;
          ent[_i0].e.origin = (long *) malloc(_len_ent__i0__e_origin0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ent__i0__e_origin0; _j0++) {
            ent[_i0].e.origin[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ent[_i0].e.radius = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = R_SpriteFogNum(ent);
          printf("%d\n", benchRet); 
          free(ent);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ent0 = 65025;
          struct TYPE_11__ * ent = (struct TYPE_11__ *) malloc(_len_ent0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_ent0; _i0++) {
            ent[_i0].e.renderfx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ent__i0__e_origin0 = 1;
          ent[_i0].e.origin = (long *) malloc(_len_ent__i0__e_origin0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ent__i0__e_origin0; _j0++) {
            ent[_i0].e.origin[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ent[_i0].e.radius = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = R_SpriteFogNum(ent);
          printf("%d\n", benchRet); 
          free(ent);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ent0 = 100;
          struct TYPE_11__ * ent = (struct TYPE_11__ *) malloc(_len_ent0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_ent0; _i0++) {
            ent[_i0].e.renderfx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ent__i0__e_origin0 = 1;
          ent[_i0].e.origin = (long *) malloc(_len_ent__i0__e_origin0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ent__i0__e_origin0; _j0++) {
            ent[_i0].e.origin[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ent[_i0].e.radius = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = R_SpriteFogNum(ent);
          printf("%d\n", benchRet); 
          free(ent);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
