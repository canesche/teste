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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int u8 ;
typedef  int u32 ;
struct TYPE_5__ {int abs_pf_id; } ;
struct TYPE_6__ {TYPE_1__ common; } ;
struct qedi_ctx {TYPE_4__* iscsi_image; TYPE_2__ dev_info; } ;
struct nvm_iscsi_block {int id; } ;
struct TYPE_7__ {struct nvm_iscsi_block* block; } ;
struct TYPE_8__ {TYPE_3__ iscsi_cfg; } ;

/* Variables and functions */
 int NUM_OF_ISCSI_PF_SUPPORTED ; 
 int NVM_ISCSI_CFG_BLK_CTRL_FLAG_IS_NOT_EMPTY ; 
 int NVM_ISCSI_CFG_BLK_CTRL_FLAG_MASK ; 
 int NVM_ISCSI_CFG_BLK_CTRL_FLAG_OFFSET ; 
 int NVM_ISCSI_CFG_BLK_CTRL_FLAG_PF_MAPPED ; 
 int NVM_ISCSI_CFG_BLK_MAPPED_PF_ID_MASK ; 
 int NVM_ISCSI_CFG_BLK_MAPPED_PF_ID_OFFSET ; 

__attribute__((used)) static struct nvm_iscsi_block *
qedi_get_nvram_block(struct qedi_ctx *qedi)
{
	int i;
	u8 pf;
	u32 flags;
	struct nvm_iscsi_block *block;

	pf = qedi->dev_info.common.abs_pf_id;
	block = &qedi->iscsi_image->iscsi_cfg.block[0];
	for (i = 0; i < NUM_OF_ISCSI_PF_SUPPORTED; i++, block++) {
		flags = ((block->id) & NVM_ISCSI_CFG_BLK_CTRL_FLAG_MASK) >>
			NVM_ISCSI_CFG_BLK_CTRL_FLAG_OFFSET;
		if (flags & (NVM_ISCSI_CFG_BLK_CTRL_FLAG_IS_NOT_EMPTY |
				NVM_ISCSI_CFG_BLK_CTRL_FLAG_PF_MAPPED) &&
			(pf == (block->id & NVM_ISCSI_CFG_BLK_MAPPED_PF_ID_MASK)
				>> NVM_ISCSI_CFG_BLK_MAPPED_PF_ID_OFFSET))
			return block;
	}
	return NULL;
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
          int _len_qedi0 = 1;
          struct qedi_ctx * qedi = (struct qedi_ctx *) malloc(_len_qedi0*sizeof(struct qedi_ctx));
          for(int _i0 = 0; _i0 < _len_qedi0; _i0++) {
              int _len_qedi__i0__iscsi_image0 = 1;
          qedi[_i0].iscsi_image = (struct TYPE_8__ *) malloc(_len_qedi__i0__iscsi_image0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_qedi__i0__iscsi_image0; _j0++) {
              int _len_qedi__i0__iscsi_image_iscsi_cfg_block0 = 1;
          qedi[_i0].iscsi_image->iscsi_cfg.block = (struct nvm_iscsi_block *) malloc(_len_qedi__i0__iscsi_image_iscsi_cfg_block0*sizeof(struct nvm_iscsi_block));
          for(int _j0 = 0; _j0 < _len_qedi__i0__iscsi_image_iscsi_cfg_block0; _j0++) {
            qedi[_i0].iscsi_image->iscsi_cfg.block->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        qedi[_i0].dev_info.common.abs_pf_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct nvm_iscsi_block * benchRet = qedi_get_nvram_block(qedi);
          printf("%d\n", (*benchRet).id);
          for(int _aux = 0; _aux < _len_qedi0; _aux++) {
          free(qedi[_aux].iscsi_image);
          }
          free(qedi);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_qedi0 = 65025;
          struct qedi_ctx * qedi = (struct qedi_ctx *) malloc(_len_qedi0*sizeof(struct qedi_ctx));
          for(int _i0 = 0; _i0 < _len_qedi0; _i0++) {
              int _len_qedi__i0__iscsi_image0 = 1;
          qedi[_i0].iscsi_image = (struct TYPE_8__ *) malloc(_len_qedi__i0__iscsi_image0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_qedi__i0__iscsi_image0; _j0++) {
              int _len_qedi__i0__iscsi_image_iscsi_cfg_block0 = 1;
          qedi[_i0].iscsi_image->iscsi_cfg.block = (struct nvm_iscsi_block *) malloc(_len_qedi__i0__iscsi_image_iscsi_cfg_block0*sizeof(struct nvm_iscsi_block));
          for(int _j0 = 0; _j0 < _len_qedi__i0__iscsi_image_iscsi_cfg_block0; _j0++) {
            qedi[_i0].iscsi_image->iscsi_cfg.block->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        qedi[_i0].dev_info.common.abs_pf_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct nvm_iscsi_block * benchRet = qedi_get_nvram_block(qedi);
          printf("%d\n", (*benchRet).id);
          for(int _aux = 0; _aux < _len_qedi0; _aux++) {
          free(qedi[_aux].iscsi_image);
          }
          free(qedi);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_qedi0 = 100;
          struct qedi_ctx * qedi = (struct qedi_ctx *) malloc(_len_qedi0*sizeof(struct qedi_ctx));
          for(int _i0 = 0; _i0 < _len_qedi0; _i0++) {
              int _len_qedi__i0__iscsi_image0 = 1;
          qedi[_i0].iscsi_image = (struct TYPE_8__ *) malloc(_len_qedi__i0__iscsi_image0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_qedi__i0__iscsi_image0; _j0++) {
              int _len_qedi__i0__iscsi_image_iscsi_cfg_block0 = 1;
          qedi[_i0].iscsi_image->iscsi_cfg.block = (struct nvm_iscsi_block *) malloc(_len_qedi__i0__iscsi_image_iscsi_cfg_block0*sizeof(struct nvm_iscsi_block));
          for(int _j0 = 0; _j0 < _len_qedi__i0__iscsi_image_iscsi_cfg_block0; _j0++) {
            qedi[_i0].iscsi_image->iscsi_cfg.block->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        qedi[_i0].dev_info.common.abs_pf_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct nvm_iscsi_block * benchRet = qedi_get_nvram_block(qedi);
          printf("%d\n", (*benchRet).id);
          for(int _aux = 0; _aux < _len_qedi0; _aux++) {
          free(qedi[_aux].iscsi_image);
          }
          free(qedi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
