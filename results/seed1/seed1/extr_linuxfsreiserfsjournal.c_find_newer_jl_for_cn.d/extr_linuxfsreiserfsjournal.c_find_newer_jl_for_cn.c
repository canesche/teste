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

/* Type definitions */
struct super_block {int dummy; } ;
struct reiserfs_journal_list {int dummy; } ;
struct reiserfs_journal_cnode {scalar_t__ blocknr; struct reiserfs_journal_cnode* hprev; struct reiserfs_journal_list* jlist; struct super_block* sb; } ;
typedef  scalar_t__ b_blocknr_t ;

/* Variables and functions */

__attribute__((used)) static struct reiserfs_journal_list *find_newer_jl_for_cn(struct
							  reiserfs_journal_cnode
							  *cn)
{
	struct super_block *sb = cn->sb;
	b_blocknr_t blocknr = cn->blocknr;

	cn = cn->hprev;
	while (cn) {
		if (cn->sb == sb && cn->blocknr == blocknr && cn->jlist) {
			return cn->jlist;
		}
		cn = cn->hprev;
	}
	return NULL;
}


// ------------------------------------------------------------------------- //

struct reiserfs_journal_cnode *_allocate_cn(int length, struct reiserfs_journal_cnode *aux_cn[]) {
  struct reiserfs_journal_cnode *walker = (struct reiserfs_journal_cnode *)malloc(sizeof(struct reiserfs_journal_cnode));

  aux_cn[0] = walker;
walker->blocknr = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->hprev = NULL;
  int _len_walker_jlist0 = 1;
  walker->jlist = (struct reiserfs_journal_list *) malloc(_len_walker_jlist0*sizeof(struct reiserfs_journal_list));
  for(int _i0 = 0; _i0 < _len_walker_jlist0; _i0++) {
    walker->jlist.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  int _len_walker_sb0 = 1;
  walker->sb = (struct super_block *) malloc(_len_walker_sb0*sizeof(struct super_block));
  for(int _i0 = 0; _i0 < _len_walker_sb0; _i0++) {
    walker->sb.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  struct reiserfs_journal_cnode *head = walker;
  for(int i = 1; i < length; i++) {
    walker->hprev = (struct reiserfs_journal_cnode *)malloc(sizeof(struct reiserfs_journal_cnode));
    walker = walker->hprev;
    aux_cn[i] = walker;
walker->blocknr = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->hprev = NULL;
  int _len_walker_jlist0 = 1;
  walker->jlist = (struct reiserfs_journal_list *) malloc(_len_walker_jlist0*sizeof(struct reiserfs_journal_list));
  for(int _i0 = 0; _i0 < _len_walker_jlist0; _i0++) {
    walker->jlist.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  int _len_walker_sb0 = 1;
  walker->sb = (struct super_block *) malloc(_len_walker_sb0*sizeof(struct super_block));
  for(int _i0 = 0; _i0 < _len_walker_sb0; _i0++) {
    walker->sb.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  }

  return head;
}

void _delete_cn(struct reiserfs_journal_cnode *aux_cn[], int aux_cn_size) {
  for(int i = 0; i < aux_cn_size; i++) 
    if(aux_cn[i])
      free(aux_cn[i]);
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
          struct reiserfs_journal_cnode * aux_cn[1];
          struct reiserfs_journal_cnode * cn = _allocate_cn(1, aux_cn);
          struct reiserfs_journal_list * benchRet = find_newer_jl_for_cn(cn);
          printf("%d\n", (*benchRet).dummy);
          _delete_cn(aux_cn, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct reiserfs_journal_cnode * aux_cn[10000];
          struct reiserfs_journal_cnode * cn = _allocate_cn(10000, aux_cn);
          struct reiserfs_journal_list * benchRet = find_newer_jl_for_cn(cn);
          printf("%d\n", (*benchRet).dummy);
          _delete_cn(aux_cn, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
