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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {double* coords; } ;
struct TYPE_4__ {int cacheCount; TYPE_2__* cache; } ;
typedef  double GLdouble ;
typedef  TYPE_1__ GLUtesselator ;
typedef  TYPE_2__ CachedVertex ;

/* Variables and functions */
 int SIGN_INCONSISTENT ; 

__attribute__((used)) static int ComputeNormal( GLUtesselator *tess, GLdouble norm[3], int check )
/*
 * If check==FALSE, we compute the polygon normal and place it in norm[].
 * If check==TRUE, we check that each triangle in the fan from v0 has a
 * consistent orientation with respect to norm[].  If triangles are
 * consistently oriented CCW, return 1; if CW, return -1; if all triangles
 * are degenerate return 0; otherwise (no consistent orientation) return
 * SIGN_INCONSISTENT.
 */
{
  CachedVertex *v0 = tess->cache;
  CachedVertex *vn = v0 + tess->cacheCount;
  CachedVertex *vc;
  GLdouble dot, xc, yc, zc, xp, yp, zp, n[3];
  int sign = 0;

  /* Find the polygon normal.  It is important to get a reasonable
   * normal even when the polygon is self-intersecting (eg. a bowtie).
   * Otherwise, the computed normal could be very tiny, but perpendicular
   * to the true plane of the polygon due to numerical noise.  Then all
   * the triangles would appear to be degenerate and we would incorrectly
   * decompose the polygon as a fan (or simply not render it at all).
   *
   * We use a sum-of-triangles normal algorithm rather than the more
   * efficient sum-of-trapezoids method (used in CheckOrientation()
   * in normal.c).  This lets us explicitly reverse the signed area
   * of some triangles to get a reasonable normal in the self-intersecting
   * case.
   */
  if( ! check ) {
    norm[0] = norm[1] = norm[2] = 0.0;
  }

  vc = v0 + 1;
  xc = vc->coords[0] - v0->coords[0];
  yc = vc->coords[1] - v0->coords[1];
  zc = vc->coords[2] - v0->coords[2];
  while( ++vc < vn ) {
    xp = xc; yp = yc; zp = zc;
    xc = vc->coords[0] - v0->coords[0];
    yc = vc->coords[1] - v0->coords[1];
    zc = vc->coords[2] - v0->coords[2];

    /* Compute (vp - v0) cross (vc - v0) */
    n[0] = yp*zc - zp*yc;
    n[1] = zp*xc - xp*zc;
    n[2] = xp*yc - yp*xc;

    dot = n[0]*norm[0] + n[1]*norm[1] + n[2]*norm[2];
    if( ! check ) {
      /* Reverse the contribution of back-facing triangles to get
       * a reasonable normal for self-intersecting polygons (see above)
       */
      if( dot >= 0 ) {
	norm[0] += n[0]; norm[1] += n[1]; norm[2] += n[2];
      } else {
	norm[0] -= n[0]; norm[1] -= n[1]; norm[2] -= n[2];
      }
    } else if( dot != 0 ) {
      /* Check the new orientation for consistency with previous triangles */
      if( dot > 0 ) {
	if( sign < 0 ) return SIGN_INCONSISTENT;
	sign = 1;
      } else {
	if( sign > 0 ) return SIGN_INCONSISTENT;
	sign = -1;
      }
    }
  }
  return sign;
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
          int check = 100;
          int _len_tess0 = 1;
          struct TYPE_4__ * tess = (struct TYPE_4__ *) malloc(_len_tess0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_tess0; _i0++) {
            tess[_i0].cacheCount = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tess__i0__cache0 = 1;
          tess[_i0].cache = (struct TYPE_5__ *) malloc(_len_tess__i0__cache0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_tess__i0__cache0; _j0++) {
              int _len_tess__i0__cache_coords0 = 1;
          tess[_i0].cache->coords = (double *) malloc(_len_tess__i0__cache_coords0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_tess__i0__cache_coords0; _j0++) {
            tess[_i0].cache->coords[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          }
          int _len_norm0 = 3;
          double * norm = (double *) malloc(_len_norm0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_norm0; _i0++) {
            norm[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int benchRet = ComputeNormal(tess,norm,check);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tess0; _aux++) {
          free(tess[_aux].cache);
          }
          free(tess);
          free(norm);
        
        break;
    }
    // big-arr
    case 1:
    {
          int check = 255;
          int _len_tess0 = 65025;
          struct TYPE_4__ * tess = (struct TYPE_4__ *) malloc(_len_tess0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_tess0; _i0++) {
            tess[_i0].cacheCount = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tess__i0__cache0 = 1;
          tess[_i0].cache = (struct TYPE_5__ *) malloc(_len_tess__i0__cache0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_tess__i0__cache0; _j0++) {
              int _len_tess__i0__cache_coords0 = 1;
          tess[_i0].cache->coords = (double *) malloc(_len_tess__i0__cache_coords0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_tess__i0__cache_coords0; _j0++) {
            tess[_i0].cache->coords[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          }
          int _len_norm0 = 65025;
          double * norm = (double *) malloc(_len_norm0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_norm0; _i0++) {
            norm[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int benchRet = ComputeNormal(tess,norm,check);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tess0; _aux++) {
          free(tess[_aux].cache);
          }
          free(tess);
          free(norm);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int check = 10;
          int _len_tess0 = 100;
          struct TYPE_4__ * tess = (struct TYPE_4__ *) malloc(_len_tess0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_tess0; _i0++) {
            tess[_i0].cacheCount = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tess__i0__cache0 = 1;
          tess[_i0].cache = (struct TYPE_5__ *) malloc(_len_tess__i0__cache0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_tess__i0__cache0; _j0++) {
              int _len_tess__i0__cache_coords0 = 1;
          tess[_i0].cache->coords = (double *) malloc(_len_tess__i0__cache_coords0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_tess__i0__cache_coords0; _j0++) {
            tess[_i0].cache->coords[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          }
          int _len_norm0 = 100;
          double * norm = (double *) malloc(_len_norm0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_norm0; _i0++) {
            norm[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int benchRet = ComputeNormal(tess,norm,check);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tess0; _aux++) {
          free(tess[_aux].cache);
          }
          free(tess);
          free(norm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
