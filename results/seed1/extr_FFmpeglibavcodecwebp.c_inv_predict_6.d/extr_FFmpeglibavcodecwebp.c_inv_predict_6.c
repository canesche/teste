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
typedef  int uint8_t ;

/* Variables and functions */

__attribute__((used)) static void inv_predict_6(uint8_t *p, const uint8_t *p_l, const uint8_t *p_tl,
                          const uint8_t *p_t, const uint8_t *p_tr)
{
    p[0] = p_l[0] + p_tl[0] >> 1;
    p[1] = p_l[1] + p_tl[1] >> 1;
    p[2] = p_l[2] + p_tl[2] >> 1;
    p[3] = p_l[3] + p_tl[3] >> 1;
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
          int _len_p0 = 1;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_l0 = 1;
          const int * p_l = (const int *) malloc(_len_p_l0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_p_l0; _i0++) {
            p_l[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_tl0 = 1;
          const int * p_tl = (const int *) malloc(_len_p_tl0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_p_tl0; _i0++) {
            p_tl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_t0 = 1;
          const int * p_t = (const int *) malloc(_len_p_t0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_p_t0; _i0++) {
            p_t[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_tr0 = 1;
          const int * p_tr = (const int *) malloc(_len_p_tr0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_p_tr0; _i0++) {
            p_tr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          inv_predict_6(p,p_l,p_tl,p_t,p_tr);
          free(p);
          free(p_l);
          free(p_tl);
          free(p_t);
          free(p_tr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_p0 = 65025;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_l0 = 65025;
          const int * p_l = (const int *) malloc(_len_p_l0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_p_l0; _i0++) {
            p_l[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_tl0 = 65025;
          const int * p_tl = (const int *) malloc(_len_p_tl0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_p_tl0; _i0++) {
            p_tl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_t0 = 65025;
          const int * p_t = (const int *) malloc(_len_p_t0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_p_t0; _i0++) {
            p_t[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_tr0 = 65025;
          const int * p_tr = (const int *) malloc(_len_p_tr0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_p_tr0; _i0++) {
            p_tr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          inv_predict_6(p,p_l,p_tl,p_t,p_tr);
          free(p);
          free(p_l);
          free(p_tl);
          free(p_t);
          free(p_tr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_p0 = 100;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_l0 = 100;
          const int * p_l = (const int *) malloc(_len_p_l0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_p_l0; _i0++) {
            p_l[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_tl0 = 100;
          const int * p_tl = (const int *) malloc(_len_p_tl0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_p_tl0; _i0++) {
            p_tl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_t0 = 100;
          const int * p_t = (const int *) malloc(_len_p_t0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_p_t0; _i0++) {
            p_t[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_tr0 = 100;
          const int * p_tr = (const int *) malloc(_len_p_tr0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_p_tr0; _i0++) {
            p_tr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          inv_predict_6(p,p_l,p_tl,p_t,p_tr);
          free(p);
          free(p_l);
          free(p_tl);
          free(p_t);
          free(p_tr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
