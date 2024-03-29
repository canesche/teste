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
typedef  int DWORD ;
typedef  char BYTE ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  TRUE ; 

__attribute__((used)) static BOOL text_html_filter(const BYTE *b, DWORD size)
{
    if(size < 6)
        return FALSE;

    if((b[0] == '<'
                && (b[1] == 'h' || b[1] == 'H')
                && (b[2] == 't' || b[2] == 'T')
                && (b[3] == 'm' || b[3] == 'M')
                && (b[4] == 'l' || b[4] == 'L'))
            || (b[0] == '<'
                && (b[1] == 'h' || b[1] == 'H')
                && (b[2] == 'e' || b[2] == 'E')
                && (b[3] == 'a' || b[3] == 'A')
                && (b[4] == 'd' || b[4] == 'D'))
            || (b[0] == '<'
                && (b[1] == 'b' || b[1] == 'B')
                && (b[2] == 'o' || b[2] == 'O')
                && (b[3] == 'd' || b[3] == 'D')
                && (b[4] == 'y' || b[4] == 'Y'))) return TRUE;

    return FALSE;
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
          int size = 100;
          int _len_b0 = 1;
          const char * b = (const char *) malloc(_len_b0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = text_html_filter(b,size);
          printf("%d\n", benchRet); 
          free(b);
        
        break;
    }
    // big-arr
    case 1:
    {
          int size = 255;
          int _len_b0 = 65025;
          const char * b = (const char *) malloc(_len_b0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = text_html_filter(b,size);
          printf("%d\n", benchRet); 
          free(b);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int size = 10;
          int _len_b0 = 100;
          const char * b = (const char *) malloc(_len_b0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = text_html_filter(b,size);
          printf("%d\n", benchRet); 
          free(b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
