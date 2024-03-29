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
typedef  int u16 ;
struct l2cap_ctrl {int reqseq; int final; int poll; int super; int sar; int txseq; scalar_t__ sframe; } ;

/* Variables and functions */
 int L2CAP_CTRL_FINAL_SHIFT ; 
 int L2CAP_CTRL_FRAME_TYPE ; 
 int L2CAP_CTRL_POLL_SHIFT ; 
 int L2CAP_CTRL_REQSEQ_SHIFT ; 
 int L2CAP_CTRL_SAR_SHIFT ; 
 int L2CAP_CTRL_SUPER_SHIFT ; 
 int L2CAP_CTRL_TXSEQ_SHIFT ; 

__attribute__((used)) static u16 __pack_enhanced_control(struct l2cap_ctrl *control)
{
	u16 packed;

	packed = control->reqseq << L2CAP_CTRL_REQSEQ_SHIFT;
	packed |= control->final << L2CAP_CTRL_FINAL_SHIFT;

	if (control->sframe) {
		packed |= control->poll << L2CAP_CTRL_POLL_SHIFT;
		packed |= control->super << L2CAP_CTRL_SUPER_SHIFT;
		packed |= L2CAP_CTRL_FRAME_TYPE;
	} else {
		packed |= control->sar << L2CAP_CTRL_SAR_SHIFT;
		packed |= control->txseq << L2CAP_CTRL_TXSEQ_SHIFT;
	}

	return packed;
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
          int _len_control0 = 1;
          struct l2cap_ctrl * control = (struct l2cap_ctrl *) malloc(_len_control0*sizeof(struct l2cap_ctrl));
          for(int _i0 = 0; _i0 < _len_control0; _i0++) {
            control[_i0].reqseq = ((-2 * (next_i()%2)) + 1) * next_i();
        control[_i0].final = ((-2 * (next_i()%2)) + 1) * next_i();
        control[_i0].poll = ((-2 * (next_i()%2)) + 1) * next_i();
        control[_i0].super = ((-2 * (next_i()%2)) + 1) * next_i();
        control[_i0].sar = ((-2 * (next_i()%2)) + 1) * next_i();
        control[_i0].txseq = ((-2 * (next_i()%2)) + 1) * next_i();
        control[_i0].sframe = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __pack_enhanced_control(control);
          printf("%d\n", benchRet); 
          free(control);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_control0 = 65025;
          struct l2cap_ctrl * control = (struct l2cap_ctrl *) malloc(_len_control0*sizeof(struct l2cap_ctrl));
          for(int _i0 = 0; _i0 < _len_control0; _i0++) {
            control[_i0].reqseq = ((-2 * (next_i()%2)) + 1) * next_i();
        control[_i0].final = ((-2 * (next_i()%2)) + 1) * next_i();
        control[_i0].poll = ((-2 * (next_i()%2)) + 1) * next_i();
        control[_i0].super = ((-2 * (next_i()%2)) + 1) * next_i();
        control[_i0].sar = ((-2 * (next_i()%2)) + 1) * next_i();
        control[_i0].txseq = ((-2 * (next_i()%2)) + 1) * next_i();
        control[_i0].sframe = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __pack_enhanced_control(control);
          printf("%d\n", benchRet); 
          free(control);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_control0 = 100;
          struct l2cap_ctrl * control = (struct l2cap_ctrl *) malloc(_len_control0*sizeof(struct l2cap_ctrl));
          for(int _i0 = 0; _i0 < _len_control0; _i0++) {
            control[_i0].reqseq = ((-2 * (next_i()%2)) + 1) * next_i();
        control[_i0].final = ((-2 * (next_i()%2)) + 1) * next_i();
        control[_i0].poll = ((-2 * (next_i()%2)) + 1) * next_i();
        control[_i0].super = ((-2 * (next_i()%2)) + 1) * next_i();
        control[_i0].sar = ((-2 * (next_i()%2)) + 1) * next_i();
        control[_i0].txseq = ((-2 * (next_i()%2)) + 1) * next_i();
        control[_i0].sframe = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __pack_enhanced_control(control);
          printf("%d\n", benchRet); 
          free(control);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
