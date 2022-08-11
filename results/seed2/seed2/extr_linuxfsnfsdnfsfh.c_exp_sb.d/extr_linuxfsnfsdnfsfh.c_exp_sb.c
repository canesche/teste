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
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct svc_export {TYPE_2__ ex_path; } ;
struct super_block {int dummy; } ;
struct TYPE_3__ {struct super_block* d_sb; } ;

/* Variables and functions */

__attribute__((used)) static struct super_block *exp_sb(struct svc_export *exp)
{
	return exp->ex_path.dentry->d_sb;
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
          int _len_exp0 = 1;
          struct svc_export * exp = (struct svc_export *) malloc(_len_exp0*sizeof(struct svc_export));
          for(int _i0 = 0; _i0 < _len_exp0; _i0++) {
              int _len_exp__i0__ex_path_dentry0 = 1;
          exp[_i0].ex_path.dentry = (struct TYPE_3__ *) malloc(_len_exp__i0__ex_path_dentry0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_exp__i0__ex_path_dentry0; _j0++) {
              int _len_exp__i0__ex_path_dentry_d_sb0 = 1;
          exp[_i0].ex_path.dentry->d_sb = (struct super_block *) malloc(_len_exp__i0__ex_path_dentry_d_sb0*sizeof(struct super_block));
          for(int _j0 = 0; _j0 < _len_exp__i0__ex_path_dentry_d_sb0; _j0++) {
            exp[_i0].ex_path.dentry->d_sb->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct super_block * benchRet = exp_sb(exp);
          printf("%d\n", (*benchRet).dummy);
          free(exp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_exp0 = 65025;
          struct svc_export * exp = (struct svc_export *) malloc(_len_exp0*sizeof(struct svc_export));
          for(int _i0 = 0; _i0 < _len_exp0; _i0++) {
              int _len_exp__i0__ex_path_dentry0 = 1;
          exp[_i0].ex_path.dentry = (struct TYPE_3__ *) malloc(_len_exp__i0__ex_path_dentry0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_exp__i0__ex_path_dentry0; _j0++) {
              int _len_exp__i0__ex_path_dentry_d_sb0 = 1;
          exp[_i0].ex_path.dentry->d_sb = (struct super_block *) malloc(_len_exp__i0__ex_path_dentry_d_sb0*sizeof(struct super_block));
          for(int _j0 = 0; _j0 < _len_exp__i0__ex_path_dentry_d_sb0; _j0++) {
            exp[_i0].ex_path.dentry->d_sb->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct super_block * benchRet = exp_sb(exp);
          printf("%d\n", (*benchRet).dummy);
          free(exp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_exp0 = 100;
          struct svc_export * exp = (struct svc_export *) malloc(_len_exp0*sizeof(struct svc_export));
          for(int _i0 = 0; _i0 < _len_exp0; _i0++) {
              int _len_exp__i0__ex_path_dentry0 = 1;
          exp[_i0].ex_path.dentry = (struct TYPE_3__ *) malloc(_len_exp__i0__ex_path_dentry0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_exp__i0__ex_path_dentry0; _j0++) {
              int _len_exp__i0__ex_path_dentry_d_sb0 = 1;
          exp[_i0].ex_path.dentry->d_sb = (struct super_block *) malloc(_len_exp__i0__ex_path_dentry_d_sb0*sizeof(struct super_block));
          for(int _j0 = 0; _j0 < _len_exp__i0__ex_path_dentry_d_sb0; _j0++) {
            exp[_i0].ex_path.dentry->d_sb->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct super_block * benchRet = exp_sb(exp);
          printf("%d\n", (*benchRet).dummy);
          free(exp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
