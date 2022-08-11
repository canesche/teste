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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  enum aarch64_operand_error_kind { ____Placeholder_aarch64_operand_error_kind } aarch64_operand_error_kind ;
struct TYPE_3__ {int kind; int index; char const* error; } ;
typedef  TYPE_1__ aarch64_operand_error ;

/* Variables and functions */

__attribute__((used)) static inline void
set_error (aarch64_operand_error *mismatch_detail,
	   enum aarch64_operand_error_kind kind, int idx,
	   const char* error)
{
  if (mismatch_detail == NULL)
    return;
  mismatch_detail->kind = kind;
  mismatch_detail->index = idx;
  mismatch_detail->error = error;
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
          enum aarch64_operand_error_kind kind = 0;
          int idx = 100;
          int _len_mismatch_detail0 = 1;
          struct TYPE_3__ * mismatch_detail = (struct TYPE_3__ *) malloc(_len_mismatch_detail0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_mismatch_detail0; _i0++) {
            mismatch_detail[_i0].kind = ((-2 * (next_i()%2)) + 1) * next_i();
        mismatch_detail[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mismatch_detail__i0__error0 = 1;
          mismatch_detail[_i0].error = (const char *) malloc(_len_mismatch_detail__i0__error0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_mismatch_detail__i0__error0; _j0++) {
            mismatch_detail[_i0].error[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_error0 = 1;
          const char * error = (const char *) malloc(_len_error0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_error0; _i0++) {
            error[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_error(mismatch_detail,kind,idx,error);
          for(int _aux = 0; _aux < _len_mismatch_detail0; _aux++) {
          free(mismatch_detail[_aux].error);
          }
          free(mismatch_detail);
          free(error);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum aarch64_operand_error_kind kind = 0;
          int idx = 255;
          int _len_mismatch_detail0 = 65025;
          struct TYPE_3__ * mismatch_detail = (struct TYPE_3__ *) malloc(_len_mismatch_detail0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_mismatch_detail0; _i0++) {
            mismatch_detail[_i0].kind = ((-2 * (next_i()%2)) + 1) * next_i();
        mismatch_detail[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mismatch_detail__i0__error0 = 1;
          mismatch_detail[_i0].error = (const char *) malloc(_len_mismatch_detail__i0__error0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_mismatch_detail__i0__error0; _j0++) {
            mismatch_detail[_i0].error[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_error0 = 65025;
          const char * error = (const char *) malloc(_len_error0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_error0; _i0++) {
            error[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_error(mismatch_detail,kind,idx,error);
          for(int _aux = 0; _aux < _len_mismatch_detail0; _aux++) {
          free(mismatch_detail[_aux].error);
          }
          free(mismatch_detail);
          free(error);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum aarch64_operand_error_kind kind = 0;
          int idx = 10;
          int _len_mismatch_detail0 = 100;
          struct TYPE_3__ * mismatch_detail = (struct TYPE_3__ *) malloc(_len_mismatch_detail0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_mismatch_detail0; _i0++) {
            mismatch_detail[_i0].kind = ((-2 * (next_i()%2)) + 1) * next_i();
        mismatch_detail[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mismatch_detail__i0__error0 = 1;
          mismatch_detail[_i0].error = (const char *) malloc(_len_mismatch_detail__i0__error0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_mismatch_detail__i0__error0; _j0++) {
            mismatch_detail[_i0].error[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_error0 = 100;
          const char * error = (const char *) malloc(_len_error0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_error0; _i0++) {
            error[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_error(mismatch_detail,kind,idx,error);
          for(int _aux = 0; _aux < _len_mismatch_detail0; _aux++) {
          free(mismatch_detail[_aux].error);
          }
          free(mismatch_detail);
          free(error);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
