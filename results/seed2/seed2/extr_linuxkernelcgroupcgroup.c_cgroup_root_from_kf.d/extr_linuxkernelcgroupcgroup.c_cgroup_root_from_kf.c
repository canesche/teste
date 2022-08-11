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
struct kernfs_root {TYPE_1__* kn; } ;
struct cgroup_root {int dummy; } ;
struct cgroup {struct cgroup_root* root; } ;
struct TYPE_2__ {struct cgroup* priv; } ;

/* Variables and functions */

struct cgroup_root *cgroup_root_from_kf(struct kernfs_root *kf_root)
{
	struct cgroup *root_cgrp = kf_root->kn->priv;

	return root_cgrp->root;
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
          int _len_kf_root0 = 1;
          struct kernfs_root * kf_root = (struct kernfs_root *) malloc(_len_kf_root0*sizeof(struct kernfs_root));
          for(int _i0 = 0; _i0 < _len_kf_root0; _i0++) {
              int _len_kf_root__i0__kn0 = 1;
          kf_root[_i0].kn = (struct TYPE_2__ *) malloc(_len_kf_root__i0__kn0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_kf_root__i0__kn0; _j0++) {
              int _len_kf_root__i0__kn_priv0 = 1;
          kf_root[_i0].kn->priv = (struct cgroup *) malloc(_len_kf_root__i0__kn_priv0*sizeof(struct cgroup));
          for(int _j0 = 0; _j0 < _len_kf_root__i0__kn_priv0; _j0++) {
              int _len_kf_root__i0__kn_priv_root0 = 1;
          kf_root[_i0].kn->priv->root = (struct cgroup_root *) malloc(_len_kf_root__i0__kn_priv_root0*sizeof(struct cgroup_root));
          for(int _j0 = 0; _j0 < _len_kf_root__i0__kn_priv_root0; _j0++) {
            kf_root[_i0].kn->priv->root->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          struct cgroup_root * benchRet = cgroup_root_from_kf(kf_root);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_kf_root0; _aux++) {
          free(kf_root[_aux].kn);
          }
          free(kf_root);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_kf_root0 = 65025;
          struct kernfs_root * kf_root = (struct kernfs_root *) malloc(_len_kf_root0*sizeof(struct kernfs_root));
          for(int _i0 = 0; _i0 < _len_kf_root0; _i0++) {
              int _len_kf_root__i0__kn0 = 1;
          kf_root[_i0].kn = (struct TYPE_2__ *) malloc(_len_kf_root__i0__kn0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_kf_root__i0__kn0; _j0++) {
              int _len_kf_root__i0__kn_priv0 = 1;
          kf_root[_i0].kn->priv = (struct cgroup *) malloc(_len_kf_root__i0__kn_priv0*sizeof(struct cgroup));
          for(int _j0 = 0; _j0 < _len_kf_root__i0__kn_priv0; _j0++) {
              int _len_kf_root__i0__kn_priv_root0 = 1;
          kf_root[_i0].kn->priv->root = (struct cgroup_root *) malloc(_len_kf_root__i0__kn_priv_root0*sizeof(struct cgroup_root));
          for(int _j0 = 0; _j0 < _len_kf_root__i0__kn_priv_root0; _j0++) {
            kf_root[_i0].kn->priv->root->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          struct cgroup_root * benchRet = cgroup_root_from_kf(kf_root);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_kf_root0; _aux++) {
          free(kf_root[_aux].kn);
          }
          free(kf_root);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_kf_root0 = 100;
          struct kernfs_root * kf_root = (struct kernfs_root *) malloc(_len_kf_root0*sizeof(struct kernfs_root));
          for(int _i0 = 0; _i0 < _len_kf_root0; _i0++) {
              int _len_kf_root__i0__kn0 = 1;
          kf_root[_i0].kn = (struct TYPE_2__ *) malloc(_len_kf_root__i0__kn0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_kf_root__i0__kn0; _j0++) {
              int _len_kf_root__i0__kn_priv0 = 1;
          kf_root[_i0].kn->priv = (struct cgroup *) malloc(_len_kf_root__i0__kn_priv0*sizeof(struct cgroup));
          for(int _j0 = 0; _j0 < _len_kf_root__i0__kn_priv0; _j0++) {
              int _len_kf_root__i0__kn_priv_root0 = 1;
          kf_root[_i0].kn->priv->root = (struct cgroup_root *) malloc(_len_kf_root__i0__kn_priv_root0*sizeof(struct cgroup_root));
          for(int _j0 = 0; _j0 < _len_kf_root__i0__kn_priv_root0; _j0++) {
            kf_root[_i0].kn->priv->root->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          struct cgroup_root * benchRet = cgroup_root_from_kf(kf_root);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_kf_root0; _aux++) {
          free(kf_root[_aux].kn);
          }
          free(kf_root);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
