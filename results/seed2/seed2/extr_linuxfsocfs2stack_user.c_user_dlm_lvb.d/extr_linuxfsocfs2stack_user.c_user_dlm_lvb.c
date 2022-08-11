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
struct TYPE_2__ {char* sb_lvbptr; } ;
struct ocfs2_dlm_lksb {TYPE_1__ lksb_fsdlm; } ;
struct dlm_lksb {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void *user_dlm_lvb(struct ocfs2_dlm_lksb *lksb)
{
	if (!lksb->lksb_fsdlm.sb_lvbptr)
		lksb->lksb_fsdlm.sb_lvbptr = (char *)lksb +
					     sizeof(struct dlm_lksb);
	return (void *)(lksb->lksb_fsdlm.sb_lvbptr);
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
          int _len_lksb0 = 1;
          struct ocfs2_dlm_lksb * lksb = (struct ocfs2_dlm_lksb *) malloc(_len_lksb0*sizeof(struct ocfs2_dlm_lksb));
          for(int _i0 = 0; _i0 < _len_lksb0; _i0++) {
              int _len_lksb__i0__lksb_fsdlm_sb_lvbptr0 = 1;
          lksb[_i0].lksb_fsdlm.sb_lvbptr = (char *) malloc(_len_lksb__i0__lksb_fsdlm_sb_lvbptr0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_lksb__i0__lksb_fsdlm_sb_lvbptr0; _j0++) {
            lksb[_i0].lksb_fsdlm.sb_lvbptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * benchRet = user_dlm_lvb(lksb);
          free(lksb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_lksb0 = 65025;
          struct ocfs2_dlm_lksb * lksb = (struct ocfs2_dlm_lksb *) malloc(_len_lksb0*sizeof(struct ocfs2_dlm_lksb));
          for(int _i0 = 0; _i0 < _len_lksb0; _i0++) {
              int _len_lksb__i0__lksb_fsdlm_sb_lvbptr0 = 1;
          lksb[_i0].lksb_fsdlm.sb_lvbptr = (char *) malloc(_len_lksb__i0__lksb_fsdlm_sb_lvbptr0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_lksb__i0__lksb_fsdlm_sb_lvbptr0; _j0++) {
            lksb[_i0].lksb_fsdlm.sb_lvbptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * benchRet = user_dlm_lvb(lksb);
          free(lksb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_lksb0 = 100;
          struct ocfs2_dlm_lksb * lksb = (struct ocfs2_dlm_lksb *) malloc(_len_lksb0*sizeof(struct ocfs2_dlm_lksb));
          for(int _i0 = 0; _i0 < _len_lksb0; _i0++) {
              int _len_lksb__i0__lksb_fsdlm_sb_lvbptr0 = 1;
          lksb[_i0].lksb_fsdlm.sb_lvbptr = (char *) malloc(_len_lksb__i0__lksb_fsdlm_sb_lvbptr0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_lksb__i0__lksb_fsdlm_sb_lvbptr0; _j0++) {
            lksb[_i0].lksb_fsdlm.sb_lvbptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * benchRet = user_dlm_lvb(lksb);
          free(lksb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
