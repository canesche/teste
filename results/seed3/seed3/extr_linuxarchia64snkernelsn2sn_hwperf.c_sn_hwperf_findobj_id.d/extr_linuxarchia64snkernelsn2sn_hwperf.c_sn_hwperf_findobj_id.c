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
struct sn_hwperf_object_info {int id; } ;

/* Variables and functions */

__attribute__((used)) static struct sn_hwperf_object_info *
sn_hwperf_findobj_id(struct sn_hwperf_object_info *objbuf,
	int nobj, int id)
{
	int i;
	struct sn_hwperf_object_info *p = objbuf;

	for (i=0; i < nobj; i++, p++) {
		if (p->id == id)
			return p;
	}

	return NULL;

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
          int nobj = 100;
          int id = 100;
          int _len_objbuf0 = 1;
          struct sn_hwperf_object_info * objbuf = (struct sn_hwperf_object_info *) malloc(_len_objbuf0*sizeof(struct sn_hwperf_object_info));
          for(int _i0 = 0; _i0 < _len_objbuf0; _i0++) {
            objbuf[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct sn_hwperf_object_info * benchRet = sn_hwperf_findobj_id(objbuf,nobj,id);
          printf("%d\n", (*benchRet).id);
          free(objbuf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int nobj = 255;
          int id = 255;
          int _len_objbuf0 = 65025;
          struct sn_hwperf_object_info * objbuf = (struct sn_hwperf_object_info *) malloc(_len_objbuf0*sizeof(struct sn_hwperf_object_info));
          for(int _i0 = 0; _i0 < _len_objbuf0; _i0++) {
            objbuf[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct sn_hwperf_object_info * benchRet = sn_hwperf_findobj_id(objbuf,nobj,id);
          printf("%d\n", (*benchRet).id);
          free(objbuf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int nobj = 10;
          int id = 10;
          int _len_objbuf0 = 100;
          struct sn_hwperf_object_info * objbuf = (struct sn_hwperf_object_info *) malloc(_len_objbuf0*sizeof(struct sn_hwperf_object_info));
          for(int _i0 = 0; _i0 < _len_objbuf0; _i0++) {
            objbuf[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct sn_hwperf_object_info * benchRet = sn_hwperf_findobj_id(objbuf,nobj,id);
          printf("%d\n", (*benchRet).id);
          free(objbuf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
