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
typedef  size_t u8 ;
typedef  int u32 ;
struct vub300_mmc_host {int total_offload_count; TYPE_1__* fn; } ;
struct offload_registers_access {size_t* command_byte; int* Respond_Byte; } ;
struct mmc_command {int arg; size_t* resp; } ;
struct TYPE_2__ {int offload_point; size_t offload_count; struct offload_registers_access* reg; } ;

/* Variables and functions */
 int MAXREGMASK ; 

__attribute__((used)) static int examine_cyclic_buffer(struct vub300_mmc_host *vub300,
				 struct mmc_command *cmd, u8 Function)
{
	/* cmd_mutex is held by vub300_mmc_request */
	u8 cmd0 = 0xFF & (cmd->arg >> 24);
	u8 cmd1 = 0xFF & (cmd->arg >> 16);
	u8 cmd2 = 0xFF & (cmd->arg >> 8);
	u8 cmd3 = 0xFF & (cmd->arg >> 0);
	int first = MAXREGMASK & vub300->fn[Function].offload_point;
	struct offload_registers_access *rf = &vub300->fn[Function].reg[first];
	if (cmd0 == rf->command_byte[0] &&
	    cmd1 == rf->command_byte[1] &&
	    cmd2 == rf->command_byte[2] &&
	    cmd3 == rf->command_byte[3]) {
		u8 checksum = 0x00;
		cmd->resp[1] = checksum << 24;
		cmd->resp[0] = (rf->Respond_Byte[0] << 24)
			| (rf->Respond_Byte[1] << 16)
			| (rf->Respond_Byte[2] << 8)
			| (rf->Respond_Byte[3] << 0);
		vub300->fn[Function].offload_point += 1;
		vub300->fn[Function].offload_count -= 1;
		vub300->total_offload_count -= 1;
		return 1;
	} else {
		int delta = 1;	/* because it does not match the first one */
		u8 register_count = vub300->fn[Function].offload_count - 1;
		u32 register_point = vub300->fn[Function].offload_point + 1;
		while (0 < register_count) {
			int point = MAXREGMASK & register_point;
			struct offload_registers_access *r =
				&vub300->fn[Function].reg[point];
			if (cmd0 == r->command_byte[0] &&
			    cmd1 == r->command_byte[1] &&
			    cmd2 == r->command_byte[2] &&
			    cmd3 == r->command_byte[3]) {
				u8 checksum = 0x00;
				cmd->resp[1] = checksum << 24;
				cmd->resp[0] = (r->Respond_Byte[0] << 24)
					| (r->Respond_Byte[1] << 16)
					| (r->Respond_Byte[2] << 8)
					| (r->Respond_Byte[3] << 0);
				vub300->fn[Function].offload_point += delta;
				vub300->fn[Function].offload_count -= delta;
				vub300->total_offload_count -= delta;
				return 1;
			} else {
				register_point += 1;
				register_count -= 1;
				delta += 1;
				continue;
			}
		}
		return 0;
	}
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
          unsigned long Function = 100;
          int _len_vub3000 = 1;
          struct vub300_mmc_host * vub300 = (struct vub300_mmc_host *) malloc(_len_vub3000*sizeof(struct vub300_mmc_host));
          for(int _i0 = 0; _i0 < _len_vub3000; _i0++) {
            vub300[_i0].total_offload_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vub300__i0__fn0 = 1;
          vub300[_i0].fn = (struct TYPE_2__ *) malloc(_len_vub300__i0__fn0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vub300__i0__fn0; _j0++) {
            vub300[_i0].fn->offload_point = ((-2 * (next_i()%2)) + 1) * next_i();
        vub300[_i0].fn->offload_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vub300__i0__fn_reg0 = 1;
          vub300[_i0].fn->reg = (struct offload_registers_access *) malloc(_len_vub300__i0__fn_reg0*sizeof(struct offload_registers_access));
          for(int _j0 = 0; _j0 < _len_vub300__i0__fn_reg0; _j0++) {
              int _len_vub300__i0__fn_reg_command_byte0 = 1;
          vub300[_i0].fn->reg->command_byte = (unsigned long *) malloc(_len_vub300__i0__fn_reg_command_byte0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_vub300__i0__fn_reg_command_byte0; _j0++) {
            vub300[_i0].fn->reg->command_byte[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vub300__i0__fn_reg_Respond_Byte0 = 1;
          vub300[_i0].fn->reg->Respond_Byte = (int *) malloc(_len_vub300__i0__fn_reg_Respond_Byte0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vub300__i0__fn_reg_Respond_Byte0; _j0++) {
            vub300[_i0].fn->reg->Respond_Byte[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_cmd0 = 1;
          struct mmc_command * cmd = (struct mmc_command *) malloc(_len_cmd0*sizeof(struct mmc_command));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].arg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd__i0__resp0 = 1;
          cmd[_i0].resp = (unsigned long *) malloc(_len_cmd__i0__resp0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_cmd__i0__resp0; _j0++) {
            cmd[_i0].resp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = examine_cyclic_buffer(vub300,cmd,Function);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vub3000; _aux++) {
          free(vub300[_aux].fn);
          }
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
          unsigned long Function = 255;
          int _len_vub3000 = 65025;
          struct vub300_mmc_host * vub300 = (struct vub300_mmc_host *) malloc(_len_vub3000*sizeof(struct vub300_mmc_host));
          for(int _i0 = 0; _i0 < _len_vub3000; _i0++) {
            vub300[_i0].total_offload_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vub300__i0__fn0 = 1;
          vub300[_i0].fn = (struct TYPE_2__ *) malloc(_len_vub300__i0__fn0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vub300__i0__fn0; _j0++) {
            vub300[_i0].fn->offload_point = ((-2 * (next_i()%2)) + 1) * next_i();
        vub300[_i0].fn->offload_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vub300__i0__fn_reg0 = 1;
          vub300[_i0].fn->reg = (struct offload_registers_access *) malloc(_len_vub300__i0__fn_reg0*sizeof(struct offload_registers_access));
          for(int _j0 = 0; _j0 < _len_vub300__i0__fn_reg0; _j0++) {
              int _len_vub300__i0__fn_reg_command_byte0 = 1;
          vub300[_i0].fn->reg->command_byte = (unsigned long *) malloc(_len_vub300__i0__fn_reg_command_byte0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_vub300__i0__fn_reg_command_byte0; _j0++) {
            vub300[_i0].fn->reg->command_byte[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vub300__i0__fn_reg_Respond_Byte0 = 1;
          vub300[_i0].fn->reg->Respond_Byte = (int *) malloc(_len_vub300__i0__fn_reg_Respond_Byte0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vub300__i0__fn_reg_Respond_Byte0; _j0++) {
            vub300[_i0].fn->reg->Respond_Byte[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_cmd0 = 65025;
          struct mmc_command * cmd = (struct mmc_command *) malloc(_len_cmd0*sizeof(struct mmc_command));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].arg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd__i0__resp0 = 1;
          cmd[_i0].resp = (unsigned long *) malloc(_len_cmd__i0__resp0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_cmd__i0__resp0; _j0++) {
            cmd[_i0].resp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = examine_cyclic_buffer(vub300,cmd,Function);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vub3000; _aux++) {
          free(vub300[_aux].fn);
          }
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
          unsigned long Function = 10;
          int _len_vub3000 = 100;
          struct vub300_mmc_host * vub300 = (struct vub300_mmc_host *) malloc(_len_vub3000*sizeof(struct vub300_mmc_host));
          for(int _i0 = 0; _i0 < _len_vub3000; _i0++) {
            vub300[_i0].total_offload_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vub300__i0__fn0 = 1;
          vub300[_i0].fn = (struct TYPE_2__ *) malloc(_len_vub300__i0__fn0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vub300__i0__fn0; _j0++) {
            vub300[_i0].fn->offload_point = ((-2 * (next_i()%2)) + 1) * next_i();
        vub300[_i0].fn->offload_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vub300__i0__fn_reg0 = 1;
          vub300[_i0].fn->reg = (struct offload_registers_access *) malloc(_len_vub300__i0__fn_reg0*sizeof(struct offload_registers_access));
          for(int _j0 = 0; _j0 < _len_vub300__i0__fn_reg0; _j0++) {
              int _len_vub300__i0__fn_reg_command_byte0 = 1;
          vub300[_i0].fn->reg->command_byte = (unsigned long *) malloc(_len_vub300__i0__fn_reg_command_byte0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_vub300__i0__fn_reg_command_byte0; _j0++) {
            vub300[_i0].fn->reg->command_byte[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vub300__i0__fn_reg_Respond_Byte0 = 1;
          vub300[_i0].fn->reg->Respond_Byte = (int *) malloc(_len_vub300__i0__fn_reg_Respond_Byte0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vub300__i0__fn_reg_Respond_Byte0; _j0++) {
            vub300[_i0].fn->reg->Respond_Byte[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_cmd0 = 100;
          struct mmc_command * cmd = (struct mmc_command *) malloc(_len_cmd0*sizeof(struct mmc_command));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].arg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd__i0__resp0 = 1;
          cmd[_i0].resp = (unsigned long *) malloc(_len_cmd__i0__resp0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_cmd__i0__resp0; _j0++) {
            cmd[_i0].resp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = examine_cyclic_buffer(vub300,cmd,Function);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vub3000; _aux++) {
          free(vub300[_aux].fn);
          }
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
