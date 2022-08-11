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
       3            linked\n\
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
struct kernfs_root {int dummy; } ;
struct TYPE_2__ {struct kernfs_root* root; } ;
struct kernfs_node {TYPE_1__ dir; struct kernfs_node* parent; } ;

/* Variables and functions */

__attribute__((used)) static inline struct kernfs_root *kernfs_root(struct kernfs_node *kn)
{
	/* if parent exists, it's always a dir; otherwise, @sd is a dir */
	if (kn->parent)
		kn = kn->parent;
	return kn->dir.root;
}


// ------------------------------------------------------------------------- //

struct kernfs_node *_allocate_kn(int length, struct kernfs_node *aux_kn[]) {
  struct kernfs_node *walker = (struct kernfs_node *)malloc(sizeof(struct kernfs_node));

  aux_kn[0] = walker;
  int _len_walker_dir_root0 = 1;
  walker->dir.root = (struct kernfs_root *) malloc(_len_walker_dir_root0*sizeof(struct kernfs_root));
  for(int _j0 = 0; _j0 < _len_walker_dir_root0; _j0++) {
    walker->dir.root->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  walker->parent = NULL;

  struct kernfs_node *head = walker;
  for(int i = 1; i < length; i++) {
    walker->parent = (struct kernfs_node *)malloc(sizeof(struct kernfs_node));
    walker = walker->parent;
    aux_kn[i] = walker;
  int _len_walker_dir_root0 = 1;
  walker->dir.root = (struct kernfs_root *) malloc(_len_walker_dir_root0*sizeof(struct kernfs_root));
  for(int _j0 = 0; _j0 < _len_walker_dir_root0; _j0++) {
    walker->dir.root->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
  }
    walker->parent = NULL;
  }

  return head;
}

void _delete_kn(struct kernfs_node *aux_kn[], int aux_kn_size) {
  for(int i = 0; i < aux_kn_size; i++) 
    if(aux_kn[i])
      free(aux_kn[i]);
}

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
          struct kernfs_node * aux_kn[1];
          struct kernfs_node * kn = _allocate_kn(1, aux_kn);
          struct kernfs_root * benchRet = kernfs_root(kn);
          printf("%d\n", (*benchRet).dummy);
          _delete_kn(aux_kn, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct kernfs_node * aux_kn[10000];
          struct kernfs_node * kn = _allocate_kn(10000, aux_kn);
          struct kernfs_root * benchRet = kernfs_root(kn);
          printf("%d\n", (*benchRet).dummy);
          _delete_kn(aux_kn, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
