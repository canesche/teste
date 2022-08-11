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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct ptd {int dw5; int dw2; int dw4; } ;
struct isp1760_qtd {TYPE_2__* urb; } ;
struct isp1760_qh {int dummy; } ;
struct TYPE_4__ {int interval; TYPE_1__* dev; } ;
struct TYPE_3__ {scalar_t__ speed; } ;

/* Variables and functions */
 scalar_t__ USB_SPEED_HIGH ; 

__attribute__((used)) static void transform_add_int(struct isp1760_qh *qh,
			struct isp1760_qtd *qtd, struct ptd *ptd)
{
	u32 usof;
	u32 period;

	/*
	 * Most of this is guessing. ISP1761 datasheet is quite unclear, and
	 * the algorithm from the original Philips driver code, which was
	 * pretty much used in this driver before as well, is quite horrendous
	 * and, i believe, incorrect. The code below follows the datasheet and
	 * USB2.0 spec as far as I can tell, and plug/unplug seems to be much
	 * more reliable this way (fingers crossed...).
	 */

	if (qtd->urb->dev->speed == USB_SPEED_HIGH) {
		/* urb->interval is in units of microframes (1/8 ms) */
		period = qtd->urb->interval >> 3;

		if (qtd->urb->interval > 4)
			usof = 0x01; /* One bit set =>
						interval 1 ms * uFrame-match */
		else if (qtd->urb->interval > 2)
			usof = 0x22; /* Two bits set => interval 1/2 ms */
		else if (qtd->urb->interval > 1)
			usof = 0x55; /* Four bits set => interval 1/4 ms */
		else
			usof = 0xff; /* All bits set => interval 1/8 ms */
	} else {
		/* urb->interval is in units of frames (1 ms) */
		period = qtd->urb->interval;
		usof = 0x0f;		/* Execute Start Split on any of the
					   four first uFrames */

		/*
		 * First 8 bits in dw5 is uSCS and "specifies which uSOF the
		 * complete split needs to be sent. Valid only for IN." Also,
		 * "All bits can be set to one for every transfer." (p 82,
		 * ISP1761 data sheet.) 0x1c is from Philips driver. Where did
		 * that number come from? 0xff seems to work fine...
		 */
		/* ptd->dw5 = 0x1c; */
		ptd->dw5 = 0xff; /* Execute Complete Split on any uFrame */
	}

	period = period >> 1;/* Ensure equal or shorter period than requested */
	period &= 0xf8; /* Mask off too large values and lowest unused 3 bits */

	ptd->dw2 |= period;
	ptd->dw4 = usof;
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
          int _len_qh0 = 1;
          struct isp1760_qh * qh = (struct isp1760_qh *) malloc(_len_qh0*sizeof(struct isp1760_qh));
          for(int _i0 = 0; _i0 < _len_qh0; _i0++) {
            qh[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qtd0 = 1;
          struct isp1760_qtd * qtd = (struct isp1760_qtd *) malloc(_len_qtd0*sizeof(struct isp1760_qtd));
          for(int _i0 = 0; _i0 < _len_qtd0; _i0++) {
              int _len_qtd__i0__urb0 = 1;
          qtd[_i0].urb = (struct TYPE_4__ *) malloc(_len_qtd__i0__urb0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_qtd__i0__urb0; _j0++) {
            qtd[_i0].urb->interval = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qtd__i0__urb_dev0 = 1;
          qtd[_i0].urb->dev = (struct TYPE_3__ *) malloc(_len_qtd__i0__urb_dev0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_qtd__i0__urb_dev0; _j0++) {
            qtd[_i0].urb->dev->speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_ptd0 = 1;
          struct ptd * ptd = (struct ptd *) malloc(_len_ptd0*sizeof(struct ptd));
          for(int _i0 = 0; _i0 < _len_ptd0; _i0++) {
            ptd[_i0].dw5 = ((-2 * (next_i()%2)) + 1) * next_i();
        ptd[_i0].dw2 = ((-2 * (next_i()%2)) + 1) * next_i();
        ptd[_i0].dw4 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          transform_add_int(qh,qtd,ptd);
          free(qh);
          for(int _aux = 0; _aux < _len_qtd0; _aux++) {
          free(qtd[_aux].urb);
          }
          free(qtd);
          free(ptd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_qh0 = 65025;
          struct isp1760_qh * qh = (struct isp1760_qh *) malloc(_len_qh0*sizeof(struct isp1760_qh));
          for(int _i0 = 0; _i0 < _len_qh0; _i0++) {
            qh[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qtd0 = 65025;
          struct isp1760_qtd * qtd = (struct isp1760_qtd *) malloc(_len_qtd0*sizeof(struct isp1760_qtd));
          for(int _i0 = 0; _i0 < _len_qtd0; _i0++) {
              int _len_qtd__i0__urb0 = 1;
          qtd[_i0].urb = (struct TYPE_4__ *) malloc(_len_qtd__i0__urb0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_qtd__i0__urb0; _j0++) {
            qtd[_i0].urb->interval = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qtd__i0__urb_dev0 = 1;
          qtd[_i0].urb->dev = (struct TYPE_3__ *) malloc(_len_qtd__i0__urb_dev0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_qtd__i0__urb_dev0; _j0++) {
            qtd[_i0].urb->dev->speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_ptd0 = 65025;
          struct ptd * ptd = (struct ptd *) malloc(_len_ptd0*sizeof(struct ptd));
          for(int _i0 = 0; _i0 < _len_ptd0; _i0++) {
            ptd[_i0].dw5 = ((-2 * (next_i()%2)) + 1) * next_i();
        ptd[_i0].dw2 = ((-2 * (next_i()%2)) + 1) * next_i();
        ptd[_i0].dw4 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          transform_add_int(qh,qtd,ptd);
          free(qh);
          for(int _aux = 0; _aux < _len_qtd0; _aux++) {
          free(qtd[_aux].urb);
          }
          free(qtd);
          free(ptd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_qh0 = 100;
          struct isp1760_qh * qh = (struct isp1760_qh *) malloc(_len_qh0*sizeof(struct isp1760_qh));
          for(int _i0 = 0; _i0 < _len_qh0; _i0++) {
            qh[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qtd0 = 100;
          struct isp1760_qtd * qtd = (struct isp1760_qtd *) malloc(_len_qtd0*sizeof(struct isp1760_qtd));
          for(int _i0 = 0; _i0 < _len_qtd0; _i0++) {
              int _len_qtd__i0__urb0 = 1;
          qtd[_i0].urb = (struct TYPE_4__ *) malloc(_len_qtd__i0__urb0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_qtd__i0__urb0; _j0++) {
            qtd[_i0].urb->interval = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qtd__i0__urb_dev0 = 1;
          qtd[_i0].urb->dev = (struct TYPE_3__ *) malloc(_len_qtd__i0__urb_dev0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_qtd__i0__urb_dev0; _j0++) {
            qtd[_i0].urb->dev->speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_ptd0 = 100;
          struct ptd * ptd = (struct ptd *) malloc(_len_ptd0*sizeof(struct ptd));
          for(int _i0 = 0; _i0 < _len_ptd0; _i0++) {
            ptd[_i0].dw5 = ((-2 * (next_i()%2)) + 1) * next_i();
        ptd[_i0].dw2 = ((-2 * (next_i()%2)) + 1) * next_i();
        ptd[_i0].dw4 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          transform_add_int(qh,qtd,ptd);
          free(qh);
          for(int _aux = 0; _aux < _len_qtd0; _aux++) {
          free(qtd[_aux].urb);
          }
          free(qtd);
          free(ptd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
