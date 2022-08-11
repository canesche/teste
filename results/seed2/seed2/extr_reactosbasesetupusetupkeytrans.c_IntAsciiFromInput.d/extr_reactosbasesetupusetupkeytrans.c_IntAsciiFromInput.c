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
typedef  int USHORT ;
typedef  size_t UINT ;
typedef  scalar_t__ UCHAR ;
struct TYPE_5__ {scalar_t__ ScanCode; int Enhanced; scalar_t__ Normal; scalar_t__ Shift; scalar_t__ bCAPS; scalar_t__ NumLock; } ;
struct TYPE_4__ {scalar_t__ MakeCode; } ;
typedef  TYPE_1__* PKEYBOARD_INPUT_DATA ;
typedef  int DWORD ;

/* Variables and functions */
 int CAPSLOCK_ON ; 
 int ENHANCED_KEY ; 
 int NUMLOCK_ON ; 
 int SHIFT_PRESSED ; 
 TYPE_2__* ScanToAscii ; 

__attribute__((used)) static UCHAR
IntAsciiFromInput(PKEYBOARD_INPUT_DATA InputData, DWORD KeyState)
{
	UINT Counter = 0;
	USHORT Enhanced = 0;

	if (KeyState & ENHANCED_KEY) Enhanced = 1;

	while (ScanToAscii[Counter].ScanCode != 0) {
		if ((ScanToAscii[Counter].ScanCode == InputData->MakeCode)  &&
		    (ScanToAscii[Counter].Enhanced == Enhanced)) {
			if (ScanToAscii[Counter].NumLock) {
				if ((KeyState & NUMLOCK_ON) &&
				    !(KeyState & SHIFT_PRESSED)) {
					return ScanToAscii[Counter].NumLock;
				} else {
					return ScanToAscii[Counter].Normal;
				}
			}

			if ((KeyState & CAPSLOCK_ON) && ScanToAscii[Counter].bCAPS)
				KeyState ^= SHIFT_PRESSED;

			if (KeyState & SHIFT_PRESSED)
				return ScanToAscii[Counter].Shift;

			return ScanToAscii[Counter].Normal;
		}
		Counter++;
	}

	return 0;
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
          int KeyState = 100;
          int _len_InputData0 = 1;
          struct TYPE_4__ * InputData = (struct TYPE_4__ *) malloc(_len_InputData0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_InputData0; _i0++) {
            InputData[_i0].MakeCode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = IntAsciiFromInput(InputData,KeyState);
          printf("%ld\n", benchRet); 
          free(InputData);
        
        break;
    }
    // big-arr
    case 1:
    {
          int KeyState = 255;
          int _len_InputData0 = 65025;
          struct TYPE_4__ * InputData = (struct TYPE_4__ *) malloc(_len_InputData0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_InputData0; _i0++) {
            InputData[_i0].MakeCode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = IntAsciiFromInput(InputData,KeyState);
          printf("%ld\n", benchRet); 
          free(InputData);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int KeyState = 10;
          int _len_InputData0 = 100;
          struct TYPE_4__ * InputData = (struct TYPE_4__ *) malloc(_len_InputData0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_InputData0; _i0++) {
            InputData[_i0].MakeCode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = IntAsciiFromInput(InputData,KeyState);
          printf("%ld\n", benchRet); 
          free(InputData);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
