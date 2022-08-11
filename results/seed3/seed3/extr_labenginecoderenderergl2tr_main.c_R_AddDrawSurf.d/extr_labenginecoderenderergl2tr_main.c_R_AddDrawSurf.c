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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  surfaceType_t ;
struct TYPE_8__ {int sortedIndex; } ;
typedef  TYPE_3__ shader_t ;
struct TYPE_7__ {int numDrawSurfs; TYPE_1__* drawSurfs; } ;
struct TYPE_9__ {int shiftedEntityNum; TYPE_2__ refdef; } ;
struct TYPE_6__ {int sort; int cubemapIndex; int /*<<< orphan*/ * surface; } ;

/* Variables and functions */
 int DRAWSURF_MASK ; 
 int QSORT_FOGNUM_SHIFT ; 
 int QSORT_PSHADOW_SHIFT ; 
 int QSORT_SHADERNUM_SHIFT ; 
 TYPE_4__ tr ; 

void R_AddDrawSurf( surfaceType_t *surface, shader_t *shader, 
				   int fogIndex, int dlightMap, int pshadowMap, int cubemap ) {
	int			index;

	// instead of checking for overflow, we just mask the index
	// so it wraps around
	index = tr.refdef.numDrawSurfs & DRAWSURF_MASK;
	// the sort data is packed into a single 32 bit value so it can be
	// compared quickly during the qsorting process
	tr.refdef.drawSurfs[index].sort = (shader->sortedIndex << QSORT_SHADERNUM_SHIFT) 
		| tr.shiftedEntityNum | ( fogIndex << QSORT_FOGNUM_SHIFT ) 
		| ((int)pshadowMap << QSORT_PSHADOW_SHIFT) | (int)dlightMap;
	tr.refdef.drawSurfs[index].cubemapIndex = cubemap;
	tr.refdef.drawSurfs[index].surface = surface;
	tr.refdef.numDrawSurfs++;
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
          int fogIndex = 100;
          int dlightMap = 100;
          int pshadowMap = 100;
          int cubemap = 100;
          int _len_surface0 = 1;
          int * surface = (int *) malloc(_len_surface0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_surface0; _i0++) {
            surface[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_shader0 = 1;
          struct TYPE_8__ * shader = (struct TYPE_8__ *) malloc(_len_shader0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_shader0; _i0++) {
            shader[_i0].sortedIndex = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          R_AddDrawSurf(surface,shader,fogIndex,dlightMap,pshadowMap,cubemap);
          free(surface);
          free(shader);
        
        break;
    }
    // big-arr
    case 1:
    {
          int fogIndex = 255;
          int dlightMap = 255;
          int pshadowMap = 255;
          int cubemap = 255;
          int _len_surface0 = 65025;
          int * surface = (int *) malloc(_len_surface0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_surface0; _i0++) {
            surface[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_shader0 = 65025;
          struct TYPE_8__ * shader = (struct TYPE_8__ *) malloc(_len_shader0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_shader0; _i0++) {
            shader[_i0].sortedIndex = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          R_AddDrawSurf(surface,shader,fogIndex,dlightMap,pshadowMap,cubemap);
          free(surface);
          free(shader);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int fogIndex = 10;
          int dlightMap = 10;
          int pshadowMap = 10;
          int cubemap = 10;
          int _len_surface0 = 100;
          int * surface = (int *) malloc(_len_surface0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_surface0; _i0++) {
            surface[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_shader0 = 100;
          struct TYPE_8__ * shader = (struct TYPE_8__ *) malloc(_len_shader0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_shader0; _i0++) {
            shader[_i0].sortedIndex = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          R_AddDrawSurf(surface,shader,fogIndex,dlightMap,pshadowMap,cubemap);
          free(surface);
          free(shader);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
