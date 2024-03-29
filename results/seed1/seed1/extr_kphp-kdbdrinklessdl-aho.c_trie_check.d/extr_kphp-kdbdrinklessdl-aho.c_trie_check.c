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
       4            dlinked\n\
       5            bintree\n\
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
struct TYPE_3__ {scalar_t__ code; int is_end; struct TYPE_3__* v; struct TYPE_3__* h; } ;
typedef  TYPE_1__ trie_node ;
typedef  scalar_t__ CHAR ;

/* Variables and functions */

int trie_check (trie_node *v, CHAR *s) {
  while (1) {
    while (v && v->code != *s) {
      v = v->h;
    }
    if (v == NULL) {
      return 0;
    }
    s++;
    if (*s == 0) {
      return v->is_end;
    }
    v = v->v;
  }
}


// ------------------------------------------------------------------------- //

struct TYPE_3__ *_allocate_v(int length, struct TYPE_3__ *aux_v[]) {
  struct TYPE_3__ *walker = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  aux_v[0] = walker;
walker->code = ((-2 * (next_i()%2)) + 1) * next_i();
walker->is_end = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->v = NULL;
  walker->h = NULL;

  struct TYPE_3__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->v = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker = walker->v;
    aux_v[i] = walker;
    walker->h = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker = walker->h;
    aux_v[i] = walker;
walker->code = ((-2 * (next_i()%2)) + 1) * next_i();
walker->is_end = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->v = NULL;
    walker->h = NULL;
  }

  return head;
}

void _delete_v(struct TYPE_3__ *aux_v[], int aux_v_size) {
  for(int i = 0; i < aux_v_size; i++) 
    if(aux_v[i])
      free(aux_v[i]);
}

struct TYPE_3__ *_allocate_Dlinked_v(int length, struct TYPE_3__ *aux_dlinked_v[] ) {
  struct TYPE_3__ *walker = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  aux_dlinked_v[0] = walker;
  walker->code = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->is_end = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->v = NULL;
  walker->h = NULL;

  struct TYPE_3__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->h = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker->h->v = walker;
    walker = walker->h;
    aux_dlinked_v[i] = walker;
    if (i == (length - 1)) 
      walker->h = NULL;    walker->code = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->is_end = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  return head;
}

void _delete_Dlinked_v(struct TYPE_3__ *aux_dlinked_v[], int aux_dlinked_v_size) {
  for(int i = 0; i < aux_dlinked_v_size; i++) 
    if(aux_dlinked_v[i])
      free(aux_dlinked_v[i]);
}

struct TYPE_3__ *_allocateBinTree_v(int length, struct TYPE_3__ *aux_tree_v[], int *counter_v) {
  if(length == 0)
    return NULL;
  struct TYPE_3__ *walker = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  aux_tree_v[*counter_v] = walker;
  (*counter_v)++;
  walker->code = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->is_end = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->v = _allocateBinTree_v(length - 1, aux_tree_v, counter_v);
  walker->h = _allocateBinTree_v(length - 1, aux_tree_v, counter_v);
  return walker;
}

void _deleteBinTree_v(struct TYPE_3__ *aux_tree_v[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_v[i])
      free(aux_tree_v[i]);
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
          struct TYPE_3__ * aux_v[1];
          struct TYPE_3__ * v = _allocate_v(1, aux_v);
          int _len_s0 = 1;
          long * s = (long *) malloc(_len_s0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = trie_check(v,s);
          printf("%d\n", benchRet); 
          _delete_v(aux_v, 1);
          free(s);
        
        break;
    }
    // linked
    case 3:
    {
          struct TYPE_3__ * aux_v[10000];
          struct TYPE_3__ * v = _allocate_v(10000, aux_v);
          int _len_s0 = 1;
          long * s = (long *) malloc(_len_s0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = trie_check(v,s);
          printf("%d\n", benchRet); 
          _delete_v(aux_v, 10000);
          free(s);
        
        break;
    }
    // dlinked
    case 4:
    {
          struct TYPE_3__ * aux_dlinked_v[10000];
          struct TYPE_3__ * v = _allocate_Dlinked_v(10000, aux_dlinked_v);
          int _len_s0 = 1;
          long * s = (long *) malloc(_len_s0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = trie_check(v,s);
          printf("%d\n", benchRet); 
          _delete_Dlinked_v(aux_dlinked_v, 10000);
          free(s);
        
        break;
    }
    // bintree
    case 5:
    {
          int counter_v= 0;
          struct TYPE_3__ *  aux_tree_v[1023];
          struct TYPE_3__ * v = _allocateBinTree_v(10, aux_tree_v, &counter_v);
          int _len_s0 = 1;
          long * s = (long *) malloc(_len_s0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = trie_check(v,s);
          printf("%d\n", benchRet); 
          _deleteBinTree_v(aux_tree_v);
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
