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
struct m_geometry {double w; double h; int x; int y; scalar_t__ y_sign; scalar_t__ y_per; scalar_t__ x_sign; scalar_t__ x_per; scalar_t__ xy_valid; scalar_t__ h_per; scalar_t__ w_per; scalar_t__ wh_valid; } ;

/* Variables and functions */
 int INT_MIN ; 

void m_geometry_apply(int *xpos, int *ypos, int *widw, int *widh,
                      int scrw, int scrh, struct m_geometry *gm)
{
    if (gm->wh_valid) {
        int prew = *widw, preh = *widh;
        if (gm->w > 0)
            *widw = gm->w_per ? scrw * (gm->w / 100.0) : gm->w;
        if (gm->h > 0)
            *widh = gm->h_per ? scrh * (gm->h / 100.0) : gm->h;
        // keep aspect if the other value is not set
        double asp = (double)prew / preh;
        if (gm->w > 0 && !(gm->h > 0)) {
            *widh = *widw / asp;
        } else if (!(gm->w > 0) && gm->h > 0) {
            *widw = *widh * asp;
        }
        // Center window after resize. If valid x:y values are passed to
        // geometry, then those values will be overriden.
        *xpos += prew / 2 - *widw / 2;
        *ypos += preh / 2 - *widh / 2;
    }

    if (gm->xy_valid) {
        if (gm->x != INT_MIN) {
            *xpos = gm->x;
            if (gm->x_per)
                *xpos = (scrw - *widw) * (*xpos / 100.0);
            if (gm->x_sign)
                *xpos = scrw - *widw - *xpos;
        }
        if (gm->y != INT_MIN) {
            *ypos = gm->y;
            if (gm->y_per)
                *ypos = (scrh - *widh) * (*ypos / 100.0);
            if (gm->y_sign)
                *ypos = scrh - *widh - *ypos;
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
          int scrw = 100;
          int scrh = 100;
          int _len_xpos0 = 1;
          int * xpos = (int *) malloc(_len_xpos0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_xpos0; _i0++) {
            xpos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ypos0 = 1;
          int * ypos = (int *) malloc(_len_ypos0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ypos0; _i0++) {
            ypos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_widw0 = 1;
          int * widw = (int *) malloc(_len_widw0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_widw0; _i0++) {
            widw[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_widh0 = 1;
          int * widh = (int *) malloc(_len_widh0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_widh0; _i0++) {
            widh[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gm0 = 1;
          struct m_geometry * gm = (struct m_geometry *) malloc(_len_gm0*sizeof(struct m_geometry));
          for(int _i0 = 0; _i0 < _len_gm0; _i0++) {
            gm[_i0].w = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        gm[_i0].h = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        gm[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        gm[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        gm[_i0].y_sign = ((-2 * (next_i()%2)) + 1) * next_i();
        gm[_i0].y_per = ((-2 * (next_i()%2)) + 1) * next_i();
        gm[_i0].x_sign = ((-2 * (next_i()%2)) + 1) * next_i();
        gm[_i0].x_per = ((-2 * (next_i()%2)) + 1) * next_i();
        gm[_i0].xy_valid = ((-2 * (next_i()%2)) + 1) * next_i();
        gm[_i0].h_per = ((-2 * (next_i()%2)) + 1) * next_i();
        gm[_i0].w_per = ((-2 * (next_i()%2)) + 1) * next_i();
        gm[_i0].wh_valid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          m_geometry_apply(xpos,ypos,widw,widh,scrw,scrh,gm);
          free(xpos);
          free(ypos);
          free(widw);
          free(widh);
          free(gm);
        
        break;
    }
    // big-arr
    case 1:
    {
          int scrw = 255;
          int scrh = 255;
          int _len_xpos0 = 65025;
          int * xpos = (int *) malloc(_len_xpos0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_xpos0; _i0++) {
            xpos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ypos0 = 65025;
          int * ypos = (int *) malloc(_len_ypos0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ypos0; _i0++) {
            ypos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_widw0 = 65025;
          int * widw = (int *) malloc(_len_widw0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_widw0; _i0++) {
            widw[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_widh0 = 65025;
          int * widh = (int *) malloc(_len_widh0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_widh0; _i0++) {
            widh[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gm0 = 65025;
          struct m_geometry * gm = (struct m_geometry *) malloc(_len_gm0*sizeof(struct m_geometry));
          for(int _i0 = 0; _i0 < _len_gm0; _i0++) {
            gm[_i0].w = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        gm[_i0].h = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        gm[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        gm[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        gm[_i0].y_sign = ((-2 * (next_i()%2)) + 1) * next_i();
        gm[_i0].y_per = ((-2 * (next_i()%2)) + 1) * next_i();
        gm[_i0].x_sign = ((-2 * (next_i()%2)) + 1) * next_i();
        gm[_i0].x_per = ((-2 * (next_i()%2)) + 1) * next_i();
        gm[_i0].xy_valid = ((-2 * (next_i()%2)) + 1) * next_i();
        gm[_i0].h_per = ((-2 * (next_i()%2)) + 1) * next_i();
        gm[_i0].w_per = ((-2 * (next_i()%2)) + 1) * next_i();
        gm[_i0].wh_valid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          m_geometry_apply(xpos,ypos,widw,widh,scrw,scrh,gm);
          free(xpos);
          free(ypos);
          free(widw);
          free(widh);
          free(gm);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int scrw = 10;
          int scrh = 10;
          int _len_xpos0 = 100;
          int * xpos = (int *) malloc(_len_xpos0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_xpos0; _i0++) {
            xpos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ypos0 = 100;
          int * ypos = (int *) malloc(_len_ypos0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ypos0; _i0++) {
            ypos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_widw0 = 100;
          int * widw = (int *) malloc(_len_widw0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_widw0; _i0++) {
            widw[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_widh0 = 100;
          int * widh = (int *) malloc(_len_widh0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_widh0; _i0++) {
            widh[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gm0 = 100;
          struct m_geometry * gm = (struct m_geometry *) malloc(_len_gm0*sizeof(struct m_geometry));
          for(int _i0 = 0; _i0 < _len_gm0; _i0++) {
            gm[_i0].w = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        gm[_i0].h = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        gm[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        gm[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        gm[_i0].y_sign = ((-2 * (next_i()%2)) + 1) * next_i();
        gm[_i0].y_per = ((-2 * (next_i()%2)) + 1) * next_i();
        gm[_i0].x_sign = ((-2 * (next_i()%2)) + 1) * next_i();
        gm[_i0].x_per = ((-2 * (next_i()%2)) + 1) * next_i();
        gm[_i0].xy_valid = ((-2 * (next_i()%2)) + 1) * next_i();
        gm[_i0].h_per = ((-2 * (next_i()%2)) + 1) * next_i();
        gm[_i0].w_per = ((-2 * (next_i()%2)) + 1) * next_i();
        gm[_i0].wh_valid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          m_geometry_apply(xpos,ypos,widw,widh,scrw,scrh,gm);
          free(xpos);
          free(ypos);
          free(widw);
          free(widh);
          free(gm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
