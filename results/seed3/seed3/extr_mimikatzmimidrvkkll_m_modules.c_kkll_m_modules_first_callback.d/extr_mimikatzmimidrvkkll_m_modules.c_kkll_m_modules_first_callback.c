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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {scalar_t__ ImageBase; } ;
struct TYPE_7__ {int /*<<< orphan*/  ImageSize; TYPE_1__ BasicInfo; } ;
struct TYPE_6__ {int /*<<< orphan*/  size; scalar_t__ addr; } ;
typedef  int /*<<< orphan*/  SIZE_T ;
typedef  scalar_t__ PVOID ;
typedef  scalar_t__ PUCHAR ;
typedef  TYPE_2__* PKKLL_M_MODULE_BASIC_INFOS ;
typedef  int /*<<< orphan*/  PKIWI_BUFFER ;
typedef  TYPE_3__* PAUX_MODULE_EXTENDED_INFO ;
typedef  int /*<<< orphan*/  NTSTATUS ;
typedef  int /*<<< orphan*/  BOOLEAN ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  STATUS_SUCCESS ; 

NTSTATUS kkll_m_modules_first_callback(SIZE_T szBufferIn, PVOID bufferIn, PKIWI_BUFFER outBuffer, PAUX_MODULE_EXTENDED_INFO pModule, PVOID pvArg, BOOLEAN * mustContinue)
{
	*mustContinue = FALSE;
	((PKKLL_M_MODULE_BASIC_INFOS) pvArg)->addr = (PUCHAR) pModule->BasicInfo.ImageBase;
	((PKKLL_M_MODULE_BASIC_INFOS) pvArg)->size = pModule->ImageSize;
	return STATUS_SUCCESS;
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
          int szBufferIn = 100;
          long bufferIn = 100;
          int outBuffer = 100;
          long pvArg = 100;
          int _len_pModule0 = 1;
          struct TYPE_7__ * pModule = (struct TYPE_7__ *) malloc(_len_pModule0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_pModule0; _i0++) {
            pModule[_i0].ImageSize = ((-2 * (next_i()%2)) + 1) * next_i();
        pModule[_i0].BasicInfo.ImageBase = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mustContinue0 = 1;
          int * mustContinue = (int *) malloc(_len_mustContinue0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mustContinue0; _i0++) {
            mustContinue[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kkll_m_modules_first_callback(szBufferIn,bufferIn,outBuffer,pModule,pvArg,mustContinue);
          printf("%d\n", benchRet); 
          free(pModule);
          free(mustContinue);
        
        break;
    }
    // big-arr
    case 1:
    {
          int szBufferIn = 255;
          long bufferIn = 255;
          int outBuffer = 255;
          long pvArg = 255;
          int _len_pModule0 = 65025;
          struct TYPE_7__ * pModule = (struct TYPE_7__ *) malloc(_len_pModule0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_pModule0; _i0++) {
            pModule[_i0].ImageSize = ((-2 * (next_i()%2)) + 1) * next_i();
        pModule[_i0].BasicInfo.ImageBase = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mustContinue0 = 65025;
          int * mustContinue = (int *) malloc(_len_mustContinue0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mustContinue0; _i0++) {
            mustContinue[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kkll_m_modules_first_callback(szBufferIn,bufferIn,outBuffer,pModule,pvArg,mustContinue);
          printf("%d\n", benchRet); 
          free(pModule);
          free(mustContinue);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int szBufferIn = 10;
          long bufferIn = 10;
          int outBuffer = 10;
          long pvArg = 10;
          int _len_pModule0 = 100;
          struct TYPE_7__ * pModule = (struct TYPE_7__ *) malloc(_len_pModule0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_pModule0; _i0++) {
            pModule[_i0].ImageSize = ((-2 * (next_i()%2)) + 1) * next_i();
        pModule[_i0].BasicInfo.ImageBase = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mustContinue0 = 100;
          int * mustContinue = (int *) malloc(_len_mustContinue0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mustContinue0; _i0++) {
            mustContinue[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kkll_m_modules_first_callback(szBufferIn,bufferIn,outBuffer,pModule,pvArg,mustContinue);
          printf("%d\n", benchRet); 
          free(pModule);
          free(mustContinue);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
