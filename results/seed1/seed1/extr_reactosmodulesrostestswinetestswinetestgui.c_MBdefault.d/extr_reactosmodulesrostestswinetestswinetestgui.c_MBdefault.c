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

/* Variables and functions */
#define  IDABORT 134 
#define  IDCANCEL 133 
#define  IDIGNORE 132 
#define  IDNO 131 
#define  IDOK 130 
#define  IDRETRY 129 
#define  IDYES 128 
 int MB_DEFBUTTON2 ; 
 int MB_DEFMASK ; 
 int MB_TYPEMASK ; 

__attribute__((used)) static int
MBdefault (int uType)
{
    static const int matrix[][4] = {{IDOK,    0,        0,        0},
                                    {IDOK,    IDCANCEL, 0,        0},
                                    {IDABORT, IDRETRY,  IDIGNORE, 0},
                                    {IDYES,   IDNO,     IDCANCEL, 0},
                                    {IDYES,   IDNO,     0,        0},
                                    {IDRETRY, IDCANCEL, 0,        0}};
    int type = uType & MB_TYPEMASK;
    int def  = (uType & MB_DEFMASK) / MB_DEFBUTTON2;

    return matrix[type][def];
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
          int uType = 100;
          int benchRet = MBdefault(uType);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int uType = 255;
          int benchRet = MBdefault(uType);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int uType = 10;
          int benchRet = MBdefault(uType);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
