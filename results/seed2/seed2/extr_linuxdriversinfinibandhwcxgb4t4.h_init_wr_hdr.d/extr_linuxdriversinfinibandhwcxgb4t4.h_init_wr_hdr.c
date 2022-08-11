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
struct TYPE_2__ {void* len16; scalar_t__* r1; int /*<<< orphan*/  wrid; void* flags; void* opcode; } ;
union t4_wr {TYPE_1__ send; } ;
typedef  void* u8 ;
typedef  int /*<<< orphan*/  u16 ;
typedef  enum fw_wr_opcodes { ____Placeholder_fw_wr_opcodes } fw_wr_opcodes ;

/* Variables and functions */

__attribute__((used)) static inline void init_wr_hdr(union t4_wr *wqe, u16 wrid,
			       enum fw_wr_opcodes opcode, u8 flags, u8 len16)
{
	wqe->send.opcode = (u8)opcode;
	wqe->send.flags = flags;
	wqe->send.wrid = wrid;
	wqe->send.r1[0] = 0;
	wqe->send.r1[1] = 0;
	wqe->send.r1[2] = 0;
	wqe->send.len16 = len16;
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
          int wrid = 100;
          enum fw_wr_opcodes opcode = 0;
          int _len_wqe0 = 1;
          union t4_wr * wqe = (union t4_wr *) malloc(_len_wqe0*sizeof(union t4_wr));
          for(int _i0 = 0; _i0 < _len_wqe0; _i0++) {
            wqe[_i0] = 0;
          }
          void * flags;
          void * len16;
          init_wr_hdr(wqe,wrid,opcode,flags,len16);
          free(wqe);
        
        break;
    }
    // big-arr
    case 1:
    {
          int wrid = 255;
          enum fw_wr_opcodes opcode = 0;
          int _len_wqe0 = 65025;
          union t4_wr * wqe = (union t4_wr *) malloc(_len_wqe0*sizeof(union t4_wr));
          for(int _i0 = 0; _i0 < _len_wqe0; _i0++) {
            wqe[_i0] = 0;
          }
          void * flags;
          void * len16;
          init_wr_hdr(wqe,wrid,opcode,flags,len16);
          free(wqe);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int wrid = 10;
          enum fw_wr_opcodes opcode = 0;
          int _len_wqe0 = 100;
          union t4_wr * wqe = (union t4_wr *) malloc(_len_wqe0*sizeof(union t4_wr));
          for(int _i0 = 0; _i0 < _len_wqe0; _i0++) {
            wqe[_i0] = 0;
          }
          void * flags;
          void * len16;
          init_wr_hdr(wqe,wrid,opcode,flags,len16);
          free(wqe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
