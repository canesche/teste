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
struct TYPE_3__ {scalar_t__ model; scalar_t__ hasLightmap; scalar_t__ sampleSize; scalar_t__* axis; scalar_t__* plane; scalar_t__* mins; } ;
typedef  TYPE_1__ surfaceInfo_t ;

/* Variables and functions */
 TYPE_1__* surfaceInfos ; 

__attribute__((used)) static int CompareSurfaceInfo( const void *a, const void *b ){
	surfaceInfo_t   *aInfo, *bInfo;
	int i;


	/* get surface info */
	aInfo = &surfaceInfos[ *( (int*) a ) ];
	bInfo = &surfaceInfos[ *( (int*) b ) ];

	/* model first */
	if ( aInfo->model < bInfo->model ) {
		return 1;
	}
	else if ( aInfo->model > bInfo->model ) {
		return -1;
	}

	/* then lightmap status */
	if ( aInfo->hasLightmap < bInfo->hasLightmap ) {
		return 1;
	}
	else if ( aInfo->hasLightmap > bInfo->hasLightmap ) {
		return -1;
	}

	/* then lightmap sample size */
	if ( aInfo->sampleSize < bInfo->sampleSize ) {
		return 1;
	}
	else if ( aInfo->sampleSize > bInfo->sampleSize ) {
		return -1;
	}

	/* then lightmap axis */
	for ( i = 0; i < 3; i++ )
	{
		if ( aInfo->axis[ i ] < bInfo->axis[ i ] ) {
			return 1;
		}
		else if ( aInfo->axis[ i ] > bInfo->axis[ i ] ) {
			return -1;
		}
	}

	/* then plane */
	if ( aInfo->plane == NULL && bInfo->plane != NULL ) {
		return 1;
	}
	else if ( aInfo->plane != NULL && bInfo->plane == NULL ) {
		return -1;
	}
	else if ( aInfo->plane != NULL && bInfo->plane != NULL ) {
		for ( i = 0; i < 4; i++ )
		{
			if ( aInfo->plane[ i ] < bInfo->plane[ i ] ) {
				return 1;
			}
			else if ( aInfo->plane[ i ] > bInfo->plane[ i ] ) {
				return -1;
			}
		}
	}

	/* then position in world */
	for ( i = 0; i < 3; i++ )
	{
		if ( aInfo->mins[ i ] < bInfo->mins[ i ] ) {
			return 1;
		}
		else if ( aInfo->mins[ i ] > bInfo->mins[ i ] ) {
			return -1;
		}
	}

	/* these are functionally identical (this should almost never happen) */
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
          int _len_a0 = 1;
          const void * a = (const void *) malloc(_len_a0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = 0;
          }
          int _len_b0 = 1;
          const void * b = (const void *) malloc(_len_b0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = 0;
          }
          int benchRet = CompareSurfaceInfo(a,b);
          printf("%d\n", benchRet); 
          free(a);
          free(b);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_a0 = 65025;
          const void * a = (const void *) malloc(_len_a0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = 0;
          }
          int _len_b0 = 65025;
          const void * b = (const void *) malloc(_len_b0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = 0;
          }
          int benchRet = CompareSurfaceInfo(a,b);
          printf("%d\n", benchRet); 
          free(a);
          free(b);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_a0 = 100;
          const void * a = (const void *) malloc(_len_a0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = 0;
          }
          int _len_b0 = 100;
          const void * b = (const void *) malloc(_len_b0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = 0;
          }
          int benchRet = CompareSurfaceInfo(a,b);
          printf("%d\n", benchRet); 
          free(a);
          free(b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
