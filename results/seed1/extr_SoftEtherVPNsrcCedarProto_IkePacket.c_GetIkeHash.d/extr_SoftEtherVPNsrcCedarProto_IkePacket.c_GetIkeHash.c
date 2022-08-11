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
struct TYPE_3__ {int /*<<< orphan*/ ** IkeHashes; int /*<<< orphan*/ ** EspHashes; } ;
typedef  int /*<<< orphan*/  IKE_HASH ;
typedef  TYPE_1__ IKE_ENGINE ;

/* Variables and functions */
 size_t MAX_IKE_ENGINE_ELEMENTS ; 

IKE_HASH *GetIkeHash(IKE_ENGINE *e, bool for_esp, UINT i)
{
	// Validate arguments
	if (e == NULL || i == 0 || i >= MAX_IKE_ENGINE_ELEMENTS)
	{
		return NULL;
	}

	if (for_esp)
	{
		return e->EspHashes[i];
	}
	else
	{
		return e->IkeHashes[i];
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
              int _len_e__i0__IkeHashes0 = 1;
          e[_i0].IkeHashes = (int **) malloc(_len_e__i0__IkeHashes0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_e__i0__IkeHashes0; _j0++) {
            int _len_e__i0__IkeHashes1 = 1;
            e[_i0].IkeHashes[_j0] = (int *) malloc(_len_e__i0__IkeHashes1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_e__i0__IkeHashes1; _j1++) {
              e[_i0].IkeHashes[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_e__i0__EspHashes0 = 1;
          e[_i0].EspHashes = (int **) malloc(_len_e__i0__EspHashes0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_e__i0__EspHashes0; _j0++) {
            int _len_e__i0__EspHashes1 = 1;
            e[_i0].EspHashes[_j0] = (int *) malloc(_len_e__i0__EspHashes1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_e__i0__EspHashes1; _j1++) {
              e[_i0].EspHashes[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int * benchRet = GetIkeHash(e,for_esp,i);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(*(e[_aux].IkeHashes));
        free(e[_aux].IkeHashes);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(*(e[_aux].EspHashes));
        free(e[_aux].EspHashes);
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
              int _len_e__i0__IkeHashes0 = 1;
          e[_i0].IkeHashes = (int **) malloc(_len_e__i0__IkeHashes0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_e__i0__IkeHashes0; _j0++) {
            int _len_e__i0__IkeHashes1 = 1;
            e[_i0].IkeHashes[_j0] = (int *) malloc(_len_e__i0__IkeHashes1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_e__i0__IkeHashes1; _j1++) {
              e[_i0].IkeHashes[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_e__i0__EspHashes0 = 1;
          e[_i0].EspHashes = (int **) malloc(_len_e__i0__EspHashes0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_e__i0__EspHashes0; _j0++) {
            int _len_e__i0__EspHashes1 = 1;
            e[_i0].EspHashes[_j0] = (int *) malloc(_len_e__i0__EspHashes1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_e__i0__EspHashes1; _j1++) {
              e[_i0].EspHashes[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int * benchRet = GetIkeHash(e,for_esp,i);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(*(e[_aux].IkeHashes));
        free(e[_aux].IkeHashes);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(*(e[_aux].EspHashes));
        free(e[_aux].EspHashes);
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
              int _len_e__i0__IkeHashes0 = 1;
          e[_i0].IkeHashes = (int **) malloc(_len_e__i0__IkeHashes0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_e__i0__IkeHashes0; _j0++) {
            int _len_e__i0__IkeHashes1 = 1;
            e[_i0].IkeHashes[_j0] = (int *) malloc(_len_e__i0__IkeHashes1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_e__i0__IkeHashes1; _j1++) {
              e[_i0].IkeHashes[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_e__i0__EspHashes0 = 1;
          e[_i0].EspHashes = (int **) malloc(_len_e__i0__EspHashes0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_e__i0__EspHashes0; _j0++) {
            int _len_e__i0__EspHashes1 = 1;
            e[_i0].EspHashes[_j0] = (int *) malloc(_len_e__i0__EspHashes1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_e__i0__EspHashes1; _j1++) {
              e[_i0].EspHashes[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int * benchRet = GetIkeHash(e,for_esp,i);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(*(e[_aux].IkeHashes));
        free(e[_aux].IkeHashes);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(*(e[_aux].EspHashes));
        free(e[_aux].EspHashes);
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
