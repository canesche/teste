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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct cache_uri {int /*<<< orphan*/ * data; } ;
struct amortization_counter {int value; } ;
struct TYPE_5__ {int flags; int min_rate; int real_min_rate; size_t heap_acounter_off; int cnt; int /*<<< orphan*/ * disk_filter; TYPE_2__* heap; } ;
typedef  TYPE_1__ cache_top_access_result_t ;
struct TYPE_6__ {struct cache_uri** H; } ;
typedef  TYPE_2__ cache_heap_t ;

/* Variables and functions */
 int /*<<< orphan*/  disk_filter ; 
 size_t heap_acounter_off ; 
 size_t uri_off ; 

__attribute__((used)) static int cache_output_heap (cache_top_access_result_t *R, cache_heap_t *heap, int cnt, int flags, int min_rate) {
  int k;
  R->heap = heap;
  R->flags = flags;
  R->min_rate = min_rate;
  R->real_min_rate = min_rate >= 1000000 ? min_rate * 1e-6 : min_rate; // - 0.0
  R->disk_filter = (R->flags & 0x80000000) ? &disk_filter : NULL;
  R->heap_acounter_off = heap_acounter_off;
  int m = 0;
  for (k = 1; k <= cnt; k++) {
    struct cache_uri *U = heap->H[k];
    if (!U->data[uri_off]) {
      continue;
    }
    struct amortization_counter *C = ((struct amortization_counter *) &U->data[heap_acounter_off]);
    if (min_rate && C->value <= R->real_min_rate) {
      continue;
    }
    heap->H[++m] = heap->H[k];
  }
  R->cnt = m;
  return 0;
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
          int cnt = 100;
          int flags = 100;
          int min_rate = 100;
          int _len_R0 = 1;
          struct TYPE_5__ * R = (struct TYPE_5__ *) malloc(_len_R0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_R0; _i0++) {
            R[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        R[_i0].min_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        R[_i0].real_min_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        R[_i0].heap_acounter_off = ((-2 * (next_i()%2)) + 1) * next_i();
        R[_i0].cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_R__i0__disk_filter0 = 1;
          R[_i0].disk_filter = (int *) malloc(_len_R__i0__disk_filter0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_R__i0__disk_filter0; _j0++) {
            R[_i0].disk_filter[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_R__i0__heap0 = 1;
          R[_i0].heap = (struct TYPE_6__ *) malloc(_len_R__i0__heap0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_R__i0__heap0; _j0++) {
              int _len_R__i0__heap_H0 = 1;
          R[_i0].heap->H = (struct cache_uri **) malloc(_len_R__i0__heap_H0*sizeof(struct cache_uri *));
          for(int _j0 = 0; _j0 < _len_R__i0__heap_H0; _j0++) {
            int _len_R__i0__heap_H1 = 1;
            R[_i0].heap->H[_j0] = (struct cache_uri *) malloc(_len_R__i0__heap_H1*sizeof(struct cache_uri));
            for(int _j1 = 0; _j1 < _len_R__i0__heap_H1; _j1++) {
                int _len_R__i0__heap_H__j0__data0 = 1;
          R[_i0].heap->H[_j0]->data = (int *) malloc(_len_R__i0__heap_H__j0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_R__i0__heap_H__j0__data0; _j0++) {
            R[_i0].heap->H[_j0]->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          }
          int _len_heap0 = 1;
          struct TYPE_6__ * heap = (struct TYPE_6__ *) malloc(_len_heap0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_heap0; _i0++) {
              int _len_heap__i0__H0 = 1;
          heap[_i0].H = (struct cache_uri **) malloc(_len_heap__i0__H0*sizeof(struct cache_uri *));
          for(int _j0 = 0; _j0 < _len_heap__i0__H0; _j0++) {
            int _len_heap__i0__H1 = 1;
            heap[_i0].H[_j0] = (struct cache_uri *) malloc(_len_heap__i0__H1*sizeof(struct cache_uri));
            for(int _j1 = 0; _j1 < _len_heap__i0__H1; _j1++) {
                int _len_heap__i0__H__j0__data0 = 1;
          heap[_i0].H[_j0]->data = (int *) malloc(_len_heap__i0__H__j0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_heap__i0__H__j0__data0; _j0++) {
            heap[_i0].H[_j0]->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int benchRet = cache_output_heap(R,heap,cnt,flags,min_rate);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_R0; _aux++) {
          free(R[_aux].disk_filter);
          }
          for(int _aux = 0; _aux < _len_R0; _aux++) {
          free(R[_aux].heap);
          }
          free(R);
          for(int _aux = 0; _aux < _len_heap0; _aux++) {
          free(*(heap[_aux].H));
        free(heap[_aux].H);
          }
          free(heap);
        
        break;
    }
    // big-arr
    case 1:
    {
          int cnt = 255;
          int flags = 255;
          int min_rate = 255;
          int _len_R0 = 65025;
          struct TYPE_5__ * R = (struct TYPE_5__ *) malloc(_len_R0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_R0; _i0++) {
            R[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        R[_i0].min_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        R[_i0].real_min_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        R[_i0].heap_acounter_off = ((-2 * (next_i()%2)) + 1) * next_i();
        R[_i0].cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_R__i0__disk_filter0 = 1;
          R[_i0].disk_filter = (int *) malloc(_len_R__i0__disk_filter0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_R__i0__disk_filter0; _j0++) {
            R[_i0].disk_filter[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_R__i0__heap0 = 1;
          R[_i0].heap = (struct TYPE_6__ *) malloc(_len_R__i0__heap0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_R__i0__heap0; _j0++) {
              int _len_R__i0__heap_H0 = 1;
          R[_i0].heap->H = (struct cache_uri **) malloc(_len_R__i0__heap_H0*sizeof(struct cache_uri *));
          for(int _j0 = 0; _j0 < _len_R__i0__heap_H0; _j0++) {
            int _len_R__i0__heap_H1 = 1;
            R[_i0].heap->H[_j0] = (struct cache_uri *) malloc(_len_R__i0__heap_H1*sizeof(struct cache_uri));
            for(int _j1 = 0; _j1 < _len_R__i0__heap_H1; _j1++) {
                int _len_R__i0__heap_H__j0__data0 = 1;
          R[_i0].heap->H[_j0]->data = (int *) malloc(_len_R__i0__heap_H__j0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_R__i0__heap_H__j0__data0; _j0++) {
            R[_i0].heap->H[_j0]->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          }
          int _len_heap0 = 65025;
          struct TYPE_6__ * heap = (struct TYPE_6__ *) malloc(_len_heap0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_heap0; _i0++) {
              int _len_heap__i0__H0 = 1;
          heap[_i0].H = (struct cache_uri **) malloc(_len_heap__i0__H0*sizeof(struct cache_uri *));
          for(int _j0 = 0; _j0 < _len_heap__i0__H0; _j0++) {
            int _len_heap__i0__H1 = 1;
            heap[_i0].H[_j0] = (struct cache_uri *) malloc(_len_heap__i0__H1*sizeof(struct cache_uri));
            for(int _j1 = 0; _j1 < _len_heap__i0__H1; _j1++) {
                int _len_heap__i0__H__j0__data0 = 1;
          heap[_i0].H[_j0]->data = (int *) malloc(_len_heap__i0__H__j0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_heap__i0__H__j0__data0; _j0++) {
            heap[_i0].H[_j0]->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int benchRet = cache_output_heap(R,heap,cnt,flags,min_rate);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_R0; _aux++) {
          free(R[_aux].disk_filter);
          }
          for(int _aux = 0; _aux < _len_R0; _aux++) {
          free(R[_aux].heap);
          }
          free(R);
          for(int _aux = 0; _aux < _len_heap0; _aux++) {
          free(*(heap[_aux].H));
        free(heap[_aux].H);
          }
          free(heap);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cnt = 10;
          int flags = 10;
          int min_rate = 10;
          int _len_R0 = 100;
          struct TYPE_5__ * R = (struct TYPE_5__ *) malloc(_len_R0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_R0; _i0++) {
            R[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        R[_i0].min_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        R[_i0].real_min_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        R[_i0].heap_acounter_off = ((-2 * (next_i()%2)) + 1) * next_i();
        R[_i0].cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_R__i0__disk_filter0 = 1;
          R[_i0].disk_filter = (int *) malloc(_len_R__i0__disk_filter0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_R__i0__disk_filter0; _j0++) {
            R[_i0].disk_filter[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_R__i0__heap0 = 1;
          R[_i0].heap = (struct TYPE_6__ *) malloc(_len_R__i0__heap0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_R__i0__heap0; _j0++) {
              int _len_R__i0__heap_H0 = 1;
          R[_i0].heap->H = (struct cache_uri **) malloc(_len_R__i0__heap_H0*sizeof(struct cache_uri *));
          for(int _j0 = 0; _j0 < _len_R__i0__heap_H0; _j0++) {
            int _len_R__i0__heap_H1 = 1;
            R[_i0].heap->H[_j0] = (struct cache_uri *) malloc(_len_R__i0__heap_H1*sizeof(struct cache_uri));
            for(int _j1 = 0; _j1 < _len_R__i0__heap_H1; _j1++) {
                int _len_R__i0__heap_H__j0__data0 = 1;
          R[_i0].heap->H[_j0]->data = (int *) malloc(_len_R__i0__heap_H__j0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_R__i0__heap_H__j0__data0; _j0++) {
            R[_i0].heap->H[_j0]->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          }
          int _len_heap0 = 100;
          struct TYPE_6__ * heap = (struct TYPE_6__ *) malloc(_len_heap0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_heap0; _i0++) {
              int _len_heap__i0__H0 = 1;
          heap[_i0].H = (struct cache_uri **) malloc(_len_heap__i0__H0*sizeof(struct cache_uri *));
          for(int _j0 = 0; _j0 < _len_heap__i0__H0; _j0++) {
            int _len_heap__i0__H1 = 1;
            heap[_i0].H[_j0] = (struct cache_uri *) malloc(_len_heap__i0__H1*sizeof(struct cache_uri));
            for(int _j1 = 0; _j1 < _len_heap__i0__H1; _j1++) {
                int _len_heap__i0__H__j0__data0 = 1;
          heap[_i0].H[_j0]->data = (int *) malloc(_len_heap__i0__H__j0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_heap__i0__H__j0__data0; _j0++) {
            heap[_i0].H[_j0]->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int benchRet = cache_output_heap(R,heap,cnt,flags,min_rate);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_R0; _aux++) {
          free(R[_aux].disk_filter);
          }
          for(int _aux = 0; _aux < _len_R0; _aux++) {
          free(R[_aux].heap);
          }
          free(R);
          for(int _aux = 0; _aux < _len_heap0; _aux++) {
          free(*(heap[_aux].H));
        free(heap[_aux].H);
          }
          free(heap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
