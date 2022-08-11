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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  float* vec4_t ;
struct TYPE_6__ {TYPE_2__* snap; } ;
struct TYPE_4__ {scalar_t__* persistant; } ;
struct TYPE_5__ {TYPE_1__ ps; } ;

/* Variables and functions */
 size_t PERS_TEAM ; 
 scalar_t__ TEAM_BLUE ; 
 scalar_t__ TEAM_RED ; 
 TYPE_3__ cg ; 

void CG_GetTeamColor(vec4_t *color) {
  if (cg.snap->ps.persistant[PERS_TEAM] == TEAM_RED) {
    (*color)[0] = 1.0f;
    (*color)[3] = 0.25f;
    (*color)[1] = (*color)[2] = 0.0f;
  } else if (cg.snap->ps.persistant[PERS_TEAM] == TEAM_BLUE) {
    (*color)[0] = (*color)[1] = 0.0f;
    (*color)[2] = 1.0f;
    (*color)[3] = 0.25f;
  } else {
    (*color)[0] = (*color)[2] = 0.0f;
    (*color)[1] = 0.17f;
    (*color)[3] = 0.25f;
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
          int _len_color0 = 1;
          float ** color = (float **) malloc(_len_color0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_color0; _i0++) {
            int _len_color1 = 1;
            color[_i0] = (float *) malloc(_len_color1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_color1; _i1++) {
              color[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          CG_GetTeamColor(color);
          for(int i1 = 0; i1 < _len_color0; i1++) {
            int _len_color1 = 1;
              free(color[i1]);
          }
          free(color);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_color0 = 65025;
          float ** color = (float **) malloc(_len_color0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_color0; _i0++) {
            int _len_color1 = 1;
            color[_i0] = (float *) malloc(_len_color1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_color1; _i1++) {
              color[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          CG_GetTeamColor(color);
          for(int i1 = 0; i1 < _len_color0; i1++) {
            int _len_color1 = 1;
              free(color[i1]);
          }
          free(color);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_color0 = 100;
          float ** color = (float **) malloc(_len_color0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_color0; _i0++) {
            int _len_color1 = 1;
            color[_i0] = (float *) malloc(_len_color1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_color1; _i1++) {
              color[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          CG_GetTeamColor(color);
          for(int i1 = 0; i1 < _len_color0; i1++) {
            int _len_color1 = 1;
              free(color[i1]);
          }
          free(color);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
