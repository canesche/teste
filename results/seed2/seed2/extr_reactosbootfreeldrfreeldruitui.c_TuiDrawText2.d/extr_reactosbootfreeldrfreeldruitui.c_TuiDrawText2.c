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
typedef  size_t ULONG ;
typedef  scalar_t__ UCHAR ;
typedef  scalar_t__* PUCHAR ;
typedef  scalar_t__* PCSTR ;

/* Variables and functions */
 int TRUE ; 
 int /*<<< orphan*/  TextVideoBuffer ; 
 size_t UiScreenWidth ; 

VOID TuiDrawText2(ULONG X, ULONG Y, ULONG MaxNumChars, PCSTR Text, UCHAR Attr)
{
    PUCHAR    ScreenMemory = (PUCHAR)TextVideoBuffer;
    ULONG    i, j;

    // Draw the text
    for (i = X, j = 0; Text[j] && i < UiScreenWidth && (MaxNumChars > 0 ? j < MaxNumChars : TRUE); i++, j++)
    {
        ScreenMemory[((Y*2)*UiScreenWidth)+(i*2)] = (UCHAR)Text[j];
        ScreenMemory[((Y*2)*UiScreenWidth)+(i*2)+1] = Attr;
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
          unsigned long X = 100;
          unsigned long Y = 100;
          unsigned long MaxNumChars = 100;
          long Attr = 100;
          int _len_Text0 = 1;
          long * Text = (long *) malloc(_len_Text0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_Text0; _i0++) {
            Text[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = TuiDrawText2(X,Y,MaxNumChars,Text,Attr);
          printf("%d\n", benchRet); 
          free(Text);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long X = 255;
          unsigned long Y = 255;
          unsigned long MaxNumChars = 255;
          long Attr = 255;
          int _len_Text0 = 65025;
          long * Text = (long *) malloc(_len_Text0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_Text0; _i0++) {
            Text[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = TuiDrawText2(X,Y,MaxNumChars,Text,Attr);
          printf("%d\n", benchRet); 
          free(Text);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long X = 10;
          unsigned long Y = 10;
          unsigned long MaxNumChars = 10;
          long Attr = 10;
          int _len_Text0 = 100;
          long * Text = (long *) malloc(_len_Text0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_Text0; _i0++) {
            Text[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = TuiDrawText2(X,Y,MaxNumChars,Text,Attr);
          printf("%d\n", benchRet); 
          free(Text);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
