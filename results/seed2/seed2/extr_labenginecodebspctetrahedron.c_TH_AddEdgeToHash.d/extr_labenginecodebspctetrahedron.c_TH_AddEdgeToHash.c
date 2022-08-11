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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int* v; struct TYPE_4__* hashnext; } ;
typedef  TYPE_1__ th_edge_t ;
struct TYPE_5__ {TYPE_1__** edgehash; } ;

/* Variables and functions */
 int EDGEHASH_SIZE ; 
 TYPE_2__ thworld ; 

void TH_AddEdgeToHash(th_edge_t *edge)
{
	int hashvalue;

	hashvalue = (edge->v[0] + edge->v[1]) & (EDGEHASH_SIZE-1);
	edge->hashnext = thworld.edgehash[hashvalue];
	thworld.edgehash[hashvalue] = edge;
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_edge(int length, struct TYPE_4__ *aux_edge[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_edge[0] = walker;
  int _len_walker_v0 = 1;
  walker->v = (int *) malloc(_len_walker_v0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_v0; _i0++) {
    walker->v[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  walker->hashnext = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->hashnext = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->hashnext;
    aux_edge[i] = walker;
  int _len_walker_v0 = 1;
  walker->v = (int *) malloc(_len_walker_v0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_v0; _i0++) {
    walker->v[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
    walker->hashnext = NULL;
  }

  return head;
}

void _delete_edge(struct TYPE_4__ *aux_edge[], int aux_edge_size) {
  for(int i = 0; i < aux_edge_size; i++) 
    if(aux_edge[i])
      free(aux_edge[i]);
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
          struct TYPE_4__ * aux_edge[1];
          struct TYPE_4__ * edge = _allocate_edge(1, aux_edge);
          TH_AddEdgeToHash(edge);
          _delete_edge(aux_edge, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct TYPE_4__ * aux_edge[10000];
          struct TYPE_4__ * edge = _allocate_edge(10000, aux_edge);
          TH_AddEdgeToHash(edge);
          _delete_edge(aux_edge, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
