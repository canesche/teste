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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  size_t uint32_t ;
typedef  int /*<<< orphan*/  u32 ;
struct amdgpu_cs_parser {TYPE_2__* job; } ;
struct TYPE_4__ {TYPE_1__* ibs; } ;
struct TYPE_3__ {int /*<<< orphan*/ * ptr; } ;

/* Variables and functions */

__attribute__((used)) static inline u32 amdgpu_get_ib_value(struct amdgpu_cs_parser *p,
				      uint32_t ib_idx, int idx)
{
	return p->job->ibs[ib_idx].ptr[idx];
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
          unsigned long ib_idx = 100;
          int idx = 100;
          int _len_p0 = 1;
          struct amdgpu_cs_parser * p = (struct amdgpu_cs_parser *) malloc(_len_p0*sizeof(struct amdgpu_cs_parser));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__job0 = 1;
          p[_i0].job = (struct TYPE_4__ *) malloc(_len_p__i0__job0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_p__i0__job0; _j0++) {
              int _len_p__i0__job_ibs0 = 1;
          p[_i0].job->ibs = (struct TYPE_3__ *) malloc(_len_p__i0__job_ibs0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_p__i0__job_ibs0; _j0++) {
              int _len_p__i0__job_ibs_ptr0 = 1;
          p[_i0].job->ibs->ptr = (int *) malloc(_len_p__i0__job_ibs_ptr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__job_ibs_ptr0; _j0++) {
            p[_i0].job->ibs->ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = amdgpu_get_ib_value(p,ib_idx,idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].job);
          }
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long ib_idx = 255;
          int idx = 255;
          int _len_p0 = 65025;
          struct amdgpu_cs_parser * p = (struct amdgpu_cs_parser *) malloc(_len_p0*sizeof(struct amdgpu_cs_parser));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__job0 = 1;
          p[_i0].job = (struct TYPE_4__ *) malloc(_len_p__i0__job0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_p__i0__job0; _j0++) {
              int _len_p__i0__job_ibs0 = 1;
          p[_i0].job->ibs = (struct TYPE_3__ *) malloc(_len_p__i0__job_ibs0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_p__i0__job_ibs0; _j0++) {
              int _len_p__i0__job_ibs_ptr0 = 1;
          p[_i0].job->ibs->ptr = (int *) malloc(_len_p__i0__job_ibs_ptr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__job_ibs_ptr0; _j0++) {
            p[_i0].job->ibs->ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = amdgpu_get_ib_value(p,ib_idx,idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].job);
          }
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long ib_idx = 10;
          int idx = 10;
          int _len_p0 = 100;
          struct amdgpu_cs_parser * p = (struct amdgpu_cs_parser *) malloc(_len_p0*sizeof(struct amdgpu_cs_parser));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__job0 = 1;
          p[_i0].job = (struct TYPE_4__ *) malloc(_len_p__i0__job0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_p__i0__job0; _j0++) {
              int _len_p__i0__job_ibs0 = 1;
          p[_i0].job->ibs = (struct TYPE_3__ *) malloc(_len_p__i0__job_ibs0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_p__i0__job_ibs0; _j0++) {
              int _len_p__i0__job_ibs_ptr0 = 1;
          p[_i0].job->ibs->ptr = (int *) malloc(_len_p__i0__job_ibs_ptr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__job_ibs_ptr0; _j0++) {
            p[_i0].job->ibs->ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = amdgpu_get_ib_value(p,ib_idx,idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].job);
          }
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
