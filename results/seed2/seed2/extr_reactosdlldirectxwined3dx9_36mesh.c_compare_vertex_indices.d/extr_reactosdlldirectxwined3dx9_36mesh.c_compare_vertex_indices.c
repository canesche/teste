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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct point2d_index {size_t vertex; TYPE_2__* outline; } ;
struct TYPE_6__ {float x; float y; } ;
struct TYPE_5__ {TYPE_1__* items; } ;
struct TYPE_4__ {TYPE_3__ pos; } ;
typedef  TYPE_3__ D3DXVECTOR2 ;

/* Variables and functions */

__attribute__((used)) static int compare_vertex_indices(const void *a, const void *b)
{
    const struct point2d_index *idx1 = a, *idx2 = b;
    const D3DXVECTOR2 *p1 = &idx1->outline->items[idx1->vertex].pos;
    const D3DXVECTOR2 *p2 = &idx2->outline->items[idx2->vertex].pos;
    float diff = p1->x - p2->x;

    if (diff == 0.0f)
        diff = p1->y - p2->y;

    return diff == 0.0f ? 0 : (diff > 0.0f ? -1 : 1);
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
          int _len_a0 = 1;
          const void * a = (const void *) malloc(_len_a0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = 0;
          }
          int _len_b0 = 1;
          const void * b = (const void *) malloc(_len_b0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = 0;
          }
          int benchRet = compare_vertex_indices(a,b);
          printf("%d\n", benchRet); 
          free(a);
          free(b);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_a0 = 65025;
          const void * a = (const void *) malloc(_len_a0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = 0;
          }
          int _len_b0 = 65025;
          const void * b = (const void *) malloc(_len_b0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = 0;
          }
          int benchRet = compare_vertex_indices(a,b);
          printf("%d\n", benchRet); 
          free(a);
          free(b);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_a0 = 100;
          const void * a = (const void *) malloc(_len_a0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = 0;
          }
          int _len_b0 = 100;
          const void * b = (const void *) malloc(_len_b0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = 0;
          }
          int benchRet = compare_vertex_indices(a,b);
          printf("%d\n", benchRet); 
          free(a);
          free(b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
