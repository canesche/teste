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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int /*<<< orphan*/  outfile_autohex; int /*<<< orphan*/  outfile_format; int /*<<< orphan*/  outfile; } ;
typedef  TYPE_1__ user_options_t ;
struct TYPE_6__ {int /*<<< orphan*/  outfile_autohex; int /*<<< orphan*/  outfile_format; int /*<<< orphan*/  filename; int /*<<< orphan*/ * fp; } ;
typedef  TYPE_2__ outfile_ctx_t ;
struct TYPE_7__ {TYPE_1__* user_options; TYPE_2__* outfile_ctx; } ;
typedef  TYPE_3__ hashcat_ctx_t ;

/* Variables and functions */

int outfile_init (hashcat_ctx_t *hashcat_ctx)
{
  outfile_ctx_t  *outfile_ctx  = hashcat_ctx->outfile_ctx;
  user_options_t *user_options = hashcat_ctx->user_options;

  outfile_ctx->fp               = NULL;
  outfile_ctx->filename         = user_options->outfile;
  outfile_ctx->outfile_format   = user_options->outfile_format;
  outfile_ctx->outfile_autohex  = user_options->outfile_autohex;

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
          struct TYPE_7__ * hashcat_ctx = (struct TYPE_7__ *) malloc(_len_hashcat_ctx0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_hashcat_ctx0; _i0++) {
              int _len_hashcat_ctx__i0__user_options0 = 1;
          hashcat_ctx[_i0].user_options = (struct TYPE_5__ *) malloc(_len_hashcat_ctx__i0__user_options0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__user_options0; _j0++) {
            hashcat_ctx[_i0].user_options->outfile_autohex = ((-2 * (next_i()%2)) + 1) * next_i();
        hashcat_ctx[_i0].user_options->outfile_format = ((-2 * (next_i()%2)) + 1) * next_i();
        hashcat_ctx[_i0].user_options->outfile = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hashcat_ctx__i0__outfile_ctx0 = 1;
          hashcat_ctx[_i0].outfile_ctx = (struct TYPE_6__ *) malloc(_len_hashcat_ctx__i0__outfile_ctx0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__outfile_ctx0; _j0++) {
            hashcat_ctx[_i0].outfile_ctx->outfile_autohex = ((-2 * (next_i()%2)) + 1) * next_i();
        hashcat_ctx[_i0].outfile_ctx->outfile_format = ((-2 * (next_i()%2)) + 1) * next_i();
        hashcat_ctx[_i0].outfile_ctx->filename = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hashcat_ctx__i0__outfile_ctx_fp0 = 1;
          hashcat_ctx[_i0].outfile_ctx->fp = (int *) malloc(_len_hashcat_ctx__i0__outfile_ctx_fp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__outfile_ctx_fp0; _j0++) {
            hashcat_ctx[_i0].outfile_ctx->fp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = outfile_init(hashcat_ctx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].user_options);
          }
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].outfile_ctx);
          }
          free(hashcat_ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hashcat_ctx0 = 65025;
          struct TYPE_7__ * hashcat_ctx = (struct TYPE_7__ *) malloc(_len_hashcat_ctx0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_hashcat_ctx0; _i0++) {
              int _len_hashcat_ctx__i0__user_options0 = 1;
          hashcat_ctx[_i0].user_options = (struct TYPE_5__ *) malloc(_len_hashcat_ctx__i0__user_options0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__user_options0; _j0++) {
            hashcat_ctx[_i0].user_options->outfile_autohex = ((-2 * (next_i()%2)) + 1) * next_i();
        hashcat_ctx[_i0].user_options->outfile_format = ((-2 * (next_i()%2)) + 1) * next_i();
        hashcat_ctx[_i0].user_options->outfile = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hashcat_ctx__i0__outfile_ctx0 = 1;
          hashcat_ctx[_i0].outfile_ctx = (struct TYPE_6__ *) malloc(_len_hashcat_ctx__i0__outfile_ctx0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__outfile_ctx0; _j0++) {
            hashcat_ctx[_i0].outfile_ctx->outfile_autohex = ((-2 * (next_i()%2)) + 1) * next_i();
        hashcat_ctx[_i0].outfile_ctx->outfile_format = ((-2 * (next_i()%2)) + 1) * next_i();
        hashcat_ctx[_i0].outfile_ctx->filename = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hashcat_ctx__i0__outfile_ctx_fp0 = 1;
          hashcat_ctx[_i0].outfile_ctx->fp = (int *) malloc(_len_hashcat_ctx__i0__outfile_ctx_fp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__outfile_ctx_fp0; _j0++) {
            hashcat_ctx[_i0].outfile_ctx->fp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = outfile_init(hashcat_ctx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].user_options);
          }
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].outfile_ctx);
          }
          free(hashcat_ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hashcat_ctx0 = 100;
          struct TYPE_7__ * hashcat_ctx = (struct TYPE_7__ *) malloc(_len_hashcat_ctx0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_hashcat_ctx0; _i0++) {
              int _len_hashcat_ctx__i0__user_options0 = 1;
          hashcat_ctx[_i0].user_options = (struct TYPE_5__ *) malloc(_len_hashcat_ctx__i0__user_options0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__user_options0; _j0++) {
            hashcat_ctx[_i0].user_options->outfile_autohex = ((-2 * (next_i()%2)) + 1) * next_i();
        hashcat_ctx[_i0].user_options->outfile_format = ((-2 * (next_i()%2)) + 1) * next_i();
        hashcat_ctx[_i0].user_options->outfile = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hashcat_ctx__i0__outfile_ctx0 = 1;
          hashcat_ctx[_i0].outfile_ctx = (struct TYPE_6__ *) malloc(_len_hashcat_ctx__i0__outfile_ctx0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__outfile_ctx0; _j0++) {
            hashcat_ctx[_i0].outfile_ctx->outfile_autohex = ((-2 * (next_i()%2)) + 1) * next_i();
        hashcat_ctx[_i0].outfile_ctx->outfile_format = ((-2 * (next_i()%2)) + 1) * next_i();
        hashcat_ctx[_i0].outfile_ctx->filename = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hashcat_ctx__i0__outfile_ctx_fp0 = 1;
          hashcat_ctx[_i0].outfile_ctx->fp = (int *) malloc(_len_hashcat_ctx__i0__outfile_ctx_fp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__outfile_ctx_fp0; _j0++) {
            hashcat_ctx[_i0].outfile_ctx->fp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = outfile_init(hashcat_ctx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].user_options);
          }
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].outfile_ctx);
          }
          free(hashcat_ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
