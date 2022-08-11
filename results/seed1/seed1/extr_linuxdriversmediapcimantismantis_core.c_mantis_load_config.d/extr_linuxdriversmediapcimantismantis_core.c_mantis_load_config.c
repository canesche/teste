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
struct mantis_pci {int subsystem_device; int /*<<< orphan*/ * hwconfig; } ;

/* Variables and functions */
#define  CINERGY_C 136 
#define  MANTIS_VP_1033_DVB_S 135 
#define  MANTIS_VP_1034_DVB_S 134 
#define  MANTIS_VP_1041_DVB_S2 133 
#define  MANTIS_VP_2033_DVB_C 132 
#define  MANTIS_VP_2040_DVB_C 131 
#define  MANTIS_VP_3030_DVB_T 130 
#define  TECHNISAT_CABLESTAR_HD2 129 
#define  TECHNISAT_SKYSTAR_HD2 128 
 int /*<<< orphan*/  unknown_device ; 
 int /*<<< orphan*/  vp1033_mantis_config ; 
 int /*<<< orphan*/  vp1034_mantis_config ; 
 int /*<<< orphan*/  vp1041_mantis_config ; 
 int /*<<< orphan*/  vp2033_mantis_config ; 
 int /*<<< orphan*/  vp2040_mantis_config ; 
 int /*<<< orphan*/  vp3030_mantis_config ; 

__attribute__((used)) static void mantis_load_config(struct mantis_pci *mantis)
{
	switch (mantis->subsystem_device) {
	case MANTIS_VP_1033_DVB_S:	/* VP-1033 */
		mantis->hwconfig = &vp1033_mantis_config;
		break;
	case MANTIS_VP_1034_DVB_S:	/* VP-1034 */
		mantis->hwconfig = &vp1034_mantis_config;
		break;
	case MANTIS_VP_1041_DVB_S2:	/* VP-1041 */
	case TECHNISAT_SKYSTAR_HD2:
		mantis->hwconfig = &vp1041_mantis_config;
		break;
	case MANTIS_VP_2033_DVB_C:	/* VP-2033 */
		mantis->hwconfig = &vp2033_mantis_config;
		break;
	case MANTIS_VP_2040_DVB_C:	/* VP-2040 */
	case CINERGY_C:	/* VP-2040 clone */
	case TECHNISAT_CABLESTAR_HD2:
		mantis->hwconfig = &vp2040_mantis_config;
		break;
	case MANTIS_VP_3030_DVB_T:	/* VP-3030 */
		mantis->hwconfig = &vp3030_mantis_config;
		break;
	default:
		mantis->hwconfig = &unknown_device;
		break;
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
          int _len_mantis0 = 1;
          struct mantis_pci * mantis = (struct mantis_pci *) malloc(_len_mantis0*sizeof(struct mantis_pci));
          for(int _i0 = 0; _i0 < _len_mantis0; _i0++) {
            mantis[_i0].subsystem_device = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mantis__i0__hwconfig0 = 1;
          mantis[_i0].hwconfig = (int *) malloc(_len_mantis__i0__hwconfig0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mantis__i0__hwconfig0; _j0++) {
            mantis[_i0].hwconfig[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mantis_load_config(mantis);
          for(int _aux = 0; _aux < _len_mantis0; _aux++) {
          free(mantis[_aux].hwconfig);
          }
          free(mantis);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mantis0 = 65025;
          struct mantis_pci * mantis = (struct mantis_pci *) malloc(_len_mantis0*sizeof(struct mantis_pci));
          for(int _i0 = 0; _i0 < _len_mantis0; _i0++) {
            mantis[_i0].subsystem_device = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mantis__i0__hwconfig0 = 1;
          mantis[_i0].hwconfig = (int *) malloc(_len_mantis__i0__hwconfig0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mantis__i0__hwconfig0; _j0++) {
            mantis[_i0].hwconfig[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mantis_load_config(mantis);
          for(int _aux = 0; _aux < _len_mantis0; _aux++) {
          free(mantis[_aux].hwconfig);
          }
          free(mantis);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mantis0 = 100;
          struct mantis_pci * mantis = (struct mantis_pci *) malloc(_len_mantis0*sizeof(struct mantis_pci));
          for(int _i0 = 0; _i0 < _len_mantis0; _i0++) {
            mantis[_i0].subsystem_device = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mantis__i0__hwconfig0 = 1;
          mantis[_i0].hwconfig = (int *) malloc(_len_mantis__i0__hwconfig0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mantis__i0__hwconfig0; _j0++) {
            mantis[_i0].hwconfig[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mantis_load_config(mantis);
          for(int _aux = 0; _aux < _len_mantis0; _aux++) {
          free(mantis[_aux].hwconfig);
          }
          free(mantis);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
