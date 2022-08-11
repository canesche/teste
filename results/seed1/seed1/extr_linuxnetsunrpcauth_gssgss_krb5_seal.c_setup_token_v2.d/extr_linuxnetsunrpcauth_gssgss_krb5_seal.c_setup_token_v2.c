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
typedef  int u8 ;
typedef  int u16 ;
struct xdr_netobj {scalar_t__ len; scalar_t__ data; } ;
struct krb5_ctx {int flags; TYPE_1__* gk5e; } ;
struct TYPE_2__ {scalar_t__ cksumlength; } ;

/* Variables and functions */
 scalar_t__ GSS_KRB5_TOK_HDR_LEN ; 
 int /*<<< orphan*/  KG2_TOK_MIC ; 
 int KRB5_CTX_FLAG_ACCEPTOR_SUBKEY ; 
 int KRB5_CTX_FLAG_INITIATOR ; 

__attribute__((used)) static void *
setup_token_v2(struct krb5_ctx *ctx, struct xdr_netobj *token)
{
	u16 *ptr;
	void *krb5_hdr;
	u8 *p, flags = 0x00;

	if ((ctx->flags & KRB5_CTX_FLAG_INITIATOR) == 0)
		flags |= 0x01;
	if (ctx->flags & KRB5_CTX_FLAG_ACCEPTOR_SUBKEY)
		flags |= 0x04;

	/* Per rfc 4121, sec 4.2.6.1, there is no header,
	 * just start the token */
	krb5_hdr = ptr = (u16 *)token->data;

	*ptr++ = KG2_TOK_MIC;
	p = (u8 *)ptr;
	*p++ = flags;
	*p++ = 0xff;
	ptr = (u16 *)p;
	*ptr++ = 0xffff;
	*ptr = 0xffff;

	token->len = GSS_KRB5_TOK_HDR_LEN + ctx->gk5e->cksumlength;
	return krb5_hdr;
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
          int _len_ctx0 = 1;
          struct krb5_ctx * ctx = (struct krb5_ctx *) malloc(_len_ctx0*sizeof(struct krb5_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__gk5e0 = 1;
          ctx[_i0].gk5e = (struct TYPE_2__ *) malloc(_len_ctx__i0__gk5e0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__gk5e0; _j0++) {
            ctx[_i0].gk5e->cksumlength = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_token0 = 1;
          struct xdr_netobj * token = (struct xdr_netobj *) malloc(_len_token0*sizeof(struct xdr_netobj));
          for(int _i0 = 0; _i0 < _len_token0; _i0++) {
            token[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        token[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = setup_token_v2(ctx,token);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].gk5e);
          }
          free(ctx);
          free(token);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctx0 = 65025;
          struct krb5_ctx * ctx = (struct krb5_ctx *) malloc(_len_ctx0*sizeof(struct krb5_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__gk5e0 = 1;
          ctx[_i0].gk5e = (struct TYPE_2__ *) malloc(_len_ctx__i0__gk5e0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__gk5e0; _j0++) {
            ctx[_i0].gk5e->cksumlength = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_token0 = 65025;
          struct xdr_netobj * token = (struct xdr_netobj *) malloc(_len_token0*sizeof(struct xdr_netobj));
          for(int _i0 = 0; _i0 < _len_token0; _i0++) {
            token[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        token[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = setup_token_v2(ctx,token);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].gk5e);
          }
          free(ctx);
          free(token);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctx0 = 100;
          struct krb5_ctx * ctx = (struct krb5_ctx *) malloc(_len_ctx0*sizeof(struct krb5_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__gk5e0 = 1;
          ctx[_i0].gk5e = (struct TYPE_2__ *) malloc(_len_ctx__i0__gk5e0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__gk5e0; _j0++) {
            ctx[_i0].gk5e->cksumlength = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_token0 = 100;
          struct xdr_netobj * token = (struct xdr_netobj *) malloc(_len_token0*sizeof(struct xdr_netobj));
          for(int _i0 = 0; _i0 < _len_token0; _i0++) {
            token[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        token[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = setup_token_v2(ctx,token);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].gk5e);
          }
          free(ctx);
          free(token);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
