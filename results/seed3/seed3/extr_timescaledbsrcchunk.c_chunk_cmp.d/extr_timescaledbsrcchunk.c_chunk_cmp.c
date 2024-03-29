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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ hypertable_id; } ;
struct TYPE_4__ {scalar_t__ table_id; TYPE_1__ fd; } ;
typedef  TYPE_2__ Chunk ;

/* Variables and functions */

__attribute__((used)) static int
chunk_cmp(const void *ch1, const void *ch2)
{
	const Chunk *v1 = *((const Chunk **) ch1);
	const Chunk *v2 = *((const Chunk **) ch2);

	if (v1->fd.hypertable_id < v2->fd.hypertable_id)
		return -1;
	if (v1->fd.hypertable_id > v2->fd.hypertable_id)
		return 1;
	if (v1->table_id < v2->table_id)
		return -1;
	if (v1->table_id > v2->table_id)
		return 1;
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
          int _len_ch10 = 1;
          const void * ch1 = (const void *) malloc(_len_ch10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_ch10; _i0++) {
            ch1[_i0] = 0;
          }
          int _len_ch20 = 1;
          const void * ch2 = (const void *) malloc(_len_ch20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_ch20; _i0++) {
            ch2[_i0] = 0;
          }
          int benchRet = chunk_cmp(ch1,ch2);
          printf("%d\n", benchRet); 
          free(ch1);
          free(ch2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ch10 = 65025;
          const void * ch1 = (const void *) malloc(_len_ch10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_ch10; _i0++) {
            ch1[_i0] = 0;
          }
          int _len_ch20 = 65025;
          const void * ch2 = (const void *) malloc(_len_ch20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_ch20; _i0++) {
            ch2[_i0] = 0;
          }
          int benchRet = chunk_cmp(ch1,ch2);
          printf("%d\n", benchRet); 
          free(ch1);
          free(ch2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ch10 = 100;
          const void * ch1 = (const void *) malloc(_len_ch10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_ch10; _i0++) {
            ch1[_i0] = 0;
          }
          int _len_ch20 = 100;
          const void * ch2 = (const void *) malloc(_len_ch20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_ch20; _i0++) {
            ch2[_i0] = 0;
          }
          int benchRet = chunk_cmp(ch1,ch2);
          printf("%d\n", benchRet); 
          free(ch1);
          free(ch2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
