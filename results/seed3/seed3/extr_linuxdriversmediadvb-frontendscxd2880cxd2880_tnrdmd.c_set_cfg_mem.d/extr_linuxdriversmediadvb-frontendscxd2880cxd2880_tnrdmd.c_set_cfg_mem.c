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
struct cxd2880_tnrdmd {size_t cfg_mem_last_entry; TYPE_1__* cfg_mem; } ;
typedef  enum cxd2880_io_tgt { ____Placeholder_cxd2880_io_tgt } cxd2880_io_tgt ;
struct TYPE_2__ {int tgt; size_t bank; size_t address; size_t value; size_t bit_mask; } ;

/* Variables and functions */
 scalar_t__ CXD2880_TNRDMD_MAX_CFG_MEM_COUNT ; 
 int EINVAL ; 
 int ENOMEM ; 

__attribute__((used)) static int set_cfg_mem(struct cxd2880_tnrdmd *tnr_dmd,
		       enum cxd2880_io_tgt tgt,
		       u8 bank, u8 address, u8 value, u8 bit_mask)
{
	u8 i;
	u8 value_stored = 0;

	if (!tnr_dmd)
		return -EINVAL;

	for (i = 0; i < tnr_dmd->cfg_mem_last_entry; i++) {
		if (value_stored == 0 &&
		    tnr_dmd->cfg_mem[i].tgt == tgt &&
		    tnr_dmd->cfg_mem[i].bank == bank &&
		    tnr_dmd->cfg_mem[i].address == address) {
			tnr_dmd->cfg_mem[i].value &= ~bit_mask;
			tnr_dmd->cfg_mem[i].value |= (value & bit_mask);

			tnr_dmd->cfg_mem[i].bit_mask |= bit_mask;

			value_stored = 1;
		}
	}

	if (value_stored)
		return 0;

	if (tnr_dmd->cfg_mem_last_entry < CXD2880_TNRDMD_MAX_CFG_MEM_COUNT) {
		tnr_dmd->cfg_mem[tnr_dmd->cfg_mem_last_entry].tgt = tgt;
		tnr_dmd->cfg_mem[tnr_dmd->cfg_mem_last_entry].bank = bank;
		tnr_dmd->cfg_mem[tnr_dmd->cfg_mem_last_entry].address = address;
		tnr_dmd->cfg_mem[tnr_dmd->cfg_mem_last_entry].value = (value & bit_mask);
		tnr_dmd->cfg_mem[tnr_dmd->cfg_mem_last_entry].bit_mask = bit_mask;
		tnr_dmd->cfg_mem_last_entry++;
	} else {
		return -ENOMEM;
	}

	return 0;
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
          enum cxd2880_io_tgt tgt = 0;
          unsigned long bank = 100;
          unsigned long address = 100;
          unsigned long value = 100;
          unsigned long bit_mask = 100;
          int _len_tnr_dmd0 = 1;
          struct cxd2880_tnrdmd * tnr_dmd = (struct cxd2880_tnrdmd *) malloc(_len_tnr_dmd0*sizeof(struct cxd2880_tnrdmd));
          for(int _i0 = 0; _i0 < _len_tnr_dmd0; _i0++) {
            tnr_dmd[_i0].cfg_mem_last_entry = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tnr_dmd__i0__cfg_mem0 = 1;
          tnr_dmd[_i0].cfg_mem = (struct TYPE_2__ *) malloc(_len_tnr_dmd__i0__cfg_mem0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_tnr_dmd__i0__cfg_mem0; _j0++) {
            tnr_dmd[_i0].cfg_mem->tgt = ((-2 * (next_i()%2)) + 1) * next_i();
        tnr_dmd[_i0].cfg_mem->bank = ((-2 * (next_i()%2)) + 1) * next_i();
        tnr_dmd[_i0].cfg_mem->address = ((-2 * (next_i()%2)) + 1) * next_i();
        tnr_dmd[_i0].cfg_mem->value = ((-2 * (next_i()%2)) + 1) * next_i();
        tnr_dmd[_i0].cfg_mem->bit_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = set_cfg_mem(tnr_dmd,tgt,bank,address,value,bit_mask);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tnr_dmd0; _aux++) {
          free(tnr_dmd[_aux].cfg_mem);
          }
          free(tnr_dmd);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum cxd2880_io_tgt tgt = 0;
          unsigned long bank = 255;
          unsigned long address = 255;
          unsigned long value = 255;
          unsigned long bit_mask = 255;
          int _len_tnr_dmd0 = 65025;
          struct cxd2880_tnrdmd * tnr_dmd = (struct cxd2880_tnrdmd *) malloc(_len_tnr_dmd0*sizeof(struct cxd2880_tnrdmd));
          for(int _i0 = 0; _i0 < _len_tnr_dmd0; _i0++) {
            tnr_dmd[_i0].cfg_mem_last_entry = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tnr_dmd__i0__cfg_mem0 = 1;
          tnr_dmd[_i0].cfg_mem = (struct TYPE_2__ *) malloc(_len_tnr_dmd__i0__cfg_mem0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_tnr_dmd__i0__cfg_mem0; _j0++) {
            tnr_dmd[_i0].cfg_mem->tgt = ((-2 * (next_i()%2)) + 1) * next_i();
        tnr_dmd[_i0].cfg_mem->bank = ((-2 * (next_i()%2)) + 1) * next_i();
        tnr_dmd[_i0].cfg_mem->address = ((-2 * (next_i()%2)) + 1) * next_i();
        tnr_dmd[_i0].cfg_mem->value = ((-2 * (next_i()%2)) + 1) * next_i();
        tnr_dmd[_i0].cfg_mem->bit_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = set_cfg_mem(tnr_dmd,tgt,bank,address,value,bit_mask);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tnr_dmd0; _aux++) {
          free(tnr_dmd[_aux].cfg_mem);
          }
          free(tnr_dmd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum cxd2880_io_tgt tgt = 0;
          unsigned long bank = 10;
          unsigned long address = 10;
          unsigned long value = 10;
          unsigned long bit_mask = 10;
          int _len_tnr_dmd0 = 100;
          struct cxd2880_tnrdmd * tnr_dmd = (struct cxd2880_tnrdmd *) malloc(_len_tnr_dmd0*sizeof(struct cxd2880_tnrdmd));
          for(int _i0 = 0; _i0 < _len_tnr_dmd0; _i0++) {
            tnr_dmd[_i0].cfg_mem_last_entry = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tnr_dmd__i0__cfg_mem0 = 1;
          tnr_dmd[_i0].cfg_mem = (struct TYPE_2__ *) malloc(_len_tnr_dmd__i0__cfg_mem0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_tnr_dmd__i0__cfg_mem0; _j0++) {
            tnr_dmd[_i0].cfg_mem->tgt = ((-2 * (next_i()%2)) + 1) * next_i();
        tnr_dmd[_i0].cfg_mem->bank = ((-2 * (next_i()%2)) + 1) * next_i();
        tnr_dmd[_i0].cfg_mem->address = ((-2 * (next_i()%2)) + 1) * next_i();
        tnr_dmd[_i0].cfg_mem->value = ((-2 * (next_i()%2)) + 1) * next_i();
        tnr_dmd[_i0].cfg_mem->bit_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = set_cfg_mem(tnr_dmd,tgt,bank,address,value,bit_mask);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tnr_dmd0; _aux++) {
          free(tnr_dmd[_aux].cfg_mem);
          }
          free(tnr_dmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
