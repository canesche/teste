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
struct curl_llist {int /*<<< orphan*/ * tail; int /*<<< orphan*/ * head; int /*<<< orphan*/  dtor; scalar_t__ size; } ;
typedef  int /*<<< orphan*/  curl_llist_dtor ;

/* Variables and functions */

void
Curl_llist_init(struct curl_llist *l, curl_llist_dtor dtor)
{
  l->size = 0;
  l->dtor = dtor;
  l->head = NULL;
  l->tail = NULL;
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
          int dtor = 100;
          int _len_l0 = 1;
          struct curl_llist * l = (struct curl_llist *) malloc(_len_l0*sizeof(struct curl_llist));
          for(int _i0 = 0; _i0 < _len_l0; _i0++) {
              int _len_l__i0__tail0 = 1;
          l[_i0].tail = (int *) malloc(_len_l__i0__tail0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_l__i0__tail0; _j0++) {
            l[_i0].tail[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_l__i0__head0 = 1;
          l[_i0].head = (int *) malloc(_len_l__i0__head0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_l__i0__head0; _j0++) {
            l[_i0].head[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        l[_i0].dtor = ((-2 * (next_i()%2)) + 1) * next_i();
        l[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          Curl_llist_init(l,dtor);
          for(int _aux = 0; _aux < _len_l0; _aux++) {
          free(l[_aux].tail);
          }
          for(int _aux = 0; _aux < _len_l0; _aux++) {
          free(l[_aux].head);
          }
          free(l);
        
        break;
    }
    // big-arr
    case 1:
    {
          int dtor = 255;
          int _len_l0 = 65025;
          struct curl_llist * l = (struct curl_llist *) malloc(_len_l0*sizeof(struct curl_llist));
          for(int _i0 = 0; _i0 < _len_l0; _i0++) {
              int _len_l__i0__tail0 = 1;
          l[_i0].tail = (int *) malloc(_len_l__i0__tail0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_l__i0__tail0; _j0++) {
            l[_i0].tail[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_l__i0__head0 = 1;
          l[_i0].head = (int *) malloc(_len_l__i0__head0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_l__i0__head0; _j0++) {
            l[_i0].head[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        l[_i0].dtor = ((-2 * (next_i()%2)) + 1) * next_i();
        l[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          Curl_llist_init(l,dtor);
          for(int _aux = 0; _aux < _len_l0; _aux++) {
          free(l[_aux].tail);
          }
          for(int _aux = 0; _aux < _len_l0; _aux++) {
          free(l[_aux].head);
          }
          free(l);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int dtor = 10;
          int _len_l0 = 100;
          struct curl_llist * l = (struct curl_llist *) malloc(_len_l0*sizeof(struct curl_llist));
          for(int _i0 = 0; _i0 < _len_l0; _i0++) {
              int _len_l__i0__tail0 = 1;
          l[_i0].tail = (int *) malloc(_len_l__i0__tail0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_l__i0__tail0; _j0++) {
            l[_i0].tail[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_l__i0__head0 = 1;
          l[_i0].head = (int *) malloc(_len_l__i0__head0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_l__i0__head0; _j0++) {
            l[_i0].head[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        l[_i0].dtor = ((-2 * (next_i()%2)) + 1) * next_i();
        l[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          Curl_llist_init(l,dtor);
          for(int _aux = 0; _aux < _len_l0; _aux++) {
          free(l[_aux].tail);
          }
          for(int _aux = 0; _aux < _len_l0; _aux++) {
          free(l[_aux].head);
          }
          free(l);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
