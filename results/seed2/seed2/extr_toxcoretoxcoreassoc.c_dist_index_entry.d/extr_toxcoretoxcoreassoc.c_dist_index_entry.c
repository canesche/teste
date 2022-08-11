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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  size_t uint64_t ;
typedef  size_t uint32_t ;
struct TYPE_6__ {TYPE_2__* list; } ;
typedef  TYPE_1__ candidates_bucket ;
typedef  size_t bucket_t ;
struct TYPE_8__ {size_t candidates_bucket_count; size_t candidates_bucket_size; TYPE_1__* candidates; } ;
struct TYPE_7__ {scalar_t__ hash; } ;
typedef  TYPE_2__ Client_entry ;
typedef  TYPE_3__ Assoc ;

/* Variables and functions */
 size_t DISTANCE_INDEX_INDEX_MASK ; 

__attribute__((used)) static Client_entry *dist_index_entry(Assoc *assoc, uint64_t dist_ind)
{
    if ((dist_ind & DISTANCE_INDEX_INDEX_MASK) == DISTANCE_INDEX_INDEX_MASK)
        return NULL;

    size_t total = assoc->candidates_bucket_count * assoc->candidates_bucket_size;
    uint32_t index = dist_ind & DISTANCE_INDEX_INDEX_MASK;

    if (index < total) {
        bucket_t b_id = index / assoc->candidates_bucket_size;
        candidates_bucket *cnd_bckt = &assoc->candidates[b_id];
        size_t b_ix = index % assoc->candidates_bucket_size;
        Client_entry *entry = &cnd_bckt->list[b_ix];

        if (entry->hash)
            return entry;
    }

    return NULL;
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
          unsigned long dist_ind = 100;
          int _len_assoc0 = 1;
          struct TYPE_8__ * assoc = (struct TYPE_8__ *) malloc(_len_assoc0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_assoc0; _i0++) {
            assoc[_i0].candidates_bucket_count = ((-2 * (next_i()%2)) + 1) * next_i();
        assoc[_i0].candidates_bucket_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_assoc__i0__candidates0 = 1;
          assoc[_i0].candidates = (struct TYPE_6__ *) malloc(_len_assoc__i0__candidates0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_assoc__i0__candidates0; _j0++) {
              int _len_assoc__i0__candidates_list0 = 1;
          assoc[_i0].candidates->list = (struct TYPE_7__ *) malloc(_len_assoc__i0__candidates_list0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_assoc__i0__candidates_list0; _j0++) {
            assoc[_i0].candidates->list->hash = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct TYPE_7__ * benchRet = dist_index_entry(assoc,dist_ind);
          printf("%ld\n", (*benchRet).hash);
          for(int _aux = 0; _aux < _len_assoc0; _aux++) {
          free(assoc[_aux].candidates);
          }
          free(assoc);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long dist_ind = 255;
          int _len_assoc0 = 65025;
          struct TYPE_8__ * assoc = (struct TYPE_8__ *) malloc(_len_assoc0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_assoc0; _i0++) {
            assoc[_i0].candidates_bucket_count = ((-2 * (next_i()%2)) + 1) * next_i();
        assoc[_i0].candidates_bucket_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_assoc__i0__candidates0 = 1;
          assoc[_i0].candidates = (struct TYPE_6__ *) malloc(_len_assoc__i0__candidates0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_assoc__i0__candidates0; _j0++) {
              int _len_assoc__i0__candidates_list0 = 1;
          assoc[_i0].candidates->list = (struct TYPE_7__ *) malloc(_len_assoc__i0__candidates_list0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_assoc__i0__candidates_list0; _j0++) {
            assoc[_i0].candidates->list->hash = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct TYPE_7__ * benchRet = dist_index_entry(assoc,dist_ind);
          printf("%ld\n", (*benchRet).hash);
          for(int _aux = 0; _aux < _len_assoc0; _aux++) {
          free(assoc[_aux].candidates);
          }
          free(assoc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long dist_ind = 10;
          int _len_assoc0 = 100;
          struct TYPE_8__ * assoc = (struct TYPE_8__ *) malloc(_len_assoc0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_assoc0; _i0++) {
            assoc[_i0].candidates_bucket_count = ((-2 * (next_i()%2)) + 1) * next_i();
        assoc[_i0].candidates_bucket_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_assoc__i0__candidates0 = 1;
          assoc[_i0].candidates = (struct TYPE_6__ *) malloc(_len_assoc__i0__candidates0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_assoc__i0__candidates0; _j0++) {
              int _len_assoc__i0__candidates_list0 = 1;
          assoc[_i0].candidates->list = (struct TYPE_7__ *) malloc(_len_assoc__i0__candidates_list0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_assoc__i0__candidates_list0; _j0++) {
            assoc[_i0].candidates->list->hash = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct TYPE_7__ * benchRet = dist_index_entry(assoc,dist_ind);
          printf("%ld\n", (*benchRet).hash);
          for(int _aux = 0; _aux < _len_assoc0; _aux++) {
          free(assoc[_aux].candidates);
          }
          free(assoc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
