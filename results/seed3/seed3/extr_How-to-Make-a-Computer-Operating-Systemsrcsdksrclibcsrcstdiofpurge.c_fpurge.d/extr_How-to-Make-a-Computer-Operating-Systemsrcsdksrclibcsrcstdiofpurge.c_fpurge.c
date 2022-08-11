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
struct TYPE_3__ {int flags; scalar_t__ buffer_pos; scalar_t__ buffer_data_size; scalar_t__ has_ungotten; } ;
typedef  TYPE_1__ FILE ;

/* Variables and functions */
 int __FILE_BUFINPUT ; 
 int __FILE_NOBUF ; 

int fpurge( FILE* stream ) {
    if ( stream->flags & __FILE_NOBUF ) {
        return 0;
    }

    stream->has_ungotten = 0;

    if ( stream->flags & __FILE_BUFINPUT ) {
        stream->buffer_pos = stream->buffer_data_size;
    } else {
        stream->buffer_pos = 0;
    }

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
          int _len_stream0 = 1;
          struct TYPE_3__ * stream = (struct TYPE_3__ *) malloc(_len_stream0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
            stream[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].buffer_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].buffer_data_size = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].has_ungotten = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fpurge(stream);
          printf("%d\n", benchRet); 
          free(stream);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_stream0 = 65025;
          struct TYPE_3__ * stream = (struct TYPE_3__ *) malloc(_len_stream0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
            stream[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].buffer_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].buffer_data_size = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].has_ungotten = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fpurge(stream);
          printf("%d\n", benchRet); 
          free(stream);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_stream0 = 100;
          struct TYPE_3__ * stream = (struct TYPE_3__ *) malloc(_len_stream0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
            stream[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].buffer_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].buffer_data_size = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].has_ungotten = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fpurge(stream);
          printf("%d\n", benchRet); 
          free(stream);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
