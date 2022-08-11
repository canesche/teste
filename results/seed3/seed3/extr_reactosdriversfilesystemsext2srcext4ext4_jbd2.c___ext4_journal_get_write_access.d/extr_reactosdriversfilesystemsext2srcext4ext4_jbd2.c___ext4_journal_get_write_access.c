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
struct buffer_head {int dummy; } ;
typedef  int /*<<< orphan*/  handle_t ;

/* Variables and functions */

int __ext4_journal_get_write_access(const char *where, unsigned int line,
				    void *icb, handle_t *handle, struct buffer_head *bh)
{
	int err = 0;
	return err;
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
          unsigned int line = 100;
          int _len_where0 = 1;
          const char * where = (const char *) malloc(_len_where0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_where0; _i0++) {
            where[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * icb;
          int _len_handle0 = 1;
          int * handle = (int *) malloc(_len_handle0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_handle0; _i0++) {
            handle[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bh0 = 1;
          struct buffer_head * bh = (struct buffer_head *) malloc(_len_bh0*sizeof(struct buffer_head));
          for(int _i0 = 0; _i0 < _len_bh0; _i0++) {
            bh[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __ext4_journal_get_write_access(where,line,icb,handle,bh);
          printf("%d\n", benchRet); 
          free(where);
          free(handle);
          free(bh);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int line = 255;
          int _len_where0 = 65025;
          const char * where = (const char *) malloc(_len_where0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_where0; _i0++) {
            where[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * icb;
          int _len_handle0 = 65025;
          int * handle = (int *) malloc(_len_handle0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_handle0; _i0++) {
            handle[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bh0 = 65025;
          struct buffer_head * bh = (struct buffer_head *) malloc(_len_bh0*sizeof(struct buffer_head));
          for(int _i0 = 0; _i0 < _len_bh0; _i0++) {
            bh[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __ext4_journal_get_write_access(where,line,icb,handle,bh);
          printf("%d\n", benchRet); 
          free(where);
          free(handle);
          free(bh);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int line = 10;
          int _len_where0 = 100;
          const char * where = (const char *) malloc(_len_where0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_where0; _i0++) {
            where[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * icb;
          int _len_handle0 = 100;
          int * handle = (int *) malloc(_len_handle0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_handle0; _i0++) {
            handle[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bh0 = 100;
          struct buffer_head * bh = (struct buffer_head *) malloc(_len_bh0*sizeof(struct buffer_head));
          for(int _i0 = 0; _i0 < _len_bh0; _i0++) {
            bh[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __ext4_journal_get_write_access(where,line,icb,handle,bh);
          printf("%d\n", benchRet); 
          free(where);
          free(handle);
          free(bh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
