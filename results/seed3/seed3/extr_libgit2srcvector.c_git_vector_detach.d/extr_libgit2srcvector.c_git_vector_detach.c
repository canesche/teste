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
struct TYPE_3__ {void** contents; size_t length; size_t _alloc_size; } ;
typedef  TYPE_1__ git_vector ;

/* Variables and functions */

void **git_vector_detach(size_t *size, size_t *asize, git_vector *v)
{
	void **data = v->contents;

	if (size)
		*size = v->length;
	if (asize)
		*asize = v->_alloc_size;

	v->_alloc_size = 0;
	v->length   = 0;
	v->contents = NULL;

	return data;
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
          int _len_size0 = 1;
          unsigned long * size = (unsigned long *) malloc(_len_size0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_asize0 = 1;
          unsigned long * asize = (unsigned long *) malloc(_len_asize0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_asize0; _i0++) {
            asize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_v0 = 1;
          struct TYPE_3__ * v = (struct TYPE_3__ *) malloc(_len_v0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
              int _len_v__i0__contents0 = 1;
          v[_i0].contents = (void **) malloc(_len_v__i0__contents0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_v__i0__contents0; _j0++) {
          }
        v[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0]._alloc_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void ** benchRet = git_vector_detach(size,asize,v);
          free(size);
          free(asize);
          free(v);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_size0 = 65025;
          unsigned long * size = (unsigned long *) malloc(_len_size0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_asize0 = 65025;
          unsigned long * asize = (unsigned long *) malloc(_len_asize0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_asize0; _i0++) {
            asize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_v0 = 65025;
          struct TYPE_3__ * v = (struct TYPE_3__ *) malloc(_len_v0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
              int _len_v__i0__contents0 = 1;
          v[_i0].contents = (void **) malloc(_len_v__i0__contents0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_v__i0__contents0; _j0++) {
          }
        v[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0]._alloc_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void ** benchRet = git_vector_detach(size,asize,v);
          free(size);
          free(asize);
          free(v);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_size0 = 100;
          unsigned long * size = (unsigned long *) malloc(_len_size0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_asize0 = 100;
          unsigned long * asize = (unsigned long *) malloc(_len_asize0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_asize0; _i0++) {
            asize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_v0 = 100;
          struct TYPE_3__ * v = (struct TYPE_3__ *) malloc(_len_v0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
              int _len_v__i0__contents0 = 1;
          v[_i0].contents = (void **) malloc(_len_v__i0__contents0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_v__i0__contents0; _j0++) {
          }
        v[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0]._alloc_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void ** benchRet = git_vector_detach(size,asize,v);
          free(size);
          free(asize);
          free(v);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
