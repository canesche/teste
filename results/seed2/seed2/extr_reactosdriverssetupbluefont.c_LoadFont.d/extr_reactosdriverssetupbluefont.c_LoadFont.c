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

/* Type definitions */
typedef  int /*<<< orphan*/  VOID ;
typedef  int UINT32 ;
typedef  int /*<<< orphan*/ * PUCHAR ;

/* Variables and functions */

VOID
LoadFont(
    PUCHAR Bitplane,
    PUCHAR FontBitfield)
{
    UINT32 i, j;

    for (i = 0; i < 256; i++)
    {
        for (j = 0; j < 8; j++)
        {
            *Bitplane = FontBitfield[i * 8 + j];
            Bitplane++;
        }

        // padding
        for (j = 8; j < 32; j++)
        {
            *Bitplane = 0;
            Bitplane++;
        }
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
          int _len_Bitplane0 = 1;
          int * Bitplane = (int *) malloc(_len_Bitplane0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Bitplane0; _i0++) {
            Bitplane[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_FontBitfield0 = 1;
          int * FontBitfield = (int *) malloc(_len_FontBitfield0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_FontBitfield0; _i0++) {
            FontBitfield[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = LoadFont(Bitplane,FontBitfield);
          printf("%d\n", benchRet); 
          free(Bitplane);
          free(FontBitfield);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_Bitplane0 = 65025;
          int * Bitplane = (int *) malloc(_len_Bitplane0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Bitplane0; _i0++) {
            Bitplane[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_FontBitfield0 = 65025;
          int * FontBitfield = (int *) malloc(_len_FontBitfield0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_FontBitfield0; _i0++) {
            FontBitfield[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = LoadFont(Bitplane,FontBitfield);
          printf("%d\n", benchRet); 
          free(Bitplane);
          free(FontBitfield);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_Bitplane0 = 100;
          int * Bitplane = (int *) malloc(_len_Bitplane0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Bitplane0; _i0++) {
            Bitplane[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_FontBitfield0 = 100;
          int * FontBitfield = (int *) malloc(_len_FontBitfield0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_FontBitfield0; _i0++) {
            FontBitfield[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = LoadFont(Bitplane,FontBitfield);
          printf("%d\n", benchRet); 
          free(Bitplane);
          free(FontBitfield);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
