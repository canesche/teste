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

const u8 * scsi_sense_desc_find(const u8 * sense_buffer, int sb_len,
				int desc_type)
{
	int add_sen_len, add_len, desc_len, k;
	const u8 * descp;

	if ((sb_len < 8) || (0 == (add_sen_len = sense_buffer[7])))
		return NULL;
	if ((sense_buffer[0] < 0x72) || (sense_buffer[0] > 0x73))
		return NULL;
	add_sen_len = (add_sen_len < (sb_len - 8)) ?
			add_sen_len : (sb_len - 8);
	descp = &sense_buffer[8];
	for (desc_len = 0, k = 0; k < add_sen_len; k += desc_len) {
		descp += desc_len;
		add_len = (k < (add_sen_len - 1)) ? descp[1]: -1;
		desc_len = add_len + 2;
		if (descp[0] == desc_type)
			return descp;
		if (add_len < 0) // short descriptor ??
			break;
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
          int sb_len = 100;
          int desc_type = 100;
          int _len_sense_buffer0 = 1;
          const int * sense_buffer = (const int *) malloc(_len_sense_buffer0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_sense_buffer0; _i0++) {
            sense_buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = scsi_sense_desc_find(sense_buffer,sb_len,desc_type);
          printf("%d\n", (*benchRet)); 
          free(sense_buffer);
        
        break;
    }
    // big-arr
    case 1:
    {
          int sb_len = 255;
          int desc_type = 255;
          int _len_sense_buffer0 = 65025;
          const int * sense_buffer = (const int *) malloc(_len_sense_buffer0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_sense_buffer0; _i0++) {
            sense_buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = scsi_sense_desc_find(sense_buffer,sb_len,desc_type);
          printf("%d\n", (*benchRet)); 
          free(sense_buffer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int sb_len = 10;
          int desc_type = 10;
          int _len_sense_buffer0 = 100;
          const int * sense_buffer = (const int *) malloc(_len_sense_buffer0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_sense_buffer0; _i0++) {
            sense_buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = scsi_sense_desc_find(sense_buffer,sb_len,desc_type);
          printf("%d\n", (*benchRet)); 
          free(sense_buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
