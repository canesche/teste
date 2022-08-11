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
typedef  int uint8_t ;
struct TYPE_3__ {int** lut_u; int** lut_v; } ;
typedef  TYPE_1__ HueContext ;

/* Variables and functions */

__attribute__((used)) static void apply_lut(HueContext *s,
                      uint8_t *udst, uint8_t *vdst, const int dst_linesize,
                      uint8_t *usrc, uint8_t *vsrc, const int src_linesize,
                      int w, int h)
{
    int i;

    while (h--) {
        for (i = 0; i < w; i++) {
            const int u = usrc[i];
            const int v = vsrc[i];

            udst[i] = s->lut_u[u][v];
            vdst[i] = s->lut_v[u][v];
        }

        usrc += src_linesize;
        vsrc += src_linesize;
        udst += dst_linesize;
        vdst += dst_linesize;
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
          const int dst_linesize = 100;
          const int src_linesize = 100;
          int w = 100;
          int h = 100;
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__lut_u0 = 1;
          s[_i0].lut_u = (int **) malloc(_len_s__i0__lut_u0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__lut_u0; _j0++) {
            int _len_s__i0__lut_u1 = 1;
            s[_i0].lut_u[_j0] = (int *) malloc(_len_s__i0__lut_u1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__lut_u1; _j1++) {
              s[_i0].lut_u[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__lut_v0 = 1;
          s[_i0].lut_v = (int **) malloc(_len_s__i0__lut_v0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__lut_v0; _j0++) {
            int _len_s__i0__lut_v1 = 1;
            s[_i0].lut_v[_j0] = (int *) malloc(_len_s__i0__lut_v1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__lut_v1; _j1++) {
              s[_i0].lut_v[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_udst0 = 1;
          int * udst = (int *) malloc(_len_udst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_udst0; _i0++) {
            udst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vdst0 = 1;
          int * vdst = (int *) malloc(_len_vdst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_vdst0; _i0++) {
            vdst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_usrc0 = 1;
          int * usrc = (int *) malloc(_len_usrc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_usrc0; _i0++) {
            usrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vsrc0 = 1;
          int * vsrc = (int *) malloc(_len_vsrc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_vsrc0; _i0++) {
            vsrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          apply_lut(s,udst,vdst,dst_linesize,usrc,vsrc,src_linesize,w,h);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].lut_u));
        free(s[_aux].lut_u);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].lut_v));
        free(s[_aux].lut_v);
          }
          free(s);
          free(udst);
          free(vdst);
          free(usrc);
          free(vsrc);
        
        break;
    }
    // big-arr
    case 1:
    {
          const int dst_linesize = 255;
          const int src_linesize = 255;
          int w = 255;
          int h = 255;
          int _len_s0 = 65025;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__lut_u0 = 1;
          s[_i0].lut_u = (int **) malloc(_len_s__i0__lut_u0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__lut_u0; _j0++) {
            int _len_s__i0__lut_u1 = 1;
            s[_i0].lut_u[_j0] = (int *) malloc(_len_s__i0__lut_u1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__lut_u1; _j1++) {
              s[_i0].lut_u[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__lut_v0 = 1;
          s[_i0].lut_v = (int **) malloc(_len_s__i0__lut_v0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__lut_v0; _j0++) {
            int _len_s__i0__lut_v1 = 1;
            s[_i0].lut_v[_j0] = (int *) malloc(_len_s__i0__lut_v1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__lut_v1; _j1++) {
              s[_i0].lut_v[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_udst0 = 65025;
          int * udst = (int *) malloc(_len_udst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_udst0; _i0++) {
            udst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vdst0 = 65025;
          int * vdst = (int *) malloc(_len_vdst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_vdst0; _i0++) {
            vdst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_usrc0 = 65025;
          int * usrc = (int *) malloc(_len_usrc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_usrc0; _i0++) {
            usrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vsrc0 = 65025;
          int * vsrc = (int *) malloc(_len_vsrc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_vsrc0; _i0++) {
            vsrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          apply_lut(s,udst,vdst,dst_linesize,usrc,vsrc,src_linesize,w,h);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].lut_u));
        free(s[_aux].lut_u);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].lut_v));
        free(s[_aux].lut_v);
          }
          free(s);
          free(udst);
          free(vdst);
          free(usrc);
          free(vsrc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int dst_linesize = 10;
          const int src_linesize = 10;
          int w = 10;
          int h = 10;
          int _len_s0 = 100;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__lut_u0 = 1;
          s[_i0].lut_u = (int **) malloc(_len_s__i0__lut_u0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__lut_u0; _j0++) {
            int _len_s__i0__lut_u1 = 1;
            s[_i0].lut_u[_j0] = (int *) malloc(_len_s__i0__lut_u1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__lut_u1; _j1++) {
              s[_i0].lut_u[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__lut_v0 = 1;
          s[_i0].lut_v = (int **) malloc(_len_s__i0__lut_v0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__lut_v0; _j0++) {
            int _len_s__i0__lut_v1 = 1;
            s[_i0].lut_v[_j0] = (int *) malloc(_len_s__i0__lut_v1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__lut_v1; _j1++) {
              s[_i0].lut_v[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_udst0 = 100;
          int * udst = (int *) malloc(_len_udst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_udst0; _i0++) {
            udst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vdst0 = 100;
          int * vdst = (int *) malloc(_len_vdst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_vdst0; _i0++) {
            vdst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_usrc0 = 100;
          int * usrc = (int *) malloc(_len_usrc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_usrc0; _i0++) {
            usrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vsrc0 = 100;
          int * vsrc = (int *) malloc(_len_vsrc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_vsrc0; _i0++) {
            vsrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          apply_lut(s,udst,vdst,dst_linesize,usrc,vsrc,src_linesize,w,h);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].lut_u));
        free(s[_aux].lut_u);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].lut_v));
        free(s[_aux].lut_v);
          }
          free(s);
          free(udst);
          free(vdst);
          free(usrc);
          free(vsrc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
