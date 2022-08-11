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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {char* mem; scalar_t__ mempos; scalar_t__ memsize; } ;
typedef  char* LPTSTR ;
typedef  char* LPSTR ;
typedef  int INT ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  TRUE ; 
 TYPE_1__* bc ; 

BOOL BatchGetString(LPTSTR lpBuffer, INT nBufferLength)
{
    LPSTR lpString;
    INT len = 0;
#ifdef _UNICODE
    lpString = cmd_alloc(nBufferLength);
    if (!lpString)
    {
        WARN("Cannot allocate memory for lpString\n");
        error_out_of_memory();
        return FALSE;
    }
#else
    lpString = lpBuffer;
#endif
    /* read all chars from memory until a '\n' is encountered */
    if (bc->mem)
    {
        for (; (bc->mempos < bc->memsize  &&  len < (nBufferLength-1)); len++)
        { 
            lpString[len] = bc->mem[bc->mempos++];
            if (lpString[len] == '\n' )
            {
                len++;
                break;
            }
        }
    }

    if (!len)
    {
#ifdef _UNICODE
        cmd_free(lpString);
#endif
        return FALSE;
    }

    lpString[len++] = '\0';
#ifdef _UNICODE
    MultiByteToWideChar(OutputCodePage, 0, lpString, -1, lpBuffer, len);
    cmd_free(lpString);
#endif
    return TRUE;
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
          int nBufferLength = 100;
          int _len_lpBuffer0 = 1;
          char * lpBuffer = (char *) malloc(_len_lpBuffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_lpBuffer0; _i0++) {
            lpBuffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = BatchGetString(lpBuffer,nBufferLength);
          printf("%d\n", benchRet); 
          free(lpBuffer);
        
        break;
    }
    // big-arr
    case 1:
    {
          int nBufferLength = 255;
          int _len_lpBuffer0 = 65025;
          char * lpBuffer = (char *) malloc(_len_lpBuffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_lpBuffer0; _i0++) {
            lpBuffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = BatchGetString(lpBuffer,nBufferLength);
          printf("%d\n", benchRet); 
          free(lpBuffer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int nBufferLength = 10;
          int _len_lpBuffer0 = 100;
          char * lpBuffer = (char *) malloc(_len_lpBuffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_lpBuffer0; _i0++) {
            lpBuffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = BatchGetString(lpBuffer,nBufferLength);
          printf("%d\n", benchRet); 
          free(lpBuffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
