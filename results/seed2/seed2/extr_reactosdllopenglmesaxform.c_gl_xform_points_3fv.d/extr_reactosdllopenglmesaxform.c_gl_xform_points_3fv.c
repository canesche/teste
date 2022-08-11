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
typedef  size_t GLuint ;
typedef  float GLfloat ;

/* Variables and functions */

void gl_xform_points_3fv( GLuint n, GLfloat q[][4], const GLfloat m[16],
                          GLfloat p[][3] )
{
   /* This function has been carefully crafted to maximize register usage
    * and use loop unrolling with IRIX 5.3's cc.  Hopefully other compilers
    * will like this code too.
    */
   {
      GLuint i;
      GLfloat m0 = m[0],  m4 = m[4],  m8 = m[8],  m12 = m[12];
      GLfloat m1 = m[1],  m5 = m[5],  m9 = m[9],  m13 = m[13];
      for (i=0;i<n;i++) {
         GLfloat p0 = p[i][0], p1 = p[i][1], p2 = p[i][2];
         q[i][0] = m0 * p0 + m4  * p1 + m8 * p2 + m12;
         q[i][1] = m1 * p0 + m5  * p1 + m9 * p2 + m13;
      }
   }
   {
      GLuint i;
      GLfloat m2 = m[2],  m6 = m[6],  m10 = m[10],  m14 = m[14];
      GLfloat m3 = m[3],  m7 = m[7],  m11 = m[11],  m15 = m[15];
      if (m3==0.0F && m7==0.0F && m11==0.0F && m15==1.0F) {
         /* common case */
         for (i=0;i<n;i++) {
            GLfloat p0 = p[i][0], p1 = p[i][1], p2 = p[i][2];
            q[i][2] = m2 * p0 + m6 * p1 + m10 * p2 + m14;
            q[i][3] = 1.0F;
         }
      }
      else {
         /* general case */
         for (i=0;i<n;i++) {
            GLfloat p0 = p[i][0], p1 = p[i][1], p2 = p[i][2];
            q[i][2] = m2 * p0 + m6 * p1 + m10 * p2 + m14;
            q[i][3] = m3 * p0 + m7 * p1 + m11 * p2 + m15;
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
          unsigned long n = 100;
          int _len_q0 = 1;
          float ** q = (float **) malloc(_len_q0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            int _len_q1 = 4;
            q[_i0] = (float *) malloc(_len_q1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_q1; _i1++) {
              q[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_m0 = 16;
          float const* m = (float const*) malloc(_len_m0*sizeof(float const));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_p0 = 1;
          float ** p = (float **) malloc(_len_p0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            int _len_p1 = 3;
            p[_i0] = (float *) malloc(_len_p1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_p1; _i1++) {
              p[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          gl_xform_points_3fv(n,q,m,p);
          for(int i1 = 0; i1 < _len_q0; i1++) {
            int _len_q1 = 4;
              free(q[i1]);
          }
          free(q);
          free(m);
          for(int i1 = 0; i1 < _len_p0; i1++) {
            int _len_p1 = 3;
              free(p[i1]);
          }
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long n = 255;
          int _len_q0 = 65025;
          float ** q = (float **) malloc(_len_q0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            int _len_q1 = 4;
            q[_i0] = (float *) malloc(_len_q1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_q1; _i1++) {
              q[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_m0 = 65025;
          float const* m = (float const*) malloc(_len_m0*sizeof(float const));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_p0 = 65025;
          float ** p = (float **) malloc(_len_p0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            int _len_p1 = 3;
            p[_i0] = (float *) malloc(_len_p1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_p1; _i1++) {
              p[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          gl_xform_points_3fv(n,q,m,p);
          for(int i1 = 0; i1 < _len_q0; i1++) {
            int _len_q1 = 4;
              free(q[i1]);
          }
          free(q);
          free(m);
          for(int i1 = 0; i1 < _len_p0; i1++) {
            int _len_p1 = 3;
              free(p[i1]);
          }
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long n = 10;
          int _len_q0 = 100;
          float ** q = (float **) malloc(_len_q0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            int _len_q1 = 4;
            q[_i0] = (float *) malloc(_len_q1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_q1; _i1++) {
              q[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_m0 = 100;
          float const* m = (float const*) malloc(_len_m0*sizeof(float const));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_p0 = 100;
          float ** p = (float **) malloc(_len_p0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            int _len_p1 = 3;
            p[_i0] = (float *) malloc(_len_p1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_p1; _i1++) {
              p[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          gl_xform_points_3fv(n,q,m,p);
          for(int i1 = 0; i1 < _len_q0; i1++) {
            int _len_q1 = 4;
              free(q[i1]);
          }
          free(q);
          free(m);
          for(int i1 = 0; i1 < _len_p0; i1++) {
            int _len_p1 = 3;
              free(p[i1]);
          }
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
