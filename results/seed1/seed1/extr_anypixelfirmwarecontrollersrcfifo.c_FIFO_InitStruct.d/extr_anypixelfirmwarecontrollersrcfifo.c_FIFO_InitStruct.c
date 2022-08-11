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
typedef  void* uint16_t ;
struct TYPE_3__ {scalar_t__ overrun; void* free; void* size; scalar_t__ tail; scalar_t__ head; int /*<<< orphan*/ * buffer; } ;
typedef  TYPE_1__ FIFO_Data_TypeDef ;

/* Variables and functions */

bool FIFO_InitStruct(FIFO_Data_TypeDef *inStruct, uint8_t* inBuf, uint16_t inBufSize) {
	if(inStruct == NULL || inBuf == NULL)
		return false;
	inStruct->buffer = inBuf;
	inStruct->head = 0;
	inStruct->tail = 0;
	inStruct->size = inBufSize;
	inStruct->free = inBufSize;
	inStruct->overrun = 0;
	return true;
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
          int _len_inStruct0 = 1;
          struct TYPE_3__ * inStruct = (struct TYPE_3__ *) malloc(_len_inStruct0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_inStruct0; _i0++) {
            inStruct[_i0].overrun = ((-2 * (next_i()%2)) + 1) * next_i();
        inStruct[_i0].tail = ((-2 * (next_i()%2)) + 1) * next_i();
        inStruct[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_inStruct__i0__buffer0 = 1;
          inStruct[_i0].buffer = (int *) malloc(_len_inStruct__i0__buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_inStruct__i0__buffer0; _j0++) {
            inStruct[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_inBuf0 = 1;
          int * inBuf = (int *) malloc(_len_inBuf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_inBuf0; _i0++) {
            inBuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * inBufSize;
          int benchRet = FIFO_InitStruct(inStruct,inBuf,inBufSize);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_inStruct0; _aux++) {
          free(inStruct[_aux].buffer);
          }
          free(inStruct);
          free(inBuf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_inStruct0 = 65025;
          struct TYPE_3__ * inStruct = (struct TYPE_3__ *) malloc(_len_inStruct0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_inStruct0; _i0++) {
            inStruct[_i0].overrun = ((-2 * (next_i()%2)) + 1) * next_i();
        inStruct[_i0].tail = ((-2 * (next_i()%2)) + 1) * next_i();
        inStruct[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_inStruct__i0__buffer0 = 1;
          inStruct[_i0].buffer = (int *) malloc(_len_inStruct__i0__buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_inStruct__i0__buffer0; _j0++) {
            inStruct[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_inBuf0 = 65025;
          int * inBuf = (int *) malloc(_len_inBuf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_inBuf0; _i0++) {
            inBuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * inBufSize;
          int benchRet = FIFO_InitStruct(inStruct,inBuf,inBufSize);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_inStruct0; _aux++) {
          free(inStruct[_aux].buffer);
          }
          free(inStruct);
          free(inBuf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_inStruct0 = 100;
          struct TYPE_3__ * inStruct = (struct TYPE_3__ *) malloc(_len_inStruct0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_inStruct0; _i0++) {
            inStruct[_i0].overrun = ((-2 * (next_i()%2)) + 1) * next_i();
        inStruct[_i0].tail = ((-2 * (next_i()%2)) + 1) * next_i();
        inStruct[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_inStruct__i0__buffer0 = 1;
          inStruct[_i0].buffer = (int *) malloc(_len_inStruct__i0__buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_inStruct__i0__buffer0; _j0++) {
            inStruct[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_inBuf0 = 100;
          int * inBuf = (int *) malloc(_len_inBuf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_inBuf0; _i0++) {
            inBuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * inBufSize;
          int benchRet = FIFO_InitStruct(inStruct,inBuf,inBufSize);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_inStruct0; _aux++) {
          free(inStruct[_aux].buffer);
          }
          free(inStruct);
          free(inBuf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
