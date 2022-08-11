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
struct TYPE_8__ {int slow_candidates; } ;
typedef  TYPE_2__ user_options_t ;
typedef  int u32 ;
struct TYPE_9__ {int css_cnt; TYPE_1__* css_buf; } ;
typedef  TYPE_3__ mask_ctx_t ;
struct TYPE_10__ {scalar_t__ attack_exec; int opts_type; } ;
typedef  TYPE_4__ hashconfig_t ;
struct TYPE_11__ {TYPE_2__* user_options; TYPE_4__* hashconfig; TYPE_3__* mask_ctx; } ;
typedef  TYPE_5__ hashcat_ctx_t ;
struct TYPE_7__ {int cs_len; } ;

/* Variables and functions */
 scalar_t__ ATTACK_EXEC_INSIDE_KERNEL ; 
 int OPTS_TYPE_PT_UTF16BE ; 
 int OPTS_TYPE_PT_UTF16LE ; 

__attribute__((used)) static void mp_css_split_cnt (hashcat_ctx_t *hashcat_ctx, const u32 css_cnt_orig, u32 css_cnt_lr[2])
{
  const mask_ctx_t     *mask_ctx     = hashcat_ctx->mask_ctx;
  const hashconfig_t   *hashconfig   = hashcat_ctx->hashconfig;
  const user_options_t *user_options = hashcat_ctx->user_options;

  u32 css_cnt_l = mask_ctx->css_cnt;
  u32 css_cnt_r;

  if (user_options->slow_candidates == true)
  {
    css_cnt_r = 0;
  }
  else
  {
    if (hashconfig->attack_exec == ATTACK_EXEC_INSIDE_KERNEL)
    {
      if (css_cnt_orig < 6)
      {
        css_cnt_r = 1;
      }
      else if (css_cnt_orig == 6)
      {
        css_cnt_r = 2;
      }
      else
      {
        if ((hashconfig->opts_type & OPTS_TYPE_PT_UTF16LE) || (hashconfig->opts_type & OPTS_TYPE_PT_UTF16BE))
        {
          if (css_cnt_orig == 8 || css_cnt_orig == 10)
          {
            css_cnt_r = 2;
          }
          else
          {
            css_cnt_r = 4;
          }
        }
        else
        {
          if ((mask_ctx->css_buf[0].cs_len * mask_ctx->css_buf[1].cs_len * mask_ctx->css_buf[2].cs_len) > 256)
          {
            css_cnt_r = 3;
          }
          else
          {
            css_cnt_r = 4;
          }
        }
      }
    }
    else
    {
      css_cnt_r = 1;

      /* unfinished code?
      int sum = css_buf[css_cnt_r - 1].cs_len;

      for (u32 i = 1; i < 4 && i < css_cnt; i++)
      {
        if (sum > 1) break; // we really don't need alot of amplifier them for slow hashes

        css_cnt_r++;

        sum *= css_buf[css_cnt_r - 1].cs_len;
      }
      */
    }
  }

  css_cnt_l -= css_cnt_r;

  css_cnt_lr[0] = css_cnt_l;
  css_cnt_lr[1] = css_cnt_r;
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
          const int css_cnt_orig = 100;
          int _len_hashcat_ctx0 = 1;
          struct TYPE_11__ * hashcat_ctx = (struct TYPE_11__ *) malloc(_len_hashcat_ctx0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_hashcat_ctx0; _i0++) {
              int _len_hashcat_ctx__i0__user_options0 = 1;
          hashcat_ctx[_i0].user_options = (struct TYPE_8__ *) malloc(_len_hashcat_ctx__i0__user_options0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__user_options0; _j0++) {
            hashcat_ctx[_i0].user_options->slow_candidates = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hashcat_ctx__i0__hashconfig0 = 1;
          hashcat_ctx[_i0].hashconfig = (struct TYPE_10__ *) malloc(_len_hashcat_ctx__i0__hashconfig0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__hashconfig0; _j0++) {
            hashcat_ctx[_i0].hashconfig->attack_exec = ((-2 * (next_i()%2)) + 1) * next_i();
        hashcat_ctx[_i0].hashconfig->opts_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hashcat_ctx__i0__mask_ctx0 = 1;
          hashcat_ctx[_i0].mask_ctx = (struct TYPE_9__ *) malloc(_len_hashcat_ctx__i0__mask_ctx0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__mask_ctx0; _j0++) {
            hashcat_ctx[_i0].mask_ctx->css_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hashcat_ctx__i0__mask_ctx_css_buf0 = 1;
          hashcat_ctx[_i0].mask_ctx->css_buf = (struct TYPE_7__ *) malloc(_len_hashcat_ctx__i0__mask_ctx_css_buf0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__mask_ctx_css_buf0; _j0++) {
            hashcat_ctx[_i0].mask_ctx->css_buf->cs_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_css_cnt_lr0 = 2;
          int * css_cnt_lr = (int *) malloc(_len_css_cnt_lr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_css_cnt_lr0; _i0++) {
            css_cnt_lr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mp_css_split_cnt(hashcat_ctx,css_cnt_orig,css_cnt_lr);
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].user_options);
          }
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].hashconfig);
          }
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].mask_ctx);
          }
          free(hashcat_ctx);
          free(css_cnt_lr);
        
        break;
    }
    // big-arr
    case 1:
    {
          const int css_cnt_orig = 255;
          int _len_hashcat_ctx0 = 65025;
          struct TYPE_11__ * hashcat_ctx = (struct TYPE_11__ *) malloc(_len_hashcat_ctx0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_hashcat_ctx0; _i0++) {
              int _len_hashcat_ctx__i0__user_options0 = 1;
          hashcat_ctx[_i0].user_options = (struct TYPE_8__ *) malloc(_len_hashcat_ctx__i0__user_options0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__user_options0; _j0++) {
            hashcat_ctx[_i0].user_options->slow_candidates = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hashcat_ctx__i0__hashconfig0 = 1;
          hashcat_ctx[_i0].hashconfig = (struct TYPE_10__ *) malloc(_len_hashcat_ctx__i0__hashconfig0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__hashconfig0; _j0++) {
            hashcat_ctx[_i0].hashconfig->attack_exec = ((-2 * (next_i()%2)) + 1) * next_i();
        hashcat_ctx[_i0].hashconfig->opts_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hashcat_ctx__i0__mask_ctx0 = 1;
          hashcat_ctx[_i0].mask_ctx = (struct TYPE_9__ *) malloc(_len_hashcat_ctx__i0__mask_ctx0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__mask_ctx0; _j0++) {
            hashcat_ctx[_i0].mask_ctx->css_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hashcat_ctx__i0__mask_ctx_css_buf0 = 1;
          hashcat_ctx[_i0].mask_ctx->css_buf = (struct TYPE_7__ *) malloc(_len_hashcat_ctx__i0__mask_ctx_css_buf0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__mask_ctx_css_buf0; _j0++) {
            hashcat_ctx[_i0].mask_ctx->css_buf->cs_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_css_cnt_lr0 = 65025;
          int * css_cnt_lr = (int *) malloc(_len_css_cnt_lr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_css_cnt_lr0; _i0++) {
            css_cnt_lr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mp_css_split_cnt(hashcat_ctx,css_cnt_orig,css_cnt_lr);
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].user_options);
          }
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].hashconfig);
          }
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].mask_ctx);
          }
          free(hashcat_ctx);
          free(css_cnt_lr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int css_cnt_orig = 10;
          int _len_hashcat_ctx0 = 100;
          struct TYPE_11__ * hashcat_ctx = (struct TYPE_11__ *) malloc(_len_hashcat_ctx0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_hashcat_ctx0; _i0++) {
              int _len_hashcat_ctx__i0__user_options0 = 1;
          hashcat_ctx[_i0].user_options = (struct TYPE_8__ *) malloc(_len_hashcat_ctx__i0__user_options0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__user_options0; _j0++) {
            hashcat_ctx[_i0].user_options->slow_candidates = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hashcat_ctx__i0__hashconfig0 = 1;
          hashcat_ctx[_i0].hashconfig = (struct TYPE_10__ *) malloc(_len_hashcat_ctx__i0__hashconfig0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__hashconfig0; _j0++) {
            hashcat_ctx[_i0].hashconfig->attack_exec = ((-2 * (next_i()%2)) + 1) * next_i();
        hashcat_ctx[_i0].hashconfig->opts_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hashcat_ctx__i0__mask_ctx0 = 1;
          hashcat_ctx[_i0].mask_ctx = (struct TYPE_9__ *) malloc(_len_hashcat_ctx__i0__mask_ctx0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__mask_ctx0; _j0++) {
            hashcat_ctx[_i0].mask_ctx->css_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hashcat_ctx__i0__mask_ctx_css_buf0 = 1;
          hashcat_ctx[_i0].mask_ctx->css_buf = (struct TYPE_7__ *) malloc(_len_hashcat_ctx__i0__mask_ctx_css_buf0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__mask_ctx_css_buf0; _j0++) {
            hashcat_ctx[_i0].mask_ctx->css_buf->cs_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_css_cnt_lr0 = 100;
          int * css_cnt_lr = (int *) malloc(_len_css_cnt_lr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_css_cnt_lr0; _i0++) {
            css_cnt_lr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mp_css_split_cnt(hashcat_ctx,css_cnt_orig,css_cnt_lr);
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].user_options);
          }
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].hashconfig);
          }
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].mask_ctx);
          }
          free(hashcat_ctx);
          free(css_cnt_lr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
