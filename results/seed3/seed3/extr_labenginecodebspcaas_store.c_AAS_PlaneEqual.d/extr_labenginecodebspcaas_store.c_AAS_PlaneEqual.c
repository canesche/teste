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
struct TYPE_4__ {TYPE_1__* planes; } ;
struct TYPE_3__ {float dist; float* normal; } ;

/* Variables and functions */
 float DIST_EPSILON ; 
 float NORMAL_EPSILON ; 
 TYPE_2__ aasworld ; 

int AAS_PlaneEqual(vec3_t normal, float dist, int planenum)
{
	float diff;

	diff = dist - aasworld.planes[planenum].dist;
	if (diff > -DIST_EPSILON && diff < DIST_EPSILON)
	{
		diff = normal[0] - aasworld.planes[planenum].normal[0];
		if (diff > -NORMAL_EPSILON && diff < NORMAL_EPSILON)
		{
			diff = normal[1] - aasworld.planes[planenum].normal[1];
			if (diff > -NORMAL_EPSILON && diff < NORMAL_EPSILON)
			{
				diff = normal[2] - aasworld.planes[planenum].normal[2];
				if (diff > -NORMAL_EPSILON && diff < NORMAL_EPSILON)
				{
					return true;
				} //end if
			} //end if
		} //end if
	} //end if
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
          float dist = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int planenum = 100;
          int _len_normal0 = 1;
          float * normal = (float *) malloc(_len_normal0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_normal0; _i0++) {
            normal[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int benchRet = AAS_PlaneEqual(normal,dist,planenum);
          printf("%d\n", benchRet); 
          free(normal);
        
        break;
    }
    // big-arr
    case 1:
    {
          float dist = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int planenum = 255;
          int _len_normal0 = 65025;
          float * normal = (float *) malloc(_len_normal0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_normal0; _i0++) {
            normal[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int benchRet = AAS_PlaneEqual(normal,dist,planenum);
          printf("%d\n", benchRet); 
          free(normal);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          float dist = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int planenum = 10;
          int _len_normal0 = 100;
          float * normal = (float *) malloc(_len_normal0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_normal0; _i0++) {
            normal[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int benchRet = AAS_PlaneEqual(normal,dist,planenum);
          printf("%d\n", benchRet); 
          free(normal);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
