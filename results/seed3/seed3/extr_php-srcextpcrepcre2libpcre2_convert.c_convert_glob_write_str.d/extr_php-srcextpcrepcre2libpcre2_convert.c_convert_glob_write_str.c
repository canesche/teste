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
typedef  int /*<<< orphan*/  uint8_t ;
struct TYPE_3__ {scalar_t__ output_size; int /*<<< orphan*/ * output; int /*<<< orphan*/ * output_end; int /*<<< orphan*/ * out_str; } ;
typedef  TYPE_1__ pcre2_output_context ;
typedef  int /*<<< orphan*/  PCRE2_UCHAR ;
typedef  int /*<<< orphan*/ * PCRE2_SPTR ;
typedef  scalar_t__ PCRE2_SIZE ;

/* Variables and functions */

__attribute__((used)) static void
convert_glob_write_str(pcre2_output_context *out, PCRE2_SIZE length)
{
uint8_t *out_str = out->out_str;
PCRE2_UCHAR *output = out->output;
PCRE2_SPTR output_end = out->output_end;
PCRE2_SIZE output_size = out->output_size;

do
  {
  output_size++;

  if (output < output_end)
    *output++ = *out_str++;
  }
while (--length != 0);

out->output = output;
out->output_size = output_size;
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
          long length = 100;
          int _len_out0 = 1;
          struct TYPE_3__ * out = (struct TYPE_3__ *) malloc(_len_out0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0].output_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_out__i0__output0 = 1;
          out[_i0].output = (int *) malloc(_len_out__i0__output0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_out__i0__output0; _j0++) {
            out[_i0].output[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out__i0__output_end0 = 1;
          out[_i0].output_end = (int *) malloc(_len_out__i0__output_end0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_out__i0__output_end0; _j0++) {
            out[_i0].output_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out__i0__out_str0 = 1;
          out[_i0].out_str = (int *) malloc(_len_out__i0__out_str0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_out__i0__out_str0; _j0++) {
            out[_i0].out_str[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          convert_glob_write_str(out,length);
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].output);
          }
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].output_end);
          }
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].out_str);
          }
          free(out);
        
        break;
    }
    // big-arr
    case 1:
    {
          long length = 255;
          int _len_out0 = 65025;
          struct TYPE_3__ * out = (struct TYPE_3__ *) malloc(_len_out0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0].output_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_out__i0__output0 = 1;
          out[_i0].output = (int *) malloc(_len_out__i0__output0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_out__i0__output0; _j0++) {
            out[_i0].output[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out__i0__output_end0 = 1;
          out[_i0].output_end = (int *) malloc(_len_out__i0__output_end0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_out__i0__output_end0; _j0++) {
            out[_i0].output_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out__i0__out_str0 = 1;
          out[_i0].out_str = (int *) malloc(_len_out__i0__out_str0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_out__i0__out_str0; _j0++) {
            out[_i0].out_str[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          convert_glob_write_str(out,length);
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].output);
          }
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].output_end);
          }
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].out_str);
          }
          free(out);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long length = 10;
          int _len_out0 = 100;
          struct TYPE_3__ * out = (struct TYPE_3__ *) malloc(_len_out0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0].output_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_out__i0__output0 = 1;
          out[_i0].output = (int *) malloc(_len_out__i0__output0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_out__i0__output0; _j0++) {
            out[_i0].output[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out__i0__output_end0 = 1;
          out[_i0].output_end = (int *) malloc(_len_out__i0__output_end0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_out__i0__output_end0; _j0++) {
            out[_i0].output_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out__i0__out_str0 = 1;
          out[_i0].out_str = (int *) malloc(_len_out__i0__out_str0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_out__i0__out_str0; _j0++) {
            out[_i0].out_str[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          convert_glob_write_str(out,length);
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].output);
          }
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].output_end);
          }
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].out_str);
          }
          free(out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
