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
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
typedef  size_t int64_t ;
struct TYPE_8__ {double bulgeSpeed; float const bulgeWidth; float bulgeHeight; } ;
typedef  TYPE_2__ deformStage_t ;
struct TYPE_7__ {double time; } ;
struct TYPE_11__ {TYPE_1__ refdef; } ;
struct TYPE_10__ {int numVertexes; scalar_t__ normal; scalar_t__ xyz; scalar_t__* texCoords; } ;
struct TYPE_9__ {float* sinTable; } ;

/* Variables and functions */
 size_t FUNCTABLE_MASK ; 
 int FUNCTABLE_SIZE ; 
 int M_PI ; 
 TYPE_5__ backEnd ; 
 TYPE_4__ tess ; 
 TYPE_3__ tr ; 

void RB_CalcBulgeVertexes( deformStage_t *ds ) {
	int i;
	const float *st = ( const float * ) tess.texCoords[0];
	float		*xyz = ( float * ) tess.xyz;
	float		*normal = ( float * ) tess.normal;
	double		now;

	now = backEnd.refdef.time * 0.001 * ds->bulgeSpeed;

	for ( i = 0; i < tess.numVertexes; i++, xyz += 4, st += 4, normal += 4 ) {
		int64_t off;
		float scale;

		off = (float)( FUNCTABLE_SIZE / (M_PI*2) ) * ( st[0] * ds->bulgeWidth + now );

		scale = tr.sinTable[ off & FUNCTABLE_MASK ] * ds->bulgeHeight;
			
		xyz[0] += normal[0] * scale;
		xyz[1] += normal[1] * scale;
		xyz[2] += normal[2] * scale;
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
          int _len_ds0 = 1;
          struct TYPE_8__ * ds = (struct TYPE_8__ *) malloc(_len_ds0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_ds0; _i0++) {
            ds[_i0].bulgeSpeed = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ds[_i0].bulgeWidth = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ds[_i0].bulgeHeight = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          RB_CalcBulgeVertexes(ds);
          free(ds);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ds0 = 65025;
          struct TYPE_8__ * ds = (struct TYPE_8__ *) malloc(_len_ds0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_ds0; _i0++) {
            ds[_i0].bulgeSpeed = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ds[_i0].bulgeWidth = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ds[_i0].bulgeHeight = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          RB_CalcBulgeVertexes(ds);
          free(ds);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ds0 = 100;
          struct TYPE_8__ * ds = (struct TYPE_8__ *) malloc(_len_ds0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_ds0; _i0++) {
            ds[_i0].bulgeSpeed = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ds[_i0].bulgeWidth = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ds[_i0].bulgeHeight = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          RB_CalcBulgeVertexes(ds);
          free(ds);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
