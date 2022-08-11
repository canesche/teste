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
typedef  int u8 ;
struct TYPE_3__ {int* command_response; } ;
struct TYPE_4__ {TYPE_1__ response; } ;
struct vub300_mmc_host {int resp_len; TYPE_2__ resp; } ;
struct mmc_command {int* resp; int opcode; } ;

/* Variables and functions */

__attribute__((used)) static void construct_request_response(struct vub300_mmc_host *vub300,
				       struct mmc_command *cmd)
{
	int resp_len = vub300->resp_len;
	int less_cmd = (17 == resp_len) ? resp_len : resp_len - 1;
	int bytes = 3 & less_cmd;
	int words = less_cmd >> 2;
	u8 *r = vub300->resp.response.command_response;
	if (bytes == 3) {
		cmd->resp[words] = (r[1 + (words << 2)] << 24)
			| (r[2 + (words << 2)] << 16)
			| (r[3 + (words << 2)] << 8);
	} else if (bytes == 2) {
		cmd->resp[words] = (r[1 + (words << 2)] << 24)
			| (r[2 + (words << 2)] << 16);
	} else if (bytes == 1) {
		cmd->resp[words] = (r[1 + (words << 2)] << 24);
	}
	while (words-- > 0) {
		cmd->resp[words] = (r[1 + (words << 2)] << 24)
			| (r[2 + (words << 2)] << 16)
			| (r[3 + (words << 2)] << 8)
			| (r[4 + (words << 2)] << 0);
	}
	if ((cmd->opcode == 53) && (0x000000FF & cmd->resp[0]))
		cmd->resp[0] &= 0xFFFFFF00;
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
          int _len_vub3000 = 1;
          struct vub300_mmc_host * vub300 = (struct vub300_mmc_host *) malloc(_len_vub3000*sizeof(struct vub300_mmc_host));
          for(int _i0 = 0; _i0 < _len_vub3000; _i0++) {
            vub300[_i0].resp_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vub300__i0__resp_response_command_response0 = 1;
          vub300[_i0].resp.response.command_response = (int *) malloc(_len_vub300__i0__resp_response_command_response0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vub300__i0__resp_response_command_response0; _j0++) {
            vub300[_i0].resp.response.command_response[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cmd0 = 1;
          struct mmc_command * cmd = (struct mmc_command *) malloc(_len_cmd0*sizeof(struct mmc_command));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              int _len_cmd__i0__resp0 = 1;
          cmd[_i0].resp = (int *) malloc(_len_cmd__i0__resp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cmd__i0__resp0; _j0++) {
            cmd[_i0].resp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cmd[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          construct_request_response(vub300,cmd);
          free(vub300);
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].resp);
          }
          free(cmd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vub3000 = 65025;
          struct vub300_mmc_host * vub300 = (struct vub300_mmc_host *) malloc(_len_vub3000*sizeof(struct vub300_mmc_host));
          for(int _i0 = 0; _i0 < _len_vub3000; _i0++) {
            vub300[_i0].resp_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vub300__i0__resp_response_command_response0 = 1;
          vub300[_i0].resp.response.command_response = (int *) malloc(_len_vub300__i0__resp_response_command_response0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vub300__i0__resp_response_command_response0; _j0++) {
            vub300[_i0].resp.response.command_response[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cmd0 = 65025;
          struct mmc_command * cmd = (struct mmc_command *) malloc(_len_cmd0*sizeof(struct mmc_command));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              int _len_cmd__i0__resp0 = 1;
          cmd[_i0].resp = (int *) malloc(_len_cmd__i0__resp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cmd__i0__resp0; _j0++) {
            cmd[_i0].resp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cmd[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          construct_request_response(vub300,cmd);
          free(vub300);
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].resp);
          }
          free(cmd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vub3000 = 100;
          struct vub300_mmc_host * vub300 = (struct vub300_mmc_host *) malloc(_len_vub3000*sizeof(struct vub300_mmc_host));
          for(int _i0 = 0; _i0 < _len_vub3000; _i0++) {
            vub300[_i0].resp_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vub300__i0__resp_response_command_response0 = 1;
          vub300[_i0].resp.response.command_response = (int *) malloc(_len_vub300__i0__resp_response_command_response0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vub300__i0__resp_response_command_response0; _j0++) {
            vub300[_i0].resp.response.command_response[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cmd0 = 100;
          struct mmc_command * cmd = (struct mmc_command *) malloc(_len_cmd0*sizeof(struct mmc_command));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              int _len_cmd__i0__resp0 = 1;
          cmd[_i0].resp = (int *) malloc(_len_cmd__i0__resp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cmd__i0__resp0; _j0++) {
            cmd[_i0].resp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cmd[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          construct_request_response(vub300,cmd);
          free(vub300);
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].resp);
          }
          free(cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
