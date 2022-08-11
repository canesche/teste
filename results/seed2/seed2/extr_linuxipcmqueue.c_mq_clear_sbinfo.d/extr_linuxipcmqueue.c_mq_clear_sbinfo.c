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
struct ipc_namespace {TYPE_2__* mq_mnt; } ;
struct TYPE_4__ {TYPE_1__* mnt_sb; } ;
struct TYPE_3__ {int /*<<< orphan*/ * s_fs_info; } ;

/* Variables and functions */

void mq_clear_sbinfo(struct ipc_namespace *ns)
{
	ns->mq_mnt->mnt_sb->s_fs_info = NULL;
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
          int _len_ns0 = 1;
          struct ipc_namespace * ns = (struct ipc_namespace *) malloc(_len_ns0*sizeof(struct ipc_namespace));
          for(int _i0 = 0; _i0 < _len_ns0; _i0++) {
              int _len_ns__i0__mq_mnt0 = 1;
          ns[_i0].mq_mnt = (struct TYPE_4__ *) malloc(_len_ns__i0__mq_mnt0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ns__i0__mq_mnt0; _j0++) {
              int _len_ns__i0__mq_mnt_mnt_sb0 = 1;
          ns[_i0].mq_mnt->mnt_sb = (struct TYPE_3__ *) malloc(_len_ns__i0__mq_mnt_mnt_sb0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ns__i0__mq_mnt_mnt_sb0; _j0++) {
              int _len_ns__i0__mq_mnt_mnt_sb_s_fs_info0 = 1;
          ns[_i0].mq_mnt->mnt_sb->s_fs_info = (int *) malloc(_len_ns__i0__mq_mnt_mnt_sb_s_fs_info0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ns__i0__mq_mnt_mnt_sb_s_fs_info0; _j0++) {
            ns[_i0].mq_mnt->mnt_sb->s_fs_info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          mq_clear_sbinfo(ns);
          for(int _aux = 0; _aux < _len_ns0; _aux++) {
          free(ns[_aux].mq_mnt);
          }
          free(ns);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ns0 = 65025;
          struct ipc_namespace * ns = (struct ipc_namespace *) malloc(_len_ns0*sizeof(struct ipc_namespace));
          for(int _i0 = 0; _i0 < _len_ns0; _i0++) {
              int _len_ns__i0__mq_mnt0 = 1;
          ns[_i0].mq_mnt = (struct TYPE_4__ *) malloc(_len_ns__i0__mq_mnt0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ns__i0__mq_mnt0; _j0++) {
              int _len_ns__i0__mq_mnt_mnt_sb0 = 1;
          ns[_i0].mq_mnt->mnt_sb = (struct TYPE_3__ *) malloc(_len_ns__i0__mq_mnt_mnt_sb0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ns__i0__mq_mnt_mnt_sb0; _j0++) {
              int _len_ns__i0__mq_mnt_mnt_sb_s_fs_info0 = 1;
          ns[_i0].mq_mnt->mnt_sb->s_fs_info = (int *) malloc(_len_ns__i0__mq_mnt_mnt_sb_s_fs_info0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ns__i0__mq_mnt_mnt_sb_s_fs_info0; _j0++) {
            ns[_i0].mq_mnt->mnt_sb->s_fs_info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          mq_clear_sbinfo(ns);
          for(int _aux = 0; _aux < _len_ns0; _aux++) {
          free(ns[_aux].mq_mnt);
          }
          free(ns);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ns0 = 100;
          struct ipc_namespace * ns = (struct ipc_namespace *) malloc(_len_ns0*sizeof(struct ipc_namespace));
          for(int _i0 = 0; _i0 < _len_ns0; _i0++) {
              int _len_ns__i0__mq_mnt0 = 1;
          ns[_i0].mq_mnt = (struct TYPE_4__ *) malloc(_len_ns__i0__mq_mnt0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ns__i0__mq_mnt0; _j0++) {
              int _len_ns__i0__mq_mnt_mnt_sb0 = 1;
          ns[_i0].mq_mnt->mnt_sb = (struct TYPE_3__ *) malloc(_len_ns__i0__mq_mnt_mnt_sb0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ns__i0__mq_mnt_mnt_sb0; _j0++) {
              int _len_ns__i0__mq_mnt_mnt_sb_s_fs_info0 = 1;
          ns[_i0].mq_mnt->mnt_sb->s_fs_info = (int *) malloc(_len_ns__i0__mq_mnt_mnt_sb_s_fs_info0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ns__i0__mq_mnt_mnt_sb_s_fs_info0; _j0++) {
            ns[_i0].mq_mnt->mnt_sb->s_fs_info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          mq_clear_sbinfo(ns);
          for(int _aux = 0; _aux < _len_ns0; _aux++) {
          free(ns[_aux].mq_mnt);
          }
          free(ns);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
