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
struct list_decoder {int /*<<< orphan*/ * decode_int; scalar_t__ k; int /*<<< orphan*/  N; scalar_t__ K; scalar_t__ data; scalar_t__ p; } ;
struct interpolative_decoder_stack_entry {int left_value; int /*<<< orphan*/  right_value; scalar_t__ right_idx; int /*<<< orphan*/  middle_value; scalar_t__ left_idx; } ;

/* Variables and functions */
 int /*<<< orphan*/  INTERPOLATIVE_DECODER_NOT_EVALUATED ; 
 int /*<<< orphan*/  interpolative_decode_int ; 

__attribute__((used)) static void interpolative_decoder_init (struct list_decoder *dec) {
  dec->p = 0;
  struct interpolative_decoder_stack_entry *data = (struct interpolative_decoder_stack_entry *) dec->data;
  data->left_idx = 0;
  data->left_value = -1;
  data->middle_value = INTERPOLATIVE_DECODER_NOT_EVALUATED;
  data->right_idx = dec->K + 1;
  data->right_value = dec->N;
  dec->k = 0;
  dec->decode_int = &interpolative_decode_int;
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
          int _len_dec0 = 1;
          struct list_decoder * dec = (struct list_decoder *) malloc(_len_dec0*sizeof(struct list_decoder));
          for(int _i0 = 0; _i0 < _len_dec0; _i0++) {
              int _len_dec__i0__decode_int0 = 1;
          dec[_i0].decode_int = (int *) malloc(_len_dec__i0__decode_int0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dec__i0__decode_int0; _j0++) {
            dec[_i0].decode_int[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dec[_i0].k = ((-2 * (next_i()%2)) + 1) * next_i();
        dec[_i0].N = ((-2 * (next_i()%2)) + 1) * next_i();
        dec[_i0].K = ((-2 * (next_i()%2)) + 1) * next_i();
        dec[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
        dec[_i0].p = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          interpolative_decoder_init(dec);
          for(int _aux = 0; _aux < _len_dec0; _aux++) {
          free(dec[_aux].decode_int);
          }
          free(dec);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dec0 = 65025;
          struct list_decoder * dec = (struct list_decoder *) malloc(_len_dec0*sizeof(struct list_decoder));
          for(int _i0 = 0; _i0 < _len_dec0; _i0++) {
              int _len_dec__i0__decode_int0 = 1;
          dec[_i0].decode_int = (int *) malloc(_len_dec__i0__decode_int0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dec__i0__decode_int0; _j0++) {
            dec[_i0].decode_int[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dec[_i0].k = ((-2 * (next_i()%2)) + 1) * next_i();
        dec[_i0].N = ((-2 * (next_i()%2)) + 1) * next_i();
        dec[_i0].K = ((-2 * (next_i()%2)) + 1) * next_i();
        dec[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
        dec[_i0].p = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          interpolative_decoder_init(dec);
          for(int _aux = 0; _aux < _len_dec0; _aux++) {
          free(dec[_aux].decode_int);
          }
          free(dec);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dec0 = 100;
          struct list_decoder * dec = (struct list_decoder *) malloc(_len_dec0*sizeof(struct list_decoder));
          for(int _i0 = 0; _i0 < _len_dec0; _i0++) {
              int _len_dec__i0__decode_int0 = 1;
          dec[_i0].decode_int = (int *) malloc(_len_dec__i0__decode_int0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dec__i0__decode_int0; _j0++) {
            dec[_i0].decode_int[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dec[_i0].k = ((-2 * (next_i()%2)) + 1) * next_i();
        dec[_i0].N = ((-2 * (next_i()%2)) + 1) * next_i();
        dec[_i0].K = ((-2 * (next_i()%2)) + 1) * next_i();
        dec[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
        dec[_i0].p = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          interpolative_decoder_init(dec);
          for(int _aux = 0; _aux < _len_dec0; _aux++) {
          free(dec[_aux].decode_int);
          }
          free(dec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
