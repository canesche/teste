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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {char* ptr; } ;
struct TYPE_4__ {TYPE_1__ text; } ;
struct diff_words_data {scalar_t__ last_minus; char* current_plus; TYPE_2__ plus; } ;

/* Variables and functions */

__attribute__((used)) static int color_words_output_graph_prefix(struct diff_words_data *diff_words)
{
	if ((diff_words->last_minus == 0 &&
		diff_words->current_plus == diff_words->plus.text.ptr) ||
		(diff_words->current_plus > diff_words->plus.text.ptr &&
		*(diff_words->current_plus - 1) == '\n')) {
		return 1;
	} else {
		return 0;
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
          int _len_diff_words0 = 1;
          struct diff_words_data * diff_words = (struct diff_words_data *) malloc(_len_diff_words0*sizeof(struct diff_words_data));
          for(int _i0 = 0; _i0 < _len_diff_words0; _i0++) {
            diff_words[_i0].last_minus = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_diff_words__i0__current_plus0 = 1;
          diff_words[_i0].current_plus = (char *) malloc(_len_diff_words__i0__current_plus0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_diff_words__i0__current_plus0; _j0++) {
            diff_words[_i0].current_plus[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_diff_words__i0__plus_text_ptr0 = 1;
          diff_words[_i0].plus.text.ptr = (char *) malloc(_len_diff_words__i0__plus_text_ptr0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_diff_words__i0__plus_text_ptr0; _j0++) {
            diff_words[_i0].plus.text.ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = color_words_output_graph_prefix(diff_words);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_diff_words0; _aux++) {
          free(diff_words[_aux].current_plus);
          }
          free(diff_words);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_diff_words0 = 65025;
          struct diff_words_data * diff_words = (struct diff_words_data *) malloc(_len_diff_words0*sizeof(struct diff_words_data));
          for(int _i0 = 0; _i0 < _len_diff_words0; _i0++) {
            diff_words[_i0].last_minus = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_diff_words__i0__current_plus0 = 1;
          diff_words[_i0].current_plus = (char *) malloc(_len_diff_words__i0__current_plus0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_diff_words__i0__current_plus0; _j0++) {
            diff_words[_i0].current_plus[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_diff_words__i0__plus_text_ptr0 = 1;
          diff_words[_i0].plus.text.ptr = (char *) malloc(_len_diff_words__i0__plus_text_ptr0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_diff_words__i0__plus_text_ptr0; _j0++) {
            diff_words[_i0].plus.text.ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = color_words_output_graph_prefix(diff_words);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_diff_words0; _aux++) {
          free(diff_words[_aux].current_plus);
          }
          free(diff_words);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_diff_words0 = 100;
          struct diff_words_data * diff_words = (struct diff_words_data *) malloc(_len_diff_words0*sizeof(struct diff_words_data));
          for(int _i0 = 0; _i0 < _len_diff_words0; _i0++) {
            diff_words[_i0].last_minus = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_diff_words__i0__current_plus0 = 1;
          diff_words[_i0].current_plus = (char *) malloc(_len_diff_words__i0__current_plus0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_diff_words__i0__current_plus0; _j0++) {
            diff_words[_i0].current_plus[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_diff_words__i0__plus_text_ptr0 = 1;
          diff_words[_i0].plus.text.ptr = (char *) malloc(_len_diff_words__i0__plus_text_ptr0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_diff_words__i0__plus_text_ptr0; _j0++) {
            diff_words[_i0].plus.text.ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = color_words_output_graph_prefix(diff_words);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_diff_words0; _aux++) {
          free(diff_words[_aux].current_plus);
          }
          free(diff_words);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
