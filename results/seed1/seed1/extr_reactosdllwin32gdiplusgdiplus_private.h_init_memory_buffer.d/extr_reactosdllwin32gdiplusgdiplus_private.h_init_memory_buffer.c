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
struct memory_buffer {scalar_t__ pos; int /*<<< orphan*/  size; int /*<<< orphan*/  const* buffer; } ;
typedef  int /*<<< orphan*/  INT ;
typedef  int /*<<< orphan*/  BYTE ;

/* Variables and functions */

__attribute__((used)) static inline void init_memory_buffer(struct memory_buffer *mbuf, const BYTE *buffer, INT size)
{
    mbuf->buffer = buffer;
    mbuf->size = size;
    mbuf->pos = 0;
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
          int size = 100;
          int _len_mbuf0 = 1;
          struct memory_buffer * mbuf = (struct memory_buffer *) malloc(_len_mbuf0*sizeof(struct memory_buffer));
          for(int _i0 = 0; _i0 < _len_mbuf0; _i0++) {
            mbuf[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        mbuf[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mbuf__i0__buffer0 = 1;
          mbuf[_i0].buffer = (const int *) malloc(_len_mbuf__i0__buffer0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_mbuf__i0__buffer0; _j0++) {
            mbuf[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buffer0 = 1;
          const int * buffer = (const int *) malloc(_len_buffer0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_memory_buffer(mbuf,buffer,size);
          for(int _aux = 0; _aux < _len_mbuf0; _aux++) {
          free(mbuf[_aux].buffer);
          }
          free(mbuf);
          free(buffer);
        
        break;
    }
    // big-arr
    case 1:
    {
          int size = 255;
          int _len_mbuf0 = 65025;
          struct memory_buffer * mbuf = (struct memory_buffer *) malloc(_len_mbuf0*sizeof(struct memory_buffer));
          for(int _i0 = 0; _i0 < _len_mbuf0; _i0++) {
            mbuf[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        mbuf[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mbuf__i0__buffer0 = 1;
          mbuf[_i0].buffer = (const int *) malloc(_len_mbuf__i0__buffer0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_mbuf__i0__buffer0; _j0++) {
            mbuf[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buffer0 = 65025;
          const int * buffer = (const int *) malloc(_len_buffer0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_memory_buffer(mbuf,buffer,size);
          for(int _aux = 0; _aux < _len_mbuf0; _aux++) {
          free(mbuf[_aux].buffer);
          }
          free(mbuf);
          free(buffer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int size = 10;
          int _len_mbuf0 = 100;
          struct memory_buffer * mbuf = (struct memory_buffer *) malloc(_len_mbuf0*sizeof(struct memory_buffer));
          for(int _i0 = 0; _i0 < _len_mbuf0; _i0++) {
            mbuf[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        mbuf[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mbuf__i0__buffer0 = 1;
          mbuf[_i0].buffer = (const int *) malloc(_len_mbuf__i0__buffer0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_mbuf__i0__buffer0; _j0++) {
            mbuf[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buffer0 = 100;
          const int * buffer = (const int *) malloc(_len_buffer0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_memory_buffer(mbuf,buffer,size);
          for(int _aux = 0; _aux < _len_mbuf0; _aux++) {
          free(mbuf[_aux].buffer);
          }
          free(mbuf);
          free(buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
