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
typedef  int /*<<< orphan*/  guint64 ;
typedef  int /*<<< orphan*/  gboolean ;

/* Variables and functions */
 int /*<<< orphan*/  TRUE ; 

__attribute__((used)) static gboolean
get_block_number (const char *store_id,
                  int version,
                  const char *block_id,
                  void *data)
{
    guint64 *n_blocks = data;

    ++(*n_blocks);

    return TRUE;
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
          int version = 100;
          int _len_store_id0 = 1;
          const char * store_id = (const char *) malloc(_len_store_id0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_store_id0; _i0++) {
            store_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_block_id0 = 1;
          const char * block_id = (const char *) malloc(_len_block_id0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_block_id0; _i0++) {
            block_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = get_block_number(store_id,version,block_id,data);
          printf("%d\n", benchRet); 
          free(store_id);
          free(block_id);
        
        break;
    }
    // big-arr
    case 1:
    {
          int version = 255;
          int _len_store_id0 = 65025;
          const char * store_id = (const char *) malloc(_len_store_id0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_store_id0; _i0++) {
            store_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_block_id0 = 65025;
          const char * block_id = (const char *) malloc(_len_block_id0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_block_id0; _i0++) {
            block_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = get_block_number(store_id,version,block_id,data);
          printf("%d\n", benchRet); 
          free(store_id);
          free(block_id);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int version = 10;
          int _len_store_id0 = 100;
          const char * store_id = (const char *) malloc(_len_store_id0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_store_id0; _i0++) {
            store_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_block_id0 = 100;
          const char * block_id = (const char *) malloc(_len_block_id0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_block_id0; _i0++) {
            block_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = get_block_number(store_id,version,block_id,data);
          printf("%d\n", benchRet); 
          free(store_id);
          free(block_id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
