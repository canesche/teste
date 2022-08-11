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
typedef  struct TYPE_19__   TYPE_8__ ;
typedef  struct TYPE_18__   TYPE_7__ ;
typedef  struct TYPE_17__   TYPE_6__ ;
typedef  struct TYPE_16__   TYPE_5__ ;
typedef  struct TYPE_15__   TYPE_4__ ;
typedef  struct TYPE_14__   TYPE_3__ ;
typedef  struct TYPE_13__   TYPE_2__ ;
typedef  struct TYPE_12__   TYPE_1__ ;

/* Type definitions */
struct TYPE_12__ {int slow_candidates; } ;
typedef  TYPE_1__ user_options_t ;
struct TYPE_13__ {scalar_t__ attack_kern; } ;
typedef  TYPE_2__ user_options_extra_t ;
typedef  scalar_t__ u64 ;
typedef  scalar_t__ u32 ;
struct TYPE_14__ {scalar_t__ kernel_rules_cnt; } ;
typedef  TYPE_3__ straight_ctx_t ;
struct TYPE_15__ {scalar_t__ il_pos; scalar_t__ gidvid; } ;
typedef  TYPE_4__ plain_t ;
struct TYPE_16__ {scalar_t__ bfs_cnt; } ;
typedef  TYPE_5__ mask_ctx_t ;
struct TYPE_17__ {scalar_t__ const innerloop_pos; scalar_t__ words_off; } ;
typedef  TYPE_6__ hc_device_param_t ;
struct TYPE_18__ {TYPE_2__* user_options_extra; TYPE_1__* user_options; TYPE_3__* straight_ctx; TYPE_5__* mask_ctx; TYPE_8__* combinator_ctx; } ;
typedef  TYPE_7__ hashcat_ctx_t ;
struct TYPE_19__ {scalar_t__ combs_cnt; } ;
typedef  TYPE_8__ combinator_ctx_t ;

/* Variables and functions */
 scalar_t__ ATTACK_KERN_COMBI ; 
 scalar_t__ ATTACK_KERN_STRAIGHT ; 
 scalar_t__ ATTACK_MODE_BF ; 

