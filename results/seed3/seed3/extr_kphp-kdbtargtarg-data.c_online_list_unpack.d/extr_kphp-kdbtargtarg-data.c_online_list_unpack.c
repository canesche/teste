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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {struct TYPE_3__* next; int /*<<< orphan*/  uid; } ;
typedef  TYPE_1__ olist_t ;

/* Variables and functions */

__attribute__((used)) static inline int online_list_unpack (int *A, olist_t *head) {
  olist_t *tmp = head->next;
  int *PA = A;
  while (tmp != head) {
    *A++ = tmp->uid;
    tmp = tmp->next;
  }
  return A - PA;
}


// ------------------------------------------------------------------------- //

struct TYPE_3__ *_allocate_head(int length, struct TYPE_3__ *aux_head[]) {
  struct TYPE_3__ *walker = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  aux_head[0] = walker;
  walker->next = NULL;
walker->uid = ((-2 * (next_i()%2)) + 1) * next_i();

  struct TYPE_3__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker = walker->next;
    aux_head[i] = walker;
    walker->next = NULL;
walker->uid = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  return head;
}

void _delete_head(struct TYPE_3__ *aux_head[], int aux_head_size) {
  for(int i = 0; i < aux_head_size; i++) 
    if(aux_head[i])
      free(aux_head[i]);
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
          int _len_A0 = 1;
          int * A = (int *) malloc(_len_A0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_A0; _i0++) {
            A[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_3__ * aux_head[1];
          struct TYPE_3__ * head = _allocate_head(1, aux_head);
          int benchRet = online_list_unpack(A,head);
          printf("%d\n", benchRet); 
          free(A);
          _delete_head(aux_head, 1);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_A0 = 1;
          int * A = (int *) malloc(_len_A0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_A0; _i0++) {
            A[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_3__ * aux_head[10000];
          struct TYPE_3__ * head = _allocate_head(10000, aux_head);
          int benchRet = online_list_unpack(A,head);
          printf("%d\n", benchRet); 
          free(A);
          _delete_head(aux_head, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
