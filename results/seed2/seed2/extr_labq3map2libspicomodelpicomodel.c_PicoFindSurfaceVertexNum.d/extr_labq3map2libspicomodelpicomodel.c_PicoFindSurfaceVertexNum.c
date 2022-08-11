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
typedef  scalar_t__* picoVec3_t ;
typedef  scalar_t__* picoVec2_t ;
struct TYPE_3__ {int numVertexes; scalar_t__** xyz; scalar_t__** normal; scalar_t__* smoothingGroup; scalar_t__*** st; scalar_t__* color; } ;
typedef  TYPE_1__ picoSurface_t ;
typedef  scalar_t__ picoIndex_t ;
typedef  scalar_t__ picoColor_t ;

/* Variables and functions */

int PicoFindSurfaceVertexNum( picoSurface_t *surface, picoVec3_t xyz, picoVec3_t normal, int numSTs, picoVec2_t *st, int numColors, picoColor_t *color, picoIndex_t smoothingGroup ){
	int i, j;


	/* dummy check */
	if ( surface == NULL || surface->numVertexes <= 0 ) {
		return -1;
	}

	/* walk vertex list */
	for ( i = 0; i < surface->numVertexes; i++ )
	{
		/* check xyz */
		if ( xyz != NULL && ( surface->xyz[ i ][ 0 ] != xyz[ 0 ] || surface->xyz[ i ][ 1 ] != xyz[ 1 ] || surface->xyz[ i ][ 2 ] != xyz[ 2 ] ) ) {
			continue;
		}

		/* check normal */
		if ( normal != NULL && ( surface->normal[ i ][ 0 ] != normal[ 0 ] || surface->normal[ i ][ 1 ] != normal[ 1 ] || surface->normal[ i ][ 2 ] != normal[ 2 ] ) ) {
			continue;
		}

		/* check normal */
		if ( surface->smoothingGroup[ i ] != smoothingGroup ) {
			continue;
		}

		/* check st */
		if ( numSTs > 0 && st != NULL ) {
			for ( j = 0; j < numSTs; j++ )
			{
				if ( surface->st[ j ][ i ][ 0 ] != st[ j ][ 0 ] || surface->st[ j ][ i ][ 1 ] != st[ j ][ 1 ] ) {
					break;
				}
			}
			if ( j != numSTs ) {
				continue;
			}
		}

		/* check color */
		if ( numColors > 0 && color != NULL ) {
			for ( j = 0; j < numSTs; j++ )
			{
				if ( *( (int*) surface->color[ j ] ) != *( (int*) color[ j ] ) ) {
					break;
				}
			}
			if ( j != numColors ) {
				continue;
			}
		}

		/* vertex matches */
		return i;
	}

	/* nada */
	return -1;
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
          int numSTs = 100;
          int numColors = 100;
          long smoothingGroup = 100;
          int _len_surface0 = 1;
          struct TYPE_3__ * surface = (struct TYPE_3__ *) malloc(_len_surface0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_surface0; _i0++) {
            surface[_i0].numVertexes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_surface__i0__xyz0 = 1;
          surface[_i0].xyz = (long **) malloc(_len_surface__i0__xyz0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_surface__i0__xyz0; _j0++) {
            int _len_surface__i0__xyz1 = 1;
            surface[_i0].xyz[_j0] = (long *) malloc(_len_surface__i0__xyz1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_surface__i0__xyz1; _j1++) {
              surface[_i0].xyz[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_surface__i0__normal0 = 1;
          surface[_i0].normal = (long **) malloc(_len_surface__i0__normal0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_surface__i0__normal0; _j0++) {
            int _len_surface__i0__normal1 = 1;
            surface[_i0].normal[_j0] = (long *) malloc(_len_surface__i0__normal1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_surface__i0__normal1; _j1++) {
              surface[_i0].normal[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_surface__i0__smoothingGroup0 = 1;
          surface[_i0].smoothingGroup = (long *) malloc(_len_surface__i0__smoothingGroup0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_surface__i0__smoothingGroup0; _j0++) {
            surface[_i0].smoothingGroup[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_surface__i0__st0 = 1;
          surface[_i0].st = (long ***) malloc(_len_surface__i0__st0*sizeof(long **));
          for(int _j0 = 0; _j0 < _len_surface__i0__st0; _j0++) {
            int _len_surface__i0__st1 = 1;
            surface[_i0].st[_j0] = (long **) malloc(_len_surface__i0__st1*sizeof(long *));
            for(int _j1 = 0; _j1 < _len_surface__i0__st1; _j1++) {
              int _len_surface__i0__st2 = 1;
              surface[_i0].st[_j0][_j1] = (long *) malloc(_len_surface__i0__st2*sizeof(long));
              for(int _j2 = 0; _j2 < _len_surface__i0__st2; _j2++) {
                surface[_i0].st[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_surface__i0__color0 = 1;
          surface[_i0].color = (long *) malloc(_len_surface__i0__color0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_surface__i0__color0; _j0++) {
            surface[_i0].color[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_xyz0 = 1;
          long * xyz = (long *) malloc(_len_xyz0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_xyz0; _i0++) {
            xyz[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_normal0 = 1;
          long * normal = (long *) malloc(_len_normal0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_normal0; _i0++) {
            normal[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_st0 = 1;
          long ** st = (long **) malloc(_len_st0*sizeof(long *));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            int _len_st1 = 1;
            st[_i0] = (long *) malloc(_len_st1*sizeof(long));
            for(int _i1 = 0; _i1 < _len_st1; _i1++) {
              st[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_color0 = 1;
          long * color = (long *) malloc(_len_color0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_color0; _i0++) {
            color[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = PicoFindSurfaceVertexNum(surface,xyz,normal,numSTs,st,numColors,color,smoothingGroup);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_surface0; _aux++) {
          free(*(surface[_aux].xyz));
        free(surface[_aux].xyz);
          }
          for(int _aux = 0; _aux < _len_surface0; _aux++) {
          free(*(surface[_aux].normal));
        free(surface[_aux].normal);
          }
          for(int _aux = 0; _aux < _len_surface0; _aux++) {
          free(surface[_aux].smoothingGroup);
          }
          for(int _aux = 0; _aux < _len_surface0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_surface0; _aux++) {
          free(surface[_aux].color);
          }
          free(surface);
          free(xyz);
          free(normal);
          for(int i1 = 0; i1 < _len_st0; i1++) {
            int _len_st1 = 1;
              free(st[i1]);
          }
          free(st);
          free(color);
        
        break;
    }
    // big-arr
    case 1:
    {
          int numSTs = 255;
          int numColors = 255;
          long smoothingGroup = 255;
          int _len_surface0 = 65025;
          struct TYPE_3__ * surface = (struct TYPE_3__ *) malloc(_len_surface0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_surface0; _i0++) {
            surface[_i0].numVertexes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_surface__i0__xyz0 = 1;
          surface[_i0].xyz = (long **) malloc(_len_surface__i0__xyz0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_surface__i0__xyz0; _j0++) {
            int _len_surface__i0__xyz1 = 1;
            surface[_i0].xyz[_j0] = (long *) malloc(_len_surface__i0__xyz1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_surface__i0__xyz1; _j1++) {
              surface[_i0].xyz[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_surface__i0__normal0 = 1;
          surface[_i0].normal = (long **) malloc(_len_surface__i0__normal0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_surface__i0__normal0; _j0++) {
            int _len_surface__i0__normal1 = 1;
            surface[_i0].normal[_j0] = (long *) malloc(_len_surface__i0__normal1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_surface__i0__normal1; _j1++) {
              surface[_i0].normal[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_surface__i0__smoothingGroup0 = 1;
          surface[_i0].smoothingGroup = (long *) malloc(_len_surface__i0__smoothingGroup0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_surface__i0__smoothingGroup0; _j0++) {
            surface[_i0].smoothingGroup[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_surface__i0__st0 = 1;
          surface[_i0].st = (long ***) malloc(_len_surface__i0__st0*sizeof(long **));
          for(int _j0 = 0; _j0 < _len_surface__i0__st0; _j0++) {
            int _len_surface__i0__st1 = 1;
            surface[_i0].st[_j0] = (long **) malloc(_len_surface__i0__st1*sizeof(long *));
            for(int _j1 = 0; _j1 < _len_surface__i0__st1; _j1++) {
              int _len_surface__i0__st2 = 1;
              surface[_i0].st[_j0][_j1] = (long *) malloc(_len_surface__i0__st2*sizeof(long));
              for(int _j2 = 0; _j2 < _len_surface__i0__st2; _j2++) {
                surface[_i0].st[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_surface__i0__color0 = 1;
          surface[_i0].color = (long *) malloc(_len_surface__i0__color0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_surface__i0__color0; _j0++) {
            surface[_i0].color[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_xyz0 = 65025;
          long * xyz = (long *) malloc(_len_xyz0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_xyz0; _i0++) {
            xyz[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_normal0 = 65025;
          long * normal = (long *) malloc(_len_normal0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_normal0; _i0++) {
            normal[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_st0 = 65025;
          long ** st = (long **) malloc(_len_st0*sizeof(long *));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            int _len_st1 = 1;
            st[_i0] = (long *) malloc(_len_st1*sizeof(long));
            for(int _i1 = 0; _i1 < _len_st1; _i1++) {
              st[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_color0 = 65025;
          long * color = (long *) malloc(_len_color0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_color0; _i0++) {
            color[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = PicoFindSurfaceVertexNum(surface,xyz,normal,numSTs,st,numColors,color,smoothingGroup);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_surface0; _aux++) {
          free(*(surface[_aux].xyz));
        free(surface[_aux].xyz);
          }
          for(int _aux = 0; _aux < _len_surface0; _aux++) {
          free(*(surface[_aux].normal));
        free(surface[_aux].normal);
          }
          for(int _aux = 0; _aux < _len_surface0; _aux++) {
          free(surface[_aux].smoothingGroup);
          }
          for(int _aux = 0; _aux < _len_surface0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_surface0; _aux++) {
          free(surface[_aux].color);
          }
          free(surface);
          free(xyz);
          free(normal);
          for(int i1 = 0; i1 < _len_st0; i1++) {
            int _len_st1 = 1;
              free(st[i1]);
          }
          free(st);
          free(color);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int numSTs = 10;
          int numColors = 10;
          long smoothingGroup = 10;
          int _len_surface0 = 100;
          struct TYPE_3__ * surface = (struct TYPE_3__ *) malloc(_len_surface0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_surface0; _i0++) {
            surface[_i0].numVertexes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_surface__i0__xyz0 = 1;
          surface[_i0].xyz = (long **) malloc(_len_surface__i0__xyz0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_surface__i0__xyz0; _j0++) {
            int _len_surface__i0__xyz1 = 1;
            surface[_i0].xyz[_j0] = (long *) malloc(_len_surface__i0__xyz1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_surface__i0__xyz1; _j1++) {
              surface[_i0].xyz[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_surface__i0__normal0 = 1;
          surface[_i0].normal = (long **) malloc(_len_surface__i0__normal0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_surface__i0__normal0; _j0++) {
            int _len_surface__i0__normal1 = 1;
            surface[_i0].normal[_j0] = (long *) malloc(_len_surface__i0__normal1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_surface__i0__normal1; _j1++) {
              surface[_i0].normal[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_surface__i0__smoothingGroup0 = 1;
          surface[_i0].smoothingGroup = (long *) malloc(_len_surface__i0__smoothingGroup0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_surface__i0__smoothingGroup0; _j0++) {
            surface[_i0].smoothingGroup[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_surface__i0__st0 = 1;
          surface[_i0].st = (long ***) malloc(_len_surface__i0__st0*sizeof(long **));
          for(int _j0 = 0; _j0 < _len_surface__i0__st0; _j0++) {
            int _len_surface__i0__st1 = 1;
            surface[_i0].st[_j0] = (long **) malloc(_len_surface__i0__st1*sizeof(long *));
            for(int _j1 = 0; _j1 < _len_surface__i0__st1; _j1++) {
              int _len_surface__i0__st2 = 1;
              surface[_i0].st[_j0][_j1] = (long *) malloc(_len_surface__i0__st2*sizeof(long));
              for(int _j2 = 0; _j2 < _len_surface__i0__st2; _j2++) {
                surface[_i0].st[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_surface__i0__color0 = 1;
          surface[_i0].color = (long *) malloc(_len_surface__i0__color0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_surface__i0__color0; _j0++) {
            surface[_i0].color[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_xyz0 = 100;
          long * xyz = (long *) malloc(_len_xyz0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_xyz0; _i0++) {
            xyz[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_normal0 = 100;
          long * normal = (long *) malloc(_len_normal0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_normal0; _i0++) {
            normal[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_st0 = 100;
          long ** st = (long **) malloc(_len_st0*sizeof(long *));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            int _len_st1 = 1;
            st[_i0] = (long *) malloc(_len_st1*sizeof(long));
            for(int _i1 = 0; _i1 < _len_st1; _i1++) {
              st[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_color0 = 100;
          long * color = (long *) malloc(_len_color0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_color0; _i0++) {
            color[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = PicoFindSurfaceVertexNum(surface,xyz,normal,numSTs,st,numColors,color,smoothingGroup);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_surface0; _aux++) {
          free(*(surface[_aux].xyz));
        free(surface[_aux].xyz);
          }
          for(int _aux = 0; _aux < _len_surface0; _aux++) {
          free(*(surface[_aux].normal));
        free(surface[_aux].normal);
          }
          for(int _aux = 0; _aux < _len_surface0; _aux++) {
          free(surface[_aux].smoothingGroup);
          }
          for(int _aux = 0; _aux < _len_surface0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_surface0; _aux++) {
          free(surface[_aux].color);
          }
          free(surface);
          free(xyz);
          free(normal);
          for(int i1 = 0; i1 < _len_st0; i1++) {
            int _len_st1 = 1;
              free(st[i1]);
          }
          free(st);
          free(color);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
