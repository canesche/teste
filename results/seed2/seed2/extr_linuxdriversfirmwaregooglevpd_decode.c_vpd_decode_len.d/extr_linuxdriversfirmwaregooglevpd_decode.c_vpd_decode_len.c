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
typedef  int s32 ;

/* Variables and functions */
 int VPD_FAIL ; 
 int VPD_OK ; 

__attribute__((used)) static int vpd_decode_len(const s32 max_len, const u8 *in,
			  s32 *length, s32 *decoded_len)
{
	u8 more;
	int i = 0;

	if (!length || !decoded_len)
		return VPD_FAIL;

	*length = 0;
	do {
		if (i >= max_len)
			return VPD_FAIL;

		more = in[i] & 0x80;
		*length <<= 7;
		*length |= in[i] & 0x7f;
		++i;
	} while (more);

	*decoded_len = i;

	return VPD_OK;
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
          const int max_len = 100;
          int _len_in0 = 1;
          const int * in = (const int *) malloc(_len_in0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_length0 = 1;
          int * length = (int *) malloc(_len_length0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_length0; _i0++) {
            length[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_decoded_len0 = 1;
          int * decoded_len = (int *) malloc(_len_decoded_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_decoded_len0; _i0++) {
            decoded_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vpd_decode_len(max_len,in,length,decoded_len);
          printf("%d\n", benchRet); 
          free(in);
          free(length);
          free(decoded_len);
        
        break;
    }
    // big-arr
    case 1:
    {
          const int max_len = 255;
          int _len_in0 = 65025;
          const int * in = (const int *) malloc(_len_in0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_length0 = 65025;
          int * length = (int *) malloc(_len_length0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_length0; _i0++) {
            length[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_decoded_len0 = 65025;
          int * decoded_len = (int *) malloc(_len_decoded_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_decoded_len0; _i0++) {
            decoded_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vpd_decode_len(max_len,in,length,decoded_len);
          printf("%d\n", benchRet); 
          free(in);
          free(length);
          free(decoded_len);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int max_len = 10;
          int _len_in0 = 100;
          const int * in = (const int *) malloc(_len_in0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_length0 = 100;
          int * length = (int *) malloc(_len_length0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_length0; _i0++) {
            length[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_decoded_len0 = 100;
          int * decoded_len = (int *) malloc(_len_decoded_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_decoded_len0; _i0++) {
            decoded_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vpd_decode_len(max_len,in,length,decoded_len);
          printf("%d\n", benchRet); 
          free(in);
          free(length);
          free(decoded_len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
