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
struct TYPE_3__ {size_t* pz; int* px; int* py; size_t* nz; int* nx; int* ny; int size; } ;
typedef  TYPE_1__ ccv_bbf_feature_t ;

/* Variables and functions */

__attribute__((used)) static inline int _ccv_run_bbf_feature(ccv_bbf_feature_t* feature, int* step, unsigned char** u8)
{
#define pf_at(i) (*(u8[feature->pz[i]] + feature->px[i] + feature->py[i] * step[feature->pz[i]]))
#define nf_at(i) (*(u8[feature->nz[i]] + feature->nx[i] + feature->ny[i] * step[feature->nz[i]]))
	unsigned char pmin = pf_at(0), nmax = nf_at(0);
	/* check if every point in P > every point in N, and take a shortcut */
	if (pmin <= nmax)
		return 0;
	int i;
	for (i = 1; i < feature->size; i++)
	{
		if (feature->pz[i] >= 0)
		{
			int p = pf_at(i);
			if (p < pmin)
			{
				if (p <= nmax)
					return 0;
				pmin = p;
			}
		}
		if (feature->nz[i] >= 0)
		{
			int n = nf_at(i);
			if (n > nmax)
			{
				if (pmin <= n)
					return 0;
				nmax = n;
			}
		}
	}
#undef pf_at
#undef nf_at
	return 1;
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
          int _len_feature0 = 1;
          struct TYPE_3__ * feature = (struct TYPE_3__ *) malloc(_len_feature0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_feature0; _i0++) {
              int _len_feature__i0__pz0 = 1;
          feature[_i0].pz = (unsigned long *) malloc(_len_feature__i0__pz0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_feature__i0__pz0; _j0++) {
            feature[_i0].pz[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_feature__i0__px0 = 1;
          feature[_i0].px = (int *) malloc(_len_feature__i0__px0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_feature__i0__px0; _j0++) {
            feature[_i0].px[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_feature__i0__py0 = 1;
          feature[_i0].py = (int *) malloc(_len_feature__i0__py0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_feature__i0__py0; _j0++) {
            feature[_i0].py[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_feature__i0__nz0 = 1;
          feature[_i0].nz = (unsigned long *) malloc(_len_feature__i0__nz0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_feature__i0__nz0; _j0++) {
            feature[_i0].nz[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_feature__i0__nx0 = 1;
          feature[_i0].nx = (int *) malloc(_len_feature__i0__nx0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_feature__i0__nx0; _j0++) {
            feature[_i0].nx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_feature__i0__ny0 = 1;
          feature[_i0].ny = (int *) malloc(_len_feature__i0__ny0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_feature__i0__ny0; _j0++) {
            feature[_i0].ny[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        feature[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_step0 = 1;
          int * step = (int *) malloc(_len_step0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_step0; _i0++) {
            step[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_u80 = 1;
          unsigned char ** u8 = (unsigned char **) malloc(_len_u80*sizeof(unsigned char *));
          for(int _i0 = 0; _i0 < _len_u80; _i0++) {
            int _len_u81 = 1;
            u8[_i0] = (unsigned char *) malloc(_len_u81*sizeof(unsigned char));
            for(int _i1 = 0; _i1 < _len_u81; _i1++) {
              u8[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = _ccv_run_bbf_feature(feature,step,u8);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_feature0; _aux++) {
          free(feature[_aux].pz);
          }
          for(int _aux = 0; _aux < _len_feature0; _aux++) {
          free(feature[_aux].px);
          }
          for(int _aux = 0; _aux < _len_feature0; _aux++) {
          free(feature[_aux].py);
          }
          for(int _aux = 0; _aux < _len_feature0; _aux++) {
          free(feature[_aux].nz);
          }
          for(int _aux = 0; _aux < _len_feature0; _aux++) {
          free(feature[_aux].nx);
          }
          for(int _aux = 0; _aux < _len_feature0; _aux++) {
          free(feature[_aux].ny);
          }
          free(feature);
          free(step);
          for(int i1 = 0; i1 < _len_u80; i1++) {
            int _len_u81 = 1;
              free(u8[i1]);
          }
          free(u8);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_feature0 = 65025;
          struct TYPE_3__ * feature = (struct TYPE_3__ *) malloc(_len_feature0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_feature0; _i0++) {
              int _len_feature__i0__pz0 = 1;
          feature[_i0].pz = (unsigned long *) malloc(_len_feature__i0__pz0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_feature__i0__pz0; _j0++) {
            feature[_i0].pz[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_feature__i0__px0 = 1;
          feature[_i0].px = (int *) malloc(_len_feature__i0__px0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_feature__i0__px0; _j0++) {
            feature[_i0].px[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_feature__i0__py0 = 1;
          feature[_i0].py = (int *) malloc(_len_feature__i0__py0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_feature__i0__py0; _j0++) {
            feature[_i0].py[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_feature__i0__nz0 = 1;
          feature[_i0].nz = (unsigned long *) malloc(_len_feature__i0__nz0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_feature__i0__nz0; _j0++) {
            feature[_i0].nz[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_feature__i0__nx0 = 1;
          feature[_i0].nx = (int *) malloc(_len_feature__i0__nx0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_feature__i0__nx0; _j0++) {
            feature[_i0].nx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_feature__i0__ny0 = 1;
          feature[_i0].ny = (int *) malloc(_len_feature__i0__ny0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_feature__i0__ny0; _j0++) {
            feature[_i0].ny[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        feature[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_step0 = 65025;
          int * step = (int *) malloc(_len_step0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_step0; _i0++) {
            step[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_u80 = 65025;
          unsigned char ** u8 = (unsigned char **) malloc(_len_u80*sizeof(unsigned char *));
          for(int _i0 = 0; _i0 < _len_u80; _i0++) {
            int _len_u81 = 1;
            u8[_i0] = (unsigned char *) malloc(_len_u81*sizeof(unsigned char));
            for(int _i1 = 0; _i1 < _len_u81; _i1++) {
              u8[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = _ccv_run_bbf_feature(feature,step,u8);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_feature0; _aux++) {
          free(feature[_aux].pz);
          }
          for(int _aux = 0; _aux < _len_feature0; _aux++) {
          free(feature[_aux].px);
          }
          for(int _aux = 0; _aux < _len_feature0; _aux++) {
          free(feature[_aux].py);
          }
          for(int _aux = 0; _aux < _len_feature0; _aux++) {
          free(feature[_aux].nz);
          }
          for(int _aux = 0; _aux < _len_feature0; _aux++) {
          free(feature[_aux].nx);
          }
          for(int _aux = 0; _aux < _len_feature0; _aux++) {
          free(feature[_aux].ny);
          }
          free(feature);
          free(step);
          for(int i1 = 0; i1 < _len_u80; i1++) {
            int _len_u81 = 1;
              free(u8[i1]);
          }
          free(u8);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_feature0 = 100;
          struct TYPE_3__ * feature = (struct TYPE_3__ *) malloc(_len_feature0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_feature0; _i0++) {
              int _len_feature__i0__pz0 = 1;
          feature[_i0].pz = (unsigned long *) malloc(_len_feature__i0__pz0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_feature__i0__pz0; _j0++) {
            feature[_i0].pz[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_feature__i0__px0 = 1;
          feature[_i0].px = (int *) malloc(_len_feature__i0__px0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_feature__i0__px0; _j0++) {
            feature[_i0].px[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_feature__i0__py0 = 1;
          feature[_i0].py = (int *) malloc(_len_feature__i0__py0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_feature__i0__py0; _j0++) {
            feature[_i0].py[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_feature__i0__nz0 = 1;
          feature[_i0].nz = (unsigned long *) malloc(_len_feature__i0__nz0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_feature__i0__nz0; _j0++) {
            feature[_i0].nz[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_feature__i0__nx0 = 1;
          feature[_i0].nx = (int *) malloc(_len_feature__i0__nx0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_feature__i0__nx0; _j0++) {
            feature[_i0].nx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_feature__i0__ny0 = 1;
          feature[_i0].ny = (int *) malloc(_len_feature__i0__ny0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_feature__i0__ny0; _j0++) {
            feature[_i0].ny[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        feature[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_step0 = 100;
          int * step = (int *) malloc(_len_step0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_step0; _i0++) {
            step[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_u80 = 100;
          unsigned char ** u8 = (unsigned char **) malloc(_len_u80*sizeof(unsigned char *));
          for(int _i0 = 0; _i0 < _len_u80; _i0++) {
            int _len_u81 = 1;
            u8[_i0] = (unsigned char *) malloc(_len_u81*sizeof(unsigned char));
            for(int _i1 = 0; _i1 < _len_u81; _i1++) {
              u8[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = _ccv_run_bbf_feature(feature,step,u8);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_feature0; _aux++) {
          free(feature[_aux].pz);
          }
          for(int _aux = 0; _aux < _len_feature0; _aux++) {
          free(feature[_aux].px);
          }
          for(int _aux = 0; _aux < _len_feature0; _aux++) {
          free(feature[_aux].py);
          }
          for(int _aux = 0; _aux < _len_feature0; _aux++) {
          free(feature[_aux].nz);
          }
          for(int _aux = 0; _aux < _len_feature0; _aux++) {
          free(feature[_aux].nx);
          }
          for(int _aux = 0; _aux < _len_feature0; _aux++) {
          free(feature[_aux].ny);
          }
          free(feature);
          free(step);
          for(int i1 = 0; i1 < _len_u80; i1++) {
            int _len_u81 = 1;
              free(u8[i1]);
          }
          free(u8);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
