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
typedef  int /*<<< orphan*/  ut8 ;
typedef  int ut32 ;
struct TYPE_3__ {int /*<<< orphan*/  const* end; int /*<<< orphan*/  const* pos; } ;
typedef  TYPE_1__ mcore_handle ;

/* Variables and functions */

int mcore_init(mcore_handle* handle, const ut8* buffer, const ut32 size) {
	if (!handle || !buffer || size < 2) {
		return 1;
	}
	handle->pos = buffer;
	handle->end = buffer + size;
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
          const int size = 100;
          int _len_handle0 = 1;
          struct TYPE_3__ * handle = (struct TYPE_3__ *) malloc(_len_handle0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_handle0; _i0++) {
              int _len_handle__i0__end0 = 1;
          handle[_i0].end = (const int *) malloc(_len_handle__i0__end0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_handle__i0__end0; _j0++) {
            handle[_i0].end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_handle__i0__pos0 = 1;
          handle[_i0].pos = (const int *) malloc(_len_handle__i0__pos0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_handle__i0__pos0; _j0++) {
            handle[_i0].pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buffer0 = 1;
          const int * buffer = (const int *) malloc(_len_buffer0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mcore_init(handle,buffer,size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_handle0; _aux++) {
          free(handle[_aux].end);
          }
          for(int _aux = 0; _aux < _len_handle0; _aux++) {
          free(handle[_aux].pos);
          }
          free(handle);
          free(buffer);
        
        break;
    }
    // big-arr
    case 1:
    {
          const int size = 255;
          int _len_handle0 = 65025;
          struct TYPE_3__ * handle = (struct TYPE_3__ *) malloc(_len_handle0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_handle0; _i0++) {
              int _len_handle__i0__end0 = 1;
          handle[_i0].end = (const int *) malloc(_len_handle__i0__end0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_handle__i0__end0; _j0++) {
            handle[_i0].end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_handle__i0__pos0 = 1;
          handle[_i0].pos = (const int *) malloc(_len_handle__i0__pos0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_handle__i0__pos0; _j0++) {
            handle[_i0].pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buffer0 = 65025;
          const int * buffer = (const int *) malloc(_len_buffer0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mcore_init(handle,buffer,size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_handle0; _aux++) {
          free(handle[_aux].end);
          }
          for(int _aux = 0; _aux < _len_handle0; _aux++) {
          free(handle[_aux].pos);
          }
          free(handle);
          free(buffer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int size = 10;
          int _len_handle0 = 100;
          struct TYPE_3__ * handle = (struct TYPE_3__ *) malloc(_len_handle0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_handle0; _i0++) {
              int _len_handle__i0__end0 = 1;
          handle[_i0].end = (const int *) malloc(_len_handle__i0__end0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_handle__i0__end0; _j0++) {
            handle[_i0].end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_handle__i0__pos0 = 1;
          handle[_i0].pos = (const int *) malloc(_len_handle__i0__pos0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_handle__i0__pos0; _j0++) {
            handle[_i0].pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buffer0 = 100;
          const int * buffer = (const int *) malloc(_len_buffer0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mcore_init(handle,buffer,size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_handle0; _aux++) {
          free(handle[_aux].end);
          }
          for(int _aux = 0; _aux < _len_handle0; _aux++) {
          free(handle[_aux].pos);
          }
          free(handle);
          free(buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
