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
typedef  TYPE_2__* vnode_pager_t ;
struct vnode {int dummy; } ;
typedef  scalar_t__ memory_object_t ;
struct TYPE_3__ {int /*<<< orphan*/ * mo_pager_ops; } ;
struct TYPE_4__ {struct vnode* vnode_handle; TYPE_1__ vn_pgr_hdr; } ;

/* Variables and functions */
 int /*<<< orphan*/  vnode_pager_ops ; 

struct vnode *
vnode_pager_lookup_vnode(
	memory_object_t  name)
{
	vnode_pager_t   vnode_object;
	vnode_object = (vnode_pager_t)name;
	if(vnode_object->vn_pgr_hdr.mo_pager_ops == &vnode_pager_ops)
		return (vnode_object->vnode_handle);
	else
		return NULL;
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
          long name = 100;
          struct vnode * benchRet = vnode_pager_lookup_vnode(name);
          printf("%d\n", (*benchRet).dummy);
        
        break;
    }
    // big-arr
    case 1:
    {
          long name = 255;
          struct vnode * benchRet = vnode_pager_lookup_vnode(name);
          printf("%d\n", (*benchRet).dummy);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long name = 10;
          struct vnode * benchRet = vnode_pager_lookup_vnode(name);
          printf("%d\n", (*benchRet).dummy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
