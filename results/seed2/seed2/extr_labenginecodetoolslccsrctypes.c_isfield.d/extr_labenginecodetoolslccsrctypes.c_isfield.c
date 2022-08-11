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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {char const* name; struct TYPE_4__* link; } ;
typedef  TYPE_1__* Field ;

/* Variables and functions */

__attribute__((used)) static Field isfield(const char *name, Field flist) {
	for ( ; flist; flist = flist->link)
		if (flist->name == name)
			break;
	return flist;
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_flist(int length, struct TYPE_4__ *aux_flist[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_flist[0] = walker;
  int _len_walker_name0 = 1;
  walker->name = (const char *) malloc(_len_walker_name0*sizeof(const char));
  for(int _i0 = 0; _i0 < _len_walker_name0; _i0++) {
    walker->name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  walker->link = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->link = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->link;
    aux_flist[i] = walker;
  int _len_walker_name0 = 1;
  walker->name = (const char *) malloc(_len_walker_name0*sizeof(const char));
  for(int _i0 = 0; _i0 < _len_walker_name0; _i0++) {
    walker->name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
    walker->link = NULL;
  }

  return head;
}

void _delete_flist(struct TYPE_4__ *aux_flist[], int aux_flist_size) {
  for(int i = 0; i < aux_flist_size; i++) 
    if(aux_flist[i])
      free(aux_flist[i]);
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
          int _len_name0 = 1;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_4__ * aux_flist[1];
          struct TYPE_4__ * flist = _allocate_flist(1, aux_flist);
          struct TYPE_4__ * benchRet = isfield(name,flist);
          free(name);
          _delete_flist(aux_flist, 1);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_name0 = 1;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_4__ * aux_flist[10000];
          struct TYPE_4__ * flist = _allocate_flist(10000, aux_flist);
          struct TYPE_4__ * benchRet = isfield(name,flist);
          free(name);
          _delete_flist(aux_flist, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
