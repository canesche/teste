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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  srfVert_t ;
struct TYPE_3__ {int numVerts; int numIndexes; int /*<<< orphan*/ * indexes; int /*<<< orphan*/ * vertexes; } ;
typedef  TYPE_1__ queuedSurface_t ;
typedef  int /*<<< orphan*/  glIndex_t ;
struct TYPE_4__ {int numSurfaces; int vertexCommitSize; int indexCommitSize; TYPE_1__* surfaces; } ;

/* Variables and functions */
 TYPE_2__ vcq ; 

void VaoCache_AddSurface(srfVert_t *verts, int numVerts, glIndex_t *indexes, int numIndexes)
{
	queuedSurface_t *queueEntry = vcq.surfaces + vcq.numSurfaces;
	queueEntry->vertexes = verts;
	queueEntry->numVerts = numVerts;
	queueEntry->indexes = indexes;
	queueEntry->numIndexes = numIndexes;
	vcq.numSurfaces++;

	vcq.vertexCommitSize += sizeof(srfVert_t) * numVerts;
	vcq.indexCommitSize += sizeof(glIndex_t) * numIndexes;
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
          int numVerts = 100;
          int numIndexes = 100;
          int _len_verts0 = 1;
          int * verts = (int *) malloc(_len_verts0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_verts0; _i0++) {
            verts[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_indexes0 = 1;
          int * indexes = (int *) malloc(_len_indexes0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_indexes0; _i0++) {
            indexes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          VaoCache_AddSurface(verts,numVerts,indexes,numIndexes);
          free(verts);
          free(indexes);
        
        break;
    }
    // big-arr
    case 1:
    {
          int numVerts = 255;
          int numIndexes = 255;
          int _len_verts0 = 65025;
          int * verts = (int *) malloc(_len_verts0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_verts0; _i0++) {
            verts[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_indexes0 = 65025;
          int * indexes = (int *) malloc(_len_indexes0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_indexes0; _i0++) {
            indexes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          VaoCache_AddSurface(verts,numVerts,indexes,numIndexes);
          free(verts);
          free(indexes);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int numVerts = 10;
          int numIndexes = 10;
          int _len_verts0 = 100;
          int * verts = (int *) malloc(_len_verts0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_verts0; _i0++) {
            verts[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_indexes0 = 100;
          int * indexes = (int *) malloc(_len_indexes0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_indexes0; _i0++) {
            indexes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          VaoCache_AddSurface(verts,numVerts,indexes,numIndexes);
          free(verts);
          free(indexes);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
