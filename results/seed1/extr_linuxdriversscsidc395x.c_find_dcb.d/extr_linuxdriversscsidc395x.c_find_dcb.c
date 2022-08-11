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
typedef  size_t u8 ;
struct DeviceCtlBlk {int dummy; } ;
struct AdapterCtlBlk {struct DeviceCtlBlk*** children; } ;

/* Variables and functions */

__attribute__((used)) static struct DeviceCtlBlk *find_dcb(struct AdapterCtlBlk *acb, u8 id, u8 lun)
{
	return acb->children[id][lun];
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
          unsigned long id = 100;
          unsigned long lun = 100;
          int _len_acb0 = 1;
          struct AdapterCtlBlk * acb = (struct AdapterCtlBlk *) malloc(_len_acb0*sizeof(struct AdapterCtlBlk));
          for(int _i0 = 0; _i0 < _len_acb0; _i0++) {
              int _len_acb__i0__children0 = 1;
          acb[_i0].children = (struct DeviceCtlBlk ***) malloc(_len_acb__i0__children0*sizeof(struct DeviceCtlBlk **));
          for(int _j0 = 0; _j0 < _len_acb__i0__children0; _j0++) {
            int _len_acb__i0__children1 = 1;
            acb[_i0].children[_j0] = (struct DeviceCtlBlk **) malloc(_len_acb__i0__children1*sizeof(struct DeviceCtlBlk *));
            for(int _j1 = 0; _j1 < _len_acb__i0__children1; _j1++) {
              int _len_acb__i0__children2 = 1;
              acb[_i0].children[_j0][_j1] = (struct DeviceCtlBlk *) malloc(_len_acb__i0__children2*sizeof(struct DeviceCtlBlk));
              for(int _j2 = 0; _j2 < _len_acb__i0__children2; _j2++) {
                acb[_i0].children[_j0][_j1]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          struct DeviceCtlBlk * benchRet = find_dcb(acb,id,lun);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_acb0; _aux++) {
          }
          free(acb);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long id = 255;
          unsigned long lun = 255;
          int _len_acb0 = 65025;
          struct AdapterCtlBlk * acb = (struct AdapterCtlBlk *) malloc(_len_acb0*sizeof(struct AdapterCtlBlk));
          for(int _i0 = 0; _i0 < _len_acb0; _i0++) {
              int _len_acb__i0__children0 = 1;
          acb[_i0].children = (struct DeviceCtlBlk ***) malloc(_len_acb__i0__children0*sizeof(struct DeviceCtlBlk **));
          for(int _j0 = 0; _j0 < _len_acb__i0__children0; _j0++) {
            int _len_acb__i0__children1 = 1;
            acb[_i0].children[_j0] = (struct DeviceCtlBlk **) malloc(_len_acb__i0__children1*sizeof(struct DeviceCtlBlk *));
            for(int _j1 = 0; _j1 < _len_acb__i0__children1; _j1++) {
              int _len_acb__i0__children2 = 1;
              acb[_i0].children[_j0][_j1] = (struct DeviceCtlBlk *) malloc(_len_acb__i0__children2*sizeof(struct DeviceCtlBlk));
              for(int _j2 = 0; _j2 < _len_acb__i0__children2; _j2++) {
                acb[_i0].children[_j0][_j1]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          struct DeviceCtlBlk * benchRet = find_dcb(acb,id,lun);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_acb0; _aux++) {
          }
          free(acb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long id = 10;
          unsigned long lun = 10;
          int _len_acb0 = 100;
          struct AdapterCtlBlk * acb = (struct AdapterCtlBlk *) malloc(_len_acb0*sizeof(struct AdapterCtlBlk));
          for(int _i0 = 0; _i0 < _len_acb0; _i0++) {
              int _len_acb__i0__children0 = 1;
          acb[_i0].children = (struct DeviceCtlBlk ***) malloc(_len_acb__i0__children0*sizeof(struct DeviceCtlBlk **));
          for(int _j0 = 0; _j0 < _len_acb__i0__children0; _j0++) {
            int _len_acb__i0__children1 = 1;
            acb[_i0].children[_j0] = (struct DeviceCtlBlk **) malloc(_len_acb__i0__children1*sizeof(struct DeviceCtlBlk *));
            for(int _j1 = 0; _j1 < _len_acb__i0__children1; _j1++) {
              int _len_acb__i0__children2 = 1;
              acb[_i0].children[_j0][_j1] = (struct DeviceCtlBlk *) malloc(_len_acb__i0__children2*sizeof(struct DeviceCtlBlk));
              for(int _j2 = 0; _j2 < _len_acb__i0__children2; _j2++) {
                acb[_i0].children[_j0][_j1]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          struct DeviceCtlBlk * benchRet = find_dcb(acb,id,lun);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_acb0; _aux++) {
          }
          free(acb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
