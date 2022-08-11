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
struct pack_list {struct pack_list* next; TYPE_1__* pack; } ;
typedef  int /*<<< orphan*/  off_t ;
struct TYPE_2__ {scalar_t__ index_size; scalar_t__ pack_size; } ;

/* Variables and functions */

__attribute__((used)) static inline off_t pack_set_bytecount(struct pack_list *pl)
{
	off_t ret = 0;
	while (pl) {
		ret += pl->pack->pack_size;
		ret += pl->pack->index_size;
		pl = pl->next;
	}
	return ret;
}


// ------------------------------------------------------------------------- //

struct pack_list *_allocate_pl(int length, struct pack_list *aux_pl[]) {
  struct pack_list *walker = (struct pack_list *)malloc(sizeof(struct pack_list));

  aux_pl[0] = walker;
  walker->next = NULL;
  int _len_walker_pack0 = 1;
  walker->pack = (struct TYPE_2__ *) malloc(_len_walker_pack0*sizeof(struct TYPE_2__));
  for(int _i0 = 0; _i0 < _len_walker_pack0; _i0++) {
    walker->pack.index_size = ((-2 * (next_i()%2)) + 1) * next_i();
walker->pack.pack_size = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  struct pack_list *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct pack_list *)malloc(sizeof(struct pack_list));
    walker = walker->next;
    aux_pl[i] = walker;
    walker->next = NULL;
  int _len_walker_pack0 = 1;
  walker->pack = (struct TYPE_2__ *) malloc(_len_walker_pack0*sizeof(struct TYPE_2__));
  for(int _i0 = 0; _i0 < _len_walker_pack0; _i0++) {
    walker->pack.index_size = ((-2 * (next_i()%2)) + 1) * next_i();
walker->pack.pack_size = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  }

  return head;
}

void _delete_pl(struct pack_list *aux_pl[], int aux_pl_size) {
  for(int i = 0; i < aux_pl_size; i++) 
    if(aux_pl[i])
      free(aux_pl[i]);
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
          struct pack_list * aux_pl[1];
          struct pack_list * pl = _allocate_pl(1, aux_pl);
          int benchRet = pack_set_bytecount(pl);
          printf("%d\n", benchRet); 
          _delete_pl(aux_pl, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct pack_list * aux_pl[10000];
          struct pack_list * pl = _allocate_pl(10000, aux_pl);
          int benchRet = pack_set_bytecount(pl);
          printf("%d\n", benchRet); 
          _delete_pl(aux_pl, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
