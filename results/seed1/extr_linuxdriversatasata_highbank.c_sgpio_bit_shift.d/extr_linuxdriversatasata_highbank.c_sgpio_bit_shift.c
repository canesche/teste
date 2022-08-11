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
typedef  size_t u32 ;
struct ecx_plat_data {int* port_to_sgpio; } ;

/* Variables and functions */

__attribute__((used)) static inline int sgpio_bit_shift(struct ecx_plat_data *pdata, u32 port,
				u32 shift)
{
	return 1 << (3 * pdata->port_to_sgpio[port] + shift);
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
          unsigned long port = 100;
          unsigned long shift = 100;
          int _len_pdata0 = 1;
          struct ecx_plat_data * pdata = (struct ecx_plat_data *) malloc(_len_pdata0*sizeof(struct ecx_plat_data));
          for(int _i0 = 0; _i0 < _len_pdata0; _i0++) {
              int _len_pdata__i0__port_to_sgpio0 = 1;
          pdata[_i0].port_to_sgpio = (int *) malloc(_len_pdata__i0__port_to_sgpio0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdata__i0__port_to_sgpio0; _j0++) {
            pdata[_i0].port_to_sgpio[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = sgpio_bit_shift(pdata,port,shift);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].port_to_sgpio);
          }
          free(pdata);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long port = 255;
          unsigned long shift = 255;
          int _len_pdata0 = 65025;
          struct ecx_plat_data * pdata = (struct ecx_plat_data *) malloc(_len_pdata0*sizeof(struct ecx_plat_data));
          for(int _i0 = 0; _i0 < _len_pdata0; _i0++) {
              int _len_pdata__i0__port_to_sgpio0 = 1;
          pdata[_i0].port_to_sgpio = (int *) malloc(_len_pdata__i0__port_to_sgpio0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdata__i0__port_to_sgpio0; _j0++) {
            pdata[_i0].port_to_sgpio[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = sgpio_bit_shift(pdata,port,shift);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].port_to_sgpio);
          }
          free(pdata);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long port = 10;
          unsigned long shift = 10;
          int _len_pdata0 = 100;
          struct ecx_plat_data * pdata = (struct ecx_plat_data *) malloc(_len_pdata0*sizeof(struct ecx_plat_data));
          for(int _i0 = 0; _i0 < _len_pdata0; _i0++) {
              int _len_pdata__i0__port_to_sgpio0 = 1;
          pdata[_i0].port_to_sgpio = (int *) malloc(_len_pdata__i0__port_to_sgpio0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdata__i0__port_to_sgpio0; _j0++) {
            pdata[_i0].port_to_sgpio[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = sgpio_bit_shift(pdata,port,shift);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].port_to_sgpio);
          }
          free(pdata);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
