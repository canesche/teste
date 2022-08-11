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
typedef  int /*<<< orphan*/  uint8_t ;
struct TYPE_3__ {int stride; int uvstride; int /*<<< orphan*/ *** ref; int /*<<< orphan*/ *** src; } ;
typedef  TYPE_1__ MotionEstContext ;

/* Variables and functions */

__attribute__((used)) static inline void init_ref(MotionEstContext *c, uint8_t *src[3], uint8_t *ref[3], uint8_t *ref2[3], int x, int y, int ref_index){
    const int offset[3]= {
          y*c->  stride + x,
        ((y*c->uvstride + x)>>1),
        ((y*c->uvstride + x)>>1),
    };
    int i;
    for(i=0; i<3; i++){
        c->src[0][i]= src [i] + offset[i];
        c->ref[0][i]= ref [i] + offset[i];
    }
    if(ref_index){
        for(i=0; i<3; i++){
            c->ref[ref_index][i]= ref2[i] + offset[i];
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
          int x = 100;
          int y = 100;
          int ref_index = 100;
          int _len_c0 = 1;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].stride = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].uvstride = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__ref0 = 1;
          c[_i0].ref = (int ***) malloc(_len_c__i0__ref0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_c__i0__ref0; _j0++) {
            int _len_c__i0__ref1 = 1;
            c[_i0].ref[_j0] = (int **) malloc(_len_c__i0__ref1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_c__i0__ref1; _j1++) {
              int _len_c__i0__ref2 = 1;
              c[_i0].ref[_j0][_j1] = (int *) malloc(_len_c__i0__ref2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_c__i0__ref2; _j2++) {
                c[_i0].ref[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_c__i0__src0 = 1;
          c[_i0].src = (int ***) malloc(_len_c__i0__src0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_c__i0__src0; _j0++) {
            int _len_c__i0__src1 = 1;
            c[_i0].src[_j0] = (int **) malloc(_len_c__i0__src1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_c__i0__src1; _j1++) {
              int _len_c__i0__src2 = 1;
              c[_i0].src[_j0][_j1] = (int *) malloc(_len_c__i0__src2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_c__i0__src2; _j2++) {
                c[_i0].src[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          int _len_src0 = 3;
          int ** src = (int **) malloc(_len_src0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            int _len_src1 = 1;
            src[_i0] = (int *) malloc(_len_src1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_src1; _i1++) {
              src[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ref0 = 3;
          int ** ref = (int **) malloc(_len_ref0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_ref0; _i0++) {
            int _len_ref1 = 1;
            ref[_i0] = (int *) malloc(_len_ref1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_ref1; _i1++) {
              ref[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ref20 = 3;
          int ** ref2 = (int **) malloc(_len_ref20*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_ref20; _i0++) {
            int _len_ref21 = 1;
            ref2[_i0] = (int *) malloc(_len_ref21*sizeof(int));
            for(int _i1 = 0; _i1 < _len_ref21; _i1++) {
              ref2[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          init_ref(c,src,ref,ref2,x,y,ref_index);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          }
          free(c);
          for(int i1 = 0; i1 < _len_src0; i1++) {
            int _len_src1 = 1;
              free(src[i1]);
          }
          free(src);
          for(int i1 = 0; i1 < _len_ref0; i1++) {
            int _len_ref1 = 1;
              free(ref[i1]);
          }
          free(ref);
          for(int i1 = 0; i1 < _len_ref20; i1++) {
            int _len_ref21 = 1;
              free(ref2[i1]);
          }
          free(ref2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int x = 255;
          int y = 255;
          int ref_index = 255;
          int _len_c0 = 65025;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].stride = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].uvstride = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__ref0 = 1;
          c[_i0].ref = (int ***) malloc(_len_c__i0__ref0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_c__i0__ref0; _j0++) {
            int _len_c__i0__ref1 = 1;
            c[_i0].ref[_j0] = (int **) malloc(_len_c__i0__ref1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_c__i0__ref1; _j1++) {
              int _len_c__i0__ref2 = 1;
              c[_i0].ref[_j0][_j1] = (int *) malloc(_len_c__i0__ref2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_c__i0__ref2; _j2++) {
                c[_i0].ref[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_c__i0__src0 = 1;
          c[_i0].src = (int ***) malloc(_len_c__i0__src0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_c__i0__src0; _j0++) {
            int _len_c__i0__src1 = 1;
            c[_i0].src[_j0] = (int **) malloc(_len_c__i0__src1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_c__i0__src1; _j1++) {
              int _len_c__i0__src2 = 1;
              c[_i0].src[_j0][_j1] = (int *) malloc(_len_c__i0__src2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_c__i0__src2; _j2++) {
                c[_i0].src[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          int _len_src0 = 65025;
          int ** src = (int **) malloc(_len_src0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            int _len_src1 = 1;
            src[_i0] = (int *) malloc(_len_src1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_src1; _i1++) {
              src[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ref0 = 65025;
          int ** ref = (int **) malloc(_len_ref0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_ref0; _i0++) {
            int _len_ref1 = 1;
            ref[_i0] = (int *) malloc(_len_ref1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_ref1; _i1++) {
              ref[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ref20 = 65025;
          int ** ref2 = (int **) malloc(_len_ref20*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_ref20; _i0++) {
            int _len_ref21 = 1;
            ref2[_i0] = (int *) malloc(_len_ref21*sizeof(int));
            for(int _i1 = 0; _i1 < _len_ref21; _i1++) {
              ref2[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          init_ref(c,src,ref,ref2,x,y,ref_index);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          }
          free(c);
          for(int i1 = 0; i1 < _len_src0; i1++) {
            int _len_src1 = 1;
              free(src[i1]);
          }
          free(src);
          for(int i1 = 0; i1 < _len_ref0; i1++) {
            int _len_ref1 = 1;
              free(ref[i1]);
          }
          free(ref);
          for(int i1 = 0; i1 < _len_ref20; i1++) {
            int _len_ref21 = 1;
              free(ref2[i1]);
          }
          free(ref2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int x = 10;
          int y = 10;
          int ref_index = 10;
          int _len_c0 = 100;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].stride = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].uvstride = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__ref0 = 1;
          c[_i0].ref = (int ***) malloc(_len_c__i0__ref0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_c__i0__ref0; _j0++) {
            int _len_c__i0__ref1 = 1;
            c[_i0].ref[_j0] = (int **) malloc(_len_c__i0__ref1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_c__i0__ref1; _j1++) {
              int _len_c__i0__ref2 = 1;
              c[_i0].ref[_j0][_j1] = (int *) malloc(_len_c__i0__ref2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_c__i0__ref2; _j2++) {
                c[_i0].ref[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_c__i0__src0 = 1;
          c[_i0].src = (int ***) malloc(_len_c__i0__src0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_c__i0__src0; _j0++) {
            int _len_c__i0__src1 = 1;
            c[_i0].src[_j0] = (int **) malloc(_len_c__i0__src1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_c__i0__src1; _j1++) {
              int _len_c__i0__src2 = 1;
              c[_i0].src[_j0][_j1] = (int *) malloc(_len_c__i0__src2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_c__i0__src2; _j2++) {
                c[_i0].src[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          int _len_src0 = 100;
          int ** src = (int **) malloc(_len_src0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            int _len_src1 = 1;
            src[_i0] = (int *) malloc(_len_src1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_src1; _i1++) {
              src[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ref0 = 100;
          int ** ref = (int **) malloc(_len_ref0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_ref0; _i0++) {
            int _len_ref1 = 1;
            ref[_i0] = (int *) malloc(_len_ref1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_ref1; _i1++) {
              ref[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ref20 = 100;
          int ** ref2 = (int **) malloc(_len_ref20*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_ref20; _i0++) {
            int _len_ref21 = 1;
            ref2[_i0] = (int *) malloc(_len_ref21*sizeof(int));
            for(int _i1 = 0; _i1 < _len_ref21; _i1++) {
              ref2[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          init_ref(c,src,ref,ref2,x,y,ref_index);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          }
          free(c);
          for(int i1 = 0; i1 < _len_src0; i1++) {
            int _len_src1 = 1;
              free(src[i1]);
          }
          free(src);
          for(int i1 = 0; i1 < _len_ref0; i1++) {
            int _len_ref1 = 1;
              free(ref[i1]);
          }
          free(ref);
          for(int i1 = 0; i1 < _len_ref20; i1++) {
            int _len_ref21 = 1;
              free(ref2[i1]);
          }
          free(ref2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
