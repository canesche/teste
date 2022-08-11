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
typedef  int WK_word ;

/* Variables and functions */

__attribute__((used)) static WK_word*
WK_pack_4bits(WK_word* source_buf,
	      WK_word* source_end,
	      WK_word* dest_buf) {
   WK_word* src_next = source_buf;
   WK_word* dest_next = dest_buf;
  
   /* this loop should probably be unrolled */
   while (src_next < source_end) {
     WK_word temp = src_next[0];
     temp |= (src_next[1] << 4);
    
     dest_next[0] = temp;
     dest_next++;     
     src_next += 2;
   }

   return dest_next;

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
          int _len_source_buf0 = 1;
          int * source_buf = (int *) malloc(_len_source_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_source_buf0; _i0++) {
            source_buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_source_end0 = 1;
          int * source_end = (int *) malloc(_len_source_end0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_source_end0; _i0++) {
            source_end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest_buf0 = 1;
          int * dest_buf = (int *) malloc(_len_dest_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest_buf0; _i0++) {
            dest_buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = WK_pack_4bits(source_buf,source_end,dest_buf);
          printf("%d\n", (*benchRet)); 
          free(source_buf);
          free(source_end);
          free(dest_buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_source_buf0 = 65025;
          int * source_buf = (int *) malloc(_len_source_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_source_buf0; _i0++) {
            source_buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_source_end0 = 65025;
          int * source_end = (int *) malloc(_len_source_end0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_source_end0; _i0++) {
            source_end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest_buf0 = 65025;
          int * dest_buf = (int *) malloc(_len_dest_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest_buf0; _i0++) {
            dest_buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = WK_pack_4bits(source_buf,source_end,dest_buf);
          printf("%d\n", (*benchRet)); 
          free(source_buf);
          free(source_end);
          free(dest_buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_source_buf0 = 100;
          int * source_buf = (int *) malloc(_len_source_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_source_buf0; _i0++) {
            source_buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_source_end0 = 100;
          int * source_end = (int *) malloc(_len_source_end0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_source_end0; _i0++) {
            source_end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest_buf0 = 100;
          int * dest_buf = (int *) malloc(_len_dest_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest_buf0; _i0++) {
            dest_buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = WK_pack_4bits(source_buf,source_end,dest_buf);
          printf("%d\n", (*benchRet)); 
          free(source_buf);
          free(source_end);
          free(dest_buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
