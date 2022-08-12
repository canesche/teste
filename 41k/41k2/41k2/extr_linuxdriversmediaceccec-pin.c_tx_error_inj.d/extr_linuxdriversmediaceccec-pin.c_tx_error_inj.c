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
typedef  int /*<<< orphan*/  u8 ;
struct cec_pin {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static bool tx_error_inj(struct cec_pin *pin, unsigned int mode_offset,
			 int arg_idx, u8 *arg)
{
#ifdef CONFIG_CEC_PIN_ERROR_INJ
	u16 cmd = cec_pin_tx_error_inj(pin);
	u64 e = pin->error_inj[cmd];
	unsigned int mode = (e >> mode_offset) & CEC_ERROR_INJ_MODE_MASK;

	if (arg_idx >= 0) {
		u8 pos = pin->error_inj_args[cmd][arg_idx];

		if (arg)
			*arg = pos;
		else if (pos != pin->tx_bit)
			return false;
	}

	switch (mode) {
	case CEC_ERROR_INJ_MODE_ONCE:
		pin->error_inj[cmd] &=
			~(CEC_ERROR_INJ_MODE_MASK << mode_offset);
		return true;
	case CEC_ERROR_INJ_MODE_ALWAYS:
		return true;
	case CEC_ERROR_INJ_MODE_TOGGLE:
		return pin->tx_toggle;
	default:
		return false;
	}
#else
	return false;
#endif
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
          unsigned int mode_offset = 100;
          int arg_idx = 100;
          int _len_pin0 = 1;
          struct cec_pin * pin = (struct cec_pin *) malloc(_len_pin0*sizeof(struct cec_pin));
          for(int _i0 = 0; _i0 < _len_pin0; _i0++) {
            pin[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_arg0 = 1;
          int * arg = (int *) malloc(_len_arg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
            arg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tx_error_inj(pin,mode_offset,arg_idx,arg);
          printf("%d\n", benchRet); 
          free(pin);
          free(arg);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int mode_offset = 255;
          int arg_idx = 255;
          int _len_pin0 = 65025;
          struct cec_pin * pin = (struct cec_pin *) malloc(_len_pin0*sizeof(struct cec_pin));
          for(int _i0 = 0; _i0 < _len_pin0; _i0++) {
            pin[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_arg0 = 65025;
          int * arg = (int *) malloc(_len_arg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
            arg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tx_error_inj(pin,mode_offset,arg_idx,arg);
          printf("%d\n", benchRet); 
          free(pin);
          free(arg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int mode_offset = 10;
          int arg_idx = 10;
          int _len_pin0 = 100;
          struct cec_pin * pin = (struct cec_pin *) malloc(_len_pin0*sizeof(struct cec_pin));
          for(int _i0 = 0; _i0 < _len_pin0; _i0++) {
            pin[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_arg0 = 100;
          int * arg = (int *) malloc(_len_arg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
            arg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tx_error_inj(pin,mode_offset,arg_idx,arg);
          printf("%d\n", benchRet); 
          free(pin);
          free(arg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
