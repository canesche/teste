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
struct TYPE_3__ {char const* content; size_t content_len; size_t content_offset; } ;
typedef  TYPE_1__ git_diff_line ;

/* Variables and functions */

__attribute__((used)) static void patch_line_init(
	git_diff_line *out,
	const char *in,
	size_t in_len,
	size_t in_offset)
{
	out->content = in;
	out->content_len = in_len;
	out->content_offset = in_offset;
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
          unsigned long in_len = 100;
          unsigned long in_offset = 100;
          int _len_out0 = 1;
          struct TYPE_3__ * out = (struct TYPE_3__ *) malloc(_len_out0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
              int _len_out__i0__content0 = 1;
          out[_i0].content = (const char *) malloc(_len_out__i0__content0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_out__i0__content0; _j0++) {
            out[_i0].content[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        out[_i0].content_len = ((-2 * (next_i()%2)) + 1) * next_i();
        out[_i0].content_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in0 = 1;
          const char * in = (const char *) malloc(_len_in0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          patch_line_init(out,in,in_len,in_offset);
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].content);
          }
          free(out);
          free(in);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long in_len = 255;
          unsigned long in_offset = 255;
          int _len_out0 = 65025;
          struct TYPE_3__ * out = (struct TYPE_3__ *) malloc(_len_out0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
              int _len_out__i0__content0 = 1;
          out[_i0].content = (const char *) malloc(_len_out__i0__content0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_out__i0__content0; _j0++) {
            out[_i0].content[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        out[_i0].content_len = ((-2 * (next_i()%2)) + 1) * next_i();
        out[_i0].content_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in0 = 65025;
          const char * in = (const char *) malloc(_len_in0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          patch_line_init(out,in,in_len,in_offset);
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].content);
          }
          free(out);
          free(in);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long in_len = 10;
          unsigned long in_offset = 10;
          int _len_out0 = 100;
          struct TYPE_3__ * out = (struct TYPE_3__ *) malloc(_len_out0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
              int _len_out__i0__content0 = 1;
          out[_i0].content = (const char *) malloc(_len_out__i0__content0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_out__i0__content0; _j0++) {
            out[_i0].content[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        out[_i0].content_len = ((-2 * (next_i()%2)) + 1) * next_i();
        out[_i0].content_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in0 = 100;
          const char * in = (const char *) malloc(_len_in0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          patch_line_init(out,in,in_len,in_offset);
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].content);
          }
          free(out);
          free(in);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
