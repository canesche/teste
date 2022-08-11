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
struct nubus_rsrc {int dr_sw; int const dr_hw; } ;
typedef  enum mac8390_type { ____Placeholder_mac8390_type } mac8390_type ;

/* Variables and functions */
 int MAC8390_APPLE ; 
 int MAC8390_ASANTE ; 
 int MAC8390_CABLETRON ; 
 int MAC8390_DAYNA ; 
 int MAC8390_FARALLON ; 
 int MAC8390_INTERLAN ; 
 int MAC8390_KINETICS ; 
 int MAC8390_NONE ; 
#define  NUBUS_DRHW_APPLE_SONIC_LC 142 
#define  NUBUS_DRHW_APPLE_SONIC_NB 141 
#define  NUBUS_DRHW_ASANTE_LC 140 
#define  NUBUS_DRHW_CABLETRON 139 
#define  NUBUS_DRHW_INTERLAN 138 
 int const NUBUS_DRHW_SMC9194 ; 
#define  NUBUS_DRHW_SONNET 137 
#define  NUBUS_DRSW_3COM 136 
#define  NUBUS_DRSW_APPLE 135 
#define  NUBUS_DRSW_ASANTE 134 
#define  NUBUS_DRSW_DAYNA 133 
#define  NUBUS_DRSW_DAYNA2 132 
#define  NUBUS_DRSW_DAYNA_LC 131 
#define  NUBUS_DRSW_FARALLON 130 
#define  NUBUS_DRSW_KINETICS 129 
#define  NUBUS_DRSW_TECHWORKS 128 

__attribute__((used)) static enum mac8390_type mac8390_ident(struct nubus_rsrc *fres)
{
	switch (fres->dr_sw) {
	case NUBUS_DRSW_3COM:
		switch (fres->dr_hw) {
		case NUBUS_DRHW_APPLE_SONIC_NB:
		case NUBUS_DRHW_APPLE_SONIC_LC:
		case NUBUS_DRHW_SONNET:
			return MAC8390_NONE;
		default:
			return MAC8390_APPLE;
		}
		break;

	case NUBUS_DRSW_APPLE:
		switch (fres->dr_hw) {
		case NUBUS_DRHW_ASANTE_LC:
			return MAC8390_NONE;
		case NUBUS_DRHW_CABLETRON:
			return MAC8390_CABLETRON;
		default:
			return MAC8390_APPLE;
		}
		break;

	case NUBUS_DRSW_ASANTE:
		return MAC8390_ASANTE;
		break;

	case NUBUS_DRSW_TECHWORKS:
	case NUBUS_DRSW_DAYNA2:
	case NUBUS_DRSW_DAYNA_LC:
		if (fres->dr_hw == NUBUS_DRHW_CABLETRON)
			return MAC8390_CABLETRON;
		else
			return MAC8390_APPLE;
		break;

	case NUBUS_DRSW_FARALLON:
		return MAC8390_FARALLON;
		break;

	case NUBUS_DRSW_KINETICS:
		switch (fres->dr_hw) {
		case NUBUS_DRHW_INTERLAN:
			return MAC8390_INTERLAN;
		default:
			return MAC8390_KINETICS;
		}
		break;

	case NUBUS_DRSW_DAYNA:
		/*
		 * These correspond to Dayna Sonic cards
		 * which use the macsonic driver
		 */
		if (fres->dr_hw == NUBUS_DRHW_SMC9194 ||
		    fres->dr_hw == NUBUS_DRHW_INTERLAN)
			return MAC8390_NONE;
		else
			return MAC8390_DAYNA;
		break;
	}
	return MAC8390_NONE;
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
          int _len_fres0 = 1;
          struct nubus_rsrc * fres = (struct nubus_rsrc *) malloc(_len_fres0*sizeof(struct nubus_rsrc));
          for(int _i0 = 0; _i0 < _len_fres0; _i0++) {
            fres[_i0].dr_sw = ((-2 * (next_i()%2)) + 1) * next_i();
        fres[_i0].dr_hw = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum mac8390_type benchRet = mac8390_ident(fres);
          free(fres);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fres0 = 65025;
          struct nubus_rsrc * fres = (struct nubus_rsrc *) malloc(_len_fres0*sizeof(struct nubus_rsrc));
          for(int _i0 = 0; _i0 < _len_fres0; _i0++) {
            fres[_i0].dr_sw = ((-2 * (next_i()%2)) + 1) * next_i();
        fres[_i0].dr_hw = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum mac8390_type benchRet = mac8390_ident(fres);
          free(fres);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fres0 = 100;
          struct nubus_rsrc * fres = (struct nubus_rsrc *) malloc(_len_fres0*sizeof(struct nubus_rsrc));
          for(int _i0 = 0; _i0 < _len_fres0; _i0++) {
            fres[_i0].dr_sw = ((-2 * (next_i()%2)) + 1) * next_i();
        fres[_i0].dr_hw = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum mac8390_type benchRet = mac8390_ident(fres);
          free(fres);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
