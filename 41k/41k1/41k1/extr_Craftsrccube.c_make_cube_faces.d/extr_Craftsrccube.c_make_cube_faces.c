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

/* Variables and functions */

void make_cube_faces(
    float *data, float ao[6][4], float light[6][4],
    int left, int right, int top, int bottom, int front, int back,
    int wleft, int wright, int wtop, int wbottom, int wfront, int wback,
    float x, float y, float z, float n)
{
    static const float positions[6][4][3] = {
        {{-1, -1, -1}, {-1, -1, +1}, {-1, +1, -1}, {-1, +1, +1}},
        {{+1, -1, -1}, {+1, -1, +1}, {+1, +1, -1}, {+1, +1, +1}},
        {{-1, +1, -1}, {-1, +1, +1}, {+1, +1, -1}, {+1, +1, +1}},
        {{-1, -1, -1}, {-1, -1, +1}, {+1, -1, -1}, {+1, -1, +1}},
        {{-1, -1, -1}, {-1, +1, -1}, {+1, -1, -1}, {+1, +1, -1}},
        {{-1, -1, +1}, {-1, +1, +1}, {+1, -1, +1}, {+1, +1, +1}}
    };
    static const float normals[6][3] = {
        {-1, 0, 0},
        {+1, 0, 0},
        {0, +1, 0},
        {0, -1, 0},
        {0, 0, -1},
        {0, 0, +1}
    };
    static const float uvs[6][4][2] = {
        {{0, 0}, {1, 0}, {0, 1}, {1, 1}},
        {{1, 0}, {0, 0}, {1, 1}, {0, 1}},
        {{0, 1}, {0, 0}, {1, 1}, {1, 0}},
        {{0, 0}, {0, 1}, {1, 0}, {1, 1}},
        {{0, 0}, {0, 1}, {1, 0}, {1, 1}},
        {{1, 0}, {1, 1}, {0, 0}, {0, 1}}
    };
    static const float indices[6][6] = {
        {0, 3, 2, 0, 1, 3},
        {0, 3, 1, 0, 2, 3},
        {0, 3, 2, 0, 1, 3},
        {0, 3, 1, 0, 2, 3},
        {0, 3, 2, 0, 1, 3},
        {0, 3, 1, 0, 2, 3}
    };
    static const float flipped[6][6] = {
        {0, 1, 2, 1, 3, 2},
        {0, 2, 1, 2, 3, 1},
        {0, 1, 2, 1, 3, 2},
        {0, 2, 1, 2, 3, 1},
        {0, 1, 2, 1, 3, 2},
        {0, 2, 1, 2, 3, 1}
    };
    float *d = data;
    float s = 0.0625;
    float a = 0 + 1 / 2048.0;
    float b = s - 1 / 2048.0;
    int faces[6] = {left, right, top, bottom, front, back};
    int tiles[6] = {wleft, wright, wtop, wbottom, wfront, wback};
    for (int i = 0; i < 6; i++) {
        if (faces[i] == 0) {
            continue;
        }
        float du = (tiles[i] % 16) * s;
        float dv = (tiles[i] / 16) * s;
        int flip = ao[i][0] + ao[i][3] > ao[i][1] + ao[i][2];
        for (int v = 0; v < 6; v++) {
            int j = flip ? flipped[i][v] : indices[i][v];
            *(d++) = x + n * positions[i][j][0];
            *(d++) = y + n * positions[i][j][1];
            *(d++) = z + n * positions[i][j][2];
            *(d++) = normals[i][0];
            *(d++) = normals[i][1];
            *(d++) = normals[i][2];
            *(d++) = du + (uvs[i][j][0] ? b : a);
            *(d++) = dv + (uvs[i][j][1] ? b : a);
            *(d++) = ao[i][j];
            *(d++) = light[i][j];
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
          int left = 100;
          int right = 100;
          int top = 100;
          int bottom = 100;
          int front = 100;
          int back = 100;
          int wleft = 100;
          int wright = 100;
          int wtop = 100;
          int wbottom = 100;
          int wfront = 100;
          int wback = 100;
          float x = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float y = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float z = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float n = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_data0 = 1;
          float * data = (float *) malloc(_len_data0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_ao0 = 6;
          float ** ao = (float **) malloc(_len_ao0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_ao0; _i0++) {
            int _len_ao1 = 4;
            ao[_i0] = (float *) malloc(_len_ao1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_ao1; _i1++) {
              ao[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_light0 = 6;
          float ** light = (float **) malloc(_len_light0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_light0; _i0++) {
            int _len_light1 = 4;
            light[_i0] = (float *) malloc(_len_light1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_light1; _i1++) {
              light[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          make_cube_faces(data,ao,light,left,right,top,bottom,front,back,wleft,wright,wtop,wbottom,wfront,wback,x,y,z,n);
          free(data);
          for(int i1 = 0; i1 < _len_ao0; i1++) {
            int _len_ao1 = 4;
              free(ao[i1]);
          }
          free(ao);
          for(int i1 = 0; i1 < _len_light0; i1++) {
            int _len_light1 = 4;
              free(light[i1]);
          }
          free(light);
        
        break;
    }
    // big-arr
    case 1:
    {
          int left = 255;
          int right = 255;
          int top = 255;
          int bottom = 255;
          int front = 255;
          int back = 255;
          int wleft = 255;
          int wright = 255;
          int wtop = 255;
          int wbottom = 255;
          int wfront = 255;
          int wback = 255;
          float x = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float y = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float z = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float n = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_data0 = 65025;
          float * data = (float *) malloc(_len_data0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_ao0 = 65025;
          float ** ao = (float **) malloc(_len_ao0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_ao0; _i0++) {
            int _len_ao1 = 4;
            ao[_i0] = (float *) malloc(_len_ao1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_ao1; _i1++) {
              ao[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_light0 = 65025;
          float ** light = (float **) malloc(_len_light0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_light0; _i0++) {
            int _len_light1 = 4;
            light[_i0] = (float *) malloc(_len_light1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_light1; _i1++) {
              light[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          make_cube_faces(data,ao,light,left,right,top,bottom,front,back,wleft,wright,wtop,wbottom,wfront,wback,x,y,z,n);
          free(data);
          for(int i1 = 0; i1 < _len_ao0; i1++) {
            int _len_ao1 = 4;
              free(ao[i1]);
          }
          free(ao);
          for(int i1 = 0; i1 < _len_light0; i1++) {
            int _len_light1 = 4;
              free(light[i1]);
          }
          free(light);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int left = 10;
          int right = 10;
          int top = 10;
          int bottom = 10;
          int front = 10;
          int back = 10;
          int wleft = 10;
          int wright = 10;
          int wtop = 10;
          int wbottom = 10;
          int wfront = 10;
          int wback = 10;
          float x = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float y = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float z = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float n = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_data0 = 100;
          float * data = (float *) malloc(_len_data0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_ao0 = 100;
          float ** ao = (float **) malloc(_len_ao0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_ao0; _i0++) {
            int _len_ao1 = 4;
            ao[_i0] = (float *) malloc(_len_ao1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_ao1; _i1++) {
              ao[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_light0 = 100;
          float ** light = (float **) malloc(_len_light0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_light0; _i0++) {
            int _len_light1 = 4;
            light[_i0] = (float *) malloc(_len_light1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_light1; _i1++) {
              light[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          make_cube_faces(data,ao,light,left,right,top,bottom,front,back,wleft,wright,wtop,wbottom,wfront,wback,x,y,z,n);
          free(data);
          for(int i1 = 0; i1 < _len_ao0; i1++) {
            int _len_ao1 = 4;
              free(ao[i1]);
          }
          free(ao);
          for(int i1 = 0; i1 < _len_light0; i1++) {
            int _len_light1 = 4;
              free(light[i1]);
          }
          free(light);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
