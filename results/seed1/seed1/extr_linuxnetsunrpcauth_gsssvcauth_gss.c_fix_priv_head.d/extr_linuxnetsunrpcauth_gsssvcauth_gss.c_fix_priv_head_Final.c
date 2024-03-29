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
struct xdr_buf {scalar_t__ page_len; TYPE_1__* head; } ;
struct TYPE_2__ {int iov_len; } ;

/* Variables and functions */

__attribute__((used)) static void
fix_priv_head(struct xdr_buf *buf, int pad)
{
	if (buf->page_len == 0) {
		/* We need to adjust head and buf->len in tandem in this
		 * case to make svc_defer() work--it finds the original
		 * buffer start using buf->len - buf->head[0].iov_len. */
		buf->head[0].iov_len -= pad;
	}
}


// ------------------------------------------------------------------------- //




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
          int pad = 100;
          int _len_buf0 = 1;
          struct xdr_buf * buf = (struct xdr_buf *) malloc(_len_buf0*sizeof(struct xdr_buf));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].page_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_buf__i0__head0 = 1;
          buf[_i0].head = (struct TYPE_2__ *) malloc(_len_buf__i0__head0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_buf__i0__head0; _j0++) {
            buf[_i0].head->iov_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          fix_priv_head(buf,pad);
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(buf[_aux].head);
          }
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pad = 255;
          int _len_buf0 = 65025;
          struct xdr_buf * buf = (struct xdr_buf *) malloc(_len_buf0*sizeof(struct xdr_buf));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].page_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_buf__i0__head0 = 1;
          buf[_i0].head = (struct TYPE_2__ *) malloc(_len_buf__i0__head0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_buf__i0__head0; _j0++) {
            buf[_i0].head->iov_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          fix_priv_head(buf,pad);
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(buf[_aux].head);
          }
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pad = 10;
          int _len_buf0 = 100;
          struct xdr_buf * buf = (struct xdr_buf *) malloc(_len_buf0*sizeof(struct xdr_buf));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].page_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_buf__i0__head0 = 1;
          buf[_i0].head = (struct TYPE_2__ *) malloc(_len_buf__i0__head0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_buf__i0__head0; _j0++) {
            buf[_i0].head->iov_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          fix_priv_head(buf,pad);
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(buf[_aux].head);
          }
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
