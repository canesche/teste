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
struct TYPE_3__ {float* verts; int nverts; float* tcoords; unsigned int* colors; } ;
typedef  TYPE_1__ FONScontext ;

/* Variables and functions */

__attribute__((used)) static __inline void fons__vertex(FONScontext* stash, float x, float y, float s, float t, unsigned int c)
{
	stash->verts[stash->nverts*2+0] = x;
	stash->verts[stash->nverts*2+1] = y;
	stash->tcoords[stash->nverts*2+0] = s;
	stash->tcoords[stash->nverts*2+1] = t;
	stash->colors[stash->nverts] = c;
	stash->nverts++;
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
          float x = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float y = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float s = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float t = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          unsigned int c = 100;
          int _len_stash0 = 1;
          struct TYPE_3__ * stash = (struct TYPE_3__ *) malloc(_len_stash0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stash0; _i0++) {
              int _len_stash__i0__verts0 = 1;
          stash[_i0].verts = (float *) malloc(_len_stash__i0__verts0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_stash__i0__verts0; _j0++) {
            stash[_i0].verts[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        stash[_i0].nverts = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stash__i0__tcoords0 = 1;
          stash[_i0].tcoords = (float *) malloc(_len_stash__i0__tcoords0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_stash__i0__tcoords0; _j0++) {
            stash[_i0].tcoords[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_stash__i0__colors0 = 1;
          stash[_i0].colors = (unsigned int *) malloc(_len_stash__i0__colors0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_stash__i0__colors0; _j0++) {
            stash[_i0].colors[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          fons__vertex(stash,x,y,s,t,c);
          for(int _aux = 0; _aux < _len_stash0; _aux++) {
          free(stash[_aux].verts);
          }
          for(int _aux = 0; _aux < _len_stash0; _aux++) {
          free(stash[_aux].tcoords);
          }
          for(int _aux = 0; _aux < _len_stash0; _aux++) {
          free(stash[_aux].colors);
          }
          free(stash);
        
        break;
    }
    // big-arr
    case 1:
    {
          float x = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float y = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float s = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float t = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          unsigned int c = 255;
          int _len_stash0 = 65025;
          struct TYPE_3__ * stash = (struct TYPE_3__ *) malloc(_len_stash0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stash0; _i0++) {
              int _len_stash__i0__verts0 = 1;
          stash[_i0].verts = (float *) malloc(_len_stash__i0__verts0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_stash__i0__verts0; _j0++) {
            stash[_i0].verts[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        stash[_i0].nverts = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stash__i0__tcoords0 = 1;
          stash[_i0].tcoords = (float *) malloc(_len_stash__i0__tcoords0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_stash__i0__tcoords0; _j0++) {
            stash[_i0].tcoords[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_stash__i0__colors0 = 1;
          stash[_i0].colors = (unsigned int *) malloc(_len_stash__i0__colors0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_stash__i0__colors0; _j0++) {
            stash[_i0].colors[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          fons__vertex(stash,x,y,s,t,c);
          for(int _aux = 0; _aux < _len_stash0; _aux++) {
          free(stash[_aux].verts);
          }
          for(int _aux = 0; _aux < _len_stash0; _aux++) {
          free(stash[_aux].tcoords);
          }
          for(int _aux = 0; _aux < _len_stash0; _aux++) {
          free(stash[_aux].colors);
          }
          free(stash);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          float x = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float y = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float s = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float t = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          unsigned int c = 10;
          int _len_stash0 = 100;
          struct TYPE_3__ * stash = (struct TYPE_3__ *) malloc(_len_stash0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stash0; _i0++) {
              int _len_stash__i0__verts0 = 1;
          stash[_i0].verts = (float *) malloc(_len_stash__i0__verts0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_stash__i0__verts0; _j0++) {
            stash[_i0].verts[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        stash[_i0].nverts = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stash__i0__tcoords0 = 1;
          stash[_i0].tcoords = (float *) malloc(_len_stash__i0__tcoords0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_stash__i0__tcoords0; _j0++) {
            stash[_i0].tcoords[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_stash__i0__colors0 = 1;
          stash[_i0].colors = (unsigned int *) malloc(_len_stash__i0__colors0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_stash__i0__colors0; _j0++) {
            stash[_i0].colors[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          fons__vertex(stash,x,y,s,t,c);
          for(int _aux = 0; _aux < _len_stash0; _aux++) {
          free(stash[_aux].verts);
          }
          for(int _aux = 0; _aux < _len_stash0; _aux++) {
          free(stash[_aux].tcoords);
          }
          for(int _aux = 0; _aux < _len_stash0; _aux++) {
          free(stash[_aux].colors);
          }
          free(stash);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
