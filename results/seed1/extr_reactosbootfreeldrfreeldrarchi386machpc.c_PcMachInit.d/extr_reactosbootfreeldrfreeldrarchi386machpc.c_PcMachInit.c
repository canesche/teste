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
typedef  int /*<<< orphan*/  VOID ;
struct TYPE_2__ {int /*<<< orphan*/  HwIdle; int /*<<< orphan*/  HwDetect; int /*<<< orphan*/  InitializeBootDevices; int /*<<< orphan*/  GetTime; int /*<<< orphan*/  DiskGetCacheableBlockCount; int /*<<< orphan*/  DiskGetDriveGeometry; int /*<<< orphan*/  DiskReadLogicalSectors; int /*<<< orphan*/  DiskGetBootPath; int /*<<< orphan*/  GetMemoryMap; int /*<<< orphan*/  PrepareForReactOS; int /*<<< orphan*/  Beep; int /*<<< orphan*/  VideoSync; int /*<<< orphan*/  VideoGetPaletteColor; int /*<<< orphan*/  VideoSetPaletteColor; int /*<<< orphan*/  VideoIsPaletteFixed; int /*<<< orphan*/  VideoCopyOffScreenBufferToVRAM; int /*<<< orphan*/  VideoPutChar; int /*<<< orphan*/  VideoHideShowTextCursor; int /*<<< orphan*/  VideoSetTextCursorPosition; int /*<<< orphan*/  VideoGetBufferSize; int /*<<< orphan*/  VideoGetDisplaySize; int /*<<< orphan*/  VideoSetDisplayMode; int /*<<< orphan*/  VideoClearScreen; int /*<<< orphan*/  ConsGetCh; int /*<<< orphan*/  ConsKbHit; int /*<<< orphan*/  ConsPutChar; } ;

/* Variables and functions */
 TYPE_1__ MachVtbl ; 
 int /*<<< orphan*/  PcBeep ; 
 int /*<<< orphan*/  PcConsGetCh ; 
 int /*<<< orphan*/  PcConsKbHit ; 
 int /*<<< orphan*/  PcConsPutChar ; 
 int /*<<< orphan*/  PcDiskGetBootPath ; 
 int /*<<< orphan*/  PcDiskGetCacheableBlockCount ; 
 int /*<<< orphan*/  PcDiskGetDriveGeometry ; 
 int /*<<< orphan*/  PcDiskReadLogicalSectors ; 
 int /*<<< orphan*/  PcGetTime ; 
 int /*<<< orphan*/  PcHwDetect ; 
 int /*<<< orphan*/  PcHwIdle ; 
 int /*<<< orphan*/  PcInitializeBootDevices ; 
 int /*<<< orphan*/  PcMemGetMemoryMap ; 
 int /*<<< orphan*/  PcPrepareForReactOS ; 
 int /*<<< orphan*/  PcVideoClearScreen ; 
 int /*<<< orphan*/  PcVideoCopyOffScreenBufferToVRAM ; 
 int /*<<< orphan*/  PcVideoGetBufferSize ; 
 int /*<<< orphan*/  PcVideoGetDisplaySize ; 
 int /*<<< orphan*/  PcVideoGetPaletteColor ; 
 int /*<<< orphan*/  PcVideoHideShowTextCursor ; 
 int /*<<< orphan*/  PcVideoIsPaletteFixed ; 
 int /*<<< orphan*/  PcVideoPutChar ; 
 int /*<<< orphan*/  PcVideoSetDisplayMode ; 
 int /*<<< orphan*/  PcVideoSetPaletteColor ; 
 int /*<<< orphan*/  PcVideoSetTextCursorPosition ; 
 int /*<<< orphan*/  PcVideoSync ; 

VOID
PcMachInit(const char *CmdLine)
{
    /* Setup vtbl */
    MachVtbl.ConsPutChar = PcConsPutChar;
    MachVtbl.ConsKbHit = PcConsKbHit;
    MachVtbl.ConsGetCh = PcConsGetCh;
    MachVtbl.VideoClearScreen = PcVideoClearScreen;
    MachVtbl.VideoSetDisplayMode = PcVideoSetDisplayMode;
    MachVtbl.VideoGetDisplaySize = PcVideoGetDisplaySize;
    MachVtbl.VideoGetBufferSize = PcVideoGetBufferSize;
    MachVtbl.VideoSetTextCursorPosition = PcVideoSetTextCursorPosition;
    MachVtbl.VideoHideShowTextCursor = PcVideoHideShowTextCursor;
    MachVtbl.VideoPutChar = PcVideoPutChar;
    MachVtbl.VideoCopyOffScreenBufferToVRAM = PcVideoCopyOffScreenBufferToVRAM;
    MachVtbl.VideoIsPaletteFixed = PcVideoIsPaletteFixed;
    MachVtbl.VideoSetPaletteColor = PcVideoSetPaletteColor;
    MachVtbl.VideoGetPaletteColor = PcVideoGetPaletteColor;
    MachVtbl.VideoSync = PcVideoSync;
    MachVtbl.Beep = PcBeep;
    MachVtbl.PrepareForReactOS = PcPrepareForReactOS;
    MachVtbl.GetMemoryMap = PcMemGetMemoryMap;
    MachVtbl.DiskGetBootPath = PcDiskGetBootPath;
    MachVtbl.DiskReadLogicalSectors = PcDiskReadLogicalSectors;
    MachVtbl.DiskGetDriveGeometry = PcDiskGetDriveGeometry;
    MachVtbl.DiskGetCacheableBlockCount = PcDiskGetCacheableBlockCount;
    MachVtbl.GetTime = PcGetTime;
    MachVtbl.InitializeBootDevices = PcInitializeBootDevices;
    MachVtbl.HwDetect = PcHwDetect;
    MachVtbl.HwIdle = PcHwIdle;

    // DiskGetPartitionEntry = DiskGetMbrPartitionEntry; // Default
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
          int _len_CmdLine0 = 1;
          const char * CmdLine = (const char *) malloc(_len_CmdLine0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_CmdLine0; _i0++) {
            CmdLine[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = PcMachInit(CmdLine);
          printf("%d\n", benchRet); 
          free(CmdLine);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_CmdLine0 = 65025;
          const char * CmdLine = (const char *) malloc(_len_CmdLine0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_CmdLine0; _i0++) {
            CmdLine[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = PcMachInit(CmdLine);
          printf("%d\n", benchRet); 
          free(CmdLine);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_CmdLine0 = 100;
          const char * CmdLine = (const char *) malloc(_len_CmdLine0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_CmdLine0; _i0++) {
            CmdLine[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = PcMachInit(CmdLine);
          printf("%d\n", benchRet); 
          free(CmdLine);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
