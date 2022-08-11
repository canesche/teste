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
typedef  size_t u32 ;
struct TYPE_4__ {size_t cmds_count; TYPE_1__* cmds; } ;
struct brcm_message {TYPE_2__ sba; } ;
struct TYPE_3__ {int flags; } ;

/* Variables and functions */
 int BRCM_SBA_CMD_HAS_OUTPUT ; 
 int BRCM_SBA_CMD_HAS_RESP ; 
 int BRCM_SBA_CMD_TYPE_B ; 
 int BRCM_SBA_CMD_TYPE_C ; 

__attribute__((used)) static u32 flexrm_sba_estimate_nonheader_desc_count(struct brcm_message *msg)
{
	u32 i, cnt;

	cnt = 0;
	for (i = 0; i < msg->sba.cmds_count; i++) {
		cnt++;

		if ((msg->sba.cmds[i].flags & BRCM_SBA_CMD_TYPE_B) ||
		    (msg->sba.cmds[i].flags & BRCM_SBA_CMD_TYPE_C))
			cnt++;

		if (msg->sba.cmds[i].flags & BRCM_SBA_CMD_HAS_RESP)
			cnt++;

		if (msg->sba.cmds[i].flags & BRCM_SBA_CMD_HAS_OUTPUT)
			cnt++;
	}

	return cnt;
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
          int _len_msg0 = 1;
          struct brcm_message * msg = (struct brcm_message *) malloc(_len_msg0*sizeof(struct brcm_message));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0].sba.cmds_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_msg__i0__sba_cmds0 = 1;
          msg[_i0].sba.cmds = (struct TYPE_3__ *) malloc(_len_msg__i0__sba_cmds0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_msg__i0__sba_cmds0; _j0++) {
            msg[_i0].sba.cmds->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = flexrm_sba_estimate_nonheader_desc_count(msg);
          printf("%lu\n", benchRet); 
          free(msg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_msg0 = 65025;
          struct brcm_message * msg = (struct brcm_message *) malloc(_len_msg0*sizeof(struct brcm_message));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0].sba.cmds_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_msg__i0__sba_cmds0 = 1;
          msg[_i0].sba.cmds = (struct TYPE_3__ *) malloc(_len_msg__i0__sba_cmds0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_msg__i0__sba_cmds0; _j0++) {
            msg[_i0].sba.cmds->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = flexrm_sba_estimate_nonheader_desc_count(msg);
          printf("%lu\n", benchRet); 
          free(msg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_msg0 = 100;
          struct brcm_message * msg = (struct brcm_message *) malloc(_len_msg0*sizeof(struct brcm_message));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0].sba.cmds_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_msg__i0__sba_cmds0 = 1;
          msg[_i0].sba.cmds = (struct TYPE_3__ *) malloc(_len_msg__i0__sba_cmds0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_msg__i0__sba_cmds0; _j0++) {
            msg[_i0].sba.cmds->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = flexrm_sba_estimate_nonheader_desc_count(msg);
          printf("%lu\n", benchRet); 
          free(msg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
