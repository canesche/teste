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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int width; int height; TYPE_1__* verts; } ;
typedef  TYPE_2__ mesh_t ;
struct TYPE_4__ {double* xyz; double* st; double** lightmap; } ;

/* Variables and functions */
 int MAX_LIGHTMAPS ; 

void PutMeshOnCurve( mesh_t in ) {
	int i, j, l, m;
	float prev, next;


	// put all the aproximating points on the curve
	for ( i = 0 ; i < in.width ; i++ ) {
		for ( j = 1 ; j < in.height ; j += 2 ) {
			for ( l = 0 ; l < 3 ; l++ ) {
				prev = ( in.verts[j * in.width + i].xyz[l] + in.verts[( j + 1 ) * in.width + i].xyz[l] ) * 0.5;
				next = ( in.verts[j * in.width + i].xyz[l] + in.verts[( j - 1 ) * in.width + i].xyz[l] ) * 0.5;
				in.verts[j * in.width + i].xyz[l] = ( prev + next ) * 0.5;

				/* ydnar: interpolating st coords */
				if ( l < 2 ) {
					prev = ( in.verts[j * in.width + i].st[l] + in.verts[( j + 1 ) * in.width + i].st[l] ) * 0.5;
					next = ( in.verts[j * in.width + i].st[l] + in.verts[( j - 1 ) * in.width + i].st[l] ) * 0.5;
					in.verts[j * in.width + i].st[l] = ( prev + next ) * 0.5;

					for ( m = 0; m < MAX_LIGHTMAPS; m++ )
					{
						prev = ( in.verts[j * in.width + i].lightmap[ m ][l] + in.verts[( j + 1 ) * in.width + i].lightmap[ m ][l] ) * 0.5;
						next = ( in.verts[j * in.width + i].lightmap[ m ][l] + in.verts[( j - 1 ) * in.width + i].lightmap[ m ][l] ) * 0.5;
						in.verts[j * in.width + i].lightmap[ m ][l] = ( prev + next ) * 0.5;
					}
				}
			}
		}
	}

	for ( j = 0 ; j < in.height ; j++ ) {
		for ( i = 1 ; i < in.width ; i += 2 ) {
			for ( l = 0 ; l < 3 ; l++ ) {
				prev = ( in.verts[j * in.width + i].xyz[l] + in.verts[j * in.width + i + 1].xyz[l] ) * 0.5;
				next = ( in.verts[j * in.width + i].xyz[l] + in.verts[j * in.width + i - 1].xyz[l] ) * 0.5;
				in.verts[j * in.width + i].xyz[l] = ( prev + next ) * 0.5;

				/* ydnar: interpolating st coords */
				if ( l < 2 ) {
					prev = ( in.verts[j * in.width + i].st[l] + in.verts[j * in.width + i + 1].st[l] ) * 0.5;
					next = ( in.verts[j * in.width + i].st[l] + in.verts[j * in.width + i - 1].st[l] ) * 0.5;
					in.verts[j * in.width + i].st[l] = ( prev + next ) * 0.5;

					for ( m = 0; m < MAX_LIGHTMAPS; m++ )
					{
						prev = ( in.verts[j * in.width + i].lightmap[ m ][l] + in.verts[j * in.width + i + 1].lightmap[ m ][l] ) * 0.5;
						next = ( in.verts[j * in.width + i].lightmap[ m ][l] + in.verts[j * in.width + i - 1].lightmap[ m ][l] ) * 0.5;
						in.verts[j * in.width + i].lightmap[ m ][l] = ( prev + next ) * 0.5;
					}
				}
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
          struct TYPE_5__ in;
        in.width = ((-2 * (next_i()%2)) + 1) * next_i();
        in.height = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_in_verts0 = 1;
          in.verts = (struct TYPE_4__ *) malloc(_len_in_verts0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_in_verts0; _j0++) {
              int _len_in_verts_xyz0 = 1;
          in.verts->xyz = (double *) malloc(_len_in_verts_xyz0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_in_verts_xyz0; _j0++) {
            in.verts->xyz[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_in_verts_st0 = 1;
          in.verts->st = (double *) malloc(_len_in_verts_st0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_in_verts_st0; _j0++) {
            in.verts->st[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_in_verts_lightmap0 = 1;
          in.verts->lightmap = (double **) malloc(_len_in_verts_lightmap0*sizeof(double *));
          for(int _j0 = 0; _j0 < _len_in_verts_lightmap0; _j0++) {
            int _len_in_verts_lightmap1 = 1;
            in.verts->lightmap[_j0] = (double *) malloc(_len_in_verts_lightmap1*sizeof(double));
            for(int _j1 = 0; _j1 < _len_in_verts_lightmap1; _j1++) {
              in.verts->lightmap[_j0][_j1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          }
          PutMeshOnCurve(in);
          free(in.verts);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
