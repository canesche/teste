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
typedef  int /*<<< orphan*/  z_crc_t ;

/* Variables and functions */

__attribute__((used)) static int decrypt_byte(unsigned long* pkeys, const z_crc_t* pcrc_32_tab)
{
    unsigned temp;  /* POTENTIAL BUG:  temp*(temp^1) may overflow in an
                     * unpredictable manner on 16-bit systems; not a problem
                     * with any known compiler so far, though */

    temp = ((unsigned)(*(pkeys+2)) & 0xffff) | 2;
    return (int)(((temp * (temp ^ 1)) >> 8) & 0xff);
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
          int _len_pkeys0 = 1;
          unsigned long * pkeys = (unsigned long *) malloc(_len_pkeys0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pkeys0; _i0++) {
            pkeys[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcrc_32_tab0 = 1;
          const int * pcrc_32_tab = (const int *) malloc(_len_pcrc_32_tab0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pcrc_32_tab0; _i0++) {
            pcrc_32_tab[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = decrypt_byte(pkeys,pcrc_32_tab);
          printf("%d\n", benchRet); 
          free(pkeys);
          free(pcrc_32_tab);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pkeys0 = 65025;
          unsigned long * pkeys = (unsigned long *) malloc(_len_pkeys0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pkeys0; _i0++) {
            pkeys[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcrc_32_tab0 = 65025;
          const int * pcrc_32_tab = (const int *) malloc(_len_pcrc_32_tab0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pcrc_32_tab0; _i0++) {
            pcrc_32_tab[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = decrypt_byte(pkeys,pcrc_32_tab);
          printf("%d\n", benchRet); 
          free(pkeys);
          free(pcrc_32_tab);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pkeys0 = 100;
          unsigned long * pkeys = (unsigned long *) malloc(_len_pkeys0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pkeys0; _i0++) {
            pkeys[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcrc_32_tab0 = 100;
          const int * pcrc_32_tab = (const int *) malloc(_len_pcrc_32_tab0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pcrc_32_tab0; _i0++) {
            pcrc_32_tab[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = decrypt_byte(pkeys,pcrc_32_tab);
          printf("%d\n", benchRet); 
          free(pkeys);
          free(pcrc_32_tab);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
