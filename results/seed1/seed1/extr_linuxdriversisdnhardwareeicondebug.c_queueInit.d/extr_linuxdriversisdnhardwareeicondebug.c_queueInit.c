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
typedef  int dword ;
typedef  int /*<<< orphan*/  byte ;
struct TYPE_3__ {int Size; scalar_t__ Count; int /*<<< orphan*/ * Wrap; int /*<<< orphan*/ * High; int /*<<< orphan*/ * Tail; int /*<<< orphan*/ * Head; int /*<<< orphan*/ * Base; } ;
typedef  TYPE_1__ MSG_QUEUE ;

/* Variables and functions */

__attribute__((used)) static void queueInit(MSG_QUEUE *Q, byte *Buffer, dword sizeBuffer) {
	Q->Size = sizeBuffer;
	Q->Base = Q->Head = Q->Tail = Buffer;
	Q->High = Buffer + sizeBuffer;
	Q->Wrap = NULL;
	Q->Count = 0;
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
          int sizeBuffer = 100;
          int _len_Q0 = 1;
          struct TYPE_3__ * Q = (struct TYPE_3__ *) malloc(_len_Q0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_Q0; _i0++) {
            Q[_i0].Size = ((-2 * (next_i()%2)) + 1) * next_i();
        Q[_i0].Count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_Q__i0__Wrap0 = 1;
          Q[_i0].Wrap = (int *) malloc(_len_Q__i0__Wrap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_Q__i0__Wrap0; _j0++) {
            Q[_i0].Wrap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Q__i0__High0 = 1;
          Q[_i0].High = (int *) malloc(_len_Q__i0__High0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_Q__i0__High0; _j0++) {
            Q[_i0].High[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Q__i0__Tail0 = 1;
          Q[_i0].Tail = (int *) malloc(_len_Q__i0__Tail0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_Q__i0__Tail0; _j0++) {
            Q[_i0].Tail[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Q__i0__Head0 = 1;
          Q[_i0].Head = (int *) malloc(_len_Q__i0__Head0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_Q__i0__Head0; _j0++) {
            Q[_i0].Head[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Q__i0__Base0 = 1;
          Q[_i0].Base = (int *) malloc(_len_Q__i0__Base0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_Q__i0__Base0; _j0++) {
            Q[_i0].Base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_Buffer0 = 1;
          int * Buffer = (int *) malloc(_len_Buffer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Buffer0; _i0++) {
            Buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          queueInit(Q,Buffer,sizeBuffer);
          for(int _aux = 0; _aux < _len_Q0; _aux++) {
          free(Q[_aux].Wrap);
          }
          for(int _aux = 0; _aux < _len_Q0; _aux++) {
          free(Q[_aux].High);
          }
          for(int _aux = 0; _aux < _len_Q0; _aux++) {
          free(Q[_aux].Tail);
          }
          for(int _aux = 0; _aux < _len_Q0; _aux++) {
          free(Q[_aux].Head);
          }
          for(int _aux = 0; _aux < _len_Q0; _aux++) {
          free(Q[_aux].Base);
          }
          free(Q);
          free(Buffer);
        
        break;
    }
    // big-arr
    case 1:
    {
          int sizeBuffer = 255;
          int _len_Q0 = 65025;
          struct TYPE_3__ * Q = (struct TYPE_3__ *) malloc(_len_Q0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_Q0; _i0++) {
            Q[_i0].Size = ((-2 * (next_i()%2)) + 1) * next_i();
        Q[_i0].Count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_Q__i0__Wrap0 = 1;
          Q[_i0].Wrap = (int *) malloc(_len_Q__i0__Wrap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_Q__i0__Wrap0; _j0++) {
            Q[_i0].Wrap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Q__i0__High0 = 1;
          Q[_i0].High = (int *) malloc(_len_Q__i0__High0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_Q__i0__High0; _j0++) {
            Q[_i0].High[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Q__i0__Tail0 = 1;
          Q[_i0].Tail = (int *) malloc(_len_Q__i0__Tail0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_Q__i0__Tail0; _j0++) {
            Q[_i0].Tail[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Q__i0__Head0 = 1;
          Q[_i0].Head = (int *) malloc(_len_Q__i0__Head0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_Q__i0__Head0; _j0++) {
            Q[_i0].Head[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Q__i0__Base0 = 1;
          Q[_i0].Base = (int *) malloc(_len_Q__i0__Base0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_Q__i0__Base0; _j0++) {
            Q[_i0].Base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_Buffer0 = 65025;
          int * Buffer = (int *) malloc(_len_Buffer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Buffer0; _i0++) {
            Buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          queueInit(Q,Buffer,sizeBuffer);
          for(int _aux = 0; _aux < _len_Q0; _aux++) {
          free(Q[_aux].Wrap);
          }
          for(int _aux = 0; _aux < _len_Q0; _aux++) {
          free(Q[_aux].High);
          }
          for(int _aux = 0; _aux < _len_Q0; _aux++) {
          free(Q[_aux].Tail);
          }
          for(int _aux = 0; _aux < _len_Q0; _aux++) {
          free(Q[_aux].Head);
          }
          for(int _aux = 0; _aux < _len_Q0; _aux++) {
          free(Q[_aux].Base);
          }
          free(Q);
          free(Buffer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int sizeBuffer = 10;
          int _len_Q0 = 100;
          struct TYPE_3__ * Q = (struct TYPE_3__ *) malloc(_len_Q0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_Q0; _i0++) {
            Q[_i0].Size = ((-2 * (next_i()%2)) + 1) * next_i();
        Q[_i0].Count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_Q__i0__Wrap0 = 1;
          Q[_i0].Wrap = (int *) malloc(_len_Q__i0__Wrap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_Q__i0__Wrap0; _j0++) {
            Q[_i0].Wrap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Q__i0__High0 = 1;
          Q[_i0].High = (int *) malloc(_len_Q__i0__High0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_Q__i0__High0; _j0++) {
            Q[_i0].High[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Q__i0__Tail0 = 1;
          Q[_i0].Tail = (int *) malloc(_len_Q__i0__Tail0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_Q__i0__Tail0; _j0++) {
            Q[_i0].Tail[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Q__i0__Head0 = 1;
          Q[_i0].Head = (int *) malloc(_len_Q__i0__Head0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_Q__i0__Head0; _j0++) {
            Q[_i0].Head[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Q__i0__Base0 = 1;
          Q[_i0].Base = (int *) malloc(_len_Q__i0__Base0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_Q__i0__Base0; _j0++) {
            Q[_i0].Base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_Buffer0 = 100;
          int * Buffer = (int *) malloc(_len_Buffer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Buffer0; _i0++) {
            Buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          queueInit(Q,Buffer,sizeBuffer);
          for(int _aux = 0; _aux < _len_Q0; _aux++) {
          free(Q[_aux].Wrap);
          }
          for(int _aux = 0; _aux < _len_Q0; _aux++) {
          free(Q[_aux].High);
          }
          for(int _aux = 0; _aux < _len_Q0; _aux++) {
          free(Q[_aux].Tail);
          }
          for(int _aux = 0; _aux < _len_Q0; _aux++) {
          free(Q[_aux].Head);
          }
          for(int _aux = 0; _aux < _len_Q0; _aux++) {
          free(Q[_aux].Base);
          }
          free(Q);
          free(Buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
