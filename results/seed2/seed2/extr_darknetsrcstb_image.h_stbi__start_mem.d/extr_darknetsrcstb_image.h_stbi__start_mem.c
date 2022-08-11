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
typedef  int /*<<< orphan*/  stbi_uc ;
struct TYPE_4__ {int /*<<< orphan*/ * read; } ;
struct TYPE_5__ {int /*<<< orphan*/ * img_buffer_original_end; int /*<<< orphan*/ * img_buffer_end; int /*<<< orphan*/ * img_buffer_original; int /*<<< orphan*/ * img_buffer; scalar_t__ read_from_callbacks; TYPE_1__ io; } ;
typedef  TYPE_2__ stbi__context ;

/* Variables and functions */

__attribute__((used)) static void stbi__start_mem(stbi__context *s, stbi_uc const *buffer, int len)
{
   s->io.read = NULL;
   s->read_from_callbacks = 0;
   s->img_buffer = s->img_buffer_original = (stbi_uc *) buffer;
   s->img_buffer_end = s->img_buffer_original_end = (stbi_uc *) buffer+len;
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
          int len = 100;
          int _len_s0 = 1;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__img_buffer_original_end0 = 1;
          s[_i0].img_buffer_original_end = (int *) malloc(_len_s__i0__img_buffer_original_end0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__img_buffer_original_end0; _j0++) {
            s[_i0].img_buffer_original_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__img_buffer_end0 = 1;
          s[_i0].img_buffer_end = (int *) malloc(_len_s__i0__img_buffer_end0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__img_buffer_end0; _j0++) {
            s[_i0].img_buffer_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__img_buffer_original0 = 1;
          s[_i0].img_buffer_original = (int *) malloc(_len_s__i0__img_buffer_original0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__img_buffer_original0; _j0++) {
            s[_i0].img_buffer_original[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__img_buffer0 = 1;
          s[_i0].img_buffer = (int *) malloc(_len_s__i0__img_buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__img_buffer0; _j0++) {
            s[_i0].img_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].read_from_callbacks = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__io_read0 = 1;
          s[_i0].io.read = (int *) malloc(_len_s__i0__io_read0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__io_read0; _j0++) {
            s[_i0].io.read[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buffer0 = 1;
          const int * buffer = (const int *) malloc(_len_buffer0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stbi__start_mem(s,buffer,len);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].img_buffer_original_end);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].img_buffer_end);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].img_buffer_original);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].img_buffer);
          }
          free(s);
          free(buffer);
        
        break;
    }
    // big-arr
    case 1:
    {
          int len = 255;
          int _len_s0 = 65025;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__img_buffer_original_end0 = 1;
          s[_i0].img_buffer_original_end = (int *) malloc(_len_s__i0__img_buffer_original_end0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__img_buffer_original_end0; _j0++) {
            s[_i0].img_buffer_original_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__img_buffer_end0 = 1;
          s[_i0].img_buffer_end = (int *) malloc(_len_s__i0__img_buffer_end0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__img_buffer_end0; _j0++) {
            s[_i0].img_buffer_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__img_buffer_original0 = 1;
          s[_i0].img_buffer_original = (int *) malloc(_len_s__i0__img_buffer_original0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__img_buffer_original0; _j0++) {
            s[_i0].img_buffer_original[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__img_buffer0 = 1;
          s[_i0].img_buffer = (int *) malloc(_len_s__i0__img_buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__img_buffer0; _j0++) {
            s[_i0].img_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].read_from_callbacks = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__io_read0 = 1;
          s[_i0].io.read = (int *) malloc(_len_s__i0__io_read0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__io_read0; _j0++) {
            s[_i0].io.read[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buffer0 = 65025;
          const int * buffer = (const int *) malloc(_len_buffer0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stbi__start_mem(s,buffer,len);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].img_buffer_original_end);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].img_buffer_end);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].img_buffer_original);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].img_buffer);
          }
          free(s);
          free(buffer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int len = 10;
          int _len_s0 = 100;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__img_buffer_original_end0 = 1;
          s[_i0].img_buffer_original_end = (int *) malloc(_len_s__i0__img_buffer_original_end0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__img_buffer_original_end0; _j0++) {
            s[_i0].img_buffer_original_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__img_buffer_end0 = 1;
          s[_i0].img_buffer_end = (int *) malloc(_len_s__i0__img_buffer_end0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__img_buffer_end0; _j0++) {
            s[_i0].img_buffer_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__img_buffer_original0 = 1;
          s[_i0].img_buffer_original = (int *) malloc(_len_s__i0__img_buffer_original0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__img_buffer_original0; _j0++) {
            s[_i0].img_buffer_original[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__img_buffer0 = 1;
          s[_i0].img_buffer = (int *) malloc(_len_s__i0__img_buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__img_buffer0; _j0++) {
            s[_i0].img_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].read_from_callbacks = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__io_read0 = 1;
          s[_i0].io.read = (int *) malloc(_len_s__i0__io_read0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__io_read0; _j0++) {
            s[_i0].io.read[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buffer0 = 100;
          const int * buffer = (const int *) malloc(_len_buffer0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stbi__start_mem(s,buffer,len);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].img_buffer_original_end);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].img_buffer_end);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].img_buffer_original);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].img_buffer);
          }
          free(s);
          free(buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
