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
struct TYPE_3__ {char* mode; } ;
typedef  TYPE_1__ php_stream ;

/* Variables and functions */

void php_stream_mode_sanitize_fdopen_fopencookie(php_stream *stream, char *result)
{
	/* replace modes not supported by fdopen and fopencookie, but supported
	 * by PHP's fread(), so that their calls won't fail */
	const char *cur_mode = stream->mode;
	int         has_plus = 0,
		        has_bin  = 0,
				i,
				res_curs = 0;

	if (cur_mode[0] == 'r' || cur_mode[0] == 'w' || cur_mode[0] == 'a') {
		result[res_curs++] = cur_mode[0];
	} else {
		/* assume cur_mode[0] is 'c' or 'x'; substitute by 'w', which should not
		 * truncate anything in fdopen/fopencookie */
		result[res_curs++] = 'w';

		/* x is allowed (at least by glibc & compat), but not as the 1st mode
		 * as in PHP and in any case is (at best) ignored by fdopen and fopencookie */
	}

	/* assume current mode has at most length 4 (e.g. wbn+) */
	for (i = 1; i < 4 && cur_mode[i] != '\0'; i++) {
		if (cur_mode[i] == 'b') {
			has_bin = 1;
		} else if (cur_mode[i] == '+') {
			has_plus = 1;
		}
		/* ignore 'n', 't' or other stuff */
	}

	if (has_bin) {
		result[res_curs++] = 'b';
	}
	if (has_plus) {
		result[res_curs++] = '+';
	}

	result[res_curs] = '\0';
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
          int _len_stream0 = 1;
          struct TYPE_3__ * stream = (struct TYPE_3__ *) malloc(_len_stream0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              int _len_stream__i0__mode0 = 1;
          stream[_i0].mode = (char *) malloc(_len_stream__i0__mode0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_stream__i0__mode0; _j0++) {
            stream[_i0].mode[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_result0 = 1;
          char * result = (char *) malloc(_len_result0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_result0; _i0++) {
            result[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          php_stream_mode_sanitize_fdopen_fopencookie(stream,result);
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].mode);
          }
          free(stream);
          free(result);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_stream0 = 65025;
          struct TYPE_3__ * stream = (struct TYPE_3__ *) malloc(_len_stream0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              int _len_stream__i0__mode0 = 1;
          stream[_i0].mode = (char *) malloc(_len_stream__i0__mode0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_stream__i0__mode0; _j0++) {
            stream[_i0].mode[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_result0 = 65025;
          char * result = (char *) malloc(_len_result0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_result0; _i0++) {
            result[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          php_stream_mode_sanitize_fdopen_fopencookie(stream,result);
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].mode);
          }
          free(stream);
          free(result);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_stream0 = 100;
          struct TYPE_3__ * stream = (struct TYPE_3__ *) malloc(_len_stream0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              int _len_stream__i0__mode0 = 1;
          stream[_i0].mode = (char *) malloc(_len_stream__i0__mode0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_stream__i0__mode0; _j0++) {
            stream[_i0].mode[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_result0 = 100;
          char * result = (char *) malloc(_len_result0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_result0; _i0++) {
            result[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          php_stream_mode_sanitize_fdopen_fopencookie(stream,result);
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].mode);
          }
          free(stream);
          free(result);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
