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
typedef  int __u32 ;

/* Variables and functions */

__attribute__((used)) static size_t mask_bitmap4(const __u32 *bitmap, const __u32 *mask,
		__u32 *res, size_t len)
{
	size_t i;
	__u32 tmp;

	while (len > 0 && (bitmap[len-1] == 0 || mask[len-1] == 0))
		len--;
	for (i = len; i-- > 0;) {
		tmp = bitmap[i] & mask[i];
		res[i] = tmp;
	}
	return len;
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
          unsigned long len = 100;
          int _len_bitmap0 = 1;
          const int * bitmap = (const int *) malloc(_len_bitmap0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_bitmap0; _i0++) {
            bitmap[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mask0 = 1;
          const int * mask = (const int *) malloc(_len_mask0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_res0 = 1;
          int * res = (int *) malloc(_len_res0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            res[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = mask_bitmap4(bitmap,mask,res,len);
          printf("%lu\n", benchRet); 
          free(bitmap);
          free(mask);
          free(res);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long len = 255;
          int _len_bitmap0 = 65025;
          const int * bitmap = (const int *) malloc(_len_bitmap0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_bitmap0; _i0++) {
            bitmap[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mask0 = 65025;
          const int * mask = (const int *) malloc(_len_mask0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_res0 = 65025;
          int * res = (int *) malloc(_len_res0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            res[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = mask_bitmap4(bitmap,mask,res,len);
          printf("%lu\n", benchRet); 
          free(bitmap);
          free(mask);
          free(res);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long len = 10;
          int _len_bitmap0 = 100;
          const int * bitmap = (const int *) malloc(_len_bitmap0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_bitmap0; _i0++) {
            bitmap[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mask0 = 100;
          const int * mask = (const int *) malloc(_len_mask0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_res0 = 100;
          int * res = (int *) malloc(_len_res0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            res[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = mask_bitmap4(bitmap,mask,res,len);
          printf("%lu\n", benchRet); 
          free(bitmap);
          free(mask);
          free(res);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
