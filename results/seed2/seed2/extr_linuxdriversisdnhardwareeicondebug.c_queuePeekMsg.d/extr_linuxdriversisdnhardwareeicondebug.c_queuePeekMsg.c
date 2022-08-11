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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int word ;
typedef  int /*<<< orphan*/  byte ;
struct TYPE_5__ {int Size; } ;
struct TYPE_4__ {int /*<<< orphan*/  Wrap; int /*<<< orphan*/ * Tail; scalar_t__ Head; } ;
typedef  TYPE_1__ MSG_QUEUE ;
typedef  TYPE_2__ MSG_HEAD ;

/* Variables and functions */
 int MSG_INCOMPLETE ; 

__attribute__((used)) static byte *queuePeekMsg(MSG_QUEUE *Q, word *size) {
	/* Show the first valid message in queue BUT DON'T free the message.
	 * After looking on the message contents it can be freed queueFreeMsg()
	 * or simply remain in message queue.  */

	MSG_HEAD *Msg = (MSG_HEAD *)Q->Head;

	if (((byte *)Msg == Q->Tail && !Q->Wrap) ||
	    (Msg->Size & MSG_INCOMPLETE)) {
		return NULL;
	} else {
		*size = Msg->Size;
		return ((byte *)(Msg + 1));
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
          int _len_Q0 = 1;
          struct TYPE_4__ * Q = (struct TYPE_4__ *) malloc(_len_Q0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_Q0; _i0++) {
            Q[_i0].Wrap = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_Q__i0__Tail0 = 1;
          Q[_i0].Tail = (int *) malloc(_len_Q__i0__Tail0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_Q__i0__Tail0; _j0++) {
            Q[_i0].Tail[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        Q[_i0].Head = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_size0 = 1;
          int * size = (int *) malloc(_len_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = queuePeekMsg(Q,size);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_Q0; _aux++) {
          free(Q[_aux].Tail);
          }
          free(Q);
          free(size);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_Q0 = 65025;
          struct TYPE_4__ * Q = (struct TYPE_4__ *) malloc(_len_Q0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_Q0; _i0++) {
            Q[_i0].Wrap = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_Q__i0__Tail0 = 1;
          Q[_i0].Tail = (int *) malloc(_len_Q__i0__Tail0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_Q__i0__Tail0; _j0++) {
            Q[_i0].Tail[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        Q[_i0].Head = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_size0 = 65025;
          int * size = (int *) malloc(_len_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = queuePeekMsg(Q,size);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_Q0; _aux++) {
          free(Q[_aux].Tail);
          }
          free(Q);
          free(size);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_Q0 = 100;
          struct TYPE_4__ * Q = (struct TYPE_4__ *) malloc(_len_Q0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_Q0; _i0++) {
            Q[_i0].Wrap = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_Q__i0__Tail0 = 1;
          Q[_i0].Tail = (int *) malloc(_len_Q__i0__Tail0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_Q__i0__Tail0; _j0++) {
            Q[_i0].Tail[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        Q[_i0].Head = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_size0 = 100;
          int * size = (int *) malloc(_len_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = queuePeekMsg(Q,size);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_Q0; _aux++) {
          free(Q[_aux].Tail);
          }
          free(Q);
          free(size);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
