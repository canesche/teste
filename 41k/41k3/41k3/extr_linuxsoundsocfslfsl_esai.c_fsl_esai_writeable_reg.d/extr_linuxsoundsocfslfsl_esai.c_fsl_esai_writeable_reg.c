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
struct device {int dummy; } ;

/* Variables and functions */
#define  REG_ESAI_ECR 149 
#define  REG_ESAI_ETDR 148 
#define  REG_ESAI_PCRC 147 
#define  REG_ESAI_PRRC 146 
#define  REG_ESAI_RCCR 145 
#define  REG_ESAI_RCR 144 
#define  REG_ESAI_RFCR 143 
#define  REG_ESAI_RSMA 142 
#define  REG_ESAI_RSMB 141 
#define  REG_ESAI_SAICR 140 
#define  REG_ESAI_TCCR 139 
#define  REG_ESAI_TCR 138 
#define  REG_ESAI_TFCR 137 
#define  REG_ESAI_TSMA 136 
#define  REG_ESAI_TSMB 135 
#define  REG_ESAI_TSR 134 
#define  REG_ESAI_TX0 133 
#define  REG_ESAI_TX1 132 
#define  REG_ESAI_TX2 131 
#define  REG_ESAI_TX3 130 
#define  REG_ESAI_TX4 129 
#define  REG_ESAI_TX5 128 

__attribute__((used)) static bool fsl_esai_writeable_reg(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case REG_ESAI_ETDR:
	case REG_ESAI_ECR:
	case REG_ESAI_TFCR:
	case REG_ESAI_RFCR:
	case REG_ESAI_TX0:
	case REG_ESAI_TX1:
	case REG_ESAI_TX2:
	case REG_ESAI_TX3:
	case REG_ESAI_TX4:
	case REG_ESAI_TX5:
	case REG_ESAI_TSR:
	case REG_ESAI_SAICR:
	case REG_ESAI_TCR:
	case REG_ESAI_TCCR:
	case REG_ESAI_RCR:
	case REG_ESAI_RCCR:
	case REG_ESAI_TSMA:
	case REG_ESAI_TSMB:
	case REG_ESAI_RSMA:
	case REG_ESAI_RSMB:
	case REG_ESAI_PRRC:
	case REG_ESAI_PCRC:
		return true;
	default:
		return false;
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
          unsigned int reg = 100;
          int _len_dev0 = 1;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fsl_esai_writeable_reg(dev,reg);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int reg = 255;
          int _len_dev0 = 65025;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fsl_esai_writeable_reg(dev,reg);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int reg = 10;
          int _len_dev0 = 100;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fsl_esai_writeable_reg(dev,reg);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