int build_crackpos (hashcat_ctx_t *hashcat_ctx, hc_device_param_t *device_param, plain_t *plain, u64 *out_pos)
{
  const combinator_ctx_t      *combinator_ctx     = hashcat_ctx->combinator_ctx;
  const mask_ctx_t            *mask_ctx           = hashcat_ctx->mask_ctx;
  const straight_ctx_t        *straight_ctx       = hashcat_ctx->straight_ctx;
  const user_options_t        *user_options       = hashcat_ctx->user_options;
  const user_options_extra_t  *user_options_extra = hashcat_ctx->user_options_extra;

  const u64 gidvid = plain->gidvid;
  const u32 il_pos = plain->il_pos;

  u64 crackpos = device_param->words_off;

  if (user_options->slow_candidates == true)
  {
    crackpos = gidvid;
  }
  else
  {
    if (user_options_extra->attack_kern == ATTACK_KERN_STRAIGHT)
    {
      crackpos += gidvid;
      crackpos *= straight_ctx->kernel_rules_cnt;
      crackpos += device_param->innerloop_pos + il_pos;
    }
    else if (user_options_extra->attack_kern == ATTACK_KERN_COMBI)
    {
      crackpos += gidvid;
      crackpos *= combinator_ctx->combs_cnt;
      crackpos += device_param->innerloop_pos + il_pos;
    }
    else if (user_options_extra->attack_kern == ATTACK_MODE_BF)
    {
      crackpos += gidvid;
      crackpos *= mask_ctx->bfs_cnt;
      crackpos += device_param->innerloop_pos + il_pos;
    }
  }

  *out_pos = crackpos;

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
          int _len_hashcat_ctx0 = 1;
          struct TYPE_18__ * hashcat_ctx = (struct TYPE_18__ *) malloc(_len_hashcat_ctx0*sizeof(struct TYPE_18__));
          for(int _i0 = 0; _i0 < _len_hashcat_ctx0; _i0++) {
              int _len_hashcat_ctx__i0__user_options_extra0 = 1;
          hashcat_ctx[_i0].user_options_extra = (struct TYPE_13__ *) malloc(_len_hashcat_ctx__i0__user_options_extra0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__user_options_extra0; _j0++) {
            hashcat_ctx[_i0].user_options_extra->attack_kern = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hashcat_ctx__i0__user_options0 = 1;
          hashcat_ctx[_i0].user_options = (struct TYPE_12__ *) malloc(_len_hashcat_ctx__i0__user_options0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__user_options0; _j0++) {
            hashcat_ctx[_i0].user_options->slow_candidates = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hashcat_ctx__i0__straight_ctx0 = 1;
          hashcat_ctx[_i0].straight_ctx = (struct TYPE_14__ *) malloc(_len_hashcat_ctx__i0__straight_ctx0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__straight_ctx0; _j0++) {
            hashcat_ctx[_i0].straight_ctx->kernel_rules_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hashcat_ctx__i0__mask_ctx0 = 1;
          hashcat_ctx[_i0].mask_ctx = (struct TYPE_16__ *) malloc(_len_hashcat_ctx__i0__mask_ctx0*sizeof(struct TYPE_16__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__mask_ctx0; _j0++) {
            hashcat_ctx[_i0].mask_ctx->bfs_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hashcat_ctx__i0__combinator_ctx0 = 1;
          hashcat_ctx[_i0].combinator_ctx = (struct TYPE_19__ *) malloc(_len_hashcat_ctx__i0__combinator_ctx0*sizeof(struct TYPE_19__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__combinator_ctx0; _j0++) {
            hashcat_ctx[_i0].combinator_ctx->combs_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_device_param0 = 1;
          struct TYPE_17__ * device_param = (struct TYPE_17__ *) malloc(_len_device_param0*sizeof(struct TYPE_17__));
          for(int _i0 = 0; _i0 < _len_device_param0; _i0++) {
            device_param[_i0].innerloop_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        device_param[_i0].words_off = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_plain0 = 1;
          struct TYPE_15__ * plain = (struct TYPE_15__ *) malloc(_len_plain0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_plain0; _i0++) {
            plain[_i0].il_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        plain[_i0].gidvid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_pos0 = 1;
          long * out_pos = (long *) malloc(_len_out_pos0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_out_pos0; _i0++) {
            out_pos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = build_crackpos(hashcat_ctx,device_param,plain,out_pos);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].user_options_extra);
          }
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].user_options);
          }
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].straight_ctx);
          }
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].mask_ctx);
          }
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].combinator_ctx);
          }
          free(hashcat_ctx);
          free(device_param);
          free(plain);
          free(out_pos);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hashcat_ctx0 = 65025;
          struct TYPE_18__ * hashcat_ctx = (struct TYPE_18__ *) malloc(_len_hashcat_ctx0*sizeof(struct TYPE_18__));
          for(int _i0 = 0; _i0 < _len_hashcat_ctx0; _i0++) {
              int _len_hashcat_ctx__i0__user_options_extra0 = 1;
          hashcat_ctx[_i0].user_options_extra = (struct TYPE_13__ *) malloc(_len_hashcat_ctx__i0__user_options_extra0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__user_options_extra0; _j0++) {
            hashcat_ctx[_i0].user_options_extra->attack_kern = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hashcat_ctx__i0__user_options0 = 1;
          hashcat_ctx[_i0].user_options = (struct TYPE_12__ *) malloc(_len_hashcat_ctx__i0__user_options0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__user_options0; _j0++) {
            hashcat_ctx[_i0].user_options->slow_candidates = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hashcat_ctx__i0__straight_ctx0 = 1;
          hashcat_ctx[_i0].straight_ctx = (struct TYPE_14__ *) malloc(_len_hashcat_ctx__i0__straight_ctx0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__straight_ctx0; _j0++) {
            hashcat_ctx[_i0].straight_ctx->kernel_rules_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hashcat_ctx__i0__mask_ctx0 = 1;
          hashcat_ctx[_i0].mask_ctx = (struct TYPE_16__ *) malloc(_len_hashcat_ctx__i0__mask_ctx0*sizeof(struct TYPE_16__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__mask_ctx0; _j0++) {
            hashcat_ctx[_i0].mask_ctx->bfs_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hashcat_ctx__i0__combinator_ctx0 = 1;
          hashcat_ctx[_i0].combinator_ctx = (struct TYPE_19__ *) malloc(_len_hashcat_ctx__i0__combinator_ctx0*sizeof(struct TYPE_19__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__combinator_ctx0; _j0++) {
            hashcat_ctx[_i0].combinator_ctx->combs_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_device_param0 = 65025;
          struct TYPE_17__ * device_param = (struct TYPE_17__ *) malloc(_len_device_param0*sizeof(struct TYPE_17__));
          for(int _i0 = 0; _i0 < _len_device_param0; _i0++) {
            device_param[_i0].innerloop_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        device_param[_i0].words_off = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_plain0 = 65025;
          struct TYPE_15__ * plain = (struct TYPE_15__ *) malloc(_len_plain0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_plain0; _i0++) {
            plain[_i0].il_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        plain[_i0].gidvid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_pos0 = 65025;
          long * out_pos = (long *) malloc(_len_out_pos0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_out_pos0; _i0++) {
            out_pos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = build_crackpos(hashcat_ctx,device_param,plain,out_pos);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].user_options_extra);
          }
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].user_options);
          }
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].straight_ctx);
          }
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].mask_ctx);
          }
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].combinator_ctx);
          }
          free(hashcat_ctx);
          free(device_param);
          free(plain);
          free(out_pos);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hashcat_ctx0 = 100;
          struct TYPE_18__ * hashcat_ctx = (struct TYPE_18__ *) malloc(_len_hashcat_ctx0*sizeof(struct TYPE_18__));
          for(int _i0 = 0; _i0 < _len_hashcat_ctx0; _i0++) {
              int _len_hashcat_ctx__i0__user_options_extra0 = 1;
          hashcat_ctx[_i0].user_options_extra = (struct TYPE_13__ *) malloc(_len_hashcat_ctx__i0__user_options_extra0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__user_options_extra0; _j0++) {
            hashcat_ctx[_i0].user_options_extra->attack_kern = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hashcat_ctx__i0__user_options0 = 1;
          hashcat_ctx[_i0].user_options = (struct TYPE_12__ *) malloc(_len_hashcat_ctx__i0__user_options0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__user_options0; _j0++) {
            hashcat_ctx[_i0].user_options->slow_candidates = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hashcat_ctx__i0__straight_ctx0 = 1;
          hashcat_ctx[_i0].straight_ctx = (struct TYPE_14__ *) malloc(_len_hashcat_ctx__i0__straight_ctx0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__straight_ctx0; _j0++) {
            hashcat_ctx[_i0].straight_ctx->kernel_rules_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hashcat_ctx__i0__mask_ctx0 = 1;
          hashcat_ctx[_i0].mask_ctx = (struct TYPE_16__ *) malloc(_len_hashcat_ctx__i0__mask_ctx0*sizeof(struct TYPE_16__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__mask_ctx0; _j0++) {
            hashcat_ctx[_i0].mask_ctx->bfs_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hashcat_ctx__i0__combinator_ctx0 = 1;
          hashcat_ctx[_i0].combinator_ctx = (struct TYPE_19__ *) malloc(_len_hashcat_ctx__i0__combinator_ctx0*sizeof(struct TYPE_19__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__combinator_ctx0; _j0++) {
            hashcat_ctx[_i0].combinator_ctx->combs_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_device_param0 = 100;
          struct TYPE_17__ * device_param = (struct TYPE_17__ *) malloc(_len_device_param0*sizeof(struct TYPE_17__));
          for(int _i0 = 0; _i0 < _len_device_param0; _i0++) {
            device_param[_i0].innerloop_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        device_param[_i0].words_off = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_plain0 = 100;
          struct TYPE_15__ * plain = (struct TYPE_15__ *) malloc(_len_plain0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_plain0; _i0++) {
            plain[_i0].il_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        plain[_i0].gidvid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_pos0 = 100;
          long * out_pos = (long *) malloc(_len_out_pos0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_out_pos0; _i0++) {
            out_pos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = build_crackpos(hashcat_ctx,device_param,plain,out_pos);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].user_options_extra);
          }
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].user_options);
          }
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].straight_ctx);
          }
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].mask_ctx);
          }
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].combinator_ctx);
          }
          free(hashcat_ctx);
          free(device_param);
          free(plain);
          free(out_pos);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
