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
typedef  scalar_t__ u32 ;
struct iscsi_bd {scalar_t__ buffer_length; } ;
struct TYPE_2__ {struct iscsi_bd* bd_tbl; } ;
struct bnx2i_cmd {TYPE_1__ io_tbl; } ;

/* Variables and functions */

__attribute__((used)) static void bnx2i_get_write_cmd_bd_idx(struct bnx2i_cmd *cmd, u32 buf_off,
				       u32 *start_bd_off, u32 *start_bd_idx)
{
	struct iscsi_bd *bd_tbl = cmd->io_tbl.bd_tbl;
	u32 cur_offset = 0;
	u32 cur_bd_idx = 0;

	if (buf_off) {
		while (buf_off >= (cur_offset + bd_tbl->buffer_length)) {
			cur_offset += bd_tbl->buffer_length;
			cur_bd_idx++;
			bd_tbl++;
		}
	}

	*start_bd_off = buf_off - cur_offset;
	*start_bd_idx = cur_bd_idx;
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
          long buf_off = 100;
          int _len_cmd0 = 1;
          struct bnx2i_cmd * cmd = (struct bnx2i_cmd *) malloc(_len_cmd0*sizeof(struct bnx2i_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              int _len_cmd__i0__io_tbl_bd_tbl0 = 1;
          cmd[_i0].io_tbl.bd_tbl = (struct iscsi_bd *) malloc(_len_cmd__i0__io_tbl_bd_tbl0*sizeof(struct iscsi_bd));
          for(int _j0 = 0; _j0 < _len_cmd__i0__io_tbl_bd_tbl0; _j0++) {
            cmd[_i0].io_tbl.bd_tbl->buffer_length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_start_bd_off0 = 1;
          long * start_bd_off = (long *) malloc(_len_start_bd_off0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_start_bd_off0; _i0++) {
            start_bd_off[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_start_bd_idx0 = 1;
          long * start_bd_idx = (long *) malloc(_len_start_bd_idx0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_start_bd_idx0; _i0++) {
            start_bd_idx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnx2i_get_write_cmd_bd_idx(cmd,buf_off,start_bd_off,start_bd_idx);
          free(cmd);
          free(start_bd_off);
          free(start_bd_idx);
        
        break;
    }
    // big-arr
    case 1:
    {
          long buf_off = 255;
          int _len_cmd0 = 65025;
          struct bnx2i_cmd * cmd = (struct bnx2i_cmd *) malloc(_len_cmd0*sizeof(struct bnx2i_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              int _len_cmd__i0__io_tbl_bd_tbl0 = 1;
          cmd[_i0].io_tbl.bd_tbl = (struct iscsi_bd *) malloc(_len_cmd__i0__io_tbl_bd_tbl0*sizeof(struct iscsi_bd));
          for(int _j0 = 0; _j0 < _len_cmd__i0__io_tbl_bd_tbl0; _j0++) {
            cmd[_i0].io_tbl.bd_tbl->buffer_length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_start_bd_off0 = 65025;
          long * start_bd_off = (long *) malloc(_len_start_bd_off0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_start_bd_off0; _i0++) {
            start_bd_off[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_start_bd_idx0 = 65025;
          long * start_bd_idx = (long *) malloc(_len_start_bd_idx0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_start_bd_idx0; _i0++) {
            start_bd_idx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnx2i_get_write_cmd_bd_idx(cmd,buf_off,start_bd_off,start_bd_idx);
          free(cmd);
          free(start_bd_off);
          free(start_bd_idx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long buf_off = 10;
          int _len_cmd0 = 100;
          struct bnx2i_cmd * cmd = (struct bnx2i_cmd *) malloc(_len_cmd0*sizeof(struct bnx2i_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              int _len_cmd__i0__io_tbl_bd_tbl0 = 1;
          cmd[_i0].io_tbl.bd_tbl = (struct iscsi_bd *) malloc(_len_cmd__i0__io_tbl_bd_tbl0*sizeof(struct iscsi_bd));
          for(int _j0 = 0; _j0 < _len_cmd__i0__io_tbl_bd_tbl0; _j0++) {
            cmd[_i0].io_tbl.bd_tbl->buffer_length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_start_bd_off0 = 100;
          long * start_bd_off = (long *) malloc(_len_start_bd_off0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_start_bd_off0; _i0++) {
            start_bd_off[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_start_bd_idx0 = 100;
          long * start_bd_idx = (long *) malloc(_len_start_bd_idx0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_start_bd_idx0; _i0++) {
            start_bd_idx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnx2i_get_write_cmd_bd_idx(cmd,buf_off,start_bd_off,start_bd_idx);
          free(cmd);
          free(start_bd_off);
          free(start_bd_idx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
