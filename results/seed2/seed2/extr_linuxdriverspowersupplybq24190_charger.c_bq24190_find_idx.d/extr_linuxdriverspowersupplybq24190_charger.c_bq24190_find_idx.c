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
typedef  int u8 ;

/* Variables and functions */

__attribute__((used)) static u8 bq24190_find_idx(const int tbl[], int tbl_size, int v)
{
	int i;

	for (i = 1; i < tbl_size; i++)
		if (v < tbl[i])
			break;

	return i - 1;
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
          int tbl_size = 100;
          int v = 100;
          int _len_tbl0 = 1;
          int const* tbl = (int const*) malloc(_len_tbl0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_tbl0; _i0++) {
            tbl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bq24190_find_idx(tbl,tbl_size,v);
          printf("%d\n", benchRet); 
          free(tbl);
        
        break;
    }
    // big-arr
    case 1:
    {
          int tbl_size = 255;
          int v = 255;
          int _len_tbl0 = 65025;
          int const* tbl = (int const*) malloc(_len_tbl0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_tbl0; _i0++) {
            tbl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bq24190_find_idx(tbl,tbl_size,v);
          printf("%d\n", benchRet); 
          free(tbl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int tbl_size = 10;
          int v = 10;
          int _len_tbl0 = 100;
          int const* tbl = (int const*) malloc(_len_tbl0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_tbl0; _i0++) {
            tbl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bq24190_find_idx(tbl,tbl_size,v);
          printf("%d\n", benchRet); 
          free(tbl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
