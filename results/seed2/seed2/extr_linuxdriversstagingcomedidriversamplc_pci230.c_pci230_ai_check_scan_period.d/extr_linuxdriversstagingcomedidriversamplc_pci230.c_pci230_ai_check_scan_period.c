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
struct comedi_cmd {unsigned int chanlist_len; unsigned int convert_arg; unsigned int scan_begin_arg; } ;

/* Variables and functions */
 unsigned int UINT_MAX ; 

__attribute__((used)) static int pci230_ai_check_scan_period(struct comedi_cmd *cmd)
{
	unsigned int min_scan_period, chanlist_len;
	int err = 0;

	chanlist_len = cmd->chanlist_len;
	if (cmd->chanlist_len == 0)
		chanlist_len = 1;

	min_scan_period = chanlist_len * cmd->convert_arg;
	if (min_scan_period < chanlist_len ||
	    min_scan_period < cmd->convert_arg) {
		/* Arithmetic overflow. */
		min_scan_period = UINT_MAX;
		err++;
	}
	if (cmd->scan_begin_arg < min_scan_period) {
		cmd->scan_begin_arg = min_scan_period;
		err++;
	}

	return !err;
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
          int _len_cmd0 = 1;
          struct comedi_cmd * cmd = (struct comedi_cmd *) malloc(_len_cmd0*sizeof(struct comedi_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].chanlist_len = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].convert_arg = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].scan_begin_arg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pci230_ai_check_scan_period(cmd);
          printf("%d\n", benchRet); 
          free(cmd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cmd0 = 65025;
          struct comedi_cmd * cmd = (struct comedi_cmd *) malloc(_len_cmd0*sizeof(struct comedi_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].chanlist_len = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].convert_arg = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].scan_begin_arg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pci230_ai_check_scan_period(cmd);
          printf("%d\n", benchRet); 
          free(cmd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cmd0 = 100;
          struct comedi_cmd * cmd = (struct comedi_cmd *) malloc(_len_cmd0*sizeof(struct comedi_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].chanlist_len = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].convert_arg = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].scan_begin_arg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pci230_ai_check_scan_period(cmd);
          printf("%d\n", benchRet); 
          free(cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
