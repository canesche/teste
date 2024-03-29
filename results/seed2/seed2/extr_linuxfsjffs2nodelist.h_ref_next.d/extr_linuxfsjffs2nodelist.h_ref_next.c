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
struct jffs2_raw_node_ref {scalar_t__ flash_offset; struct jffs2_raw_node_ref* next_in_ino; } ;

/* Variables and functions */
 scalar_t__ REF_EMPTY_NODE ; 
 scalar_t__ REF_LINK_NODE ; 

__attribute__((used)) static inline struct jffs2_raw_node_ref *ref_next(struct jffs2_raw_node_ref *ref)
{
	ref++;

	/* Link to another block of refs */
	if (ref->flash_offset == REF_LINK_NODE) {
		ref = ref->next_in_ino;
		if (!ref)
			return ref;
	}

	/* End of chain */
	if (ref->flash_offset == REF_EMPTY_NODE)
		return NULL;

	return ref;
}


// ------------------------------------------------------------------------- //

struct jffs2_raw_node_ref *_allocate_ref(int length, struct jffs2_raw_node_ref *aux_ref[]) {
  struct jffs2_raw_node_ref *walker = (struct jffs2_raw_node_ref *)malloc(sizeof(struct jffs2_raw_node_ref));

  aux_ref[0] = walker;
walker->flash_offset = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->next_in_ino = NULL;

  struct jffs2_raw_node_ref *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next_in_ino = (struct jffs2_raw_node_ref *)malloc(sizeof(struct jffs2_raw_node_ref));
    walker = walker->next_in_ino;
    aux_ref[i] = walker;
walker->flash_offset = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->next_in_ino = NULL;
  }

  return head;
}

void _delete_ref(struct jffs2_raw_node_ref *aux_ref[], int aux_ref_size) {
  for(int i = 0; i < aux_ref_size; i++) 
    if(aux_ref[i])
      free(aux_ref[i]);
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
          struct jffs2_raw_node_ref * aux_ref[1];
          struct jffs2_raw_node_ref * ref = _allocate_ref(1, aux_ref);
          struct jffs2_raw_node_ref * benchRet = ref_next(ref);
          printf("%ld\n", (*benchRet).flash_offset);
          _delete_ref(aux_ref, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct jffs2_raw_node_ref * aux_ref[10000];
          struct jffs2_raw_node_ref * ref = _allocate_ref(10000, aux_ref);
          struct jffs2_raw_node_ref * benchRet = ref_next(ref);
          printf("%ld\n", (*benchRet).flash_offset);
          _delete_ref(aux_ref, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
