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
typedef  int /*<<< orphan*/  u32 ;
struct fchs_s {int dummy; } ;
struct bfa_fcxp_s {int dummy; } ;
typedef  int /*<<< orphan*/  bfa_status_t ;

/* Variables and functions */

__attribute__((used)) static void
bfa_fcxp_null_comp(void *bfad_fcxp, struct bfa_fcxp_s *fcxp, void *cbarg,
		   bfa_status_t req_status, u32 rsp_len,
		   u32 resid_len, struct fchs_s *rsp_fchs)
{
	/* discarded fcxp completion */
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
          int req_status = 100;
          int rsp_len = 100;
          int resid_len = 100;
          void * bfad_fcxp;
          int _len_fcxp0 = 1;
          struct bfa_fcxp_s * fcxp = (struct bfa_fcxp_s *) malloc(_len_fcxp0*sizeof(struct bfa_fcxp_s));
          for(int _i0 = 0; _i0 < _len_fcxp0; _i0++) {
            fcxp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * cbarg;
          int _len_rsp_fchs0 = 1;
          struct fchs_s * rsp_fchs = (struct fchs_s *) malloc(_len_rsp_fchs0*sizeof(struct fchs_s));
          for(int _i0 = 0; _i0 < _len_rsp_fchs0; _i0++) {
            rsp_fchs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bfa_fcxp_null_comp(bfad_fcxp,fcxp,cbarg,req_status,rsp_len,resid_len,rsp_fchs);
          free(fcxp);
          free(rsp_fchs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int req_status = 255;
          int rsp_len = 255;
          int resid_len = 255;
          void * bfad_fcxp;
          int _len_fcxp0 = 65025;
          struct bfa_fcxp_s * fcxp = (struct bfa_fcxp_s *) malloc(_len_fcxp0*sizeof(struct bfa_fcxp_s));
          for(int _i0 = 0; _i0 < _len_fcxp0; _i0++) {
            fcxp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * cbarg;
          int _len_rsp_fchs0 = 65025;
          struct fchs_s * rsp_fchs = (struct fchs_s *) malloc(_len_rsp_fchs0*sizeof(struct fchs_s));
          for(int _i0 = 0; _i0 < _len_rsp_fchs0; _i0++) {
            rsp_fchs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bfa_fcxp_null_comp(bfad_fcxp,fcxp,cbarg,req_status,rsp_len,resid_len,rsp_fchs);
          free(fcxp);
          free(rsp_fchs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int req_status = 10;
          int rsp_len = 10;
          int resid_len = 10;
          void * bfad_fcxp;
          int _len_fcxp0 = 100;
          struct bfa_fcxp_s * fcxp = (struct bfa_fcxp_s *) malloc(_len_fcxp0*sizeof(struct bfa_fcxp_s));
          for(int _i0 = 0; _i0 < _len_fcxp0; _i0++) {
            fcxp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * cbarg;
          int _len_rsp_fchs0 = 100;
          struct fchs_s * rsp_fchs = (struct fchs_s *) malloc(_len_rsp_fchs0*sizeof(struct fchs_s));
          for(int _i0 = 0; _i0 < _len_rsp_fchs0; _i0++) {
            rsp_fchs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bfa_fcxp_null_comp(bfad_fcxp,fcxp,cbarg,req_status,rsp_len,resid_len,rsp_fchs);
          free(fcxp);
          free(rsp_fchs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
