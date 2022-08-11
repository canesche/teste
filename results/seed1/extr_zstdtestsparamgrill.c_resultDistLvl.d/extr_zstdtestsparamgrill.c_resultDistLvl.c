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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int cSpeed; double cSize; } ;
typedef  TYPE_1__ BMK_benchResult_t ;

/* Variables and functions */
 double g_ratioMultiplier ; 

__attribute__((used)) static double
resultDistLvl(const BMK_benchResult_t result1, const BMK_benchResult_t lvlRes)
{
    double normalizedCSpeedGain1 = (result1.cSpeed / lvlRes.cSpeed) - 1;
    double normalizedRatioGain1 = ((double)lvlRes.cSize / result1.cSize) - 1;
    if(normalizedRatioGain1 < 0 || normalizedCSpeedGain1 < 0) {
        return 0.0;
    }
    return normalizedRatioGain1 * g_ratioMultiplier + normalizedCSpeedGain1;
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
          const struct TYPE_4__ result1;
          const struct TYPE_4__ lvlRes;
          double benchRet = resultDistLvl(result1,lvlRes);
          printf("%lf\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
