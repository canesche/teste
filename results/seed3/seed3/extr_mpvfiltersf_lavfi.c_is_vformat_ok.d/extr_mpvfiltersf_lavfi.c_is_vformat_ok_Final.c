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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ p_w; scalar_t__ p_h; } ;
struct mp_image {scalar_t__ imgfmt; scalar_t__ w; scalar_t__ nominal_fps; TYPE_1__ params; scalar_t__ h; } ;

/* Variables and functions */

__attribute__((used)) static bool is_vformat_ok(struct mp_image *a, struct mp_image *b)
{
    return a->imgfmt == b->imgfmt &&
           a->w == b->w && a->h && b->h &&
           a->params.p_w == b->params.p_w && a->params.p_h == b->params.p_h &&
           a->nominal_fps == b->nominal_fps;
}


// ------------------------------------------------------------------------- //




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
          struct mp_image * a = (struct mp_image *) malloc(_len_a0*sizeof(struct mp_image));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].imgfmt = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].nominal_fps = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].params.p_w = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].params.p_h = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].h = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b0 = 1;
          struct mp_image * b = (struct mp_image *) malloc(_len_b0*sizeof(struct mp_image));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].imgfmt = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].nominal_fps = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].params.p_w = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].params.p_h = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].h = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_vformat_ok(a,b);
          printf("%d\n", benchRet); 
          free(a);
          free(b);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_a0 = 65025;
          struct mp_image * a = (struct mp_image *) malloc(_len_a0*sizeof(struct mp_image));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].imgfmt = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].nominal_fps = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].params.p_w = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].params.p_h = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].h = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b0 = 65025;
          struct mp_image * b = (struct mp_image *) malloc(_len_b0*sizeof(struct mp_image));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].imgfmt = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].nominal_fps = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].params.p_w = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].params.p_h = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].h = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_vformat_ok(a,b);
          printf("%d\n", benchRet); 
          free(a);
          free(b);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_a0 = 100;
          struct mp_image * a = (struct mp_image *) malloc(_len_a0*sizeof(struct mp_image));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].imgfmt = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].nominal_fps = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].params.p_w = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].params.p_h = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].h = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b0 = 100;
          struct mp_image * b = (struct mp_image *) malloc(_len_b0*sizeof(struct mp_image));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].imgfmt = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].nominal_fps = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].params.p_w = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].params.p_h = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].h = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_vformat_ok(a,b);
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
