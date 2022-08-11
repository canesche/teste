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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int* idct_permutation; } ;
struct TYPE_5__ {int* intra_matrix; int* chroma_intra_matrix; int* inter_matrix; int* chroma_inter_matrix; TYPE_1__ idsp; } ;
typedef  TYPE_2__ MpegEncContext ;

/* Variables and functions */
 int* ff_mpeg4_default_intra_matrix ; 
 int* ff_mpeg4_default_non_intra_matrix ; 

__attribute__((used)) static void mpeg4_load_default_matrices(MpegEncContext *s)
{
    int i, v;

    /* load default matrices */
    for (i = 0; i < 64; i++) {
        int j = s->idsp.idct_permutation[i];
        v = ff_mpeg4_default_intra_matrix[i];
        s->intra_matrix[j]        = v;
        s->chroma_intra_matrix[j] = v;

        v = ff_mpeg4_default_non_intra_matrix[i];
        s->inter_matrix[j]        = v;
        s->chroma_inter_matrix[j] = v;
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
          int _len_s0 = 1;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__intra_matrix0 = 1;
          s[_i0].intra_matrix = (int *) malloc(_len_s__i0__intra_matrix0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__intra_matrix0; _j0++) {
            s[_i0].intra_matrix[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__chroma_intra_matrix0 = 1;
          s[_i0].chroma_intra_matrix = (int *) malloc(_len_s__i0__chroma_intra_matrix0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__chroma_intra_matrix0; _j0++) {
            s[_i0].chroma_intra_matrix[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__inter_matrix0 = 1;
          s[_i0].inter_matrix = (int *) malloc(_len_s__i0__inter_matrix0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__inter_matrix0; _j0++) {
            s[_i0].inter_matrix[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__chroma_inter_matrix0 = 1;
          s[_i0].chroma_inter_matrix = (int *) malloc(_len_s__i0__chroma_inter_matrix0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__chroma_inter_matrix0; _j0++) {
            s[_i0].chroma_inter_matrix[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__idsp_idct_permutation0 = 1;
          s[_i0].idsp.idct_permutation = (int *) malloc(_len_s__i0__idsp_idct_permutation0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__idsp_idct_permutation0; _j0++) {
            s[_i0].idsp.idct_permutation[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mpeg4_load_default_matrices(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].intra_matrix);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].chroma_intra_matrix);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].inter_matrix);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].chroma_inter_matrix);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__intra_matrix0 = 1;
          s[_i0].intra_matrix = (int *) malloc(_len_s__i0__intra_matrix0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__intra_matrix0; _j0++) {
            s[_i0].intra_matrix[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__chroma_intra_matrix0 = 1;
          s[_i0].chroma_intra_matrix = (int *) malloc(_len_s__i0__chroma_intra_matrix0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__chroma_intra_matrix0; _j0++) {
            s[_i0].chroma_intra_matrix[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__inter_matrix0 = 1;
          s[_i0].inter_matrix = (int *) malloc(_len_s__i0__inter_matrix0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__inter_matrix0; _j0++) {
            s[_i0].inter_matrix[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__chroma_inter_matrix0 = 1;
          s[_i0].chroma_inter_matrix = (int *) malloc(_len_s__i0__chroma_inter_matrix0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__chroma_inter_matrix0; _j0++) {
            s[_i0].chroma_inter_matrix[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__idsp_idct_permutation0 = 1;
          s[_i0].idsp.idct_permutation = (int *) malloc(_len_s__i0__idsp_idct_permutation0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__idsp_idct_permutation0; _j0++) {
            s[_i0].idsp.idct_permutation[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mpeg4_load_default_matrices(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].intra_matrix);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].chroma_intra_matrix);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].inter_matrix);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].chroma_inter_matrix);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__intra_matrix0 = 1;
          s[_i0].intra_matrix = (int *) malloc(_len_s__i0__intra_matrix0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__intra_matrix0; _j0++) {
            s[_i0].intra_matrix[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__chroma_intra_matrix0 = 1;
          s[_i0].chroma_intra_matrix = (int *) malloc(_len_s__i0__chroma_intra_matrix0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__chroma_intra_matrix0; _j0++) {
            s[_i0].chroma_intra_matrix[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__inter_matrix0 = 1;
          s[_i0].inter_matrix = (int *) malloc(_len_s__i0__inter_matrix0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__inter_matrix0; _j0++) {
            s[_i0].inter_matrix[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__chroma_inter_matrix0 = 1;
          s[_i0].chroma_inter_matrix = (int *) malloc(_len_s__i0__chroma_inter_matrix0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__chroma_inter_matrix0; _j0++) {
            s[_i0].chroma_inter_matrix[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__idsp_idct_permutation0 = 1;
          s[_i0].idsp.idct_permutation = (int *) malloc(_len_s__i0__idsp_idct_permutation0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__idsp_idct_permutation0; _j0++) {
            s[_i0].idsp.idct_permutation[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mpeg4_load_default_matrices(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].intra_matrix);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].chroma_intra_matrix);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].inter_matrix);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].chroma_inter_matrix);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
