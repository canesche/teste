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
typedef  int residual ;
typedef  int int32_t ;
struct TYPE_3__ {int* ready; size_t ready_num; int leftover; int leftover_bits; int need_s; } ;
typedef  TYPE_1__ DiracGolombLUT ;

/* Variables and functions */
 int RSIZE_BITS ; 

__attribute__((used)) static inline void search_for_golomb(DiracGolombLUT *l, residual r, int bits)
{
    int r_count = RSIZE_BITS - 1;
    int bits_start, bits_tot = bits, need_sign = 0;

#define READ_BIT(N) (((N) >> (N ## _count--)) & 1)

    while (1) {
        int32_t coef = 1;
        bits_start = (RSIZE_BITS - 1) - r_count;

        while (1) {
            if (!bits--)
                goto leftover;
            if (READ_BIT(r))
                break;

            coef <<= 1;

            if (!bits--)
                goto leftover;
            coef |= READ_BIT(r);
        }

        l->ready[l->ready_num] = coef - 1;
        if (l->ready[l->ready_num]) {
            if (!bits--) {
                need_sign = 1;
                goto leftover;
            }
            l->ready[l->ready_num] *= READ_BIT(r) ? -1 : +1;
        }
        l->ready_num++;

        if (!bits)
            return;
    }

    leftover:
        l->leftover      = r << bits_start;
        l->leftover_bits = bits_tot - bits_start;
        l->need_s        = need_sign;
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
          int r = 100;
          int bits = 100;
          int _len_l0 = 1;
          struct TYPE_3__ * l = (struct TYPE_3__ *) malloc(_len_l0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_l0; _i0++) {
              int _len_l__i0__ready0 = 1;
          l[_i0].ready = (int *) malloc(_len_l__i0__ready0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_l__i0__ready0; _j0++) {
            l[_i0].ready[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        l[_i0].ready_num = ((-2 * (next_i()%2)) + 1) * next_i();
        l[_i0].leftover = ((-2 * (next_i()%2)) + 1) * next_i();
        l[_i0].leftover_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        l[_i0].need_s = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          search_for_golomb(l,r,bits);
          for(int _aux = 0; _aux < _len_l0; _aux++) {
          free(l[_aux].ready);
          }
          free(l);
        
        break;
    }
    // big-arr
    case 1:
    {
          int r = 255;
          int bits = 255;
          int _len_l0 = 65025;
          struct TYPE_3__ * l = (struct TYPE_3__ *) malloc(_len_l0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_l0; _i0++) {
              int _len_l__i0__ready0 = 1;
          l[_i0].ready = (int *) malloc(_len_l__i0__ready0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_l__i0__ready0; _j0++) {
            l[_i0].ready[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        l[_i0].ready_num = ((-2 * (next_i()%2)) + 1) * next_i();
        l[_i0].leftover = ((-2 * (next_i()%2)) + 1) * next_i();
        l[_i0].leftover_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        l[_i0].need_s = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          search_for_golomb(l,r,bits);
          for(int _aux = 0; _aux < _len_l0; _aux++) {
          free(l[_aux].ready);
          }
          free(l);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int r = 10;
          int bits = 10;
          int _len_l0 = 100;
          struct TYPE_3__ * l = (struct TYPE_3__ *) malloc(_len_l0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_l0; _i0++) {
              int _len_l__i0__ready0 = 1;
          l[_i0].ready = (int *) malloc(_len_l__i0__ready0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_l__i0__ready0; _j0++) {
            l[_i0].ready[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        l[_i0].ready_num = ((-2 * (next_i()%2)) + 1) * next_i();
        l[_i0].leftover = ((-2 * (next_i()%2)) + 1) * next_i();
        l[_i0].leftover_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        l[_i0].need_s = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          search_for_golomb(l,r,bits);
          for(int _aux = 0; _aux < _len_l0; _aux++) {
          free(l[_aux].ready);
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
