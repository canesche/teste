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
typedef  float* vec3_t ;
struct TYPE_4__ {TYPE_1__* vertexes; } ;
struct TYPE_3__ {float* v; } ;

/* Variables and functions */
 TYPE_2__ thworld ; 

int TH_OutsideBoundingBox(int v1, int v2, vec3_t mins, vec3_t maxs)
{
	float *p1, *p2;
	int i;

	p1 = thworld.vertexes[v1].v;
	p2 = thworld.vertexes[v2].v;
	//if both points are at the outer side of one of the bounding box planes
	for (i = 0; i < 3; i++)
	{
		if (p1[i] < mins[i] && p2[i] < mins[i]) return true;
		if (p1[i] > maxs[i] && p2[i] > maxs[i]) return true;
	} //end for
	return false;
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
          int v1 = 100;
          int v2 = 100;
          int _len_mins0 = 1;
          float * mins = (float *) malloc(_len_mins0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_mins0; _i0++) {
            mins[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_maxs0 = 1;
          float * maxs = (float *) malloc(_len_maxs0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_maxs0; _i0++) {
            maxs[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int benchRet = TH_OutsideBoundingBox(v1,v2,mins,maxs);
          printf("%d\n", benchRet); 
          free(mins);
          free(maxs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int v1 = 255;
          int v2 = 255;
          int _len_mins0 = 65025;
          float * mins = (float *) malloc(_len_mins0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_mins0; _i0++) {
            mins[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_maxs0 = 65025;
          float * maxs = (float *) malloc(_len_maxs0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_maxs0; _i0++) {
            maxs[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int benchRet = TH_OutsideBoundingBox(v1,v2,mins,maxs);
          printf("%d\n", benchRet); 
          free(mins);
          free(maxs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int v1 = 10;
          int v2 = 10;
          int _len_mins0 = 100;
          float * mins = (float *) malloc(_len_mins0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_mins0; _i0++) {
            mins[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_maxs0 = 100;
          float * maxs = (float *) malloc(_len_maxs0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_maxs0; _i0++) {
            maxs[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int benchRet = TH_OutsideBoundingBox(v1,v2,mins,maxs);
          printf("%d\n", benchRet); 
          free(mins);
          free(maxs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
