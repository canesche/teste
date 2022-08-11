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
       3            linked\n\
       4            dlinked\n\
       5            bintree\n\
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
struct cxd2880_tnrdmd_lna_thrs_tbl_cable {int dummy; } ;
struct cxd2880_tnrdmd_lna_thrs_tbl_air {int dummy; } ;
struct cxd2880_tnrdmd {struct cxd2880_tnrdmd_lna_thrs_tbl_cable* lna_thrs_tbl_cable; struct cxd2880_tnrdmd_lna_thrs_tbl_air* lna_thrs_tbl_air; } ;

/* Variables and functions */
 int EINVAL ; 

int cxd2880_tnrdmd_set_lna_thrs(struct cxd2880_tnrdmd *tnr_dmd,
				struct cxd2880_tnrdmd_lna_thrs_tbl_air
				*tbl_air,
				struct cxd2880_tnrdmd_lna_thrs_tbl_cable
				*tbl_cable)
{
	if (!tnr_dmd)
		return -EINVAL;

	tnr_dmd->lna_thrs_tbl_air = tbl_air;
	tnr_dmd->lna_thrs_tbl_cable = tbl_cable;

	return 0;
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
          int _len_tnr_dmd0 = 1;
          struct cxd2880_tnrdmd * tnr_dmd = (struct cxd2880_tnrdmd *) malloc(_len_tnr_dmd0*sizeof(struct cxd2880_tnrdmd));
          for(int _i0 = 0; _i0 < _len_tnr_dmd0; _i0++) {
              int _len_tnr_dmd__i0__lna_thrs_tbl_cable0 = 1;
          tnr_dmd[_i0].lna_thrs_tbl_cable = (struct cxd2880_tnrdmd_lna_thrs_tbl_cable *) malloc(_len_tnr_dmd__i0__lna_thrs_tbl_cable0*sizeof(struct cxd2880_tnrdmd_lna_thrs_tbl_cable));
          for(int _j0 = 0; _j0 < _len_tnr_dmd__i0__lna_thrs_tbl_cable0; _j0++) {
            tnr_dmd[_i0].lna_thrs_tbl_cable->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tnr_dmd__i0__lna_thrs_tbl_air0 = 1;
          tnr_dmd[_i0].lna_thrs_tbl_air = (struct cxd2880_tnrdmd_lna_thrs_tbl_air *) malloc(_len_tnr_dmd__i0__lna_thrs_tbl_air0*sizeof(struct cxd2880_tnrdmd_lna_thrs_tbl_air));
          for(int _j0 = 0; _j0 < _len_tnr_dmd__i0__lna_thrs_tbl_air0; _j0++) {
            tnr_dmd[_i0].lna_thrs_tbl_air->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tbl_air0 = 1;
          struct cxd2880_tnrdmd_lna_thrs_tbl_air * tbl_air = (struct cxd2880_tnrdmd_lna_thrs_tbl_air *) malloc(_len_tbl_air0*sizeof(struct cxd2880_tnrdmd_lna_thrs_tbl_air));
          for(int _i0 = 0; _i0 < _len_tbl_air0; _i0++) {
            tbl_air[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tbl_cable0 = 1;
          struct cxd2880_tnrdmd_lna_thrs_tbl_cable * tbl_cable = (struct cxd2880_tnrdmd_lna_thrs_tbl_cable *) malloc(_len_tbl_cable0*sizeof(struct cxd2880_tnrdmd_lna_thrs_tbl_cable));
          for(int _i0 = 0; _i0 < _len_tbl_cable0; _i0++) {
            tbl_cable[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cxd2880_tnrdmd_set_lna_thrs(tnr_dmd,tbl_air,tbl_cable);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tnr_dmd0; _aux++) {
          free(tnr_dmd[_aux].lna_thrs_tbl_cable);
          }
          for(int _aux = 0; _aux < _len_tnr_dmd0; _aux++) {
          free(tnr_dmd[_aux].lna_thrs_tbl_air);
          }
          free(tnr_dmd);
          free(tbl_air);
          free(tbl_cable);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tnr_dmd0 = 65025;
          struct cxd2880_tnrdmd * tnr_dmd = (struct cxd2880_tnrdmd *) malloc(_len_tnr_dmd0*sizeof(struct cxd2880_tnrdmd));
          for(int _i0 = 0; _i0 < _len_tnr_dmd0; _i0++) {
              int _len_tnr_dmd__i0__lna_thrs_tbl_cable0 = 1;
          tnr_dmd[_i0].lna_thrs_tbl_cable = (struct cxd2880_tnrdmd_lna_thrs_tbl_cable *) malloc(_len_tnr_dmd__i0__lna_thrs_tbl_cable0*sizeof(struct cxd2880_tnrdmd_lna_thrs_tbl_cable));
          for(int _j0 = 0; _j0 < _len_tnr_dmd__i0__lna_thrs_tbl_cable0; _j0++) {
            tnr_dmd[_i0].lna_thrs_tbl_cable->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tnr_dmd__i0__lna_thrs_tbl_air0 = 1;
          tnr_dmd[_i0].lna_thrs_tbl_air = (struct cxd2880_tnrdmd_lna_thrs_tbl_air *) malloc(_len_tnr_dmd__i0__lna_thrs_tbl_air0*sizeof(struct cxd2880_tnrdmd_lna_thrs_tbl_air));
          for(int _j0 = 0; _j0 < _len_tnr_dmd__i0__lna_thrs_tbl_air0; _j0++) {
            tnr_dmd[_i0].lna_thrs_tbl_air->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tbl_air0 = 65025;
          struct cxd2880_tnrdmd_lna_thrs_tbl_air * tbl_air = (struct cxd2880_tnrdmd_lna_thrs_tbl_air *) malloc(_len_tbl_air0*sizeof(struct cxd2880_tnrdmd_lna_thrs_tbl_air));
          for(int _i0 = 0; _i0 < _len_tbl_air0; _i0++) {
            tbl_air[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tbl_cable0 = 65025;
          struct cxd2880_tnrdmd_lna_thrs_tbl_cable * tbl_cable = (struct cxd2880_tnrdmd_lna_thrs_tbl_cable *) malloc(_len_tbl_cable0*sizeof(struct cxd2880_tnrdmd_lna_thrs_tbl_cable));
          for(int _i0 = 0; _i0 < _len_tbl_cable0; _i0++) {
            tbl_cable[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cxd2880_tnrdmd_set_lna_thrs(tnr_dmd,tbl_air,tbl_cable);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tnr_dmd0; _aux++) {
          free(tnr_dmd[_aux].lna_thrs_tbl_cable);
          }
          for(int _aux = 0; _aux < _len_tnr_dmd0; _aux++) {
          free(tnr_dmd[_aux].lna_thrs_tbl_air);
          }
          free(tnr_dmd);
          free(tbl_air);
          free(tbl_cable);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tnr_dmd0 = 100;
          struct cxd2880_tnrdmd * tnr_dmd = (struct cxd2880_tnrdmd *) malloc(_len_tnr_dmd0*sizeof(struct cxd2880_tnrdmd));
          for(int _i0 = 0; _i0 < _len_tnr_dmd0; _i0++) {
              int _len_tnr_dmd__i0__lna_thrs_tbl_cable0 = 1;
          tnr_dmd[_i0].lna_thrs_tbl_cable = (struct cxd2880_tnrdmd_lna_thrs_tbl_cable *) malloc(_len_tnr_dmd__i0__lna_thrs_tbl_cable0*sizeof(struct cxd2880_tnrdmd_lna_thrs_tbl_cable));
          for(int _j0 = 0; _j0 < _len_tnr_dmd__i0__lna_thrs_tbl_cable0; _j0++) {
            tnr_dmd[_i0].lna_thrs_tbl_cable->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tnr_dmd__i0__lna_thrs_tbl_air0 = 1;
          tnr_dmd[_i0].lna_thrs_tbl_air = (struct cxd2880_tnrdmd_lna_thrs_tbl_air *) malloc(_len_tnr_dmd__i0__lna_thrs_tbl_air0*sizeof(struct cxd2880_tnrdmd_lna_thrs_tbl_air));
          for(int _j0 = 0; _j0 < _len_tnr_dmd__i0__lna_thrs_tbl_air0; _j0++) {
            tnr_dmd[_i0].lna_thrs_tbl_air->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tbl_air0 = 100;
          struct cxd2880_tnrdmd_lna_thrs_tbl_air * tbl_air = (struct cxd2880_tnrdmd_lna_thrs_tbl_air *) malloc(_len_tbl_air0*sizeof(struct cxd2880_tnrdmd_lna_thrs_tbl_air));
          for(int _i0 = 0; _i0 < _len_tbl_air0; _i0++) {
            tbl_air[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tbl_cable0 = 100;
          struct cxd2880_tnrdmd_lna_thrs_tbl_cable * tbl_cable = (struct cxd2880_tnrdmd_lna_thrs_tbl_cable *) malloc(_len_tbl_cable0*sizeof(struct cxd2880_tnrdmd_lna_thrs_tbl_cable));
          for(int _i0 = 0; _i0 < _len_tbl_cable0; _i0++) {
            tbl_cable[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cxd2880_tnrdmd_set_lna_thrs(tnr_dmd,tbl_air,tbl_cable);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tnr_dmd0; _aux++) {
          free(tnr_dmd[_aux].lna_thrs_tbl_cable);
          }
          for(int _aux = 0; _aux < _len_tnr_dmd0; _aux++) {
          free(tnr_dmd[_aux].lna_thrs_tbl_air);
          }
          free(tnr_dmd);
          free(tbl_air);
          free(tbl_cable);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_tnr_dmd0 = 1;
          struct cxd2880_tnrdmd * tnr_dmd = (struct cxd2880_tnrdmd *) malloc(_len_tnr_dmd0*sizeof(struct cxd2880_tnrdmd));
          for(int _i0 = 0; _i0 < _len_tnr_dmd0; _i0++) {
              int _len_tnr_dmd__i0__lna_thrs_tbl_cable0 = 1;
          tnr_dmd[_i0].lna_thrs_tbl_cable = (struct cxd2880_tnrdmd_lna_thrs_tbl_cable *) malloc(_len_tnr_dmd__i0__lna_thrs_tbl_cable0*sizeof(struct cxd2880_tnrdmd_lna_thrs_tbl_cable));
          for(int _j0 = 0; _j0 < _len_tnr_dmd__i0__lna_thrs_tbl_cable0; _j0++) {
            tnr_dmd[_i0].lna_thrs_tbl_cable->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tnr_dmd__i0__lna_thrs_tbl_air0 = 1;
          tnr_dmd[_i0].lna_thrs_tbl_air = (struct cxd2880_tnrdmd_lna_thrs_tbl_air *) malloc(_len_tnr_dmd__i0__lna_thrs_tbl_air0*sizeof(struct cxd2880_tnrdmd_lna_thrs_tbl_air));
          for(int _j0 = 0; _j0 < _len_tnr_dmd__i0__lna_thrs_tbl_air0; _j0++) {
            tnr_dmd[_i0].lna_thrs_tbl_air->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tbl_air0 = 1;
          struct cxd2880_tnrdmd_lna_thrs_tbl_air * tbl_air = (struct cxd2880_tnrdmd_lna_thrs_tbl_air *) malloc(_len_tbl_air0*sizeof(struct cxd2880_tnrdmd_lna_thrs_tbl_air));
          for(int _i0 = 0; _i0 < _len_tbl_air0; _i0++) {
            tbl_air[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tbl_cable0 = 1;
          struct cxd2880_tnrdmd_lna_thrs_tbl_cable * tbl_cable = (struct cxd2880_tnrdmd_lna_thrs_tbl_cable *) malloc(_len_tbl_cable0*sizeof(struct cxd2880_tnrdmd_lna_thrs_tbl_cable));
          for(int _i0 = 0; _i0 < _len_tbl_cable0; _i0++) {
            tbl_cable[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cxd2880_tnrdmd_set_lna_thrs(tnr_dmd,tbl_air,tbl_cable);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tnr_dmd0; _aux++) {
          free(tnr_dmd[_aux].lna_thrs_tbl_cable);
          }
          for(int _aux = 0; _aux < _len_tnr_dmd0; _aux++) {
          free(tnr_dmd[_aux].lna_thrs_tbl_air);
          }
          free(tnr_dmd);
          free(tbl_air);
          free(tbl_cable);
        
        break;
    }
    // dlinked
    case 4:
    {
          int _len_tnr_dmd0 = 1;
          struct cxd2880_tnrdmd * tnr_dmd = (struct cxd2880_tnrdmd *) malloc(_len_tnr_dmd0*sizeof(struct cxd2880_tnrdmd));
          for(int _i0 = 0; _i0 < _len_tnr_dmd0; _i0++) {
              int _len_tnr_dmd__i0__lna_thrs_tbl_cable0 = 1;
          tnr_dmd[_i0].lna_thrs_tbl_cable = (struct cxd2880_tnrdmd_lna_thrs_tbl_cable *) malloc(_len_tnr_dmd__i0__lna_thrs_tbl_cable0*sizeof(struct cxd2880_tnrdmd_lna_thrs_tbl_cable));
          for(int _j0 = 0; _j0 < _len_tnr_dmd__i0__lna_thrs_tbl_cable0; _j0++) {
            tnr_dmd[_i0].lna_thrs_tbl_cable->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tnr_dmd__i0__lna_thrs_tbl_air0 = 1;
          tnr_dmd[_i0].lna_thrs_tbl_air = (struct cxd2880_tnrdmd_lna_thrs_tbl_air *) malloc(_len_tnr_dmd__i0__lna_thrs_tbl_air0*sizeof(struct cxd2880_tnrdmd_lna_thrs_tbl_air));
          for(int _j0 = 0; _j0 < _len_tnr_dmd__i0__lna_thrs_tbl_air0; _j0++) {
            tnr_dmd[_i0].lna_thrs_tbl_air->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tbl_air0 = 1;
          struct cxd2880_tnrdmd_lna_thrs_tbl_air * tbl_air = (struct cxd2880_tnrdmd_lna_thrs_tbl_air *) malloc(_len_tbl_air0*sizeof(struct cxd2880_tnrdmd_lna_thrs_tbl_air));
          for(int _i0 = 0; _i0 < _len_tbl_air0; _i0++) {
            tbl_air[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tbl_cable0 = 1;
          struct cxd2880_tnrdmd_lna_thrs_tbl_cable * tbl_cable = (struct cxd2880_tnrdmd_lna_thrs_tbl_cable *) malloc(_len_tbl_cable0*sizeof(struct cxd2880_tnrdmd_lna_thrs_tbl_cable));
          for(int _i0 = 0; _i0 < _len_tbl_cable0; _i0++) {
            tbl_cable[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cxd2880_tnrdmd_set_lna_thrs(tnr_dmd,tbl_air,tbl_cable);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tnr_dmd0; _aux++) {
          free(tnr_dmd[_aux].lna_thrs_tbl_cable);
          }
          for(int _aux = 0; _aux < _len_tnr_dmd0; _aux++) {
          free(tnr_dmd[_aux].lna_thrs_tbl_air);
          }
          free(tnr_dmd);
          free(tbl_air);
          free(tbl_cable);
        
        break;
    }
    // bintree
    case 5:
    {
          int _len_tnr_dmd0 = 1;
          struct cxd2880_tnrdmd * tnr_dmd = (struct cxd2880_tnrdmd *) malloc(_len_tnr_dmd0*sizeof(struct cxd2880_tnrdmd));
          for(int _i0 = 0; _i0 < _len_tnr_dmd0; _i0++) {
              int _len_tnr_dmd__i0__lna_thrs_tbl_cable0 = 1;
          tnr_dmd[_i0].lna_thrs_tbl_cable = (struct cxd2880_tnrdmd_lna_thrs_tbl_cable *) malloc(_len_tnr_dmd__i0__lna_thrs_tbl_cable0*sizeof(struct cxd2880_tnrdmd_lna_thrs_tbl_cable));
          for(int _j0 = 0; _j0 < _len_tnr_dmd__i0__lna_thrs_tbl_cable0; _j0++) {
            tnr_dmd[_i0].lna_thrs_tbl_cable->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tnr_dmd__i0__lna_thrs_tbl_air0 = 1;
          tnr_dmd[_i0].lna_thrs_tbl_air = (struct cxd2880_tnrdmd_lna_thrs_tbl_air *) malloc(_len_tnr_dmd__i0__lna_thrs_tbl_air0*sizeof(struct cxd2880_tnrdmd_lna_thrs_tbl_air));
          for(int _j0 = 0; _j0 < _len_tnr_dmd__i0__lna_thrs_tbl_air0; _j0++) {
            tnr_dmd[_i0].lna_thrs_tbl_air->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tbl_air0 = 1;
          struct cxd2880_tnrdmd_lna_thrs_tbl_air * tbl_air = (struct cxd2880_tnrdmd_lna_thrs_tbl_air *) malloc(_len_tbl_air0*sizeof(struct cxd2880_tnrdmd_lna_thrs_tbl_air));
          for(int _i0 = 0; _i0 < _len_tbl_air0; _i0++) {
            tbl_air[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tbl_cable0 = 1;
          struct cxd2880_tnrdmd_lna_thrs_tbl_cable * tbl_cable = (struct cxd2880_tnrdmd_lna_thrs_tbl_cable *) malloc(_len_tbl_cable0*sizeof(struct cxd2880_tnrdmd_lna_thrs_tbl_cable));
          for(int _i0 = 0; _i0 < _len_tbl_cable0; _i0++) {
            tbl_cable[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cxd2880_tnrdmd_set_lna_thrs(tnr_dmd,tbl_air,tbl_cable);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tnr_dmd0; _aux++) {
          free(tnr_dmd[_aux].lna_thrs_tbl_cable);
          }
          for(int _aux = 0; _aux < _len_tnr_dmd0; _aux++) {
          free(tnr_dmd[_aux].lna_thrs_tbl_air);
          }
          free(tnr_dmd);
          free(tbl_air);
          free(tbl_cable);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
