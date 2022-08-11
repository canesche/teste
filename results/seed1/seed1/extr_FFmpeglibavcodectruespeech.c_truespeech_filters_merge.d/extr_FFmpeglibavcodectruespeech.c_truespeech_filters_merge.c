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
struct TYPE_3__ {int* filters; int* prevfilt; int* cvector; int /*<<< orphan*/  flag; } ;
typedef  TYPE_1__ TSContext ;

/* Variables and functions */

__attribute__((used)) static void truespeech_filters_merge(TSContext *dec)
{
    int i;

    if(!dec->flag){
        for(i = 0; i < 8; i++){
            dec->filters[i + 0] = dec->prevfilt[i];
            dec->filters[i + 8] = dec->prevfilt[i];
        }
    }else{
        for(i = 0; i < 8; i++){
            dec->filters[i + 0]=(dec->cvector[i] * 21846 + dec->prevfilt[i] * 10923 + 16384) >> 15;
            dec->filters[i + 8]=(dec->cvector[i] * 10923 + dec->prevfilt[i] * 21846 + 16384) >> 15;
        }
    }
    for(i = 0; i < 8; i++){
        dec->filters[i + 16] = dec->cvector[i];
        dec->filters[i + 24] = dec->cvector[i];
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
          int _len_dec0 = 1;
          struct TYPE_3__ * dec = (struct TYPE_3__ *) malloc(_len_dec0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dec0; _i0++) {
              int _len_dec__i0__filters0 = 1;
          dec[_i0].filters = (int *) malloc(_len_dec__i0__filters0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dec__i0__filters0; _j0++) {
            dec[_i0].filters[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dec__i0__prevfilt0 = 1;
          dec[_i0].prevfilt = (int *) malloc(_len_dec__i0__prevfilt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dec__i0__prevfilt0; _j0++) {
            dec[_i0].prevfilt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dec__i0__cvector0 = 1;
          dec[_i0].cvector = (int *) malloc(_len_dec__i0__cvector0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dec__i0__cvector0; _j0++) {
            dec[_i0].cvector[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dec[_i0].flag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          truespeech_filters_merge(dec);
          for(int _aux = 0; _aux < _len_dec0; _aux++) {
          free(dec[_aux].filters);
          }
          for(int _aux = 0; _aux < _len_dec0; _aux++) {
          free(dec[_aux].prevfilt);
          }
          for(int _aux = 0; _aux < _len_dec0; _aux++) {
          free(dec[_aux].cvector);
          }
          free(dec);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dec0 = 65025;
          struct TYPE_3__ * dec = (struct TYPE_3__ *) malloc(_len_dec0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dec0; _i0++) {
              int _len_dec__i0__filters0 = 1;
          dec[_i0].filters = (int *) malloc(_len_dec__i0__filters0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dec__i0__filters0; _j0++) {
            dec[_i0].filters[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dec__i0__prevfilt0 = 1;
          dec[_i0].prevfilt = (int *) malloc(_len_dec__i0__prevfilt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dec__i0__prevfilt0; _j0++) {
            dec[_i0].prevfilt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dec__i0__cvector0 = 1;
          dec[_i0].cvector = (int *) malloc(_len_dec__i0__cvector0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dec__i0__cvector0; _j0++) {
            dec[_i0].cvector[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dec[_i0].flag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          truespeech_filters_merge(dec);
          for(int _aux = 0; _aux < _len_dec0; _aux++) {
          free(dec[_aux].filters);
          }
          for(int _aux = 0; _aux < _len_dec0; _aux++) {
          free(dec[_aux].prevfilt);
          }
          for(int _aux = 0; _aux < _len_dec0; _aux++) {
          free(dec[_aux].cvector);
          }
          free(dec);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dec0 = 100;
          struct TYPE_3__ * dec = (struct TYPE_3__ *) malloc(_len_dec0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dec0; _i0++) {
              int _len_dec__i0__filters0 = 1;
          dec[_i0].filters = (int *) malloc(_len_dec__i0__filters0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dec__i0__filters0; _j0++) {
            dec[_i0].filters[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dec__i0__prevfilt0 = 1;
          dec[_i0].prevfilt = (int *) malloc(_len_dec__i0__prevfilt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dec__i0__prevfilt0; _j0++) {
            dec[_i0].prevfilt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dec__i0__cvector0 = 1;
          dec[_i0].cvector = (int *) malloc(_len_dec__i0__cvector0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dec__i0__cvector0; _j0++) {
            dec[_i0].cvector[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dec[_i0].flag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          truespeech_filters_merge(dec);
          for(int _aux = 0; _aux < _len_dec0; _aux++) {
          free(dec[_aux].filters);
          }
          for(int _aux = 0; _aux < _len_dec0; _aux++) {
          free(dec[_aux].prevfilt);
          }
          for(int _aux = 0; _aux < _len_dec0; _aux++) {
          free(dec[_aux].cvector);
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
