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
typedef  enum cpu_addr { ____Placeholder_cpu_addr } cpu_addr ;
struct TYPE_3__ {int Mode; scalar_t__ Segment; } ;
typedef  int /*<<< orphan*/  HANDLE ;
typedef  int /*<<< orphan*/  CONTEXT ;
typedef  int /*<<< orphan*/  BOOL ;
typedef  TYPE_1__ ADDRESS64 ;

/* Variables and functions */
 int AddrModeFlat ; 
 int /*<<< orphan*/  FALSE ; 

__attribute__((used)) static BOOL arm_get_addr(HANDLE hThread, const CONTEXT* ctx,
                         enum cpu_addr ca, ADDRESS64* addr)
{
    addr->Mode    = AddrModeFlat;
    addr->Segment = 0; /* don't need segment */
    switch (ca)
    {
#ifdef __arm__
    case cpu_addr_pc:    addr->Offset = ctx->Pc; return TRUE;
    case cpu_addr_stack: addr->Offset = ctx->Sp; return TRUE;
#ifdef __REACTOS__
    case cpu_addr_frame: addr->Offset = ctx->R11; return TRUE;
#else
    case cpu_addr_frame: addr->Offset = ctx->Fp; return TRUE;
#endif
#endif
    default: addr->Mode = -1;
        return FALSE;
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
          int hThread = 100;
          enum cpu_addr ca = 0;
          int _len_ctx0 = 1;
          const int * ctx = (const int *) malloc(_len_ctx0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_addr0 = 1;
          struct TYPE_3__ * addr = (struct TYPE_3__ *) malloc(_len_addr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0].Mode = ((-2 * (next_i()%2)) + 1) * next_i();
        addr[_i0].Segment = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = arm_get_addr(hThread,ctx,ca,addr);
          printf("%d\n", benchRet); 
          free(ctx);
          free(addr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int hThread = 255;
          enum cpu_addr ca = 0;
          int _len_ctx0 = 65025;
          const int * ctx = (const int *) malloc(_len_ctx0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_addr0 = 65025;
          struct TYPE_3__ * addr = (struct TYPE_3__ *) malloc(_len_addr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0].Mode = ((-2 * (next_i()%2)) + 1) * next_i();
        addr[_i0].Segment = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = arm_get_addr(hThread,ctx,ca,addr);
          printf("%d\n", benchRet); 
          free(ctx);
          free(addr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int hThread = 10;
          enum cpu_addr ca = 0;
          int _len_ctx0 = 100;
          const int * ctx = (const int *) malloc(_len_ctx0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_addr0 = 100;
          struct TYPE_3__ * addr = (struct TYPE_3__ *) malloc(_len_addr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0].Mode = ((-2 * (next_i()%2)) + 1) * next_i();
        addr[_i0].Segment = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = arm_get_addr(hThread,ctx,ca,addr);
          printf("%d\n", benchRet); 
          free(ctx);
          free(addr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
