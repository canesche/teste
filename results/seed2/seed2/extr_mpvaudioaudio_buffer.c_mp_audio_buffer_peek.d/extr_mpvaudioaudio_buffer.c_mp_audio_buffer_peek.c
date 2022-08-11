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
typedef  int /*<<< orphan*/  uint8_t ;
struct mp_audio_buffer {int num_samples; int /*<<< orphan*/ ** data; } ;

/* Variables and functions */

void mp_audio_buffer_peek(struct mp_audio_buffer *ab, uint8_t ***ptr,
                          int *samples)
{
    *ptr = ab->data;
    *samples = ab->num_samples;
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
          int _len_ab0 = 1;
          struct mp_audio_buffer * ab = (struct mp_audio_buffer *) malloc(_len_ab0*sizeof(struct mp_audio_buffer));
          for(int _i0 = 0; _i0 < _len_ab0; _i0++) {
            ab[_i0].num_samples = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ab__i0__data0 = 1;
          ab[_i0].data = (int **) malloc(_len_ab__i0__data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_ab__i0__data0; _j0++) {
            int _len_ab__i0__data1 = 1;
            ab[_i0].data[_j0] = (int *) malloc(_len_ab__i0__data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_ab__i0__data1; _j1++) {
              ab[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_ptr0 = 1;
          int *** ptr = (int ***) malloc(_len_ptr0*sizeof(int **));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            int _len_ptr1 = 1;
            ptr[_i0] = (int **) malloc(_len_ptr1*sizeof(int *));
            for(int _i1 = 0; _i1 < _len_ptr1; _i1++) {
              int _len_ptr2 = 1;
              ptr[_i0][_i1] = (int *) malloc(_len_ptr2*sizeof(int));
              for(int _i2 = 0; _i2 < _len_ptr2; _i2++) {
                ptr[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_samples0 = 1;
          int * samples = (int *) malloc(_len_samples0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_samples0; _i0++) {
            samples[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mp_audio_buffer_peek(ab,ptr,samples);
          for(int _aux = 0; _aux < _len_ab0; _aux++) {
          free(*(ab[_aux].data));
        free(ab[_aux].data);
          }
          free(ab);
          for(int i1 = 0; i1 < _len_ptr0; i1++) {
            int _len_ptr1 = 1;
              for(int i2 = 0; i2 < _len_ptr1; i2++) {
            int _len_ptr2 = 1;
              free(ptr[i1][i2]);
          }
          free(ptr[i1]);
          }
          free(ptr);
          free(samples);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ab0 = 65025;
          struct mp_audio_buffer * ab = (struct mp_audio_buffer *) malloc(_len_ab0*sizeof(struct mp_audio_buffer));
          for(int _i0 = 0; _i0 < _len_ab0; _i0++) {
            ab[_i0].num_samples = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ab__i0__data0 = 1;
          ab[_i0].data = (int **) malloc(_len_ab__i0__data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_ab__i0__data0; _j0++) {
            int _len_ab__i0__data1 = 1;
            ab[_i0].data[_j0] = (int *) malloc(_len_ab__i0__data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_ab__i0__data1; _j1++) {
              ab[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_ptr0 = 65025;
          int *** ptr = (int ***) malloc(_len_ptr0*sizeof(int **));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            int _len_ptr1 = 1;
            ptr[_i0] = (int **) malloc(_len_ptr1*sizeof(int *));
            for(int _i1 = 0; _i1 < _len_ptr1; _i1++) {
              int _len_ptr2 = 1;
              ptr[_i0][_i1] = (int *) malloc(_len_ptr2*sizeof(int));
              for(int _i2 = 0; _i2 < _len_ptr2; _i2++) {
                ptr[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_samples0 = 65025;
          int * samples = (int *) malloc(_len_samples0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_samples0; _i0++) {
            samples[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mp_audio_buffer_peek(ab,ptr,samples);
          for(int _aux = 0; _aux < _len_ab0; _aux++) {
          free(*(ab[_aux].data));
        free(ab[_aux].data);
          }
          free(ab);
          for(int i1 = 0; i1 < _len_ptr0; i1++) {
            int _len_ptr1 = 1;
              for(int i2 = 0; i2 < _len_ptr1; i2++) {
            int _len_ptr2 = 1;
              free(ptr[i1][i2]);
          }
          free(ptr[i1]);
          }
          free(ptr);
          free(samples);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ab0 = 100;
          struct mp_audio_buffer * ab = (struct mp_audio_buffer *) malloc(_len_ab0*sizeof(struct mp_audio_buffer));
          for(int _i0 = 0; _i0 < _len_ab0; _i0++) {
            ab[_i0].num_samples = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ab__i0__data0 = 1;
          ab[_i0].data = (int **) malloc(_len_ab__i0__data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_ab__i0__data0; _j0++) {
            int _len_ab__i0__data1 = 1;
            ab[_i0].data[_j0] = (int *) malloc(_len_ab__i0__data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_ab__i0__data1; _j1++) {
              ab[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_ptr0 = 100;
          int *** ptr = (int ***) malloc(_len_ptr0*sizeof(int **));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            int _len_ptr1 = 1;
            ptr[_i0] = (int **) malloc(_len_ptr1*sizeof(int *));
            for(int _i1 = 0; _i1 < _len_ptr1; _i1++) {
              int _len_ptr2 = 1;
              ptr[_i0][_i1] = (int *) malloc(_len_ptr2*sizeof(int));
              for(int _i2 = 0; _i2 < _len_ptr2; _i2++) {
                ptr[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_samples0 = 100;
          int * samples = (int *) malloc(_len_samples0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_samples0; _i0++) {
            samples[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mp_audio_buffer_peek(ab,ptr,samples);
          for(int _aux = 0; _aux < _len_ab0; _aux++) {
          free(*(ab[_aux].data));
        free(ab[_aux].data);
          }
          free(ab);
          for(int i1 = 0; i1 < _len_ptr0; i1++) {
            int _len_ptr1 = 1;
              for(int i2 = 0; i2 < _len_ptr1; i2++) {
            int _len_ptr2 = 1;
              free(ptr[i1][i2]);
          }
          free(ptr[i1]);
          }
          free(ptr);
          free(samples);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
