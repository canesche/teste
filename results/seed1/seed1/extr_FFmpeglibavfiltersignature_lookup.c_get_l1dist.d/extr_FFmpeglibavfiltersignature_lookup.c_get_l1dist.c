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
typedef  scalar_t__ uint8_t ;
struct TYPE_3__ {scalar_t__* l1distlut; } ;
typedef  TYPE_1__ SignatureContext ;
typedef  int /*<<< orphan*/  AVFilterContext ;

/* Variables and functions */
 int SIGELEM_SIZE ; 

__attribute__((used)) static unsigned int get_l1dist(AVFilterContext *ctx, SignatureContext *sc, const uint8_t *first, const uint8_t *second)
{
    unsigned int i;
    unsigned int dist = 0;
    uint8_t f, s;

    for (i = 0; i < SIGELEM_SIZE/5; i++) {
        if (first[i] != second[i]) {
            f = first[i];
            s = second[i];
            if (f > s) {
                /* little variation of gauss sum formula */
                dist += sc->l1distlut[243*242/2 - (243-s)*(242-s)/2 + f - s - 1];
            } else {
                dist += sc->l1distlut[243*242/2 - (243-f)*(242-f)/2 + s - f - 1];
            }
        }
    }
    return dist;
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
          int _len_ctx0 = 1;
          int * ctx = (int *) malloc(_len_ctx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sc0 = 1;
          struct TYPE_3__ * sc = (struct TYPE_3__ *) malloc(_len_sc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
              int _len_sc__i0__l1distlut0 = 1;
          sc[_i0].l1distlut = (long *) malloc(_len_sc__i0__l1distlut0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_sc__i0__l1distlut0; _j0++) {
            sc[_i0].l1distlut[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_first0 = 1;
          const long * first = (const long *) malloc(_len_first0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_first0; _i0++) {
            first[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_second0 = 1;
          const long * second = (const long *) malloc(_len_second0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_second0; _i0++) {
            second[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = get_l1dist(ctx,sc,first,second);
          printf("%u\n", benchRet); 
          free(ctx);
          for(int _aux = 0; _aux < _len_sc0; _aux++) {
          free(sc[_aux].l1distlut);
          }
          free(sc);
          free(first);
          free(second);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctx0 = 65025;
          int * ctx = (int *) malloc(_len_ctx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sc0 = 65025;
          struct TYPE_3__ * sc = (struct TYPE_3__ *) malloc(_len_sc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
              int _len_sc__i0__l1distlut0 = 1;
          sc[_i0].l1distlut = (long *) malloc(_len_sc__i0__l1distlut0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_sc__i0__l1distlut0; _j0++) {
            sc[_i0].l1distlut[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_first0 = 65025;
          const long * first = (const long *) malloc(_len_first0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_first0; _i0++) {
            first[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_second0 = 65025;
          const long * second = (const long *) malloc(_len_second0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_second0; _i0++) {
            second[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = get_l1dist(ctx,sc,first,second);
          printf("%u\n", benchRet); 
          free(ctx);
          for(int _aux = 0; _aux < _len_sc0; _aux++) {
          free(sc[_aux].l1distlut);
          }
          free(sc);
          free(first);
          free(second);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctx0 = 100;
          int * ctx = (int *) malloc(_len_ctx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sc0 = 100;
          struct TYPE_3__ * sc = (struct TYPE_3__ *) malloc(_len_sc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
              int _len_sc__i0__l1distlut0 = 1;
          sc[_i0].l1distlut = (long *) malloc(_len_sc__i0__l1distlut0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_sc__i0__l1distlut0; _j0++) {
            sc[_i0].l1distlut[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_first0 = 100;
          const long * first = (const long *) malloc(_len_first0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_first0; _i0++) {
            first[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_second0 = 100;
          const long * second = (const long *) malloc(_len_second0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_second0; _i0++) {
            second[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = get_l1dist(ctx,sc,first,second);
          printf("%u\n", benchRet); 
          free(ctx);
          for(int _aux = 0; _aux < _len_sc0; _aux++) {
          free(sc[_aux].l1distlut);
          }
          free(sc);
          free(first);
          free(second);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
