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
struct fir16_state_t {int* history; size_t curr_pos; int taps; int* coeffs; } ;
typedef  int int32_t ;
typedef  int int16_t ;

/* Variables and functions */

__attribute__((used)) static inline int16_t fir16(struct fir16_state_t *fir, int16_t sample)
{
	int32_t y;
	int i;
	int offset1;
	int offset2;

	fir->history[fir->curr_pos] = sample;

	offset2 = fir->curr_pos;
	offset1 = fir->taps - offset2;
	y = 0;
	for (i = fir->taps - 1; i >= offset1; i--)
		y += fir->coeffs[i] * fir->history[i - offset1];
	for (; i >= 0; i--)
		y += fir->coeffs[i] * fir->history[i + offset2];
	if (fir->curr_pos <= 0)
		fir->curr_pos = fir->taps;
	fir->curr_pos--;
	return (int16_t) (y >> 15);
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
          int sample = 100;
          int _len_fir0 = 1;
          struct fir16_state_t * fir = (struct fir16_state_t *) malloc(_len_fir0*sizeof(struct fir16_state_t));
          for(int _i0 = 0; _i0 < _len_fir0; _i0++) {
              int _len_fir__i0__history0 = 1;
          fir[_i0].history = (int *) malloc(_len_fir__i0__history0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fir__i0__history0; _j0++) {
            fir[_i0].history[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fir[_i0].curr_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        fir[_i0].taps = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fir__i0__coeffs0 = 1;
          fir[_i0].coeffs = (int *) malloc(_len_fir__i0__coeffs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fir__i0__coeffs0; _j0++) {
            fir[_i0].coeffs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = fir16(fir,sample);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fir0; _aux++) {
          free(fir[_aux].history);
          }
          for(int _aux = 0; _aux < _len_fir0; _aux++) {
          free(fir[_aux].coeffs);
          }
          free(fir);
        
        break;
    }
    // big-arr
    case 1:
    {
          int sample = 255;
          int _len_fir0 = 65025;
          struct fir16_state_t * fir = (struct fir16_state_t *) malloc(_len_fir0*sizeof(struct fir16_state_t));
          for(int _i0 = 0; _i0 < _len_fir0; _i0++) {
              int _len_fir__i0__history0 = 1;
          fir[_i0].history = (int *) malloc(_len_fir__i0__history0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fir__i0__history0; _j0++) {
            fir[_i0].history[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fir[_i0].curr_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        fir[_i0].taps = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fir__i0__coeffs0 = 1;
          fir[_i0].coeffs = (int *) malloc(_len_fir__i0__coeffs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fir__i0__coeffs0; _j0++) {
            fir[_i0].coeffs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = fir16(fir,sample);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fir0; _aux++) {
          free(fir[_aux].history);
          }
          for(int _aux = 0; _aux < _len_fir0; _aux++) {
          free(fir[_aux].coeffs);
          }
          free(fir);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int sample = 10;
          int _len_fir0 = 100;
          struct fir16_state_t * fir = (struct fir16_state_t *) malloc(_len_fir0*sizeof(struct fir16_state_t));
          for(int _i0 = 0; _i0 < _len_fir0; _i0++) {
              int _len_fir__i0__history0 = 1;
          fir[_i0].history = (int *) malloc(_len_fir__i0__history0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fir__i0__history0; _j0++) {
            fir[_i0].history[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fir[_i0].curr_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        fir[_i0].taps = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fir__i0__coeffs0 = 1;
          fir[_i0].coeffs = (int *) malloc(_len_fir__i0__coeffs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fir__i0__coeffs0; _j0++) {
            fir[_i0].coeffs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = fir16(fir,sample);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fir0; _aux++) {
          free(fir[_aux].history);
          }
          for(int _aux = 0; _aux < _len_fir0; _aux++) {
          free(fir[_aux].coeffs);
          }
          free(fir);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
