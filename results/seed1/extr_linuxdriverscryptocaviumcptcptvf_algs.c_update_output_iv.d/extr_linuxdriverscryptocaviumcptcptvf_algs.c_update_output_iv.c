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
typedef  int /*<<< orphan*/  u8 ;
typedef  size_t u32 ;
struct cpt_request_info {int /*<<< orphan*/  rlen; TYPE_1__* out; } ;
struct TYPE_2__ {size_t size; void* vptr; } ;

/* Variables and functions */

__attribute__((used)) static inline void update_output_iv(struct cpt_request_info *req_info,
				    u8 *iv, u32 enc_iv_len,
				    u32 *argcnt)
{
	/* Setting the iv information */
	req_info->out[*argcnt].vptr = (void *)iv;
	req_info->out[*argcnt].size = enc_iv_len;
	req_info->rlen += enc_iv_len;

	++(*argcnt);
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
          unsigned long enc_iv_len = 100;
          int _len_req_info0 = 1;
          struct cpt_request_info * req_info = (struct cpt_request_info *) malloc(_len_req_info0*sizeof(struct cpt_request_info));
          for(int _i0 = 0; _i0 < _len_req_info0; _i0++) {
            req_info[_i0].rlen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req_info__i0__out0 = 1;
          req_info[_i0].out = (struct TYPE_2__ *) malloc(_len_req_info__i0__out0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_req_info__i0__out0; _j0++) {
            req_info[_i0].out->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_iv0 = 1;
          int * iv = (int *) malloc(_len_iv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_iv0; _i0++) {
            iv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_argcnt0 = 1;
          unsigned long * argcnt = (unsigned long *) malloc(_len_argcnt0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_argcnt0; _i0++) {
            argcnt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_output_iv(req_info,iv,enc_iv_len,argcnt);
          for(int _aux = 0; _aux < _len_req_info0; _aux++) {
          free(req_info[_aux].out);
          }
          free(req_info);
          free(iv);
          free(argcnt);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long enc_iv_len = 255;
          int _len_req_info0 = 65025;
          struct cpt_request_info * req_info = (struct cpt_request_info *) malloc(_len_req_info0*sizeof(struct cpt_request_info));
          for(int _i0 = 0; _i0 < _len_req_info0; _i0++) {
            req_info[_i0].rlen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req_info__i0__out0 = 1;
          req_info[_i0].out = (struct TYPE_2__ *) malloc(_len_req_info__i0__out0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_req_info__i0__out0; _j0++) {
            req_info[_i0].out->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_iv0 = 65025;
          int * iv = (int *) malloc(_len_iv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_iv0; _i0++) {
            iv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_argcnt0 = 65025;
          unsigned long * argcnt = (unsigned long *) malloc(_len_argcnt0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_argcnt0; _i0++) {
            argcnt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_output_iv(req_info,iv,enc_iv_len,argcnt);
          for(int _aux = 0; _aux < _len_req_info0; _aux++) {
          free(req_info[_aux].out);
          }
          free(req_info);
          free(iv);
          free(argcnt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long enc_iv_len = 10;
          int _len_req_info0 = 100;
          struct cpt_request_info * req_info = (struct cpt_request_info *) malloc(_len_req_info0*sizeof(struct cpt_request_info));
          for(int _i0 = 0; _i0 < _len_req_info0; _i0++) {
            req_info[_i0].rlen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req_info__i0__out0 = 1;
          req_info[_i0].out = (struct TYPE_2__ *) malloc(_len_req_info__i0__out0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_req_info__i0__out0; _j0++) {
            req_info[_i0].out->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_iv0 = 100;
          int * iv = (int *) malloc(_len_iv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_iv0; _i0++) {
            iv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_argcnt0 = 100;
          unsigned long * argcnt = (unsigned long *) malloc(_len_argcnt0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_argcnt0; _i0++) {
            argcnt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_output_iv(req_info,iv,enc_iv_len,argcnt);
          for(int _aux = 0; _aux < _len_req_info0; _aux++) {
          free(req_info[_aux].out);
          }
          free(req_info);
          free(iv);
          free(argcnt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
