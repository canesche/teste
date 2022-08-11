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
typedef  size_t UINT ;
struct TYPE_3__ {int /*<<< orphan*/ ** IkeDhs; int /*<<< orphan*/ ** EspDhs; } ;
typedef  TYPE_1__ IKE_ENGINE ;
typedef  int /*<<< orphan*/  IKE_DH ;

/* Variables and functions */
 size_t MAX_IKE_ENGINE_ELEMENTS ; 

IKE_DH *GetIkeDh(IKE_ENGINE *e, bool for_esp, UINT i)
{
	// Validate arguments
	if (e == NULL || i == 0 || i >= MAX_IKE_ENGINE_ELEMENTS)
	{
		return NULL;
	}

	if (for_esp)
	{
		return e->EspDhs[i];
	}
	else
	{
		return e->IkeDhs[i];
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
          int for_esp = 100;
          unsigned long i = 100;
          int _len_e0 = 1;
          struct TYPE_3__ * e = (struct TYPE_3__ *) malloc(_len_e0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              int _len_e__i0__IkeDhs0 = 1;
          e[_i0].IkeDhs = (int **) malloc(_len_e__i0__IkeDhs0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_e__i0__IkeDhs0; _j0++) {
            int _len_e__i0__IkeDhs1 = 1;
            e[_i0].IkeDhs[_j0] = (int *) malloc(_len_e__i0__IkeDhs1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_e__i0__IkeDhs1; _j1++) {
              e[_i0].IkeDhs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_e__i0__EspDhs0 = 1;
          e[_i0].EspDhs = (int **) malloc(_len_e__i0__EspDhs0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_e__i0__EspDhs0; _j0++) {
            int _len_e__i0__EspDhs1 = 1;
            e[_i0].EspDhs[_j0] = (int *) malloc(_len_e__i0__EspDhs1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_e__i0__EspDhs1; _j1++) {
              e[_i0].EspDhs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int * benchRet = GetIkeDh(e,for_esp,i);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(*(e[_aux].IkeDhs));
        free(e[_aux].IkeDhs);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(*(e[_aux].EspDhs));
        free(e[_aux].EspDhs);
          }
          free(e);
        
        break;
    }
    // big-arr
    case 1:
    {
          int for_esp = 255;
          unsigned long i = 255;
          int _len_e0 = 65025;
          struct TYPE_3__ * e = (struct TYPE_3__ *) malloc(_len_e0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              int _len_e__i0__IkeDhs0 = 1;
          e[_i0].IkeDhs = (int **) malloc(_len_e__i0__IkeDhs0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_e__i0__IkeDhs0; _j0++) {
            int _len_e__i0__IkeDhs1 = 1;
            e[_i0].IkeDhs[_j0] = (int *) malloc(_len_e__i0__IkeDhs1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_e__i0__IkeDhs1; _j1++) {
              e[_i0].IkeDhs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_e__i0__EspDhs0 = 1;
          e[_i0].EspDhs = (int **) malloc(_len_e__i0__EspDhs0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_e__i0__EspDhs0; _j0++) {
            int _len_e__i0__EspDhs1 = 1;
            e[_i0].EspDhs[_j0] = (int *) malloc(_len_e__i0__EspDhs1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_e__i0__EspDhs1; _j1++) {
              e[_i0].EspDhs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int * benchRet = GetIkeDh(e,for_esp,i);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(*(e[_aux].IkeDhs));
        free(e[_aux].IkeDhs);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(*(e[_aux].EspDhs));
        free(e[_aux].EspDhs);
          }
          free(e);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int for_esp = 10;
          unsigned long i = 10;
          int _len_e0 = 100;
          struct TYPE_3__ * e = (struct TYPE_3__ *) malloc(_len_e0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              int _len_e__i0__IkeDhs0 = 1;
          e[_i0].IkeDhs = (int **) malloc(_len_e__i0__IkeDhs0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_e__i0__IkeDhs0; _j0++) {
            int _len_e__i0__IkeDhs1 = 1;
            e[_i0].IkeDhs[_j0] = (int *) malloc(_len_e__i0__IkeDhs1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_e__i0__IkeDhs1; _j1++) {
              e[_i0].IkeDhs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_e__i0__EspDhs0 = 1;
          e[_i0].EspDhs = (int **) malloc(_len_e__i0__EspDhs0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_e__i0__EspDhs0; _j0++) {
            int _len_e__i0__EspDhs1 = 1;
            e[_i0].EspDhs[_j0] = (int *) malloc(_len_e__i0__EspDhs1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_e__i0__EspDhs1; _j1++) {
              e[_i0].EspDhs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int * benchRet = GetIkeDh(e,for_esp,i);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(*(e[_aux].IkeDhs));
        free(e[_aux].IkeDhs);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(*(e[_aux].EspDhs));
        free(e[_aux].EspDhs);
          }
          free(e);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
