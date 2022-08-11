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
struct bitstream {int current; int* buffer; int /*<<< orphan*/  length; } ;
typedef  int DWORD ;
typedef  int BYTE ;

/* Variables and functions */

__attribute__((used)) static const char *lookup_code(const BYTE *table, DWORD table_size, struct bitstream *bits)
{
    const BYTE *p = table;

    while (p < table + table_size && *p == 0x80)
    {
        if (p + 2 >= table + table_size) return NULL;

        if (!(bits->current & 0xff))
        {
            if (!bits->length) return NULL;
            bits->current = (*bits->buffer << 8) | 1;
            bits->buffer++;
            bits->length--;
        }

        if (bits->current & 0x8000)
        {
            p += 3;
        }
        else
        {
            p = table + (*(p + 2) | (*(p + 1) << 8));
        }

        bits->current <<= 1;
    }

    if (p + 1 < table + table_size && *(p + 1))
    {
        /* FIXME: Whats the meaning of *p? */
        const BYTE *q = p + 1;
        while (q < table + table_size && *q) q++;
        return (q < table + table_size) ? (const char *)(p + 1) : NULL;
    }

    return NULL;
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
          int table_size = 100;
          int _len_table0 = 1;
          const int * table = (const int *) malloc(_len_table0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bits0 = 1;
          struct bitstream * bits = (struct bitstream *) malloc(_len_bits0*sizeof(struct bitstream));
          for(int _i0 = 0; _i0 < _len_bits0; _i0++) {
            bits[_i0].current = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bits__i0__buffer0 = 1;
          bits[_i0].buffer = (int *) malloc(_len_bits__i0__buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bits__i0__buffer0; _j0++) {
            bits[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bits[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = lookup_code(table,table_size,bits);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(table);
          for(int _aux = 0; _aux < _len_bits0; _aux++) {
          free(bits[_aux].buffer);
          }
          free(bits);
        
        break;
    }
    // big-arr
    case 1:
    {
          int table_size = 255;
          int _len_table0 = 65025;
          const int * table = (const int *) malloc(_len_table0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bits0 = 65025;
          struct bitstream * bits = (struct bitstream *) malloc(_len_bits0*sizeof(struct bitstream));
          for(int _i0 = 0; _i0 < _len_bits0; _i0++) {
            bits[_i0].current = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bits__i0__buffer0 = 1;
          bits[_i0].buffer = (int *) malloc(_len_bits__i0__buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bits__i0__buffer0; _j0++) {
            bits[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bits[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = lookup_code(table,table_size,bits);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(table);
          for(int _aux = 0; _aux < _len_bits0; _aux++) {
          free(bits[_aux].buffer);
          }
          free(bits);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int table_size = 10;
          int _len_table0 = 100;
          const int * table = (const int *) malloc(_len_table0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bits0 = 100;
          struct bitstream * bits = (struct bitstream *) malloc(_len_bits0*sizeof(struct bitstream));
          for(int _i0 = 0; _i0 < _len_bits0; _i0++) {
            bits[_i0].current = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bits__i0__buffer0 = 1;
          bits[_i0].buffer = (int *) malloc(_len_bits__i0__buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bits__i0__buffer0; _j0++) {
            bits[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bits[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = lookup_code(table,table_size,bits);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(table);
          for(int _aux = 0; _aux < _len_bits0; _aux++) {
          free(bits[_aux].buffer);
          }
          free(bits);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
