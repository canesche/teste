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

/* Variables and functions */

__attribute__((used)) static void a64_compress_colram(unsigned char *buf, int *charmap, uint8_t *colram)
{
    int a;
    uint8_t temp;
    /* only needs to be done in 5col mode */
    /* XXX could be squeezed to 0x80 bytes */
    for (a = 0; a < 256; a++) {
        temp  = colram[charmap[a + 0x000]] << 0;
        temp |= colram[charmap[a + 0x100]] << 1;
        temp |= colram[charmap[a + 0x200]] << 2;
        if (a < 0xe8) temp |= colram[charmap[a + 0x300]] << 3;
        buf[a] = temp << 2;
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
          int _len_buf0 = 1;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_charmap0 = 1;
          int * charmap = (int *) malloc(_len_charmap0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_charmap0; _i0++) {
            charmap[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_colram0 = 1;
          int * colram = (int *) malloc(_len_colram0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_colram0; _i0++) {
            colram[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          a64_compress_colram(buf,charmap,colram);
          free(buf);
          free(charmap);
          free(colram);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_buf0 = 65025;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_charmap0 = 65025;
          int * charmap = (int *) malloc(_len_charmap0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_charmap0; _i0++) {
            charmap[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_colram0 = 65025;
          int * colram = (int *) malloc(_len_colram0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_colram0; _i0++) {
            colram[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          a64_compress_colram(buf,charmap,colram);
          free(buf);
          free(charmap);
          free(colram);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_buf0 = 100;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_charmap0 = 100;
          int * charmap = (int *) malloc(_len_charmap0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_charmap0; _i0++) {
            charmap[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_colram0 = 100;
          int * colram = (int *) malloc(_len_colram0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_colram0; _i0++) {
            colram[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          a64_compress_colram(buf,charmap,colram);
          free(buf);
          free(charmap);
          free(colram);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
