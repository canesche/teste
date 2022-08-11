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
struct nameidata {int dfd; struct nameidata* saved; int /*<<< orphan*/  total_link_count; struct filename* name; int /*<<< orphan*/  internal; int /*<<< orphan*/  stack; } ;
struct filename {int dummy; } ;
struct TYPE_2__ {struct nameidata* nameidata; } ;

/* Variables and functions */
 TYPE_1__* current ; 

__attribute__((used)) static void set_nameidata(struct nameidata *p, int dfd, struct filename *name)
{
	struct nameidata *old = current->nameidata;
	p->stack = p->internal;
	p->dfd = dfd;
	p->name = name;
	p->total_link_count = old ? old->total_link_count : 0;
	p->saved = old;
	current->nameidata = p;
}


// ------------------------------------------------------------------------- //

struct nameidata *_allocate_p(int length, struct nameidata *aux_p[]) {
  struct nameidata *walker = (struct nameidata *)malloc(sizeof(struct nameidata));

  aux_p[0] = walker;
walker->dfd = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->saved = NULL;
walker->total_link_count = ((-2 * (next_i()%2)) + 1) * next_i();
  int _len_walker_name0 = 1;
  walker->name = (struct filename *) malloc(_len_walker_name0*sizeof(struct filename));
  for(int _i0 = 0; _i0 < _len_walker_name0; _i0++) {
    walker->name.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
  }
walker->internal = ((-2 * (next_i()%2)) + 1) * next_i();
walker->stack = ((-2 * (next_i()%2)) + 1) * next_i();

  struct nameidata *head = walker;
  for(int i = 1; i < length; i++) {
    walker->saved = (struct nameidata *)malloc(sizeof(struct nameidata));
    walker = walker->saved;
    aux_p[i] = walker;
walker->dfd = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->saved = NULL;
walker->total_link_count = ((-2 * (next_i()%2)) + 1) * next_i();
  int _len_walker_name0 = 1;
  walker->name = (struct filename *) malloc(_len_walker_name0*sizeof(struct filename));
  for(int _i0 = 0; _i0 < _len_walker_name0; _i0++) {
    walker->name.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
  }
walker->internal = ((-2 * (next_i()%2)) + 1) * next_i();
walker->stack = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  return head;
}

void _delete_p(struct nameidata *aux_p[], int aux_p_size) {
  for(int i = 0; i < aux_p_size; i++) 
    if(aux_p[i])
      free(aux_p[i]);
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
          int dfd = 100;
          struct nameidata * aux_p[1];
          struct nameidata * p = _allocate_p(1, aux_p);
          int _len_name0 = 1;
          struct filename * name = (struct filename *) malloc(_len_name0*sizeof(struct filename));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_nameidata(p,dfd,name);
          _delete_p(aux_p, 1);
          free(name);
        
        break;
    }
    // linked
    case 3:
    {
          int dfd = ((-2 * (next_i()%2)) + 1) * next_i();
          struct nameidata * aux_p[10000];
          struct nameidata * p = _allocate_p(10000, aux_p);
          int _len_name0 = 1;
          struct filename * name = (struct filename *) malloc(_len_name0*sizeof(struct filename));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_nameidata(p,dfd,name);
          _delete_p(aux_p, 10000);
          free(name);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
