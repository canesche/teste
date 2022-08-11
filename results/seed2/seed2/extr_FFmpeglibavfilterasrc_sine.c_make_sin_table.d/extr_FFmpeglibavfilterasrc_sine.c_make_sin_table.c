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
typedef  int uint64_t ;
typedef  int int16_t ;

/* Variables and functions */
 int AMPLITUDE ; 
 int AMPLITUDE_SHIFT ; 
 int LOG_PERIOD ; 

__attribute__((used)) static void make_sin_table(int16_t *sin)
{
    unsigned half_pi = 1 << (LOG_PERIOD - 2);
    unsigned ampls = AMPLITUDE << AMPLITUDE_SHIFT;
    uint64_t unit2 = (uint64_t)(ampls * ampls) << 32;
    unsigned step, i, c, s, k, new_k, n2;

    /* Principle: if u = exp(i*a1) and v = exp(i*a2), then
       exp(i*(a1+a2)/2) = (u+v) / length(u+v) */
    sin[0] = 0;
    sin[half_pi] = ampls;
    for (step = half_pi; step > 1; step /= 2) {
        /* k = (1 << 16) * amplitude / length(u+v)
           In exact values, k is constant at a given step */
        k = 0x10000;
        for (i = 0; i < half_pi / 2; i += step) {
            s = sin[i] + sin[i + step];
            c = sin[half_pi - i] + sin[half_pi - i - step];
            n2 = s * s + c * c;
            /* Newton's method to solve n² * k² = unit² */
            while (1) {
                new_k = (k + unit2 / ((uint64_t)k * n2) + 1) >> 1;
                if (k == new_k)
                    break;
                k = new_k;
            }
            sin[i + step / 2] = (k * s + 0x7FFF) >> 16;
            sin[half_pi - i - step / 2] = (k * c + 0x8000) >> 16;
        }
    }
    /* Unshift amplitude */
    for (i = 0; i <= half_pi; i++)
        sin[i] = (sin[i] + (1 << (AMPLITUDE_SHIFT - 1))) >> AMPLITUDE_SHIFT;
    /* Use symmetries to fill the other three quarters */
    for (i = 0; i < half_pi; i++)
        sin[half_pi * 2 - i] = sin[i];
    for (i = 0; i < 2 * half_pi; i++)
        sin[i + 2 * half_pi] = -sin[i];
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
          int _len_sin0 = 1;
          int * sin = (int *) malloc(_len_sin0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sin0; _i0++) {
            sin[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          make_sin_table(sin);
          free(sin);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sin0 = 65025;
          int * sin = (int *) malloc(_len_sin0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sin0; _i0++) {
            sin[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          make_sin_table(sin);
          free(sin);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sin0 = 100;
          int * sin = (int *) malloc(_len_sin0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sin0; _i0++) {
            sin[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          make_sin_table(sin);
          free(sin);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
