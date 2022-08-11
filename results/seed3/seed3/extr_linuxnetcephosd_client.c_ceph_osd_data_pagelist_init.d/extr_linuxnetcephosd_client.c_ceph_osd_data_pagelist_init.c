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
struct ceph_pagelist {int dummy; } ;
struct ceph_osd_data {struct ceph_pagelist* pagelist; int /*<<< orphan*/  type; } ;

/* Variables and functions */
 int /*<<< orphan*/  CEPH_OSD_DATA_TYPE_PAGELIST ; 

__attribute__((used)) static void ceph_osd_data_pagelist_init(struct ceph_osd_data *osd_data,
			struct ceph_pagelist *pagelist)
{
	osd_data->type = CEPH_OSD_DATA_TYPE_PAGELIST;
	osd_data->pagelist = pagelist;
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
          int _len_osd_data0 = 1;
          struct ceph_osd_data * osd_data = (struct ceph_osd_data *) malloc(_len_osd_data0*sizeof(struct ceph_osd_data));
          for(int _i0 = 0; _i0 < _len_osd_data0; _i0++) {
              int _len_osd_data__i0__pagelist0 = 1;
          osd_data[_i0].pagelist = (struct ceph_pagelist *) malloc(_len_osd_data__i0__pagelist0*sizeof(struct ceph_pagelist));
          for(int _j0 = 0; _j0 < _len_osd_data__i0__pagelist0; _j0++) {
            osd_data[_i0].pagelist->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        osd_data[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pagelist0 = 1;
          struct ceph_pagelist * pagelist = (struct ceph_pagelist *) malloc(_len_pagelist0*sizeof(struct ceph_pagelist));
          for(int _i0 = 0; _i0 < _len_pagelist0; _i0++) {
            pagelist[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ceph_osd_data_pagelist_init(osd_data,pagelist);
          for(int _aux = 0; _aux < _len_osd_data0; _aux++) {
          free(osd_data[_aux].pagelist);
          }
          free(osd_data);
          free(pagelist);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_osd_data0 = 65025;
          struct ceph_osd_data * osd_data = (struct ceph_osd_data *) malloc(_len_osd_data0*sizeof(struct ceph_osd_data));
          for(int _i0 = 0; _i0 < _len_osd_data0; _i0++) {
              int _len_osd_data__i0__pagelist0 = 1;
          osd_data[_i0].pagelist = (struct ceph_pagelist *) malloc(_len_osd_data__i0__pagelist0*sizeof(struct ceph_pagelist));
          for(int _j0 = 0; _j0 < _len_osd_data__i0__pagelist0; _j0++) {
            osd_data[_i0].pagelist->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        osd_data[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pagelist0 = 65025;
          struct ceph_pagelist * pagelist = (struct ceph_pagelist *) malloc(_len_pagelist0*sizeof(struct ceph_pagelist));
          for(int _i0 = 0; _i0 < _len_pagelist0; _i0++) {
            pagelist[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ceph_osd_data_pagelist_init(osd_data,pagelist);
          for(int _aux = 0; _aux < _len_osd_data0; _aux++) {
          free(osd_data[_aux].pagelist);
          }
          free(osd_data);
          free(pagelist);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_osd_data0 = 100;
          struct ceph_osd_data * osd_data = (struct ceph_osd_data *) malloc(_len_osd_data0*sizeof(struct ceph_osd_data));
          for(int _i0 = 0; _i0 < _len_osd_data0; _i0++) {
              int _len_osd_data__i0__pagelist0 = 1;
          osd_data[_i0].pagelist = (struct ceph_pagelist *) malloc(_len_osd_data__i0__pagelist0*sizeof(struct ceph_pagelist));
          for(int _j0 = 0; _j0 < _len_osd_data__i0__pagelist0; _j0++) {
            osd_data[_i0].pagelist->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        osd_data[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pagelist0 = 100;
          struct ceph_pagelist * pagelist = (struct ceph_pagelist *) malloc(_len_pagelist0*sizeof(struct ceph_pagelist));
          for(int _i0 = 0; _i0 < _len_pagelist0; _i0++) {
            pagelist[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ceph_osd_data_pagelist_init(osd_data,pagelist);
          for(int _aux = 0; _aux < _len_osd_data0; _aux++) {
          free(osd_data[_aux].pagelist);
          }
          free(osd_data);
          free(pagelist);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
