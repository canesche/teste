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
struct sample_t {int* values; int min; int max; } ;

/* Variables and functions */

void update_sample(struct sample_t *sample, int sample_new) {
  for (int i = sizeof(sample->values)/sizeof(sample->values[0]) - 1; i > 0; i--) {
    sample->values[i] = sample->values[i-1];
  }
  sample->values[0] = sample_new;

  // get the minimum and maximum measured samples
  sample->min = sample->max = sample->values[0];
  for (int i = 1; i < sizeof(sample->values)/sizeof(sample->values[0]); i++) {
    if (sample->values[i] < sample->min) sample->min = sample->values[i];
    if (sample->values[i] > sample->max) sample->max = sample->values[i];
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
          int sample_new = 100;
          int _len_sample0 = 1;
          struct sample_t * sample = (struct sample_t *) malloc(_len_sample0*sizeof(struct sample_t));
          for(int _i0 = 0; _i0 < _len_sample0; _i0++) {
              int _len_sample__i0__values0 = 1;
          sample[_i0].values = (int *) malloc(_len_sample__i0__values0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sample__i0__values0; _j0++) {
            sample[_i0].values[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sample[_i0].min = ((-2 * (next_i()%2)) + 1) * next_i();
        sample[_i0].max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_sample(sample,sample_new);
          for(int _aux = 0; _aux < _len_sample0; _aux++) {
          free(sample[_aux].values);
          }
          free(sample);
        
        break;
    }
    // big-arr
    case 1:
    {
          int sample_new = 255;
          int _len_sample0 = 65025;
          struct sample_t * sample = (struct sample_t *) malloc(_len_sample0*sizeof(struct sample_t));
          for(int _i0 = 0; _i0 < _len_sample0; _i0++) {
              int _len_sample__i0__values0 = 1;
          sample[_i0].values = (int *) malloc(_len_sample__i0__values0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sample__i0__values0; _j0++) {
            sample[_i0].values[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sample[_i0].min = ((-2 * (next_i()%2)) + 1) * next_i();
        sample[_i0].max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_sample(sample,sample_new);
          for(int _aux = 0; _aux < _len_sample0; _aux++) {
          free(sample[_aux].values);
          }
          free(sample);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int sample_new = 10;
          int _len_sample0 = 100;
          struct sample_t * sample = (struct sample_t *) malloc(_len_sample0*sizeof(struct sample_t));
          for(int _i0 = 0; _i0 < _len_sample0; _i0++) {
              int _len_sample__i0__values0 = 1;
          sample[_i0].values = (int *) malloc(_len_sample__i0__values0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sample__i0__values0; _j0++) {
            sample[_i0].values[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sample[_i0].min = ((-2 * (next_i()%2)) + 1) * next_i();
        sample[_i0].max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_sample(sample,sample_new);
          for(int _aux = 0; _aux < _len_sample0; _aux++) {
          free(sample[_aux].values);
          }
          free(sample);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
