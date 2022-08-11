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

__attribute__((used)) static void extract_even2avg_c(const uint8_t *src0, const uint8_t *src1,
                               uint8_t *dst0, uint8_t *dst1, int count)
{
    dst0  +=  count;
    dst1  +=  count;
    src0  +=  count * 4;
    src1  +=  count * 4;
    count  = -count;
    while (count < 0) {
        dst0[count] = (src0[4 * count + 0] + src1[4 * count + 0]) >> 1;
        dst1[count] = (src0[4 * count + 2] + src1[4 * count + 2]) >> 1;
        count++;
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
          int count = 100;
          int _len_src00 = 1;
          const int * src0 = (const int *) malloc(_len_src00*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src00; _i0++) {
            src0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src10 = 1;
          const int * src1 = (const int *) malloc(_len_src10*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src10; _i0++) {
            src1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst00 = 1;
          int * dst0 = (int *) malloc(_len_dst00*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst00; _i0++) {
            dst0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst10 = 1;
          int * dst1 = (int *) malloc(_len_dst10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst10; _i0++) {
            dst1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          extract_even2avg_c(src0,src1,dst0,dst1,count);
          free(src0);
          free(src1);
          free(dst0);
          free(dst1);
        
        break;
    }
    // big-arr
    case 1:
    {
          int count = 255;
          int _len_src00 = 65025;
          const int * src0 = (const int *) malloc(_len_src00*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src00; _i0++) {
            src0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src10 = 65025;
          const int * src1 = (const int *) malloc(_len_src10*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src10; _i0++) {
            src1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst00 = 65025;
          int * dst0 = (int *) malloc(_len_dst00*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst00; _i0++) {
            dst0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst10 = 65025;
          int * dst1 = (int *) malloc(_len_dst10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst10; _i0++) {
            dst1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          extract_even2avg_c(src0,src1,dst0,dst1,count);
          free(src0);
          free(src1);
          free(dst0);
          free(dst1);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int count = 10;
          int _len_src00 = 100;
          const int * src0 = (const int *) malloc(_len_src00*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src00; _i0++) {
            src0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src10 = 100;
          const int * src1 = (const int *) malloc(_len_src10*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src10; _i0++) {
            src1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst00 = 100;
          int * dst0 = (int *) malloc(_len_dst00*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst00; _i0++) {
            dst0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst10 = 100;
          int * dst1 = (int *) malloc(_len_dst10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst10; _i0++) {
            dst1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          extract_even2avg_c(src0,src1,dst0,dst1,count);
          free(src0);
          free(src1);
          free(dst0);
          free(dst1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
