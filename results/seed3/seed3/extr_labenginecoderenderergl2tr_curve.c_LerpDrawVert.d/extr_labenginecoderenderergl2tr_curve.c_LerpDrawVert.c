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
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {float* xyz; float* st; float* lightmap; int* color; } ;
typedef  TYPE_1__ srfVert_t ;

/* Variables and functions */

__attribute__((used)) static void LerpDrawVert( srfVert_t *a, srfVert_t *b, srfVert_t *out ) {
	out->xyz[0] = 0.5f * (a->xyz[0] + b->xyz[0]);
	out->xyz[1] = 0.5f * (a->xyz[1] + b->xyz[1]);
	out->xyz[2] = 0.5f * (a->xyz[2] + b->xyz[2]);

	out->st[0] = 0.5f * (a->st[0] + b->st[0]);
	out->st[1] = 0.5f * (a->st[1] + b->st[1]);

	out->lightmap[0] = 0.5f * (a->lightmap[0] + b->lightmap[0]);
	out->lightmap[1] = 0.5f * (a->lightmap[1] + b->lightmap[1]);

	out->color[0] = ((int)a->color[0] + (int)b->color[0]) >> 1;
	out->color[1] = ((int)a->color[1] + (int)b->color[1]) >> 1;
	out->color[2] = ((int)a->color[2] + (int)b->color[2]) >> 1;
	out->color[3] = ((int)a->color[3] + (int)b->color[3]) >> 1;
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
          struct TYPE_5__ * a = (struct TYPE_5__ *) malloc(_len_a0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              int _len_a__i0__xyz0 = 1;
          a[_i0].xyz = (float *) malloc(_len_a__i0__xyz0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_a__i0__xyz0; _j0++) {
            a[_i0].xyz[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_a__i0__st0 = 1;
          a[_i0].st = (float *) malloc(_len_a__i0__st0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_a__i0__st0; _j0++) {
            a[_i0].st[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_a__i0__lightmap0 = 1;
          a[_i0].lightmap = (float *) malloc(_len_a__i0__lightmap0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_a__i0__lightmap0; _j0++) {
            a[_i0].lightmap[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_a__i0__color0 = 1;
          a[_i0].color = (int *) malloc(_len_a__i0__color0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_a__i0__color0; _j0++) {
            a[_i0].color[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_b0 = 1;
          struct TYPE_5__ * b = (struct TYPE_5__ *) malloc(_len_b0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__xyz0 = 1;
          b[_i0].xyz = (float *) malloc(_len_b__i0__xyz0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_b__i0__xyz0; _j0++) {
            b[_i0].xyz[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_b__i0__st0 = 1;
          b[_i0].st = (float *) malloc(_len_b__i0__st0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_b__i0__st0; _j0++) {
            b[_i0].st[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_b__i0__lightmap0 = 1;
          b[_i0].lightmap = (float *) malloc(_len_b__i0__lightmap0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_b__i0__lightmap0; _j0++) {
            b[_i0].lightmap[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_b__i0__color0 = 1;
          b[_i0].color = (int *) malloc(_len_b__i0__color0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_b__i0__color0; _j0++) {
            b[_i0].color[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_out0 = 1;
          struct TYPE_5__ * out = (struct TYPE_5__ *) malloc(_len_out0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
              int _len_out__i0__xyz0 = 1;
          out[_i0].xyz = (float *) malloc(_len_out__i0__xyz0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_out__i0__xyz0; _j0++) {
            out[_i0].xyz[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_out__i0__st0 = 1;
          out[_i0].st = (float *) malloc(_len_out__i0__st0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_out__i0__st0; _j0++) {
            out[_i0].st[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_out__i0__lightmap0 = 1;
          out[_i0].lightmap = (float *) malloc(_len_out__i0__lightmap0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_out__i0__lightmap0; _j0++) {
            out[_i0].lightmap[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_out__i0__color0 = 1;
          out[_i0].color = (int *) malloc(_len_out__i0__color0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_out__i0__color0; _j0++) {
            out[_i0].color[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          LerpDrawVert(a,b,out);
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].xyz);
          }
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].st);
          }
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].lightmap);
          }
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].color);
          }
          free(a);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].xyz);
          }
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].st);
          }
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].lightmap);
          }
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].color);
          }
          free(b);
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].xyz);
          }
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].st);
          }
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].lightmap);
          }
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].color);
          }
          free(out);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_a0 = 65025;
          struct TYPE_5__ * a = (struct TYPE_5__ *) malloc(_len_a0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              int _len_a__i0__xyz0 = 1;
          a[_i0].xyz = (float *) malloc(_len_a__i0__xyz0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_a__i0__xyz0; _j0++) {
            a[_i0].xyz[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_a__i0__st0 = 1;
          a[_i0].st = (float *) malloc(_len_a__i0__st0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_a__i0__st0; _j0++) {
            a[_i0].st[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_a__i0__lightmap0 = 1;
          a[_i0].lightmap = (float *) malloc(_len_a__i0__lightmap0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_a__i0__lightmap0; _j0++) {
            a[_i0].lightmap[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_a__i0__color0 = 1;
          a[_i0].color = (int *) malloc(_len_a__i0__color0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_a__i0__color0; _j0++) {
            a[_i0].color[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_b0 = 65025;
          struct TYPE_5__ * b = (struct TYPE_5__ *) malloc(_len_b0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__xyz0 = 1;
          b[_i0].xyz = (float *) malloc(_len_b__i0__xyz0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_b__i0__xyz0; _j0++) {
            b[_i0].xyz[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_b__i0__st0 = 1;
          b[_i0].st = (float *) malloc(_len_b__i0__st0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_b__i0__st0; _j0++) {
            b[_i0].st[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_b__i0__lightmap0 = 1;
          b[_i0].lightmap = (float *) malloc(_len_b__i0__lightmap0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_b__i0__lightmap0; _j0++) {
            b[_i0].lightmap[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_b__i0__color0 = 1;
          b[_i0].color = (int *) malloc(_len_b__i0__color0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_b__i0__color0; _j0++) {
            b[_i0].color[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_out0 = 65025;
          struct TYPE_5__ * out = (struct TYPE_5__ *) malloc(_len_out0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
              int _len_out__i0__xyz0 = 1;
          out[_i0].xyz = (float *) malloc(_len_out__i0__xyz0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_out__i0__xyz0; _j0++) {
            out[_i0].xyz[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_out__i0__st0 = 1;
          out[_i0].st = (float *) malloc(_len_out__i0__st0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_out__i0__st0; _j0++) {
            out[_i0].st[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_out__i0__lightmap0 = 1;
          out[_i0].lightmap = (float *) malloc(_len_out__i0__lightmap0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_out__i0__lightmap0; _j0++) {
            out[_i0].lightmap[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_out__i0__color0 = 1;
          out[_i0].color = (int *) malloc(_len_out__i0__color0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_out__i0__color0; _j0++) {
            out[_i0].color[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          LerpDrawVert(a,b,out);
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].xyz);
          }
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].st);
          }
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].lightmap);
          }
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].color);
          }
          free(a);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].xyz);
          }
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].st);
          }
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].lightmap);
          }
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].color);
          }
          free(b);
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].xyz);
          }
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].st);
          }
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].lightmap);
          }
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].color);
          }
          free(out);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_a0 = 100;
          struct TYPE_5__ * a = (struct TYPE_5__ *) malloc(_len_a0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              int _len_a__i0__xyz0 = 1;
          a[_i0].xyz = (float *) malloc(_len_a__i0__xyz0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_a__i0__xyz0; _j0++) {
            a[_i0].xyz[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_a__i0__st0 = 1;
          a[_i0].st = (float *) malloc(_len_a__i0__st0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_a__i0__st0; _j0++) {
            a[_i0].st[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_a__i0__lightmap0 = 1;
          a[_i0].lightmap = (float *) malloc(_len_a__i0__lightmap0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_a__i0__lightmap0; _j0++) {
            a[_i0].lightmap[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_a__i0__color0 = 1;
          a[_i0].color = (int *) malloc(_len_a__i0__color0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_a__i0__color0; _j0++) {
            a[_i0].color[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_b0 = 100;
          struct TYPE_5__ * b = (struct TYPE_5__ *) malloc(_len_b0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__xyz0 = 1;
          b[_i0].xyz = (float *) malloc(_len_b__i0__xyz0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_b__i0__xyz0; _j0++) {
            b[_i0].xyz[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_b__i0__st0 = 1;
          b[_i0].st = (float *) malloc(_len_b__i0__st0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_b__i0__st0; _j0++) {
            b[_i0].st[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_b__i0__lightmap0 = 1;
          b[_i0].lightmap = (float *) malloc(_len_b__i0__lightmap0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_b__i0__lightmap0; _j0++) {
            b[_i0].lightmap[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_b__i0__color0 = 1;
          b[_i0].color = (int *) malloc(_len_b__i0__color0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_b__i0__color0; _j0++) {
            b[_i0].color[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_out0 = 100;
          struct TYPE_5__ * out = (struct TYPE_5__ *) malloc(_len_out0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
              int _len_out__i0__xyz0 = 1;
          out[_i0].xyz = (float *) malloc(_len_out__i0__xyz0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_out__i0__xyz0; _j0++) {
            out[_i0].xyz[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_out__i0__st0 = 1;
          out[_i0].st = (float *) malloc(_len_out__i0__st0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_out__i0__st0; _j0++) {
            out[_i0].st[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_out__i0__lightmap0 = 1;
          out[_i0].lightmap = (float *) malloc(_len_out__i0__lightmap0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_out__i0__lightmap0; _j0++) {
            out[_i0].lightmap[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_out__i0__color0 = 1;
          out[_i0].color = (int *) malloc(_len_out__i0__color0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_out__i0__color0; _j0++) {
            out[_i0].color[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          LerpDrawVert(a,b,out);
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].xyz);
          }
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].st);
          }
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].lightmap);
          }
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].color);
          }
          free(a);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].xyz);
          }
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].st);
          }
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].lightmap);
          }
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].color);
          }
          free(b);
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].xyz);
          }
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].st);
          }
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].lightmap);
          }
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].color);
          }
          free(out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
