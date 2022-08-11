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
typedef  int uint8_t ;
typedef  int uint16_t ;

/* Variables and functions */

void ff_mjpeg_build_huffman_codes(uint8_t *huff_size, uint16_t *huff_code,
                                  const uint8_t *bits_table,
                                  const uint8_t *val_table)
{
    int i, j, k,nb, code, sym;

    code = 0;
    k = 0;
    for(i=1;i<=16;i++) {
        nb = bits_table[i];
        for(j=0;j<nb;j++) {
            sym = val_table[k++];
            huff_size[sym] = i;
            huff_code[sym] = code;
            code++;
        }
        code <<= 1;
    }
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
          int _len_huff_size0 = 1;
          int * huff_size = (int *) malloc(_len_huff_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_huff_size0; _i0++) {
            huff_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_huff_code0 = 1;
          int * huff_code = (int *) malloc(_len_huff_code0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_huff_code0; _i0++) {
            huff_code[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bits_table0 = 1;
          const int * bits_table = (const int *) malloc(_len_bits_table0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_bits_table0; _i0++) {
            bits_table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val_table0 = 1;
          const int * val_table = (const int *) malloc(_len_val_table0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_val_table0; _i0++) {
            val_table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_mjpeg_build_huffman_codes(huff_size,huff_code,bits_table,val_table);
          free(huff_size);
          free(huff_code);
          free(bits_table);
          free(val_table);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_huff_size0 = 65025;
          int * huff_size = (int *) malloc(_len_huff_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_huff_size0; _i0++) {
            huff_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_huff_code0 = 65025;
          int * huff_code = (int *) malloc(_len_huff_code0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_huff_code0; _i0++) {
            huff_code[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bits_table0 = 65025;
          const int * bits_table = (const int *) malloc(_len_bits_table0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_bits_table0; _i0++) {
            bits_table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val_table0 = 65025;
          const int * val_table = (const int *) malloc(_len_val_table0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_val_table0; _i0++) {
            val_table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_mjpeg_build_huffman_codes(huff_size,huff_code,bits_table,val_table);
          free(huff_size);
          free(huff_code);
          free(bits_table);
          free(val_table);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_huff_size0 = 100;
          int * huff_size = (int *) malloc(_len_huff_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_huff_size0; _i0++) {
            huff_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_huff_code0 = 100;
          int * huff_code = (int *) malloc(_len_huff_code0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_huff_code0; _i0++) {
            huff_code[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bits_table0 = 100;
          const int * bits_table = (const int *) malloc(_len_bits_table0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_bits_table0; _i0++) {
            bits_table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val_table0 = 100;
          const int * val_table = (const int *) malloc(_len_val_table0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_val_table0; _i0++) {
            val_table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_mjpeg_build_huffman_codes(huff_size,huff_code,bits_table,val_table);
          free(huff_size);
          free(huff_code);
          free(bits_table);
          free(val_table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
