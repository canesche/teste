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
       0            bintree\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {struct TYPE_3__* l; struct TYPE_3__* r; } ;
typedef  TYPE_1__ perm_list ;

/* Variables and functions */

void list_del (perm_list *x) {
  perm_list *a = x->l, *b = x->r;
  a->r = b;
  b->l = a;
}


// ------------------------------------------------------------------------- //

struct TYPE_3__ *_allocateBinTree_x(int length, struct TYPE_3__ *aux_tree_x[], int *counter_x) {
  if(length == 0)
    return NULL;
  struct TYPE_3__ *walker = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  aux_tree_x[*counter_x] = walker;
  (*counter_x)++;
  walker->l = _allocateBinTree_x(length - 1, aux_tree_x, counter_x);
  walker->r = _allocateBinTree_x(length - 1, aux_tree_x, counter_x);
  return walker;
}

void _deleteBinTree_x(struct TYPE_3__ *aux_tree_x[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_x[i])
      free(aux_tree_x[i]);
}




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // bintree
    case 0:
    {
          int counter_x= 0;
          struct TYPE_3__ *  aux_tree_x[1023];
          struct TYPE_3__ * x = _allocateBinTree_x(10, aux_tree_x, &counter_x);
          list_del(x);
          _deleteBinTree_x(aux_tree_x);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
