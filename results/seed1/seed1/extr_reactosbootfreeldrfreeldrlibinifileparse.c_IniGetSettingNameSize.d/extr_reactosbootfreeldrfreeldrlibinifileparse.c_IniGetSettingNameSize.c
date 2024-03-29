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
typedef  size_t ULONG ;
typedef  char* PCHAR ;

/* Variables and functions */

ULONG IniGetSettingNameSize(PCHAR SettingNameLine, ULONG LineLength)
{
    ULONG        Idx;
    ULONG        NameSize;

    // Skip whitespace
    for (Idx=0; Idx<LineLength; Idx++)
    {
        if ((SettingNameLine[Idx] == ' ') ||
            (SettingNameLine[Idx] == '\t'))
        {
            continue;
        }
        else
        {
            break;
        }
    }

    // Count the characters up until the '=' equals sign or EOL
    for (NameSize=0; Idx<LineLength; Idx++)
    {
        if ((SettingNameLine[Idx] == '=') ||
            (SettingNameLine[Idx] == '\0'))
        {
            break;
        }

        // Increment the count
        NameSize++;
    }

    // Add one for the NULL-terminator
    NameSize++;

    return NameSize;
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
          unsigned long LineLength = 100;
          int _len_SettingNameLine0 = 1;
          char * SettingNameLine = (char *) malloc(_len_SettingNameLine0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_SettingNameLine0; _i0++) {
            SettingNameLine[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = IniGetSettingNameSize(SettingNameLine,LineLength);
          printf("%lu\n", benchRet); 
          free(SettingNameLine);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long LineLength = 255;
          int _len_SettingNameLine0 = 65025;
          char * SettingNameLine = (char *) malloc(_len_SettingNameLine0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_SettingNameLine0; _i0++) {
            SettingNameLine[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = IniGetSettingNameSize(SettingNameLine,LineLength);
          printf("%lu\n", benchRet); 
          free(SettingNameLine);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long LineLength = 10;
          int _len_SettingNameLine0 = 100;
          char * SettingNameLine = (char *) malloc(_len_SettingNameLine0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_SettingNameLine0; _i0++) {
            SettingNameLine[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = IniGetSettingNameSize(SettingNameLine,LineLength);
          printf("%lu\n", benchRet); 
          free(SettingNameLine);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
