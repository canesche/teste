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
typedef  scalar_t__* PLONG ;
typedef  int DWORD ;

/* Variables and functions */
 scalar_t__ ERROR_DATATYPE_MISMATCH ; 
 scalar_t__ ERROR_MORE_DATA ; 
 scalar_t__ ERROR_SUCCESS ; 
 scalar_t__ ERROR_UNSUPPORTED_TYPE ; 
#define  REG_BINARY 134 
#define  REG_DWORD 133 
#define  REG_EXPAND_SZ 132 
#define  REG_MULTI_SZ 131 
#define  REG_NONE 130 
#define  REG_QWORD 129 
#define  REG_SZ 128 
 int RRF_RT_DWORD ; 
 int RRF_RT_QWORD ; 
 int RRF_RT_REG_BINARY ; 
 int RRF_RT_REG_DWORD ; 
 int RRF_RT_REG_EXPAND_SZ ; 
 int RRF_RT_REG_MULTI_SZ ; 
 int RRF_RT_REG_NONE ; 
 int RRF_RT_REG_QWORD ; 
 int RRF_RT_REG_SZ ; 

__attribute__((used)) static VOID
RegpApplyRestrictions( DWORD dwFlags, DWORD dwType, DWORD cbData,
                       PLONG ret )
{
    /* Check if the type is restricted by the passed flags */
    if (*ret == ERROR_SUCCESS || *ret == ERROR_MORE_DATA)
    {
        DWORD dwMask = 0;

        switch (dwType)
        {
        case REG_NONE: dwMask = RRF_RT_REG_NONE; break;
        case REG_SZ: dwMask = RRF_RT_REG_SZ; break;
        case REG_EXPAND_SZ: dwMask = RRF_RT_REG_EXPAND_SZ; break;
        case REG_MULTI_SZ: dwMask = RRF_RT_REG_MULTI_SZ; break;
        case REG_BINARY: dwMask = RRF_RT_REG_BINARY; break;
        case REG_DWORD: dwMask = RRF_RT_REG_DWORD; break;
        case REG_QWORD: dwMask = RRF_RT_REG_QWORD; break;
        }

        if (dwFlags & dwMask)
        {
            /* Type is not restricted, check for size mismatch */
            if (dwType == REG_BINARY)
            {
                DWORD cbExpect = 0;

                if ((dwFlags & RRF_RT_DWORD) == RRF_RT_DWORD)
                    cbExpect = 4;
                else if ((dwFlags & RRF_RT_QWORD) == RRF_RT_QWORD)
                    cbExpect = 8;

                if (cbExpect && cbData != cbExpect)
                    *ret = ERROR_DATATYPE_MISMATCH;
            }
        }
        else *ret = ERROR_UNSUPPORTED_TYPE;
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
          int dwFlags = 100;
          int dwType = 100;
          int cbData = 100;
          int _len_ret0 = 1;
          long * ret = (long *) malloc(_len_ret0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_ret0; _i0++) {
            ret[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = RegpApplyRestrictions(dwFlags,dwType,cbData,ret);
          printf("%d\n", benchRet); 
          free(ret);
        
        break;
    }
    // big-arr
    case 1:
    {
          int dwFlags = 255;
          int dwType = 255;
          int cbData = 255;
          int _len_ret0 = 65025;
          long * ret = (long *) malloc(_len_ret0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_ret0; _i0++) {
            ret[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = RegpApplyRestrictions(dwFlags,dwType,cbData,ret);
          printf("%d\n", benchRet); 
          free(ret);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int dwFlags = 10;
          int dwType = 10;
          int cbData = 10;
          int _len_ret0 = 100;
          long * ret = (long *) malloc(_len_ret0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_ret0; _i0++) {
            ret[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = RegpApplyRestrictions(dwFlags,dwType,cbData,ret);
          printf("%d\n", benchRet); 
          free(ret);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
