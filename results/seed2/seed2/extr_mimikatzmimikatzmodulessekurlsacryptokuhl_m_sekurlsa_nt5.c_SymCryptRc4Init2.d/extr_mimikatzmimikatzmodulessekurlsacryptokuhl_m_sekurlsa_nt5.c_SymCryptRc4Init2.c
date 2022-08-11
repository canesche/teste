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
struct TYPE_3__ {int* S; int i; scalar_t__ j; } ;
typedef  int SIZE_T ;
typedef  TYPE_1__* PSYMCRYPT_RC4_STATE ;
typedef  int* LPCBYTE ;
typedef  int BYTE ;
typedef  int BOOL ;

/* Variables and functions */

BOOL SymCryptRc4Init2(PSYMCRYPT_RC4_STATE pState, LPCBYTE pbKey, SIZE_T cbKey)
{
	BOOL status = cbKey && (cbKey <= 256);
	SIZE_T i, j, keyIdx;
	BYTE T;

	if(status)
	{
		for(i = 0; i < 256; i++)
			pState->S[i] = (BYTE) i;
		j = 0;
		keyIdx = 0;
		for(i = 0; i < 256; i++)
		{
			T = pState->S[i];
			j = (j + T + pbKey[keyIdx]) & 0xff;
			pState->S[i] = pState->S[j];
			pState->S[j] = T;
			keyIdx++;
			if(keyIdx == cbKey)
				keyIdx = 0;
		}
		pState->i = 1;
		pState->j = 0;
	}
	return status;
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
          int cbKey = 100;
          int _len_pState0 = 1;
          struct TYPE_3__ * pState = (struct TYPE_3__ *) malloc(_len_pState0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pState0; _i0++) {
              int _len_pState__i0__S0 = 1;
          pState[_i0].S = (int *) malloc(_len_pState__i0__S0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pState__i0__S0; _j0++) {
            pState[_i0].S[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pState[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
        pState[_i0].j = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pbKey0 = 1;
          int * pbKey = (int *) malloc(_len_pbKey0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pbKey0; _i0++) {
            pbKey[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = SymCryptRc4Init2(pState,pbKey,cbKey);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pState0; _aux++) {
          free(pState[_aux].S);
          }
          free(pState);
          free(pbKey);
        
        break;
    }
    // big-arr
    case 1:
    {
          int cbKey = 255;
          int _len_pState0 = 65025;
          struct TYPE_3__ * pState = (struct TYPE_3__ *) malloc(_len_pState0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pState0; _i0++) {
              int _len_pState__i0__S0 = 1;
          pState[_i0].S = (int *) malloc(_len_pState__i0__S0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pState__i0__S0; _j0++) {
            pState[_i0].S[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pState[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
        pState[_i0].j = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pbKey0 = 65025;
          int * pbKey = (int *) malloc(_len_pbKey0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pbKey0; _i0++) {
            pbKey[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = SymCryptRc4Init2(pState,pbKey,cbKey);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pState0; _aux++) {
          free(pState[_aux].S);
          }
          free(pState);
          free(pbKey);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cbKey = 10;
          int _len_pState0 = 100;
          struct TYPE_3__ * pState = (struct TYPE_3__ *) malloc(_len_pState0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pState0; _i0++) {
              int _len_pState__i0__S0 = 1;
          pState[_i0].S = (int *) malloc(_len_pState__i0__S0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pState__i0__S0; _j0++) {
            pState[_i0].S[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pState[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
        pState[_i0].j = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pbKey0 = 100;
          int * pbKey = (int *) malloc(_len_pbKey0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pbKey0; _i0++) {
            pbKey[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = SymCryptRc4Init2(pState,pbKey,cbKey);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pState0; _aux++) {
          free(pState[_aux].S);
          }
          free(pState);
          free(pbKey);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
