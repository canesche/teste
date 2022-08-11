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
struct TYPE_4__ {int vn; struct TYPE_4__* parent; struct TYPE_4__* next; struct TYPE_4__* prev; } ;
typedef  TYPE_1__ watchcat ;

/* Variables and functions */

inline void watchcat_q_add (watchcat *f, watchcat *e) {
  watchcat *b = f->prev;

  e->next = f;
  f->prev = e;

  e->prev = b;
  b->next = e;

  e->parent = f;
  if (f->vn < 2000000000) {
    f->vn++;
  }
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_f(int length, struct TYPE_4__ *aux_f[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_f[0] = walker;
walker->vn = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->parent = NULL;
  walker->next = NULL;
  walker->prev = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->parent = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->parent;
    aux_f[i] = walker;
    walker->next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->next;
    aux_f[i] = walker;
    walker->prev = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->prev;
    aux_f[i] = walker;
walker->vn = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->parent = NULL;
    walker->next = NULL;
    walker->prev = NULL;
  }

  return head;
}

void _delete_f(struct TYPE_4__ *aux_f[], int aux_f_size) {
  for(int i = 0; i < aux_f_size; i++) 
    if(aux_f[i])
      free(aux_f[i]);
}

struct TYPE_4__ *_allocate_e(int length, struct TYPE_4__ *aux_e[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_e[0] = walker;
walker->vn = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->parent = NULL;
  walker->next = NULL;
  walker->prev = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->parent = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->parent;
    aux_e[i] = walker;
    walker->next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->next;
    aux_e[i] = walker;
    walker->prev = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->prev;
    aux_e[i] = walker;
walker->vn = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->parent = NULL;
    walker->next = NULL;
    walker->prev = NULL;
  }

  return head;
}

void _delete_e(struct TYPE_4__ *aux_e[], int aux_e_size) {
  for(int i = 0; i < aux_e_size; i++) 
    if(aux_e[i])
      free(aux_e[i]);
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
          struct TYPE_4__ * aux_f[1];
          struct TYPE_4__ * f = _allocate_f(1, aux_f);
          struct TYPE_4__ * aux_e[1];
          struct TYPE_4__ * e = _allocate_e(1, aux_e);
          watchcat_q_add(f,e);
          _delete_f(aux_f, 1);
          _delete_e(aux_e, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct TYPE_4__ * aux_f[10000];
          struct TYPE_4__ * f = _allocate_f(10000, aux_f);
          struct TYPE_4__ * aux_e[10000];
          struct TYPE_4__ * e = _allocate_e(10000, aux_e);
          watchcat_q_add(f,e);
          _delete_f(aux_f, 10000);
          _delete_e(aux_e, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
