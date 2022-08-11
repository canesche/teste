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
struct nvme_nvm_id12_addrf {unsigned long long ch_len; unsigned long long lun_len; unsigned long long blk_len; unsigned long long pg_len; unsigned long long pln_len; unsigned long long sec_len; unsigned long long ch_offset; unsigned long long lun_offset; unsigned long long blk_offset; unsigned long long pg_offset; unsigned long long pln_offset; unsigned long long sec_offset; } ;
struct nvm_addrf_12 {unsigned long long ch_len; unsigned long long lun_len; unsigned long long blk_len; unsigned long long pg_len; unsigned long long pln_len; unsigned long long sec_len; unsigned long long ch_offset; unsigned long long lun_offset; unsigned long long blk_offset; unsigned long long pg_offset; unsigned long long pln_offset; unsigned long long sec_offset; unsigned long long ch_mask; unsigned long long lun_mask; unsigned long long blk_mask; unsigned long long pg_mask; unsigned long long pln_mask; unsigned long long sec_mask; } ;

/* Variables and functions */

__attribute__((used)) static void nvme_nvm_set_addr_12(struct nvm_addrf_12 *dst,
				 struct nvme_nvm_id12_addrf *src)
{
	dst->ch_len = src->ch_len;
	dst->lun_len = src->lun_len;
	dst->blk_len = src->blk_len;
	dst->pg_len = src->pg_len;
	dst->pln_len = src->pln_len;
	dst->sec_len = src->sec_len;

	dst->ch_offset = src->ch_offset;
	dst->lun_offset = src->lun_offset;
	dst->blk_offset = src->blk_offset;
	dst->pg_offset = src->pg_offset;
	dst->pln_offset = src->pln_offset;
	dst->sec_offset = src->sec_offset;

	dst->ch_mask = ((1ULL << dst->ch_len) - 1) << dst->ch_offset;
	dst->lun_mask = ((1ULL << dst->lun_len) - 1) << dst->lun_offset;
	dst->blk_mask = ((1ULL << dst->blk_len) - 1) << dst->blk_offset;
	dst->pg_mask = ((1ULL << dst->pg_len) - 1) << dst->pg_offset;
	dst->pln_mask = ((1ULL << dst->pln_len) - 1) << dst->pln_offset;
	dst->sec_mask = ((1ULL << dst->sec_len) - 1) << dst->sec_offset;
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
          int _len_dst0 = 1;
          struct nvm_addrf_12 * dst = (struct nvm_addrf_12 *) malloc(_len_dst0*sizeof(struct nvm_addrf_12));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].ch_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].lun_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].blk_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].pg_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].pln_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].sec_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].ch_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].lun_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].blk_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].pg_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].pln_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].sec_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].ch_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].lun_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].blk_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].pg_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].pln_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].sec_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          struct nvme_nvm_id12_addrf * src = (struct nvme_nvm_id12_addrf *) malloc(_len_src0*sizeof(struct nvme_nvm_id12_addrf));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0].ch_len = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].lun_len = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].blk_len = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].pg_len = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].pln_len = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].sec_len = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].ch_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].lun_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].blk_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].pg_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].pln_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].sec_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nvme_nvm_set_addr_12(dst,src);
          free(dst);
          free(src);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dst0 = 65025;
          struct nvm_addrf_12 * dst = (struct nvm_addrf_12 *) malloc(_len_dst0*sizeof(struct nvm_addrf_12));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].ch_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].lun_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].blk_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].pg_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].pln_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].sec_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].ch_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].lun_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].blk_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].pg_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].pln_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].sec_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].ch_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].lun_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].blk_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].pg_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].pln_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].sec_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 65025;
          struct nvme_nvm_id12_addrf * src = (struct nvme_nvm_id12_addrf *) malloc(_len_src0*sizeof(struct nvme_nvm_id12_addrf));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0].ch_len = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].lun_len = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].blk_len = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].pg_len = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].pln_len = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].sec_len = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].ch_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].lun_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].blk_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].pg_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].pln_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].sec_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nvme_nvm_set_addr_12(dst,src);
          free(dst);
          free(src);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dst0 = 100;
          struct nvm_addrf_12 * dst = (struct nvm_addrf_12 *) malloc(_len_dst0*sizeof(struct nvm_addrf_12));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].ch_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].lun_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].blk_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].pg_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].pln_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].sec_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].ch_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].lun_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].blk_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].pg_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].pln_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].sec_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].ch_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].lun_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].blk_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].pg_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].pln_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].sec_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 100;
          struct nvme_nvm_id12_addrf * src = (struct nvme_nvm_id12_addrf *) malloc(_len_src0*sizeof(struct nvme_nvm_id12_addrf));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0].ch_len = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].lun_len = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].blk_len = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].pg_len = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].pln_len = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].sec_len = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].ch_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].lun_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].blk_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].pg_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].pln_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].sec_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nvme_nvm_set_addr_12(dst,src);
          free(dst);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
