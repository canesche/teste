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
typedef  int u64 ;
typedef  scalar_t__ u16 ;
struct fcoe_bd_ctx {int buf_addr_lo; int buf_addr_hi; scalar_t__ flags; scalar_t__ buf_len; } ;
struct bnx2fc_cmd {TYPE_1__* bd_tbl; } ;
struct TYPE_2__ {struct fcoe_bd_ctx* bd_tbl; } ;

/* Variables and functions */
 int BNX2FC_BD_SPLIT_SZ ; 

__attribute__((used)) static int bnx2fc_split_bd(struct bnx2fc_cmd *io_req, u64 addr, int sg_len,
			   int bd_index)
{
	struct fcoe_bd_ctx *bd = io_req->bd_tbl->bd_tbl;
	int frag_size, sg_frags;

	sg_frags = 0;
	while (sg_len) {
		if (sg_len >= BNX2FC_BD_SPLIT_SZ)
			frag_size = BNX2FC_BD_SPLIT_SZ;
		else
			frag_size = sg_len;
		bd[bd_index + sg_frags].buf_addr_lo = addr & 0xffffffff;
		bd[bd_index + sg_frags].buf_addr_hi  = addr >> 32;
		bd[bd_index + sg_frags].buf_len = (u16)frag_size;
		bd[bd_index + sg_frags].flags = 0;

		addr += (u64) frag_size;
		sg_frags++;
		sg_len -= frag_size;
	}
	return sg_frags;

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
          int addr = 100;
          int sg_len = 100;
          int bd_index = 100;
          int _len_io_req0 = 1;
          struct bnx2fc_cmd * io_req = (struct bnx2fc_cmd *) malloc(_len_io_req0*sizeof(struct bnx2fc_cmd));
          for(int _i0 = 0; _i0 < _len_io_req0; _i0++) {
              int _len_io_req__i0__bd_tbl0 = 1;
          io_req[_i0].bd_tbl = (struct TYPE_2__ *) malloc(_len_io_req__i0__bd_tbl0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_io_req__i0__bd_tbl0; _j0++) {
              int _len_io_req__i0__bd_tbl_bd_tbl0 = 1;
          io_req[_i0].bd_tbl->bd_tbl = (struct fcoe_bd_ctx *) malloc(_len_io_req__i0__bd_tbl_bd_tbl0*sizeof(struct fcoe_bd_ctx));
          for(int _j0 = 0; _j0 < _len_io_req__i0__bd_tbl_bd_tbl0; _j0++) {
            io_req[_i0].bd_tbl->bd_tbl->buf_addr_lo = ((-2 * (next_i()%2)) + 1) * next_i();
        io_req[_i0].bd_tbl->bd_tbl->buf_addr_hi = ((-2 * (next_i()%2)) + 1) * next_i();
        io_req[_i0].bd_tbl->bd_tbl->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        io_req[_i0].bd_tbl->bd_tbl->buf_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = bnx2fc_split_bd(io_req,addr,sg_len,bd_index);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_io_req0; _aux++) {
          free(io_req[_aux].bd_tbl);
          }
          free(io_req);
        
        break;
    }
    // big-arr
    case 1:
    {
          int addr = 255;
          int sg_len = 255;
          int bd_index = 255;
          int _len_io_req0 = 65025;
          struct bnx2fc_cmd * io_req = (struct bnx2fc_cmd *) malloc(_len_io_req0*sizeof(struct bnx2fc_cmd));
          for(int _i0 = 0; _i0 < _len_io_req0; _i0++) {
              int _len_io_req__i0__bd_tbl0 = 1;
          io_req[_i0].bd_tbl = (struct TYPE_2__ *) malloc(_len_io_req__i0__bd_tbl0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_io_req__i0__bd_tbl0; _j0++) {
              int _len_io_req__i0__bd_tbl_bd_tbl0 = 1;
          io_req[_i0].bd_tbl->bd_tbl = (struct fcoe_bd_ctx *) malloc(_len_io_req__i0__bd_tbl_bd_tbl0*sizeof(struct fcoe_bd_ctx));
          for(int _j0 = 0; _j0 < _len_io_req__i0__bd_tbl_bd_tbl0; _j0++) {
            io_req[_i0].bd_tbl->bd_tbl->buf_addr_lo = ((-2 * (next_i()%2)) + 1) * next_i();
        io_req[_i0].bd_tbl->bd_tbl->buf_addr_hi = ((-2 * (next_i()%2)) + 1) * next_i();
        io_req[_i0].bd_tbl->bd_tbl->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        io_req[_i0].bd_tbl->bd_tbl->buf_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = bnx2fc_split_bd(io_req,addr,sg_len,bd_index);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_io_req0; _aux++) {
          free(io_req[_aux].bd_tbl);
          }
          free(io_req);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int addr = 10;
          int sg_len = 10;
          int bd_index = 10;
          int _len_io_req0 = 100;
          struct bnx2fc_cmd * io_req = (struct bnx2fc_cmd *) malloc(_len_io_req0*sizeof(struct bnx2fc_cmd));
          for(int _i0 = 0; _i0 < _len_io_req0; _i0++) {
              int _len_io_req__i0__bd_tbl0 = 1;
          io_req[_i0].bd_tbl = (struct TYPE_2__ *) malloc(_len_io_req__i0__bd_tbl0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_io_req__i0__bd_tbl0; _j0++) {
              int _len_io_req__i0__bd_tbl_bd_tbl0 = 1;
          io_req[_i0].bd_tbl->bd_tbl = (struct fcoe_bd_ctx *) malloc(_len_io_req__i0__bd_tbl_bd_tbl0*sizeof(struct fcoe_bd_ctx));
          for(int _j0 = 0; _j0 < _len_io_req__i0__bd_tbl_bd_tbl0; _j0++) {
            io_req[_i0].bd_tbl->bd_tbl->buf_addr_lo = ((-2 * (next_i()%2)) + 1) * next_i();
        io_req[_i0].bd_tbl->bd_tbl->buf_addr_hi = ((-2 * (next_i()%2)) + 1) * next_i();
        io_req[_i0].bd_tbl->bd_tbl->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        io_req[_i0].bd_tbl->bd_tbl->buf_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = bnx2fc_split_bd(io_req,addr,sg_len,bd_index);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_io_req0; _aux++) {
          free(io_req[_aux].bd_tbl);
          }
          free(io_req);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
