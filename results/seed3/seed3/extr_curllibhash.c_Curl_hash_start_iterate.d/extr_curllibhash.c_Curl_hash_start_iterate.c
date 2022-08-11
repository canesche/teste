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

/* Type definitions */
struct curl_hash_iterator {int /*<<< orphan*/ * current_element; scalar_t__ slot_index; struct curl_hash* hash; } ;
struct curl_hash {int dummy; } ;

/* Variables and functions */

void Curl_hash_start_iterate(struct curl_hash *hash,
                             struct curl_hash_iterator *iter)
{
  iter->hash = hash;
  iter->slot_index = 0;
  iter->current_element = NULL;
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
          int _len_hash0 = 1;
          struct curl_hash * hash = (struct curl_hash *) malloc(_len_hash0*sizeof(struct curl_hash));
          for(int _i0 = 0; _i0 < _len_hash0; _i0++) {
            hash[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iter0 = 1;
          struct curl_hash_iterator * iter = (struct curl_hash_iterator *) malloc(_len_iter0*sizeof(struct curl_hash_iterator));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
              int _len_iter__i0__current_element0 = 1;
          iter[_i0].current_element = (int *) malloc(_len_iter__i0__current_element0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_iter__i0__current_element0; _j0++) {
            iter[_i0].current_element[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        iter[_i0].slot_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iter__i0__hash0 = 1;
          iter[_i0].hash = (struct curl_hash *) malloc(_len_iter__i0__hash0*sizeof(struct curl_hash));
          for(int _j0 = 0; _j0 < _len_iter__i0__hash0; _j0++) {
            iter[_i0].hash->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          Curl_hash_start_iterate(hash,iter);
          free(hash);
          for(int _aux = 0; _aux < _len_iter0; _aux++) {
          free(iter[_aux].current_element);
          }
          for(int _aux = 0; _aux < _len_iter0; _aux++) {
          free(iter[_aux].hash);
          }
          free(iter);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hash0 = 65025;
          struct curl_hash * hash = (struct curl_hash *) malloc(_len_hash0*sizeof(struct curl_hash));
          for(int _i0 = 0; _i0 < _len_hash0; _i0++) {
            hash[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iter0 = 65025;
          struct curl_hash_iterator * iter = (struct curl_hash_iterator *) malloc(_len_iter0*sizeof(struct curl_hash_iterator));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
              int _len_iter__i0__current_element0 = 1;
          iter[_i0].current_element = (int *) malloc(_len_iter__i0__current_element0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_iter__i0__current_element0; _j0++) {
            iter[_i0].current_element[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        iter[_i0].slot_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iter__i0__hash0 = 1;
          iter[_i0].hash = (struct curl_hash *) malloc(_len_iter__i0__hash0*sizeof(struct curl_hash));
          for(int _j0 = 0; _j0 < _len_iter__i0__hash0; _j0++) {
            iter[_i0].hash->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          Curl_hash_start_iterate(hash,iter);
          free(hash);
          for(int _aux = 0; _aux < _len_iter0; _aux++) {
          free(iter[_aux].current_element);
          }
          for(int _aux = 0; _aux < _len_iter0; _aux++) {
          free(iter[_aux].hash);
          }
          free(iter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hash0 = 100;
          struct curl_hash * hash = (struct curl_hash *) malloc(_len_hash0*sizeof(struct curl_hash));
          for(int _i0 = 0; _i0 < _len_hash0; _i0++) {
            hash[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iter0 = 100;
          struct curl_hash_iterator * iter = (struct curl_hash_iterator *) malloc(_len_iter0*sizeof(struct curl_hash_iterator));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
              int _len_iter__i0__current_element0 = 1;
          iter[_i0].current_element = (int *) malloc(_len_iter__i0__current_element0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_iter__i0__current_element0; _j0++) {
            iter[_i0].current_element[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        iter[_i0].slot_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iter__i0__hash0 = 1;
          iter[_i0].hash = (struct curl_hash *) malloc(_len_iter__i0__hash0*sizeof(struct curl_hash));
          for(int _j0 = 0; _j0 < _len_iter__i0__hash0; _j0++) {
            iter[_i0].hash->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          Curl_hash_start_iterate(hash,iter);
          free(hash);
          for(int _aux = 0; _aux < _len_iter0; _aux++) {
          free(iter[_aux].current_element);
          }
          for(int _aux = 0; _aux < _len_iter0; _aux++) {
          free(iter[_aux].hash);
          }
          free(iter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
