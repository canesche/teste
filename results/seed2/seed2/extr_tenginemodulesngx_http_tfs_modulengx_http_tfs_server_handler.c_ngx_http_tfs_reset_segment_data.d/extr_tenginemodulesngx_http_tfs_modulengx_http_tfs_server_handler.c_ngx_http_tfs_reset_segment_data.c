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
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ uint32_t ;
struct TYPE_9__ {scalar_t__ segment_count; size_t segment_index; scalar_t__ curr_batch_count; TYPE_5__* segment_data; } ;
struct TYPE_7__ {int /*<<< orphan*/  curr_lookup_cache; } ;
struct TYPE_10__ {TYPE_3__ file; TYPE_1__ block_cache_ctx; } ;
typedef  TYPE_4__ ngx_http_tfs_t ;
struct TYPE_8__ {int /*<<< orphan*/ * ds_addrs; } ;
struct TYPE_11__ {scalar_t__ ds_index; scalar_t__ ds_retry; TYPE_2__ block_info; int /*<<< orphan*/  cache_hit; } ;
typedef  TYPE_5__ ngx_http_tfs_segment_data_t ;

/* Variables and functions */
 int /*<<< orphan*/  NGX_HTTP_TFS_LOCAL_BLOCK_CACHE ; 
 scalar_t__ NGX_HTTP_TFS_MAX_BATCH_COUNT ; 
 int /*<<< orphan*/  NGX_HTTP_TFS_NO_BLOCK_CACHE ; 

void
ngx_http_tfs_reset_segment_data(ngx_http_tfs_t *t)
{
    uint32_t                      block_count, i;
    ngx_http_tfs_segment_data_t  *segment_data;

    /* reset current lookup cache */
    t->block_cache_ctx.curr_lookup_cache = NGX_HTTP_TFS_LOCAL_BLOCK_CACHE;

    block_count = t->file.segment_count - t->file.segment_index;
    if (block_count > NGX_HTTP_TFS_MAX_BATCH_COUNT) {
        block_count = NGX_HTTP_TFS_MAX_BATCH_COUNT;
    }

    segment_data = &t->file.segment_data[t->file.segment_index];
    for (i = 0; i < block_count; i++, segment_data++) {
        segment_data->cache_hit = NGX_HTTP_TFS_NO_BLOCK_CACHE;
        segment_data->block_info.ds_addrs = NULL;
        segment_data->ds_retry = 0;
        segment_data->ds_index = 0;
    }

    t->file.curr_batch_count = 0;
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
          int _len_t0 = 1;
          struct TYPE_10__ * t = (struct TYPE_10__ *) malloc(_len_t0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].file.segment_count = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].file.segment_index = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].file.curr_batch_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_t__i0__file_segment_data0 = 1;
          t[_i0].file.segment_data = (struct TYPE_11__ *) malloc(_len_t__i0__file_segment_data0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_t__i0__file_segment_data0; _j0++) {
            t[_i0].file.segment_data->ds_index = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].file.segment_data->ds_retry = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_t__i0__file_segment_data_block_info_ds_addrs0 = 1;
          t[_i0].file.segment_data->block_info.ds_addrs = (int *) malloc(_len_t__i0__file_segment_data_block_info_ds_addrs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_t__i0__file_segment_data_block_info_ds_addrs0; _j0++) {
            t[_i0].file.segment_data->block_info.ds_addrs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        t[_i0].file.segment_data->cache_hit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        t[_i0].block_cache_ctx.curr_lookup_cache = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ngx_http_tfs_reset_segment_data(t);
          free(t);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_t0 = 65025;
          struct TYPE_10__ * t = (struct TYPE_10__ *) malloc(_len_t0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].file.segment_count = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].file.segment_index = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].file.curr_batch_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_t__i0__file_segment_data0 = 1;
          t[_i0].file.segment_data = (struct TYPE_11__ *) malloc(_len_t__i0__file_segment_data0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_t__i0__file_segment_data0; _j0++) {
            t[_i0].file.segment_data->ds_index = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].file.segment_data->ds_retry = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_t__i0__file_segment_data_block_info_ds_addrs0 = 1;
          t[_i0].file.segment_data->block_info.ds_addrs = (int *) malloc(_len_t__i0__file_segment_data_block_info_ds_addrs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_t__i0__file_segment_data_block_info_ds_addrs0; _j0++) {
            t[_i0].file.segment_data->block_info.ds_addrs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        t[_i0].file.segment_data->cache_hit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        t[_i0].block_cache_ctx.curr_lookup_cache = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ngx_http_tfs_reset_segment_data(t);
          free(t);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_t0 = 100;
          struct TYPE_10__ * t = (struct TYPE_10__ *) malloc(_len_t0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].file.segment_count = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].file.segment_index = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].file.curr_batch_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_t__i0__file_segment_data0 = 1;
          t[_i0].file.segment_data = (struct TYPE_11__ *) malloc(_len_t__i0__file_segment_data0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_t__i0__file_segment_data0; _j0++) {
            t[_i0].file.segment_data->ds_index = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].file.segment_data->ds_retry = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_t__i0__file_segment_data_block_info_ds_addrs0 = 1;
          t[_i0].file.segment_data->block_info.ds_addrs = (int *) malloc(_len_t__i0__file_segment_data_block_info_ds_addrs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_t__i0__file_segment_data_block_info_ds_addrs0; _j0++) {
            t[_i0].file.segment_data->block_info.ds_addrs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        t[_i0].file.segment_data->cache_hit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        t[_i0].block_cache_ctx.curr_lookup_cache = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ngx_http_tfs_reset_segment_data(t);
          free(t);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
