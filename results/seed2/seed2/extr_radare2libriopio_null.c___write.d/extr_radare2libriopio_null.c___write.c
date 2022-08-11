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
typedef  int /*<<< orphan*/  ut8 ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_4__ {scalar_t__ offset; scalar_t__ size; } ;
typedef  TYPE_1__ RIONull ;
typedef  TYPE_2__ RIODesc ;
typedef  int /*<<< orphan*/  RIO ;

/* Variables and functions */

__attribute__((used)) static int __write(RIO* io, RIODesc* fd, const ut8* buf, int count) {
	RIONull* null;
	if (!fd || !fd->data || !buf) {
		return -1;
	}
	null = (RIONull*) fd->data;
	if ((null->offset + count) > null->size) {
		int ret = null->size - null->offset;
		return ret;
	}
	null->offset += count;
	return count;
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
          int count = 100;
          int _len_io0 = 1;
          int * io = (int *) malloc(_len_io0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_io0; _i0++) {
            io[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fd0 = 1;
          struct TYPE_5__ * fd = (struct TYPE_5__ *) malloc(_len_fd0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_fd0; _i0++) {
            fd[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 1;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __write(io,fd,buf,count);
          printf("%d\n", benchRet); 
          free(io);
          free(fd);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int count = 255;
          int _len_io0 = 65025;
          int * io = (int *) malloc(_len_io0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_io0; _i0++) {
            io[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fd0 = 65025;
          struct TYPE_5__ * fd = (struct TYPE_5__ *) malloc(_len_fd0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_fd0; _i0++) {
            fd[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 65025;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __write(io,fd,buf,count);
          printf("%d\n", benchRet); 
          free(io);
          free(fd);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int count = 10;
          int _len_io0 = 100;
          int * io = (int *) malloc(_len_io0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_io0; _i0++) {
            io[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fd0 = 100;
          struct TYPE_5__ * fd = (struct TYPE_5__ *) malloc(_len_fd0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_fd0; _i0++) {
            fd[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 100;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __write(io,fd,buf,count);
          printf("%d\n", benchRet); 
          free(io);
          free(fd);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
