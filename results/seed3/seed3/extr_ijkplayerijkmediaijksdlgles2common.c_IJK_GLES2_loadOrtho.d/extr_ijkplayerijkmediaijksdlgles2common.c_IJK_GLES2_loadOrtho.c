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
struct TYPE_3__ {float* m; } ;
typedef  TYPE_1__ IJK_GLES_Matrix ;
typedef  float GLfloat ;

/* Variables and functions */

void IJK_GLES2_loadOrtho(IJK_GLES_Matrix *matrix, GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat near, GLfloat far)
{
    GLfloat r_l = right - left;
    GLfloat t_b = top - bottom;
    GLfloat f_n = far - near;
    GLfloat tx = - (right + left) / (right - left);
    GLfloat ty = - (top + bottom) / (top - bottom);
    GLfloat tz = - (far + near) / (far - near);

    matrix->m[0] = 2.0f / r_l;
    matrix->m[1] = 0.0f;
    matrix->m[2] = 0.0f;
    matrix->m[3] = 0.0f;

    matrix->m[4] = 0.0f;
    matrix->m[5] = 2.0f / t_b;
    matrix->m[6] = 0.0f;
    matrix->m[7] = 0.0f;

    matrix->m[8] = 0.0f;
    matrix->m[9] = 0.0f;
    matrix->m[10] = -2.0f / f_n;
    matrix->m[11] = 0.0f;

    matrix->m[12] = tx;
    matrix->m[13] = ty;
    matrix->m[14] = tz;
    matrix->m[15] = 1.0f;
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
          float left = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float right = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float bottom = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float top = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float near = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float far = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_matrix0 = 1;
          struct TYPE_3__ * matrix = (struct TYPE_3__ *) malloc(_len_matrix0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_matrix0; _i0++) {
              int _len_matrix__i0__m0 = 1;
          matrix[_i0].m = (float *) malloc(_len_matrix__i0__m0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_matrix__i0__m0; _j0++) {
            matrix[_i0].m[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          IJK_GLES2_loadOrtho(matrix,left,right,bottom,top,near,far);
          for(int _aux = 0; _aux < _len_matrix0; _aux++) {
          free(matrix[_aux].m);
          }
          free(matrix);
        
        break;
    }
    // big-arr
    case 1:
    {
          float left = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float right = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float bottom = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float top = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float near = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float far = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_matrix0 = 65025;
          struct TYPE_3__ * matrix = (struct TYPE_3__ *) malloc(_len_matrix0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_matrix0; _i0++) {
              int _len_matrix__i0__m0 = 1;
          matrix[_i0].m = (float *) malloc(_len_matrix__i0__m0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_matrix__i0__m0; _j0++) {
            matrix[_i0].m[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          IJK_GLES2_loadOrtho(matrix,left,right,bottom,top,near,far);
          for(int _aux = 0; _aux < _len_matrix0; _aux++) {
          free(matrix[_aux].m);
          }
          free(matrix);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          float left = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float right = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float bottom = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float top = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float near = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float far = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_matrix0 = 100;
          struct TYPE_3__ * matrix = (struct TYPE_3__ *) malloc(_len_matrix0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_matrix0; _i0++) {
              int _len_matrix__i0__m0 = 1;
          matrix[_i0].m = (float *) malloc(_len_matrix__i0__m0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_matrix__i0__m0; _j0++) {
            matrix[_i0].m[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          IJK_GLES2_loadOrtho(matrix,left,right,bottom,top,near,far);
          for(int _aux = 0; _aux < _len_matrix0; _aux++) {
          free(matrix[_aux].m);
          }
          free(matrix);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
