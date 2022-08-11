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
typedef  scalar_t__ uint8 ;
struct TYPE_4__ {scalar_t__* colmap; } ;
struct TYPE_5__ {TYPE_1__ xwin; } ;
typedef  TYPE_2__ RDPCLIENT ;

/* Variables and functions */

__attribute__((used)) static void
translate8to8(RDPCLIENT * This, const uint8 * data, uint8 * out, uint8 * end)
{
	while (out < end)
		*(out++) = (uint8) This->xwin.colmap[*(data++)];
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
          int _len_This0 = 1;
          struct TYPE_5__ * This = (struct TYPE_5__ *) malloc(_len_This0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
              int _len_This__i0__xwin_colmap0 = 1;
          This[_i0].xwin.colmap = (long *) malloc(_len_This__i0__xwin_colmap0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_This__i0__xwin_colmap0; _j0++) {
            This[_i0].xwin.colmap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_data0 = 1;
          const long * data = (const long *) malloc(_len_data0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 1;
          long * out = (long *) malloc(_len_out0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_end0 = 1;
          long * end = (long *) malloc(_len_end0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          translate8to8(This,data,out,end);
          free(This);
          free(data);
          free(out);
          free(end);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_This0 = 65025;
          struct TYPE_5__ * This = (struct TYPE_5__ *) malloc(_len_This0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
              int _len_This__i0__xwin_colmap0 = 1;
          This[_i0].xwin.colmap = (long *) malloc(_len_This__i0__xwin_colmap0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_This__i0__xwin_colmap0; _j0++) {
            This[_i0].xwin.colmap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_data0 = 65025;
          const long * data = (const long *) malloc(_len_data0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 65025;
          long * out = (long *) malloc(_len_out0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_end0 = 65025;
          long * end = (long *) malloc(_len_end0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          translate8to8(This,data,out,end);
          free(This);
          free(data);
          free(out);
          free(end);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_This0 = 100;
          struct TYPE_5__ * This = (struct TYPE_5__ *) malloc(_len_This0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
              int _len_This__i0__xwin_colmap0 = 1;
          This[_i0].xwin.colmap = (long *) malloc(_len_This__i0__xwin_colmap0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_This__i0__xwin_colmap0; _j0++) {
            This[_i0].xwin.colmap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_data0 = 100;
          const long * data = (const long *) malloc(_len_data0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 100;
          long * out = (long *) malloc(_len_out0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_end0 = 100;
          long * end = (long *) malloc(_len_end0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          translate8to8(This,data,out,end);
          free(This);
          free(data);
          free(out);
          free(end);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
