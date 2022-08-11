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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int* val; int* head; int* chain; } ;
typedef  TYPE_1__ Hash ;

/* Variables and functions */

__attribute__((used)) static void updateHashChain(Hash* hash, size_t pos, int hashval, unsigned windowsize)
{
  unsigned wpos = pos % windowsize;
  hash->val[wpos] = hashval;
  if(hash->head[hashval] != -1) hash->chain[wpos] = hash->head[hashval];
  hash->head[hashval] = wpos;
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
          unsigned long pos = 100;
          int hashval = 100;
          unsigned int windowsize = 100;
          int _len_hash0 = 1;
          struct TYPE_3__ * hash = (struct TYPE_3__ *) malloc(_len_hash0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_hash0; _i0++) {
              int _len_hash__i0__val0 = 1;
          hash[_i0].val = (int *) malloc(_len_hash__i0__val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hash__i0__val0; _j0++) {
            hash[_i0].val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hash__i0__head0 = 1;
          hash[_i0].head = (int *) malloc(_len_hash__i0__head0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hash__i0__head0; _j0++) {
            hash[_i0].head[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hash__i0__chain0 = 1;
          hash[_i0].chain = (int *) malloc(_len_hash__i0__chain0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hash__i0__chain0; _j0++) {
            hash[_i0].chain[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          updateHashChain(hash,pos,hashval,windowsize);
          for(int _aux = 0; _aux < _len_hash0; _aux++) {
          free(hash[_aux].val);
          }
          for(int _aux = 0; _aux < _len_hash0; _aux++) {
          free(hash[_aux].head);
          }
          for(int _aux = 0; _aux < _len_hash0; _aux++) {
          free(hash[_aux].chain);
          }
          free(hash);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long pos = 255;
          int hashval = 255;
          unsigned int windowsize = 255;
          int _len_hash0 = 65025;
          struct TYPE_3__ * hash = (struct TYPE_3__ *) malloc(_len_hash0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_hash0; _i0++) {
              int _len_hash__i0__val0 = 1;
          hash[_i0].val = (int *) malloc(_len_hash__i0__val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hash__i0__val0; _j0++) {
            hash[_i0].val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hash__i0__head0 = 1;
          hash[_i0].head = (int *) malloc(_len_hash__i0__head0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hash__i0__head0; _j0++) {
            hash[_i0].head[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hash__i0__chain0 = 1;
          hash[_i0].chain = (int *) malloc(_len_hash__i0__chain0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hash__i0__chain0; _j0++) {
            hash[_i0].chain[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          updateHashChain(hash,pos,hashval,windowsize);
          for(int _aux = 0; _aux < _len_hash0; _aux++) {
          free(hash[_aux].val);
          }
          for(int _aux = 0; _aux < _len_hash0; _aux++) {
          free(hash[_aux].head);
          }
          for(int _aux = 0; _aux < _len_hash0; _aux++) {
          free(hash[_aux].chain);
          }
          free(hash);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long pos = 10;
          int hashval = 10;
          unsigned int windowsize = 10;
          int _len_hash0 = 100;
          struct TYPE_3__ * hash = (struct TYPE_3__ *) malloc(_len_hash0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_hash0; _i0++) {
              int _len_hash__i0__val0 = 1;
          hash[_i0].val = (int *) malloc(_len_hash__i0__val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hash__i0__val0; _j0++) {
            hash[_i0].val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hash__i0__head0 = 1;
          hash[_i0].head = (int *) malloc(_len_hash__i0__head0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hash__i0__head0; _j0++) {
            hash[_i0].head[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hash__i0__chain0 = 1;
          hash[_i0].chain = (int *) malloc(_len_hash__i0__chain0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hash__i0__chain0; _j0++) {
            hash[_i0].chain[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          updateHashChain(hash,pos,hashval,windowsize);
          for(int _aux = 0; _aux < _len_hash0; _aux++) {
          free(hash[_aux].val);
          }
          for(int _aux = 0; _aux < _len_hash0; _aux++) {
          free(hash[_aux].head);
          }
          for(int _aux = 0; _aux < _len_hash0; _aux++) {
          free(hash[_aux].chain);
          }
          free(hash);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
