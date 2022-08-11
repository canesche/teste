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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int slaves; } ;
struct cpsw_common {TYPE_3__* slaves; TYPE_1__ data; } ;
struct TYPE_6__ {TYPE_2__* phy; } ;
struct TYPE_5__ {scalar_t__ speed; scalar_t__ link; } ;

/* Variables and functions */

__attribute__((used)) static int cpsw_get_common_speed(struct cpsw_common *cpsw)
{
	int i, speed;

	for (i = 0, speed = 0; i < cpsw->data.slaves; i++)
		if (cpsw->slaves[i].phy && cpsw->slaves[i].phy->link)
			speed += cpsw->slaves[i].phy->speed;

	return speed;
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
          int _len_cpsw0 = 1;
          struct cpsw_common * cpsw = (struct cpsw_common *) malloc(_len_cpsw0*sizeof(struct cpsw_common));
          for(int _i0 = 0; _i0 < _len_cpsw0; _i0++) {
              int _len_cpsw__i0__slaves0 = 1;
          cpsw[_i0].slaves = (struct TYPE_6__ *) malloc(_len_cpsw__i0__slaves0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_cpsw__i0__slaves0; _j0++) {
              int _len_cpsw__i0__slaves_phy0 = 1;
          cpsw[_i0].slaves->phy = (struct TYPE_5__ *) malloc(_len_cpsw__i0__slaves_phy0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_cpsw__i0__slaves_phy0; _j0++) {
            cpsw[_i0].slaves->phy->speed = ((-2 * (next_i()%2)) + 1) * next_i();
        cpsw[_i0].slaves->phy->link = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        cpsw[_i0].data.slaves = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cpsw_get_common_speed(cpsw);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cpsw0; _aux++) {
          free(cpsw[_aux].slaves);
          }
          free(cpsw);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cpsw0 = 65025;
          struct cpsw_common * cpsw = (struct cpsw_common *) malloc(_len_cpsw0*sizeof(struct cpsw_common));
          for(int _i0 = 0; _i0 < _len_cpsw0; _i0++) {
              int _len_cpsw__i0__slaves0 = 1;
          cpsw[_i0].slaves = (struct TYPE_6__ *) malloc(_len_cpsw__i0__slaves0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_cpsw__i0__slaves0; _j0++) {
              int _len_cpsw__i0__slaves_phy0 = 1;
          cpsw[_i0].slaves->phy = (struct TYPE_5__ *) malloc(_len_cpsw__i0__slaves_phy0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_cpsw__i0__slaves_phy0; _j0++) {
            cpsw[_i0].slaves->phy->speed = ((-2 * (next_i()%2)) + 1) * next_i();
        cpsw[_i0].slaves->phy->link = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        cpsw[_i0].data.slaves = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cpsw_get_common_speed(cpsw);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cpsw0; _aux++) {
          free(cpsw[_aux].slaves);
          }
          free(cpsw);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cpsw0 = 100;
          struct cpsw_common * cpsw = (struct cpsw_common *) malloc(_len_cpsw0*sizeof(struct cpsw_common));
          for(int _i0 = 0; _i0 < _len_cpsw0; _i0++) {
              int _len_cpsw__i0__slaves0 = 1;
          cpsw[_i0].slaves = (struct TYPE_6__ *) malloc(_len_cpsw__i0__slaves0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_cpsw__i0__slaves0; _j0++) {
              int _len_cpsw__i0__slaves_phy0 = 1;
          cpsw[_i0].slaves->phy = (struct TYPE_5__ *) malloc(_len_cpsw__i0__slaves_phy0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_cpsw__i0__slaves_phy0; _j0++) {
            cpsw[_i0].slaves->phy->speed = ((-2 * (next_i()%2)) + 1) * next_i();
        cpsw[_i0].slaves->phy->link = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        cpsw[_i0].data.slaves = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cpsw_get_common_speed(cpsw);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cpsw0; _aux++) {
          free(cpsw[_aux].slaves);
          }
          free(cpsw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
