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
typedef  scalar_t__* vec3_t ;

/* Variables and functions */
 int HASH_SIZE ; 
 int* edge_verts ; 
 int* hashverts ; 
 scalar_t__ num_edge_verts ; 
 int* vertexchain ; 

void FindEdgeVerts (vec3_t v1, vec3_t v2)
{
	int		x1, x2, y1, y2, t;
	int		x, y;
	int		vnum;

#if 0
{
	int		i;
	num_edge_verts = numvertexes-1;
	for (i=0 ; i<numvertexes-1 ; i++)
		edge_verts[i] = i+1;
}
#endif

	x1 = (4096 + (int)(v1[0]+0.5)) >> 7;
	y1 = (4096 + (int)(v1[1]+0.5)) >> 7;
	x2 = (4096 + (int)(v2[0]+0.5)) >> 7;
	y2 = (4096 + (int)(v2[1]+0.5)) >> 7;

	if (x1 > x2)
	{
		t = x1;
		x1 = x2;
		x2 = t;
	}
	if (y1 > y2)
	{
		t = y1;
		y1 = y2;
		y2 = t;
	}
#if 0
	x1--;
	x2++;
	y1--;
	y2++;
	if (x1 < 0)
		x1 = 0;
	if (x2 >= HASH_SIZE)
		x2 = HASH_SIZE;
	if (y1 < 0)
		y1 = 0;
	if (y2 >= HASH_SIZE)
		y2 = HASH_SIZE;
#endif
	num_edge_verts = 0;
	for (x=x1 ; x <= x2 ; x++)
	{
		for (y=y1 ; y <= y2 ; y++)
		{
			for (vnum=hashverts[y*HASH_SIZE+x] ; vnum ; vnum=vertexchain[vnum])
			{
				edge_verts[num_edge_verts++] = vnum;
			}
		}
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
          int _len_v10 = 1;
          long * v1 = (long *) malloc(_len_v10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_v10; _i0++) {
            v1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_v20 = 1;
          long * v2 = (long *) malloc(_len_v20*sizeof(long));
          for(int _i0 = 0; _i0 < _len_v20; _i0++) {
            v2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          FindEdgeVerts(v1,v2);
          free(v1);
          free(v2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_v10 = 65025;
          long * v1 = (long *) malloc(_len_v10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_v10; _i0++) {
            v1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_v20 = 65025;
          long * v2 = (long *) malloc(_len_v20*sizeof(long));
          for(int _i0 = 0; _i0 < _len_v20; _i0++) {
            v2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          FindEdgeVerts(v1,v2);
          free(v1);
          free(v2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_v10 = 100;
          long * v1 = (long *) malloc(_len_v10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_v10; _i0++) {
            v1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_v20 = 100;
          long * v2 = (long *) malloc(_len_v20*sizeof(long));
          for(int _i0 = 0; _i0 < _len_v20; _i0++) {
            v2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          FindEdgeVerts(v1,v2);
          free(v1);
          free(v2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
