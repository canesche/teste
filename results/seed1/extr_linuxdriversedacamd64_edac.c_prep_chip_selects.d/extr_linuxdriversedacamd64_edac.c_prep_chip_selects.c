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
struct amd64_pvt {int fam; scalar_t__ ext_model; int model; TYPE_1__* csels; } ;
struct TYPE_2__ {int b_cnt; int m_cnt; } ;

/* Variables and functions */
 scalar_t__ K8_REV_F ; 

__attribute__((used)) static void prep_chip_selects(struct amd64_pvt *pvt)
{
	if (pvt->fam == 0xf && pvt->ext_model < K8_REV_F) {
		pvt->csels[0].b_cnt = pvt->csels[1].b_cnt = 8;
		pvt->csels[0].m_cnt = pvt->csels[1].m_cnt = 8;
	} else if (pvt->fam == 0x15 && pvt->model == 0x30) {
		pvt->csels[0].b_cnt = pvt->csels[1].b_cnt = 4;
		pvt->csels[0].m_cnt = pvt->csels[1].m_cnt = 2;
	} else {
		pvt->csels[0].b_cnt = pvt->csels[1].b_cnt = 8;
		pvt->csels[0].m_cnt = pvt->csels[1].m_cnt = 4;
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
          int _len_pvt0 = 1;
          struct amd64_pvt * pvt = (struct amd64_pvt *) malloc(_len_pvt0*sizeof(struct amd64_pvt));
          for(int _i0 = 0; _i0 < _len_pvt0; _i0++) {
            pvt[_i0].fam = ((-2 * (next_i()%2)) + 1) * next_i();
        pvt[_i0].ext_model = ((-2 * (next_i()%2)) + 1) * next_i();
        pvt[_i0].model = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pvt__i0__csels0 = 1;
          pvt[_i0].csels = (struct TYPE_2__ *) malloc(_len_pvt__i0__csels0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pvt__i0__csels0; _j0++) {
            pvt[_i0].csels->b_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        pvt[_i0].csels->m_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          prep_chip_selects(pvt);
          for(int _aux = 0; _aux < _len_pvt0; _aux++) {
          free(pvt[_aux].csels);
          }
          free(pvt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pvt0 = 65025;
          struct amd64_pvt * pvt = (struct amd64_pvt *) malloc(_len_pvt0*sizeof(struct amd64_pvt));
          for(int _i0 = 0; _i0 < _len_pvt0; _i0++) {
            pvt[_i0].fam = ((-2 * (next_i()%2)) + 1) * next_i();
        pvt[_i0].ext_model = ((-2 * (next_i()%2)) + 1) * next_i();
        pvt[_i0].model = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pvt__i0__csels0 = 1;
          pvt[_i0].csels = (struct TYPE_2__ *) malloc(_len_pvt__i0__csels0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pvt__i0__csels0; _j0++) {
            pvt[_i0].csels->b_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        pvt[_i0].csels->m_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          prep_chip_selects(pvt);
          for(int _aux = 0; _aux < _len_pvt0; _aux++) {
          free(pvt[_aux].csels);
          }
          free(pvt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pvt0 = 100;
          struct amd64_pvt * pvt = (struct amd64_pvt *) malloc(_len_pvt0*sizeof(struct amd64_pvt));
          for(int _i0 = 0; _i0 < _len_pvt0; _i0++) {
            pvt[_i0].fam = ((-2 * (next_i()%2)) + 1) * next_i();
        pvt[_i0].ext_model = ((-2 * (next_i()%2)) + 1) * next_i();
        pvt[_i0].model = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pvt__i0__csels0 = 1;
          pvt[_i0].csels = (struct TYPE_2__ *) malloc(_len_pvt__i0__csels0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pvt__i0__csels0; _j0++) {
            pvt[_i0].csels->b_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        pvt[_i0].csels->m_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          prep_chip_selects(pvt);
          for(int _aux = 0; _aux < _len_pvt0; _aux++) {
          free(pvt[_aux].csels);
          }
          free(pvt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
