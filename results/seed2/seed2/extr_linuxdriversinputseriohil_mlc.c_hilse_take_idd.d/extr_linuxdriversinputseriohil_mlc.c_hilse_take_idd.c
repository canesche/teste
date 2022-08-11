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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int* idd; } ;
struct TYPE_5__ {int* ipacket; int /*<<< orphan*/  ddi; TYPE_1__ di_scratch; } ;
typedef  TYPE_2__ hil_mlc ;

/* Variables and functions */
 int HILSEN_DOWN ; 
 int HILSEN_NEXT ; 
 int HIL_CMD_IDD ; 
 int HIL_IDD_HEADER_EXD ; 
 int HIL_IDD_HEADER_RSC ; 
 int HIL_PKT_ADDR_MASK ; 
 int HIL_PKT_CMD ; 
 int HIL_PKT_DATA_MASK ; 

__attribute__((used)) static int hilse_take_idd(hil_mlc *mlc, int unused)
{
	int i;

	/* Help the state engine:
	 * Is this a real IDD response or just an echo?
	 *
	 * Real IDD response does not start with a command.
	 */
	if (mlc->ipacket[0] & HIL_PKT_CMD)
		goto bail;

	/* Should have the command echoed further down. */
	for (i = 1; i < 16; i++) {
		if (((mlc->ipacket[i] & HIL_PKT_ADDR_MASK) ==
		     (mlc->ipacket[0] & HIL_PKT_ADDR_MASK)) &&
		    (mlc->ipacket[i] & HIL_PKT_CMD) &&
		    ((mlc->ipacket[i] & HIL_PKT_DATA_MASK) == HIL_CMD_IDD))
			break;
	}
	if (i > 15)
		goto bail;

	/* And the rest of the packets should still be clear. */
	while (++i < 16)
		if (mlc->ipacket[i])
			break;

	if (i < 16)
		goto bail;

	for (i = 0; i < 16; i++)
		mlc->di_scratch.idd[i] =
			mlc->ipacket[i] & HIL_PKT_DATA_MASK;

	/* Next step is to see if RSC supported */
	if (mlc->di_scratch.idd[1] & HIL_IDD_HEADER_RSC)
		return HILSEN_NEXT;

	if (mlc->di_scratch.idd[1] & HIL_IDD_HEADER_EXD)
		return HILSEN_DOWN | 4;

	return 0;

 bail:
	mlc->ddi--;

	return -1; /* This should send us off to ACF */
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
          int unused = 100;
          int _len_mlc0 = 1;
          struct TYPE_5__ * mlc = (struct TYPE_5__ *) malloc(_len_mlc0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_mlc0; _i0++) {
              int _len_mlc__i0__ipacket0 = 1;
          mlc[_i0].ipacket = (int *) malloc(_len_mlc__i0__ipacket0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mlc__i0__ipacket0; _j0++) {
            mlc[_i0].ipacket[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mlc[_i0].ddi = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mlc__i0__di_scratch_idd0 = 1;
          mlc[_i0].di_scratch.idd = (int *) malloc(_len_mlc__i0__di_scratch_idd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mlc__i0__di_scratch_idd0; _j0++) {
            mlc[_i0].di_scratch.idd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = hilse_take_idd(mlc,unused);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mlc0; _aux++) {
          free(mlc[_aux].ipacket);
          }
          free(mlc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int unused = 255;
          int _len_mlc0 = 65025;
          struct TYPE_5__ * mlc = (struct TYPE_5__ *) malloc(_len_mlc0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_mlc0; _i0++) {
              int _len_mlc__i0__ipacket0 = 1;
          mlc[_i0].ipacket = (int *) malloc(_len_mlc__i0__ipacket0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mlc__i0__ipacket0; _j0++) {
            mlc[_i0].ipacket[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mlc[_i0].ddi = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mlc__i0__di_scratch_idd0 = 1;
          mlc[_i0].di_scratch.idd = (int *) malloc(_len_mlc__i0__di_scratch_idd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mlc__i0__di_scratch_idd0; _j0++) {
            mlc[_i0].di_scratch.idd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = hilse_take_idd(mlc,unused);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mlc0; _aux++) {
          free(mlc[_aux].ipacket);
          }
          free(mlc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int unused = 10;
          int _len_mlc0 = 100;
          struct TYPE_5__ * mlc = (struct TYPE_5__ *) malloc(_len_mlc0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_mlc0; _i0++) {
              int _len_mlc__i0__ipacket0 = 1;
          mlc[_i0].ipacket = (int *) malloc(_len_mlc__i0__ipacket0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mlc__i0__ipacket0; _j0++) {
            mlc[_i0].ipacket[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mlc[_i0].ddi = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mlc__i0__di_scratch_idd0 = 1;
          mlc[_i0].di_scratch.idd = (int *) malloc(_len_mlc__i0__di_scratch_idd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mlc__i0__di_scratch_idd0; _j0++) {
            mlc[_i0].di_scratch.idd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = hilse_take_idd(mlc,unused);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mlc0; _aux++) {
          free(mlc[_aux].ipacket);
          }
          free(mlc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
