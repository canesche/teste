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
typedef  int uint8_t ;
typedef  int uint16_t ;
struct TYPE_3__ {int nb_words; int* words; } ;
typedef  TYPE_1__ BigInt ;

/* Variables and functions */
 int XFACE_BITSPERWORD ; 
 int XFACE_WORDMASK ; 

void ff_big_div(BigInt *b, uint8_t a, uint8_t *r)
{
    int i;
    uint8_t *w;
    uint16_t c, d;

    a &= XFACE_WORDMASK;
    if (a == 1 || b->nb_words == 0) {
        *r = 0;
        return;
    }

    /* treat this as a == WORDCARRY and just shift everything right a WORD */
    if (a == 0) {
        i = --b->nb_words;
        w = b->words;
        *r = *w;
        while (i--) {
            *w = *(w + 1);
            w++;
        }
        *w = 0;
        return;
    }
    i = b->nb_words;
    w = b->words + i;
    c = 0;
    while (i--) {
        c <<= XFACE_BITSPERWORD;
        c += *--w;
        d = c / (uint16_t)a;
        c = c % (uint16_t)a;
        *w = d & XFACE_WORDMASK;
    }
    *r = c;
    if (b->words[b->nb_words - 1] == 0)
        b->nb_words--;
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
          int a = 100;
          int _len_b0 = 1;
          struct TYPE_3__ * b = (struct TYPE_3__ *) malloc(_len_b0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].nb_words = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_b__i0__words0 = 1;
          b[_i0].words = (int *) malloc(_len_b__i0__words0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_b__i0__words0; _j0++) {
            b[_i0].words[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_r0 = 1;
          int * r = (int *) malloc(_len_r0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_big_div(b,a,r);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].words);
          }
          free(b);
          free(r);
        
        break;
    }
    // big-arr
    case 1:
    {
          int a = 255;
          int _len_b0 = 65025;
          struct TYPE_3__ * b = (struct TYPE_3__ *) malloc(_len_b0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].nb_words = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_b__i0__words0 = 1;
          b[_i0].words = (int *) malloc(_len_b__i0__words0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_b__i0__words0; _j0++) {
            b[_i0].words[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_r0 = 65025;
          int * r = (int *) malloc(_len_r0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_big_div(b,a,r);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].words);
          }
          free(b);
          free(r);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int a = 10;
          int _len_b0 = 100;
          struct TYPE_3__ * b = (struct TYPE_3__ *) malloc(_len_b0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].nb_words = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_b__i0__words0 = 1;
          b[_i0].words = (int *) malloc(_len_b__i0__words0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_b__i0__words0; _j0++) {
            b[_i0].words[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_r0 = 100;
          int * r = (int *) malloc(_len_r0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_big_div(b,a,r);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].words);
          }
          free(b);
          free(r);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
