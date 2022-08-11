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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  VOID ;
typedef  void* USHORT ;
struct TYPE_6__ {int /*<<< orphan*/  Eflags; int /*<<< orphan*/  Cs; int /*<<< orphan*/  Eip; int /*<<< orphan*/  Edi; int /*<<< orphan*/  Esi; int /*<<< orphan*/  Ebp; int /*<<< orphan*/  Esp; int /*<<< orphan*/  Ebx; int /*<<< orphan*/  Edx; int /*<<< orphan*/  Ecx; int /*<<< orphan*/  Eax; scalar_t__ Ds; scalar_t__ Es; scalar_t__ Fs; scalar_t__ Gs; } ;
struct TYPE_5__ {int /*<<< orphan*/  EFlags; int /*<<< orphan*/  SegCs; int /*<<< orphan*/  Eip; int /*<<< orphan*/  Edi; int /*<<< orphan*/  Esi; int /*<<< orphan*/  Ebp; int /*<<< orphan*/  HardwareEsp; int /*<<< orphan*/  Ebx; int /*<<< orphan*/  Edx; int /*<<< orphan*/  Ecx; int /*<<< orphan*/  Eax; void* SegDs; void* SegEs; void* SegFs; void* SegGs; } ;
typedef  TYPE_1__* PKTRAP_FRAME ;
typedef  TYPE_2__* PKIRQ_TRAPFRAME ;

/* Variables and functions */

VOID
MpsIRQTrapFrameToTrapFrame(PKIRQ_TRAPFRAME IrqTrapFrame,
			   PKTRAP_FRAME TrapFrame)
{
#ifdef _M_AMD64
    UNIMPLEMENTED;
#else
   TrapFrame->SegGs     = (USHORT)IrqTrapFrame->Gs;
   TrapFrame->SegFs     = (USHORT)IrqTrapFrame->Fs;
   TrapFrame->SegEs     = (USHORT)IrqTrapFrame->Es;
   TrapFrame->SegDs     = (USHORT)IrqTrapFrame->Ds;
   TrapFrame->Eax    = IrqTrapFrame->Eax;
   TrapFrame->Ecx    = IrqTrapFrame->Ecx;
   TrapFrame->Edx    = IrqTrapFrame->Edx;
   TrapFrame->Ebx    = IrqTrapFrame->Ebx;
   TrapFrame->HardwareEsp    = IrqTrapFrame->Esp;
   TrapFrame->Ebp    = IrqTrapFrame->Ebp;
   TrapFrame->Esi    = IrqTrapFrame->Esi;
   TrapFrame->Edi    = IrqTrapFrame->Edi;
   TrapFrame->Eip    = IrqTrapFrame->Eip;
   TrapFrame->SegCs     = IrqTrapFrame->Cs;
   TrapFrame->EFlags = IrqTrapFrame->Eflags;
#endif
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
          int _len_IrqTrapFrame0 = 1;
          struct TYPE_6__ * IrqTrapFrame = (struct TYPE_6__ *) malloc(_len_IrqTrapFrame0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_IrqTrapFrame0; _i0++) {
            IrqTrapFrame[_i0].Eflags = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Cs = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Eip = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Edi = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Esi = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Ebp = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Esp = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Ebx = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Edx = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Ecx = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Eax = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Ds = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Es = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Fs = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Gs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_TrapFrame0 = 1;
          struct TYPE_5__ * TrapFrame = (struct TYPE_5__ *) malloc(_len_TrapFrame0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_TrapFrame0; _i0++) {
            TrapFrame[_i0].EFlags = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].SegCs = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].Eip = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].Edi = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].Esi = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].Ebp = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].HardwareEsp = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].Ebx = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].Edx = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].Ecx = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].Eax = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = MpsIRQTrapFrameToTrapFrame(IrqTrapFrame,TrapFrame);
          printf("%d\n", benchRet); 
          free(IrqTrapFrame);
          free(TrapFrame);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_IrqTrapFrame0 = 65025;
          struct TYPE_6__ * IrqTrapFrame = (struct TYPE_6__ *) malloc(_len_IrqTrapFrame0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_IrqTrapFrame0; _i0++) {
            IrqTrapFrame[_i0].Eflags = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Cs = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Eip = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Edi = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Esi = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Ebp = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Esp = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Ebx = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Edx = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Ecx = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Eax = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Ds = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Es = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Fs = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Gs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_TrapFrame0 = 65025;
          struct TYPE_5__ * TrapFrame = (struct TYPE_5__ *) malloc(_len_TrapFrame0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_TrapFrame0; _i0++) {
            TrapFrame[_i0].EFlags = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].SegCs = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].Eip = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].Edi = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].Esi = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].Ebp = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].HardwareEsp = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].Ebx = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].Edx = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].Ecx = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].Eax = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = MpsIRQTrapFrameToTrapFrame(IrqTrapFrame,TrapFrame);
          printf("%d\n", benchRet); 
          free(IrqTrapFrame);
          free(TrapFrame);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_IrqTrapFrame0 = 100;
          struct TYPE_6__ * IrqTrapFrame = (struct TYPE_6__ *) malloc(_len_IrqTrapFrame0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_IrqTrapFrame0; _i0++) {
            IrqTrapFrame[_i0].Eflags = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Cs = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Eip = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Edi = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Esi = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Ebp = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Esp = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Ebx = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Edx = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Ecx = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Eax = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Ds = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Es = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Fs = ((-2 * (next_i()%2)) + 1) * next_i();
        IrqTrapFrame[_i0].Gs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_TrapFrame0 = 100;
          struct TYPE_5__ * TrapFrame = (struct TYPE_5__ *) malloc(_len_TrapFrame0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_TrapFrame0; _i0++) {
            TrapFrame[_i0].EFlags = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].SegCs = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].Eip = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].Edi = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].Esi = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].Ebp = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].HardwareEsp = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].Ebx = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].Edx = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].Ecx = ((-2 * (next_i()%2)) + 1) * next_i();
        TrapFrame[_i0].Eax = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = MpsIRQTrapFrameToTrapFrame(IrqTrapFrame,TrapFrame);
          printf("%d\n", benchRet); 
          free(IrqTrapFrame);
          free(TrapFrame);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
