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
struct TYPE_3__ {size_t in_len; int /*<<< orphan*/  zerr; void const* in; } ;
typedef  TYPE_1__ git_zstream ;

/* Variables and functions */
 int /*<<< orphan*/  Z_OK ; 

int git_zstream_set_input(git_zstream *zstream, const void *in, size_t in_len)
{
	zstream->in = in;
	zstream->in_len = in_len;
	zstream->zerr = Z_OK;
	return 0;
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
          int _len_zstream0 = 1;
          struct TYPE_3__ * zstream = (struct TYPE_3__ *) malloc(_len_zstream0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_zstream0; _i0++) {
            zstream[_i0].in_len = ((-2 * (next_i()%2)) + 1) * next_i();
        zstream[_i0].zerr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_zstream__i0__in0 = 1;
          zstream[_i0].in = (const void *) malloc(_len_zstream__i0__in0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_zstream__i0__in0; _j0++) {
            zstream[_i0].in[_j0] = 0;
          }
          }
          int _len_in0 = 1;
          const void * in = (const void *) malloc(_len_in0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = 0;
          }
          int benchRet = git_zstream_set_input(zstream,in,in_len);
          printf("%d\n", benchRet); 
          free(zstream);
          free(in);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long in_len = 255;
          int _len_zstream0 = 65025;
          struct TYPE_3__ * zstream = (struct TYPE_3__ *) malloc(_len_zstream0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_zstream0; _i0++) {
            zstream[_i0].in_len = ((-2 * (next_i()%2)) + 1) * next_i();
        zstream[_i0].zerr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_zstream__i0__in0 = 1;
          zstream[_i0].in = (const void *) malloc(_len_zstream__i0__in0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_zstream__i0__in0; _j0++) {
            zstream[_i0].in[_j0] = 0;
          }
          }
          int _len_in0 = 65025;
          const void * in = (const void *) malloc(_len_in0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = 0;
          }
          int benchRet = git_zstream_set_input(zstream,in,in_len);
          printf("%d\n", benchRet); 
          free(zstream);
          free(in);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long in_len = 10;
          int _len_zstream0 = 100;
          struct TYPE_3__ * zstream = (struct TYPE_3__ *) malloc(_len_zstream0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_zstream0; _i0++) {
            zstream[_i0].in_len = ((-2 * (next_i()%2)) + 1) * next_i();
        zstream[_i0].zerr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_zstream__i0__in0 = 1;
          zstream[_i0].in = (const void *) malloc(_len_zstream__i0__in0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_zstream__i0__in0; _j0++) {
            zstream[_i0].in[_j0] = 0;
          }
          }
          int _len_in0 = 100;
          const void * in = (const void *) malloc(_len_in0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = 0;
          }
          int benchRet = git_zstream_set_input(zstream,in,in_len);
          printf("%d\n", benchRet); 
          free(zstream);
          free(in);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
