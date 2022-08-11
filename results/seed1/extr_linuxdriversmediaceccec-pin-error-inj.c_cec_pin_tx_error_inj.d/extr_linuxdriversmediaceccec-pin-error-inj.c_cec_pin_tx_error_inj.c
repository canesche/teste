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
typedef  size_t u16 ;
struct TYPE_2__ {int len; size_t* msg; } ;
struct cec_pin {int* error_inj; TYPE_1__ tx_msg; } ;

/* Variables and functions */
 size_t CEC_ERROR_INJ_OP_ANY ; 
 int CEC_ERROR_INJ_TX_MASK ; 

u16 cec_pin_tx_error_inj(struct cec_pin *pin)
{
	u16 cmd = CEC_ERROR_INJ_OP_ANY;

	if (!(pin->error_inj[cmd] & CEC_ERROR_INJ_TX_MASK) &&
	    pin->tx_msg.len > 1)
		cmd = pin->tx_msg.msg[1];
	return (pin->error_inj[cmd] & CEC_ERROR_INJ_TX_MASK) ? cmd :
		CEC_ERROR_INJ_OP_ANY;
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
          int _len_pin0 = 1;
          struct cec_pin * pin = (struct cec_pin *) malloc(_len_pin0*sizeof(struct cec_pin));
          for(int _i0 = 0; _i0 < _len_pin0; _i0++) {
              int _len_pin__i0__error_inj0 = 1;
          pin[_i0].error_inj = (int *) malloc(_len_pin__i0__error_inj0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pin__i0__error_inj0; _j0++) {
            pin[_i0].error_inj[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pin[_i0].tx_msg.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pin__i0__tx_msg_msg0 = 1;
          pin[_i0].tx_msg.msg = (unsigned long *) malloc(_len_pin__i0__tx_msg_msg0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_pin__i0__tx_msg_msg0; _j0++) {
            pin[_i0].tx_msg.msg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = cec_pin_tx_error_inj(pin);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_pin0; _aux++) {
          free(pin[_aux].error_inj);
          }
          free(pin);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pin0 = 65025;
          struct cec_pin * pin = (struct cec_pin *) malloc(_len_pin0*sizeof(struct cec_pin));
          for(int _i0 = 0; _i0 < _len_pin0; _i0++) {
              int _len_pin__i0__error_inj0 = 1;
          pin[_i0].error_inj = (int *) malloc(_len_pin__i0__error_inj0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pin__i0__error_inj0; _j0++) {
            pin[_i0].error_inj[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pin[_i0].tx_msg.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pin__i0__tx_msg_msg0 = 1;
          pin[_i0].tx_msg.msg = (unsigned long *) malloc(_len_pin__i0__tx_msg_msg0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_pin__i0__tx_msg_msg0; _j0++) {
            pin[_i0].tx_msg.msg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = cec_pin_tx_error_inj(pin);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_pin0; _aux++) {
          free(pin[_aux].error_inj);
          }
          free(pin);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pin0 = 100;
          struct cec_pin * pin = (struct cec_pin *) malloc(_len_pin0*sizeof(struct cec_pin));
          for(int _i0 = 0; _i0 < _len_pin0; _i0++) {
              int _len_pin__i0__error_inj0 = 1;
          pin[_i0].error_inj = (int *) malloc(_len_pin__i0__error_inj0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pin__i0__error_inj0; _j0++) {
            pin[_i0].error_inj[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pin[_i0].tx_msg.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pin__i0__tx_msg_msg0 = 1;
          pin[_i0].tx_msg.msg = (unsigned long *) malloc(_len_pin__i0__tx_msg_msg0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_pin__i0__tx_msg_msg0; _j0++) {
            pin[_i0].tx_msg.msg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = cec_pin_tx_error_inj(pin);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_pin0; _aux++) {
          free(pin[_aux].error_inj);
          }
          free(pin);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
