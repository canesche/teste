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
struct stream_encoder {struct dc_bios* bp; int /*<<< orphan*/  id; struct dc_context* ctx; int /*<<< orphan*/ * funcs; } ;
struct dc_context {int dummy; } ;
struct dc_bios {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  ENGINE_ID_VIRTUAL ; 
 int /*<<< orphan*/  virtual_str_enc_funcs ; 

bool virtual_stream_encoder_construct(
	struct stream_encoder *enc,
	struct dc_context *ctx,
	struct dc_bios *bp)
{
	if (!enc)
		return false;
	if (!bp)
		return false;

	enc->funcs = &virtual_str_enc_funcs;
	enc->ctx = ctx;
	enc->id = ENGINE_ID_VIRTUAL;
	enc->bp = bp;

	return true;
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
          int _len_enc0 = 1;
          struct stream_encoder * enc = (struct stream_encoder *) malloc(_len_enc0*sizeof(struct stream_encoder));
          for(int _i0 = 0; _i0 < _len_enc0; _i0++) {
              int _len_enc__i0__bp0 = 1;
          enc[_i0].bp = (struct dc_bios *) malloc(_len_enc__i0__bp0*sizeof(struct dc_bios));
          for(int _j0 = 0; _j0 < _len_enc__i0__bp0; _j0++) {
            enc[_i0].bp->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        enc[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_enc__i0__ctx0 = 1;
          enc[_i0].ctx = (struct dc_context *) malloc(_len_enc__i0__ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_enc__i0__ctx0; _j0++) {
            enc[_i0].ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enc__i0__funcs0 = 1;
          enc[_i0].funcs = (int *) malloc(_len_enc__i0__funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_enc__i0__funcs0; _j0++) {
            enc[_i0].funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 1;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp0 = 1;
          struct dc_bios * bp = (struct dc_bios *) malloc(_len_bp0*sizeof(struct dc_bios));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = virtual_stream_encoder_construct(enc,ctx,bp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_enc0; _aux++) {
          free(enc[_aux].bp);
          }
          for(int _aux = 0; _aux < _len_enc0; _aux++) {
          free(enc[_aux].ctx);
          }
          for(int _aux = 0; _aux < _len_enc0; _aux++) {
          free(enc[_aux].funcs);
          }
          free(enc);
          free(ctx);
          free(bp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_enc0 = 65025;
          struct stream_encoder * enc = (struct stream_encoder *) malloc(_len_enc0*sizeof(struct stream_encoder));
          for(int _i0 = 0; _i0 < _len_enc0; _i0++) {
              int _len_enc__i0__bp0 = 1;
          enc[_i0].bp = (struct dc_bios *) malloc(_len_enc__i0__bp0*sizeof(struct dc_bios));
          for(int _j0 = 0; _j0 < _len_enc__i0__bp0; _j0++) {
            enc[_i0].bp->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        enc[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_enc__i0__ctx0 = 1;
          enc[_i0].ctx = (struct dc_context *) malloc(_len_enc__i0__ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_enc__i0__ctx0; _j0++) {
            enc[_i0].ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enc__i0__funcs0 = 1;
          enc[_i0].funcs = (int *) malloc(_len_enc__i0__funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_enc__i0__funcs0; _j0++) {
            enc[_i0].funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 65025;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp0 = 65025;
          struct dc_bios * bp = (struct dc_bios *) malloc(_len_bp0*sizeof(struct dc_bios));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = virtual_stream_encoder_construct(enc,ctx,bp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_enc0; _aux++) {
          free(enc[_aux].bp);
          }
          for(int _aux = 0; _aux < _len_enc0; _aux++) {
          free(enc[_aux].ctx);
          }
          for(int _aux = 0; _aux < _len_enc0; _aux++) {
          free(enc[_aux].funcs);
          }
          free(enc);
          free(ctx);
          free(bp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_enc0 = 100;
          struct stream_encoder * enc = (struct stream_encoder *) malloc(_len_enc0*sizeof(struct stream_encoder));
          for(int _i0 = 0; _i0 < _len_enc0; _i0++) {
              int _len_enc__i0__bp0 = 1;
          enc[_i0].bp = (struct dc_bios *) malloc(_len_enc__i0__bp0*sizeof(struct dc_bios));
          for(int _j0 = 0; _j0 < _len_enc__i0__bp0; _j0++) {
            enc[_i0].bp->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        enc[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_enc__i0__ctx0 = 1;
          enc[_i0].ctx = (struct dc_context *) malloc(_len_enc__i0__ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_enc__i0__ctx0; _j0++) {
            enc[_i0].ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enc__i0__funcs0 = 1;
          enc[_i0].funcs = (int *) malloc(_len_enc__i0__funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_enc__i0__funcs0; _j0++) {
            enc[_i0].funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 100;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp0 = 100;
          struct dc_bios * bp = (struct dc_bios *) malloc(_len_bp0*sizeof(struct dc_bios));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = virtual_stream_encoder_construct(enc,ctx,bp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_enc0; _aux++) {
          free(enc[_aux].bp);
          }
          for(int _aux = 0; _aux < _len_enc0; _aux++) {
          free(enc[_aux].ctx);
          }
          for(int _aux = 0; _aux < _len_enc0; _aux++) {
          free(enc[_aux].funcs);
          }
          free(enc);
          free(ctx);
          free(bp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
