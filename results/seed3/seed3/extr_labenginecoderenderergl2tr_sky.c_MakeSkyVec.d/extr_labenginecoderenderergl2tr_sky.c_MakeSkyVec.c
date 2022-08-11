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
struct TYPE_3__ {double zFar; } ;
struct TYPE_4__ {TYPE_1__ viewParms; } ;

/* Variables and functions */
 TYPE_2__ backEnd ; 
 float sky_max ; 
 float sky_min ; 

__attribute__((used)) static void MakeSkyVec( float s, float t, int axis, float outSt[2], vec3_t outXYZ )
{
	// 1 = s, 2 = t, 3 = 2048
	static int	st_to_vec[6][3] =
	{
		{3,-1,2},
		{-3,1,2},

		{1,3,2},
		{-1,-3,2},

		{-2,-1,3},		// 0 degrees yaw, look straight up
		{2,-1,-3}		// look straight down
	};

	vec3_t		b;
	int			j, k;
	float	boxSize;

	boxSize = backEnd.viewParms.zFar / 1.75;		// div sqrt(3)
	b[0] = s*boxSize;
	b[1] = t*boxSize;
	b[2] = boxSize;

	for (j=0 ; j<3 ; j++)
	{
		k = st_to_vec[axis][j];
		if (k < 0)
		{
			outXYZ[j] = -b[-k - 1];
		}
		else
		{
			outXYZ[j] = b[k - 1];
		}
	}

	// avoid bilerp seam
	s = (s+1)*0.5;
	t = (t+1)*0.5;
	if (s < sky_min)
	{
		s = sky_min;
	}
	else if (s > sky_max)
	{
		s = sky_max;
	}

	if (t < sky_min)
	{
		t = sky_min;
	}
	else if (t > sky_max)
	{
		t = sky_max;
	}

	t = 1.0 - t;


	if ( outSt )
	{
		outSt[0] = s;
		outSt[1] = t;
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
          float s = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float t = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int axis = 100;
          int _len_outSt0 = 2;
          float * outSt = (float *) malloc(_len_outSt0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_outSt0; _i0++) {
            outSt[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_outXYZ0 = 1;
          float * outXYZ = (float *) malloc(_len_outXYZ0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_outXYZ0; _i0++) {
            outXYZ[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          MakeSkyVec(s,t,axis,outSt,outXYZ);
          free(outSt);
          free(outXYZ);
        
        break;
    }
    // big-arr
    case 1:
    {
          float s = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float t = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int axis = 255;
          int _len_outSt0 = 65025;
          float * outSt = (float *) malloc(_len_outSt0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_outSt0; _i0++) {
            outSt[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_outXYZ0 = 65025;
          float * outXYZ = (float *) malloc(_len_outXYZ0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_outXYZ0; _i0++) {
            outXYZ[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          MakeSkyVec(s,t,axis,outSt,outXYZ);
          free(outSt);
          free(outXYZ);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          float s = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float t = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int axis = 10;
          int _len_outSt0 = 100;
          float * outSt = (float *) malloc(_len_outSt0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_outSt0; _i0++) {
            outSt[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_outXYZ0 = 100;
          float * outXYZ = (float *) malloc(_len_outXYZ0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_outXYZ0; _i0++) {
            outXYZ[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          MakeSkyVec(s,t,axis,outSt,outXYZ);
          free(outSt);
          free(outXYZ);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
