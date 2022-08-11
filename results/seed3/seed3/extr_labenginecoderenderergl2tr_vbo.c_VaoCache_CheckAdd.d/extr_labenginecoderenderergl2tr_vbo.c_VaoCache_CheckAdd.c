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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  srfVert_t ;
typedef  int /*<<< orphan*/  qboolean ;
typedef  int /*<<< orphan*/  glIndex_t ;
struct TYPE_6__ {scalar_t__ vertexOffset; scalar_t__ indexOffset; scalar_t__ numSurfaces; scalar_t__ numBatches; TYPE_1__* vao; } ;
struct TYPE_5__ {int vertexCommitSize; int indexCommitSize; scalar_t__ numSurfaces; } ;
struct TYPE_4__ {scalar_t__ vertexesSize; scalar_t__ indexesSize; } ;

/* Variables and functions */
 scalar_t__ VAOCACHE_MAX_BATCHES ; 
 scalar_t__ VAOCACHE_MAX_SURFACES ; 
 int VAOCACHE_QUEUE_MAX_INDEXES ; 
 scalar_t__ VAOCACHE_QUEUE_MAX_SURFACES ; 
 int VAOCACHE_QUEUE_MAX_VERTEXES ; 
 int /*<<< orphan*/  qtrue ; 
 TYPE_3__ vc ; 
 TYPE_2__ vcq ; 

void VaoCache_CheckAdd(qboolean *endSurface, qboolean *recycleVertexBuffer, qboolean *recycleIndexBuffer, int numVerts, int numIndexes)
{
	int vertexesSize = sizeof(srfVert_t) * numVerts;
	int indexesSize = sizeof(glIndex_t) * numIndexes;

	if (vc.vao->vertexesSize < vc.vertexOffset + vcq.vertexCommitSize + vertexesSize)
	{
		//ri.Printf(PRINT_ALL, "out of space in vertex cache: %d < %d + %d + %d\n", vc.vao->vertexesSize, vc.vertexOffset, vcq.vertexCommitSize, vertexesSize);
		*recycleVertexBuffer = qtrue;
		*recycleIndexBuffer = qtrue;
		*endSurface = qtrue;
	}

	if (vc.vao->indexesSize < vc.indexOffset + vcq.indexCommitSize + indexesSize)
	{
		//ri.Printf(PRINT_ALL, "out of space in index cache\n");
		*recycleIndexBuffer = qtrue;
		*endSurface = qtrue;
	}

	if (vc.numSurfaces + vcq.numSurfaces >= VAOCACHE_MAX_SURFACES)
	{
		//ri.Printf(PRINT_ALL, "out of surfaces in index cache\n");
		*recycleIndexBuffer = qtrue;
		*endSurface = qtrue;
	}

	if (vc.numBatches >= VAOCACHE_MAX_BATCHES)
	{
		//ri.Printf(PRINT_ALL, "out of batches in index cache\n");
		*recycleIndexBuffer = qtrue;
		*endSurface = qtrue;
	}

	if (vcq.numSurfaces >= VAOCACHE_QUEUE_MAX_SURFACES)
	{
		//ri.Printf(PRINT_ALL, "out of queued surfaces\n");
		*endSurface = qtrue;
	}

	if (VAOCACHE_QUEUE_MAX_VERTEXES * sizeof(srfVert_t) < vcq.vertexCommitSize + vertexesSize)
	{
		//ri.Printf(PRINT_ALL, "out of queued vertexes\n");
		*endSurface = qtrue;
	}

	if (VAOCACHE_QUEUE_MAX_INDEXES * sizeof(glIndex_t) < vcq.indexCommitSize + indexesSize)
	{
		//ri.Printf(PRINT_ALL, "out of queued indexes\n");
		*endSurface = qtrue;
	}
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
          int _len_endSurface0 = 1;
          int * endSurface = (int *) malloc(_len_endSurface0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_endSurface0; _i0++) {
            endSurface[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_recycleVertexBuffer0 = 1;
          int * recycleVertexBuffer = (int *) malloc(_len_recycleVertexBuffer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_recycleVertexBuffer0; _i0++) {
            recycleVertexBuffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_recycleIndexBuffer0 = 1;
          int * recycleIndexBuffer = (int *) malloc(_len_recycleIndexBuffer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_recycleIndexBuffer0; _i0++) {
            recycleIndexBuffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          VaoCache_CheckAdd(endSurface,recycleVertexBuffer,recycleIndexBuffer,numVerts,numIndexes);
          free(endSurface);
          free(recycleVertexBuffer);
          free(recycleIndexBuffer);
        
        break;
    }
    // big-arr
    case 1:
    {
          int numVerts = 255;
          int numIndexes = 255;
          int _len_endSurface0 = 65025;
          int * endSurface = (int *) malloc(_len_endSurface0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_endSurface0; _i0++) {
            endSurface[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_recycleVertexBuffer0 = 65025;
          int * recycleVertexBuffer = (int *) malloc(_len_recycleVertexBuffer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_recycleVertexBuffer0; _i0++) {
            recycleVertexBuffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_recycleIndexBuffer0 = 65025;
          int * recycleIndexBuffer = (int *) malloc(_len_recycleIndexBuffer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_recycleIndexBuffer0; _i0++) {
            recycleIndexBuffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          VaoCache_CheckAdd(endSurface,recycleVertexBuffer,recycleIndexBuffer,numVerts,numIndexes);
          free(endSurface);
          free(recycleVertexBuffer);
          free(recycleIndexBuffer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int numVerts = 10;
          int numIndexes = 10;
          int _len_endSurface0 = 100;
          int * endSurface = (int *) malloc(_len_endSurface0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_endSurface0; _i0++) {
            endSurface[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_recycleVertexBuffer0 = 100;
          int * recycleVertexBuffer = (int *) malloc(_len_recycleVertexBuffer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_recycleVertexBuffer0; _i0++) {
            recycleVertexBuffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_recycleIndexBuffer0 = 100;
          int * recycleIndexBuffer = (int *) malloc(_len_recycleIndexBuffer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_recycleIndexBuffer0; _i0++) {
            recycleIndexBuffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          VaoCache_CheckAdd(endSurface,recycleVertexBuffer,recycleIndexBuffer,numVerts,numIndexes);
          free(endSurface);
          free(recycleVertexBuffer);
          free(recycleIndexBuffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
