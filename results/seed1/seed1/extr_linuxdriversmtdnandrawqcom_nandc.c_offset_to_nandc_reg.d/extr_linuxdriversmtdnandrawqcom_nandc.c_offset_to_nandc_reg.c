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
struct nandc_regs {int /*<<< orphan*/  read_location3; int /*<<< orphan*/  read_location2; int /*<<< orphan*/  read_location1; int /*<<< orphan*/  read_location0; int /*<<< orphan*/  ecc_buf_cfg; int /*<<< orphan*/  orig_vld; int /*<<< orphan*/  vld; int /*<<< orphan*/  orig_cmd1; int /*<<< orphan*/  cmd1; int /*<<< orphan*/  clrreadstatus; int /*<<< orphan*/  ecc_bch_cfg; int /*<<< orphan*/  cfg1; int /*<<< orphan*/  cfg0; int /*<<< orphan*/  clrflashstatus; int /*<<< orphan*/  exec; int /*<<< orphan*/  chip_sel; int /*<<< orphan*/  addr1; int /*<<< orphan*/  addr0; int /*<<< orphan*/  cmd; } ;
typedef  int /*<<< orphan*/  __le32 ;

/* Variables and functions */
#define  NAND_ADDR0 146 
#define  NAND_ADDR1 145 
#define  NAND_DEV0_CFG0 144 
#define  NAND_DEV0_CFG1 143 
#define  NAND_DEV0_ECC_CFG 142 
#define  NAND_DEV_CMD1 141 
#define  NAND_DEV_CMD1_RESTORE 140 
#define  NAND_DEV_CMD_VLD 139 
#define  NAND_DEV_CMD_VLD_RESTORE 138 
#define  NAND_EBI2_ECC_BUF_CFG 137 
#define  NAND_EXEC_CMD 136 
#define  NAND_FLASH_CHIP_SELECT 135 
#define  NAND_FLASH_CMD 134 
#define  NAND_FLASH_STATUS 133 
#define  NAND_READ_LOCATION_0 132 
#define  NAND_READ_LOCATION_1 131 
#define  NAND_READ_LOCATION_2 130 
#define  NAND_READ_LOCATION_3 129 
#define  NAND_READ_STATUS 128 

__attribute__((used)) static __le32 *offset_to_nandc_reg(struct nandc_regs *regs, int offset)
{
	switch (offset) {
	case NAND_FLASH_CMD:
		return &regs->cmd;
	case NAND_ADDR0:
		return &regs->addr0;
	case NAND_ADDR1:
		return &regs->addr1;
	case NAND_FLASH_CHIP_SELECT:
		return &regs->chip_sel;
	case NAND_EXEC_CMD:
		return &regs->exec;
	case NAND_FLASH_STATUS:
		return &regs->clrflashstatus;
	case NAND_DEV0_CFG0:
		return &regs->cfg0;
	case NAND_DEV0_CFG1:
		return &regs->cfg1;
	case NAND_DEV0_ECC_CFG:
		return &regs->ecc_bch_cfg;
	case NAND_READ_STATUS:
		return &regs->clrreadstatus;
	case NAND_DEV_CMD1:
		return &regs->cmd1;
	case NAND_DEV_CMD1_RESTORE:
		return &regs->orig_cmd1;
	case NAND_DEV_CMD_VLD:
		return &regs->vld;
	case NAND_DEV_CMD_VLD_RESTORE:
		return &regs->orig_vld;
	case NAND_EBI2_ECC_BUF_CFG:
		return &regs->ecc_buf_cfg;
	case NAND_READ_LOCATION_0:
		return &regs->read_location0;
	case NAND_READ_LOCATION_1:
		return &regs->read_location1;
	case NAND_READ_LOCATION_2:
		return &regs->read_location2;
	case NAND_READ_LOCATION_3:
		return &regs->read_location3;
	default:
		return NULL;
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
          int offset = 100;
          int _len_regs0 = 1;
          struct nandc_regs * regs = (struct nandc_regs *) malloc(_len_regs0*sizeof(struct nandc_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].read_location3 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].read_location2 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].read_location1 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].read_location0 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].ecc_buf_cfg = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].orig_vld = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].vld = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].orig_cmd1 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].cmd1 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].clrreadstatus = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].ecc_bch_cfg = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].cfg1 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].cfg0 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].clrflashstatus = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].exec = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].chip_sel = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].addr1 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].addr0 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].cmd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = offset_to_nandc_reg(regs,offset);
          printf("%d\n", (*benchRet)); 
          free(regs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int offset = 255;
          int _len_regs0 = 65025;
          struct nandc_regs * regs = (struct nandc_regs *) malloc(_len_regs0*sizeof(struct nandc_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].read_location3 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].read_location2 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].read_location1 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].read_location0 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].ecc_buf_cfg = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].orig_vld = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].vld = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].orig_cmd1 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].cmd1 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].clrreadstatus = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].ecc_bch_cfg = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].cfg1 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].cfg0 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].clrflashstatus = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].exec = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].chip_sel = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].addr1 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].addr0 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].cmd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = offset_to_nandc_reg(regs,offset);
          printf("%d\n", (*benchRet)); 
          free(regs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int offset = 10;
          int _len_regs0 = 100;
          struct nandc_regs * regs = (struct nandc_regs *) malloc(_len_regs0*sizeof(struct nandc_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].read_location3 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].read_location2 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].read_location1 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].read_location0 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].ecc_buf_cfg = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].orig_vld = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].vld = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].orig_cmd1 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].cmd1 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].clrreadstatus = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].ecc_bch_cfg = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].cfg1 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].cfg0 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].clrflashstatus = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].exec = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].chip_sel = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].addr1 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].addr0 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].cmd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = offset_to_nandc_reg(regs,offset);
          printf("%d\n", (*benchRet)); 
          free(regs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
