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
       1            linked\n\
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
typedef  scalar_t__ u32 ;
struct TYPE_3__ {struct TYPE_3__* pNext; } ;
typedef  TYPE_1__ LookasideSlot ;

/* Variables and functions */

__attribute__((used)) static u32 countLookasideSlots(LookasideSlot *p){
  u32 cnt = 0;
  while( p ){
    p = p->pNext;
    cnt++;
  }
  return cnt;
}


// ------------------------------------------------------------------------- //

struct TYPE_3__ *_allocate_p(int length, struct TYPE_3__ *aux_p[]) {
  struct TYPE_3__ *walker = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  aux_p[0] = walker;
  walker->pNext = NULL;

  struct TYPE_3__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->pNext = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker = walker->pNext;
    aux_p[i] = walker;
    walker->pNext = NULL;
  }

  return head;
}

void _delete_p(struct TYPE_3__ *aux_p[], int aux_p_size) {
  for(int i = 0; i < aux_p_size; i++) 
    if(aux_p[i])
      free(aux_p[i]);
}




// ------------------------------------------------------------------------- //

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
          struct TYPE_3__ * aux_p[1];
          struct TYPE_3__ * p = _allocate_p(1, aux_p);
          long benchRet = countLookasideSlots(p);
          printf("%ld\n", benchRet); 
          _delete_p(aux_p, 1);
        
        break;
    }
    // linked
    case 1:
    {
          struct TYPE_3__ * aux_p[10000];
          struct TYPE_3__ * p = _allocate_p(10000, aux_p);
          long benchRet = countLookasideSlots(p);
          printf("%ld\n", benchRet); 
          _delete_p(aux_p, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
