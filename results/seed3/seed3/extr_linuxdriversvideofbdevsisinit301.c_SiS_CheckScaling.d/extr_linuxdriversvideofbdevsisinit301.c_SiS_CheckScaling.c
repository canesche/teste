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
struct SiS_Private {int SiS_VBInfo; int UsePanelScaler; int /*<<< orphan*/  SiS_LCDInfo; } ;

/* Variables and functions */
 int /*<<< orphan*/  DontExpandLCD ; 
 int SetCRT2ToLCD ; 

__attribute__((used)) static void
SiS_CheckScaling(struct SiS_Private *SiS_Pr, unsigned short resinfo,
			const unsigned char *nonscalingmodes)
{
   int i = 0;
   while(nonscalingmodes[i] != 0xff) {
      if(nonscalingmodes[i++] == resinfo) {
	 if((SiS_Pr->SiS_VBInfo & SetCRT2ToLCD) ||
	    (SiS_Pr->UsePanelScaler == -1)) {
	    SiS_Pr->SiS_LCDInfo |= DontExpandLCD;
	 }
	 break;
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
          unsigned short resinfo = 100;
          int _len_SiS_Pr0 = 1;
          struct SiS_Private * SiS_Pr = (struct SiS_Private *) malloc(_len_SiS_Pr0*sizeof(struct SiS_Private));
          for(int _i0 = 0; _i0 < _len_SiS_Pr0; _i0++) {
            SiS_Pr[_i0].SiS_VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].UsePanelScaler = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_LCDInfo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nonscalingmodes0 = 1;
          const unsigned char * nonscalingmodes = (const unsigned char *) malloc(_len_nonscalingmodes0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_nonscalingmodes0; _i0++) {
            nonscalingmodes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SiS_CheckScaling(SiS_Pr,resinfo,nonscalingmodes);
          free(SiS_Pr);
          free(nonscalingmodes);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned short resinfo = 255;
          int _len_SiS_Pr0 = 65025;
          struct SiS_Private * SiS_Pr = (struct SiS_Private *) malloc(_len_SiS_Pr0*sizeof(struct SiS_Private));
          for(int _i0 = 0; _i0 < _len_SiS_Pr0; _i0++) {
            SiS_Pr[_i0].SiS_VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].UsePanelScaler = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_LCDInfo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nonscalingmodes0 = 65025;
          const unsigned char * nonscalingmodes = (const unsigned char *) malloc(_len_nonscalingmodes0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_nonscalingmodes0; _i0++) {
            nonscalingmodes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SiS_CheckScaling(SiS_Pr,resinfo,nonscalingmodes);
          free(SiS_Pr);
          free(nonscalingmodes);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned short resinfo = 10;
          int _len_SiS_Pr0 = 100;
          struct SiS_Private * SiS_Pr = (struct SiS_Private *) malloc(_len_SiS_Pr0*sizeof(struct SiS_Private));
          for(int _i0 = 0; _i0 < _len_SiS_Pr0; _i0++) {
            SiS_Pr[_i0].SiS_VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].UsePanelScaler = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_LCDInfo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nonscalingmodes0 = 100;
          const unsigned char * nonscalingmodes = (const unsigned char *) malloc(_len_nonscalingmodes0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_nonscalingmodes0; _i0++) {
            nonscalingmodes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SiS_CheckScaling(SiS_Pr,resinfo,nonscalingmodes);
          free(SiS_Pr);
          free(nonscalingmodes);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
