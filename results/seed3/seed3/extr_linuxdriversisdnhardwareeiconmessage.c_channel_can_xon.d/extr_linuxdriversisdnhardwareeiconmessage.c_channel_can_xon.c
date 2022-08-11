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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int word ;
typedef  int dword ;
typedef  size_t byte ;
struct TYPE_7__ {int MaxBuffer; int* DataNCCI; } ;
struct TYPE_6__ {int* ch_ncci; scalar_t__ Id; } ;
struct TYPE_5__ {TYPE_2__* adapter; TYPE_3__* appl; } ;
typedef  TYPE_1__ PLCI ;
typedef  TYPE_2__ DIVA_CAPI_ADAPTER ;
typedef  TYPE_3__ APPL ;

/* Variables and functions */

__attribute__((used)) static int channel_can_xon(PLCI *plci, byte ch) {
	APPL *APPLptr;
	DIVA_CAPI_ADAPTER *a;
	word NCCIcode;
	dword count;
	word Num;
	word i;

	APPLptr = plci->appl;
	a = plci->adapter;

	if (!APPLptr)
		return (0);

	NCCIcode = a->ch_ncci[ch] | (((word) a->Id) << 8);

	/* count all buffers within the Application pool    */
	/* belonging to the same NCCI. XON if a first is    */
	/* used.                                            */
	count = 0;
	Num = 0xffff;
	for (i = 0; i < APPLptr->MaxBuffer; i++) {
		if (NCCIcode == APPLptr->DataNCCI[i]) count++;
		if (!APPLptr->DataNCCI[i] && Num == 0xffff) Num = i;
	}
	if ((count > 2) || (Num == 0xffff)) {
		return (0);
	}
	return (1);
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
          unsigned long ch = 100;
          int _len_plci0 = 1;
          struct TYPE_5__ * plci = (struct TYPE_5__ *) malloc(_len_plci0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_plci0; _i0++) {
              int _len_plci__i0__adapter0 = 1;
          plci[_i0].adapter = (struct TYPE_6__ *) malloc(_len_plci__i0__adapter0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter0; _j0++) {
              int _len_plci__i0__adapter_ch_ncci0 = 1;
          plci[_i0].adapter->ch_ncci = (int *) malloc(_len_plci__i0__adapter_ch_ncci0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter_ch_ncci0; _j0++) {
            plci[_i0].adapter->ch_ncci[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        plci[_i0].adapter->Id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_plci__i0__appl0 = 1;
          plci[_i0].appl = (struct TYPE_7__ *) malloc(_len_plci__i0__appl0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_plci__i0__appl0; _j0++) {
            plci[_i0].appl->MaxBuffer = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_plci__i0__appl_DataNCCI0 = 1;
          plci[_i0].appl->DataNCCI = (int *) malloc(_len_plci__i0__appl_DataNCCI0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_plci__i0__appl_DataNCCI0; _j0++) {
            plci[_i0].appl->DataNCCI[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = channel_can_xon(plci,ch);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_plci0; _aux++) {
          free(plci[_aux].adapter);
          }
          for(int _aux = 0; _aux < _len_plci0; _aux++) {
          free(plci[_aux].appl);
          }
          free(plci);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long ch = 255;
          int _len_plci0 = 65025;
          struct TYPE_5__ * plci = (struct TYPE_5__ *) malloc(_len_plci0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_plci0; _i0++) {
              int _len_plci__i0__adapter0 = 1;
          plci[_i0].adapter = (struct TYPE_6__ *) malloc(_len_plci__i0__adapter0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter0; _j0++) {
              int _len_plci__i0__adapter_ch_ncci0 = 1;
          plci[_i0].adapter->ch_ncci = (int *) malloc(_len_plci__i0__adapter_ch_ncci0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter_ch_ncci0; _j0++) {
            plci[_i0].adapter->ch_ncci[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        plci[_i0].adapter->Id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_plci__i0__appl0 = 1;
          plci[_i0].appl = (struct TYPE_7__ *) malloc(_len_plci__i0__appl0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_plci__i0__appl0; _j0++) {
            plci[_i0].appl->MaxBuffer = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_plci__i0__appl_DataNCCI0 = 1;
          plci[_i0].appl->DataNCCI = (int *) malloc(_len_plci__i0__appl_DataNCCI0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_plci__i0__appl_DataNCCI0; _j0++) {
            plci[_i0].appl->DataNCCI[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = channel_can_xon(plci,ch);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_plci0; _aux++) {
          free(plci[_aux].adapter);
          }
          for(int _aux = 0; _aux < _len_plci0; _aux++) {
          free(plci[_aux].appl);
          }
          free(plci);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long ch = 10;
          int _len_plci0 = 100;
          struct TYPE_5__ * plci = (struct TYPE_5__ *) malloc(_len_plci0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_plci0; _i0++) {
              int _len_plci__i0__adapter0 = 1;
          plci[_i0].adapter = (struct TYPE_6__ *) malloc(_len_plci__i0__adapter0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter0; _j0++) {
              int _len_plci__i0__adapter_ch_ncci0 = 1;
          plci[_i0].adapter->ch_ncci = (int *) malloc(_len_plci__i0__adapter_ch_ncci0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter_ch_ncci0; _j0++) {
            plci[_i0].adapter->ch_ncci[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        plci[_i0].adapter->Id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_plci__i0__appl0 = 1;
          plci[_i0].appl = (struct TYPE_7__ *) malloc(_len_plci__i0__appl0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_plci__i0__appl0; _j0++) {
            plci[_i0].appl->MaxBuffer = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_plci__i0__appl_DataNCCI0 = 1;
          plci[_i0].appl->DataNCCI = (int *) malloc(_len_plci__i0__appl_DataNCCI0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_plci__i0__appl_DataNCCI0; _j0++) {
            plci[_i0].appl->DataNCCI[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = channel_can_xon(plci,ch);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_plci0; _aux++) {
          free(plci[_aux].adapter);
          }
          for(int _aux = 0; _aux < _len_plci0; _aux++) {
          free(plci[_aux].appl);
          }
          free(plci);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
