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
struct forth_request {long long prog_id; struct forth_request* hnext; } ;

/* Variables and functions */
 struct forth_request** H ; 
 int REQ_HASH_SIZE ; 
 int /*<<< orphan*/  requests_in_hash ; 

__attribute__((used)) static int hash_req_remove (struct forth_request *R) {
  long long prog_id = R->prog_id;
  unsigned h = ((unsigned) prog_id) & (REQ_HASH_SIZE - 1);
  struct forth_request **p = H + h, *V;
  while (*p) {
    V = *p;
    if (V == R) {
      *p = V->hnext;
      requests_in_hash--;
      return 1;
    }
    p = &V->hnext;
  }
  return 0;
}


// ------------------------------------------------------------------------- //

struct forth_request *_allocate_R(int length, struct forth_request *aux_R[]) {
  struct forth_request *walker = (struct forth_request *)malloc(sizeof(struct forth_request));

  aux_R[0] = walker;
walker->prog_id = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->hnext = NULL;

  struct forth_request *head = walker;
  for(int i = 1; i < length; i++) {
    walker->hnext = (struct forth_request *)malloc(sizeof(struct forth_request));
    walker = walker->hnext;
    aux_R[i] = walker;
walker->prog_id = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->hnext = NULL;
  }

  return head;
}

void _delete_R(struct forth_request *aux_R[], int aux_R_size) {
  for(int i = 0; i < aux_R_size; i++) 
    if(aux_R[i])
      free(aux_R[i]);
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
          struct forth_request * aux_R[1];
          struct forth_request * R = _allocate_R(1, aux_R);
          int benchRet = hash_req_remove(R);
          printf("%d\n", benchRet); 
          _delete_R(aux_R, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct forth_request * aux_R[10000];
          struct forth_request * R = _allocate_R(10000, aux_R);
          int benchRet = hash_req_remove(R);
          printf("%d\n", benchRet); 
          _delete_R(aux_R, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
