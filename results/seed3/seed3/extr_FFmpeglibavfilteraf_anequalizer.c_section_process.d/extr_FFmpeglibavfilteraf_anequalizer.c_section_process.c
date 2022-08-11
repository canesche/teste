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
struct TYPE_3__ {double b0; int b1; int* num; int* denum; int a1; int b2; int a2; int b3; int a3; int b4; int a4; } ;
typedef  TYPE_1__ FoSection ;

/* Variables and functions */

__attribute__((used)) static inline double section_process(FoSection *S, double in)
{
    double out;

    out = S->b0 * in;
    out+= S->b1 * S->num[0] - S->denum[0] * S->a1;
    out+= S->b2 * S->num[1] - S->denum[1] * S->a2;
    out+= S->b3 * S->num[2] - S->denum[2] * S->a3;
    out+= S->b4 * S->num[3] - S->denum[3] * S->a4;

    S->num[3] = S->num[2];
    S->num[2] = S->num[1];
    S->num[1] = S->num[0];
    S->num[0] = in;

    S->denum[3] = S->denum[2];
    S->denum[2] = S->denum[1];
    S->denum[1] = S->denum[0];
    S->denum[0] = out;

    return out;
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
          double in = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_S0 = 1;
          struct TYPE_3__ * S = (struct TYPE_3__ *) malloc(_len_S0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_S0; _i0++) {
            S[_i0].b0 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        S[_i0].b1 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_S__i0__num0 = 1;
          S[_i0].num = (int *) malloc(_len_S__i0__num0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_S__i0__num0; _j0++) {
            S[_i0].num[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_S__i0__denum0 = 1;
          S[_i0].denum = (int *) malloc(_len_S__i0__denum0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_S__i0__denum0; _j0++) {
            S[_i0].denum[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        S[_i0].a1 = ((-2 * (next_i()%2)) + 1) * next_i();
        S[_i0].b2 = ((-2 * (next_i()%2)) + 1) * next_i();
        S[_i0].a2 = ((-2 * (next_i()%2)) + 1) * next_i();
        S[_i0].b3 = ((-2 * (next_i()%2)) + 1) * next_i();
        S[_i0].a3 = ((-2 * (next_i()%2)) + 1) * next_i();
        S[_i0].b4 = ((-2 * (next_i()%2)) + 1) * next_i();
        S[_i0].a4 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          double benchRet = section_process(S,in);
          printf("%lf\n", benchRet); 
          for(int _aux = 0; _aux < _len_S0; _aux++) {
          free(S[_aux].num);
          }
          for(int _aux = 0; _aux < _len_S0; _aux++) {
          free(S[_aux].denum);
          }
          free(S);
        
        break;
    }
    // big-arr
    case 1:
    {
          double in = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_S0 = 65025;
          struct TYPE_3__ * S = (struct TYPE_3__ *) malloc(_len_S0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_S0; _i0++) {
            S[_i0].b0 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        S[_i0].b1 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_S__i0__num0 = 1;
          S[_i0].num = (int *) malloc(_len_S__i0__num0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_S__i0__num0; _j0++) {
            S[_i0].num[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_S__i0__denum0 = 1;
          S[_i0].denum = (int *) malloc(_len_S__i0__denum0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_S__i0__denum0; _j0++) {
            S[_i0].denum[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        S[_i0].a1 = ((-2 * (next_i()%2)) + 1) * next_i();
        S[_i0].b2 = ((-2 * (next_i()%2)) + 1) * next_i();
        S[_i0].a2 = ((-2 * (next_i()%2)) + 1) * next_i();
        S[_i0].b3 = ((-2 * (next_i()%2)) + 1) * next_i();
        S[_i0].a3 = ((-2 * (next_i()%2)) + 1) * next_i();
        S[_i0].b4 = ((-2 * (next_i()%2)) + 1) * next_i();
        S[_i0].a4 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          double benchRet = section_process(S,in);
          printf("%lf\n", benchRet); 
          for(int _aux = 0; _aux < _len_S0; _aux++) {
          free(S[_aux].num);
          }
          for(int _aux = 0; _aux < _len_S0; _aux++) {
          free(S[_aux].denum);
          }
          free(S);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          double in = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_S0 = 100;
          struct TYPE_3__ * S = (struct TYPE_3__ *) malloc(_len_S0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_S0; _i0++) {
            S[_i0].b0 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        S[_i0].b1 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_S__i0__num0 = 1;
          S[_i0].num = (int *) malloc(_len_S__i0__num0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_S__i0__num0; _j0++) {
            S[_i0].num[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_S__i0__denum0 = 1;
          S[_i0].denum = (int *) malloc(_len_S__i0__denum0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_S__i0__denum0; _j0++) {
            S[_i0].denum[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        S[_i0].a1 = ((-2 * (next_i()%2)) + 1) * next_i();
        S[_i0].b2 = ((-2 * (next_i()%2)) + 1) * next_i();
        S[_i0].a2 = ((-2 * (next_i()%2)) + 1) * next_i();
        S[_i0].b3 = ((-2 * (next_i()%2)) + 1) * next_i();
        S[_i0].a3 = ((-2 * (next_i()%2)) + 1) * next_i();
        S[_i0].b4 = ((-2 * (next_i()%2)) + 1) * next_i();
        S[_i0].a4 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          double benchRet = section_process(S,in);
          printf("%lf\n", benchRet); 
          for(int _aux = 0; _aux < _len_S0; _aux++) {
          free(S[_aux].num);
          }
          for(int _aux = 0; _aux < _len_S0; _aux++) {
          free(S[_aux].denum);
          }
          free(S);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
