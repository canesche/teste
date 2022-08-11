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
typedef  int uint32_t ;

/* Variables and functions */
 unsigned int LE_TABLE_ROWS ; 
 int LE_TABLE_SIZE ; 

__attribute__((used)) static void crc32init_le_generic(const uint32_t polynomial,
				 uint32_t (*tab)[256])
{
	unsigned i, j;
	uint32_t crc = 1;

	tab[0][0] = 0;

	for (i = LE_TABLE_SIZE >> 1; i; i >>= 1) {
		crc = (crc >> 1) ^ ((crc & 1) ? polynomial : 0);
		for (j = 0; j < LE_TABLE_SIZE; j += 2 * i)
			tab[0][i + j] = crc ^ tab[0][j];
	}
	for (i = 0; i < LE_TABLE_SIZE; i++) {
		crc = tab[0][i];
		for (j = 1; j < LE_TABLE_ROWS; j++) {
			crc = tab[0][crc & 0xff] ^ (crc >> 8);
			tab[j][i] = crc;
		}
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
          const int polynomial = 100;
          int _len_tab0 = 256;
          int (*)* tab = (int (*)*) malloc(_len_tab0*sizeof(int ()*));
          for(int _i0 = 0; _i0 < _len_tab0; _i0++) {
            int _len_tab1 = 1;
            tab[_i0] = (int ()*) malloc(_len_tab1*sizeof(int ()));
            for(int _i1 = 0; _i1 < _len_tab1; _i1++) {
              tab[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          crc32init_le_generic(polynomial,tab);
          for(int i1 = 0; i1 < _len_tab0; i1++) {
            int _len_tab1 = 1;
              free(tab[i1]);
          }
          free(tab);
        
        break;
    }
    // big-arr
    case 1:
    {
          const int polynomial = 255;
          int _len_tab0 = 65025;
          int (*)* tab = (int (*)*) malloc(_len_tab0*sizeof(int ()*));
          for(int _i0 = 0; _i0 < _len_tab0; _i0++) {
            int _len_tab1 = 1;
            tab[_i0] = (int ()*) malloc(_len_tab1*sizeof(int ()));
            for(int _i1 = 0; _i1 < _len_tab1; _i1++) {
              tab[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          crc32init_le_generic(polynomial,tab);
          for(int i1 = 0; i1 < _len_tab0; i1++) {
            int _len_tab1 = 1;
              free(tab[i1]);
          }
          free(tab);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int polynomial = 10;
          int _len_tab0 = 100;
          int (*)* tab = (int (*)*) malloc(_len_tab0*sizeof(int ()*));
          for(int _i0 = 0; _i0 < _len_tab0; _i0++) {
            int _len_tab1 = 1;
            tab[_i0] = (int ()*) malloc(_len_tab1*sizeof(int ()));
            for(int _i1 = 0; _i1 < _len_tab1; _i1++) {
              tab[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          crc32init_le_generic(polynomial,tab);
          for(int i1 = 0; i1 < _len_tab0; i1++) {
            int _len_tab1 = 1;
              free(tab[i1]);
          }
          free(tab);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
