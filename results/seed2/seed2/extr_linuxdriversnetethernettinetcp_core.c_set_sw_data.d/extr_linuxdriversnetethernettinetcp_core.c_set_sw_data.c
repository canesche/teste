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
typedef  int /*<<< orphan*/  u32 ;
struct knav_dma_desc {int /*<<< orphan*/ * sw_data; } ;

/* Variables and functions */

__attribute__((used)) static void set_sw_data(int index, u32 data, struct knav_dma_desc *desc)
{
	/* No Endian conversion needed as this data is untouched by hw */
	desc->sw_data[index] = data;
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
          int index = 100;
          int data = 100;
          int _len_desc0 = 1;
          struct knav_dma_desc * desc = (struct knav_dma_desc *) malloc(_len_desc0*sizeof(struct knav_dma_desc));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
              int _len_desc__i0__sw_data0 = 1;
          desc[_i0].sw_data = (int *) malloc(_len_desc__i0__sw_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_desc__i0__sw_data0; _j0++) {
            desc[_i0].sw_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          set_sw_data(index,data,desc);
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].sw_data);
          }
          free(desc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int index = 255;
          int data = 255;
          int _len_desc0 = 65025;
          struct knav_dma_desc * desc = (struct knav_dma_desc *) malloc(_len_desc0*sizeof(struct knav_dma_desc));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
              int _len_desc__i0__sw_data0 = 1;
          desc[_i0].sw_data = (int *) malloc(_len_desc__i0__sw_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_desc__i0__sw_data0; _j0++) {
            desc[_i0].sw_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          set_sw_data(index,data,desc);
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].sw_data);
          }
          free(desc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int index = 10;
          int data = 10;
          int _len_desc0 = 100;
          struct knav_dma_desc * desc = (struct knav_dma_desc *) malloc(_len_desc0*sizeof(struct knav_dma_desc));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
              int _len_desc__i0__sw_data0 = 1;
          desc[_i0].sw_data = (int *) malloc(_len_desc__i0__sw_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_desc__i0__sw_data0; _j0++) {
            desc[_i0].sw_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          set_sw_data(index,data,desc);
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].sw_data);
          }
          free(desc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
