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
 char* hex_asc ; 

__attribute__((used)) static void dump_buff_as_hex(char *dst, size_t dst_sz, const u8 *data,
		const size_t data_len)
{
	int i, j;
	for (i = j = 0; i < data_len && j + 4 < dst_sz; i++) {
		dst[j++] = hex_asc[(data[i] >> 4) & 0x0f];
		dst[j++] = hex_asc[data[i] & 0x0f];
		dst[j++] = ' ';
	}
	dst[j]   = '\0';
	if (j > 0)
		dst[j-1] = '\n';
	if (i < data_len && j > 2)
		dst[j-2] = dst[j-3] = '.';
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
          unsigned long dst_sz = 100;
          const unsigned long data_len = 100;
          int _len_dst0 = 1;
          char * dst = (char *) malloc(_len_dst0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 1;
          const int * data = (const int *) malloc(_len_data0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dump_buff_as_hex(dst,dst_sz,data,data_len);
          free(dst);
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long dst_sz = 255;
          const unsigned long data_len = 255;
          int _len_dst0 = 65025;
          char * dst = (char *) malloc(_len_dst0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 65025;
          const int * data = (const int *) malloc(_len_data0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dump_buff_as_hex(dst,dst_sz,data,data_len);
          free(dst);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long dst_sz = 10;
          const unsigned long data_len = 10;
          int _len_dst0 = 100;
          char * dst = (char *) malloc(_len_dst0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 100;
          const int * data = (const int *) malloc(_len_data0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dump_buff_as_hex(dst,dst_sz,data,data_len);
          free(dst);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
