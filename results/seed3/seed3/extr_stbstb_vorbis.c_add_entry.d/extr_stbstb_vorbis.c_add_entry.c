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
typedef  void* uint32 ;
struct TYPE_3__ {int* codeword_lengths; void** codewords; int /*<<< orphan*/  sparse; } ;
typedef  TYPE_1__ Codebook ;

/* Variables and functions */

__attribute__((used)) static void add_entry(Codebook *c, uint32 huff_code, int symbol, int count, int len, uint32 *values)
{
   if (!c->sparse) {
      c->codewords      [symbol] = huff_code;
   } else {
      c->codewords       [count] = huff_code;
      c->codeword_lengths[count] = len;
      values             [count] = symbol;
   }
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
          int symbol = 100;
          int count = 100;
          int len = 100;
          int _len_c0 = 1;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              int _len_c__i0__codeword_lengths0 = 1;
          c[_i0].codeword_lengths = (int *) malloc(_len_c__i0__codeword_lengths0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c__i0__codeword_lengths0; _j0++) {
            c[_i0].codeword_lengths[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c__i0__codewords0 = 1;
          c[_i0].codewords = (void **) malloc(_len_c__i0__codewords0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_c__i0__codewords0; _j0++) {
          }
        c[_i0].sparse = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * huff_code;
          int _len_values0 = 1;
          void ** values = (void **) malloc(_len_values0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_values0; _i0++) {
          }
          add_entry(c,huff_code,symbol,count,len,values);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].codeword_lengths);
          }
          free(c);
          for(int i1 = 0; i1 < _len_values0; i1++) {
            int _len_values1 = 1;
              }
          free(values);
        
        break;
    }
    // big-arr
    case 1:
    {
          int symbol = 255;
          int count = 255;
          int len = 255;
          int _len_c0 = 65025;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              int _len_c__i0__codeword_lengths0 = 1;
          c[_i0].codeword_lengths = (int *) malloc(_len_c__i0__codeword_lengths0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c__i0__codeword_lengths0; _j0++) {
            c[_i0].codeword_lengths[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c__i0__codewords0 = 1;
          c[_i0].codewords = (void **) malloc(_len_c__i0__codewords0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_c__i0__codewords0; _j0++) {
          }
        c[_i0].sparse = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * huff_code;
          int _len_values0 = 65025;
          void ** values = (void **) malloc(_len_values0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_values0; _i0++) {
          }
          add_entry(c,huff_code,symbol,count,len,values);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].codeword_lengths);
          }
          free(c);
          for(int i1 = 0; i1 < _len_values0; i1++) {
            int _len_values1 = 1;
              }
          free(values);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int symbol = 10;
          int count = 10;
          int len = 10;
          int _len_c0 = 100;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              int _len_c__i0__codeword_lengths0 = 1;
          c[_i0].codeword_lengths = (int *) malloc(_len_c__i0__codeword_lengths0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c__i0__codeword_lengths0; _j0++) {
            c[_i0].codeword_lengths[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c__i0__codewords0 = 1;
          c[_i0].codewords = (void **) malloc(_len_c__i0__codewords0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_c__i0__codewords0; _j0++) {
          }
        c[_i0].sparse = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * huff_code;
          int _len_values0 = 100;
          void ** values = (void **) malloc(_len_values0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_values0; _i0++) {
          }
          add_entry(c,huff_code,symbol,count,len,values);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].codeword_lengths);
          }
          free(c);
          for(int i1 = 0; i1 < _len_values0; i1++) {
            int _len_values1 = 1;
              }
          free(values);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
