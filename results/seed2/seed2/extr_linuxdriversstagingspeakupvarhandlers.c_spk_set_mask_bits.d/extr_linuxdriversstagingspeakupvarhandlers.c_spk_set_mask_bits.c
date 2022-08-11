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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u_char ;
struct TYPE_2__ {short mask; int* value; } ;

/* Variables and functions */
 short B_NUM ; 
 int EINVAL ; 
 short PUNC ; 
 int SPACE ; 
 short* spk_chartab ; 
 TYPE_1__* spk_punc_info ; 

int spk_set_mask_bits(const char *input, const int which, const int how)
{
	u_char *cp;
	short mask = spk_punc_info[which].mask;

	if (how & 1) {
		for (cp = (u_char *)spk_punc_info[3].value; *cp; cp++)
			spk_chartab[*cp] &= ~mask;
	}
	cp = (u_char *)input;
	if (!cp) {
		cp = spk_punc_info[which].value;
	} else {
		for (; *cp; cp++) {
			if (*cp < SPACE)
				break;
			if (mask < PUNC) {
				if (!(spk_chartab[*cp] & PUNC))
					break;
			} else if (spk_chartab[*cp] & B_NUM) {
				break;
			}
		}
		if (*cp)
			return -EINVAL;
		cp = (u_char *)input;
	}
	if (how & 2) {
		for (; *cp; cp++)
			if (*cp > SPACE)
				spk_chartab[*cp] |= mask;
	} else {
		for (; *cp; cp++)
			if (*cp > SPACE)
				spk_chartab[*cp] &= ~mask;
	}
	return 0;
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
          const int which = 100;
          const int how = 100;
          int _len_input0 = 1;
          const char * input = (const char *) malloc(_len_input0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            input[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = spk_set_mask_bits(input,which,how);
          printf("%d\n", benchRet); 
          free(input);
        
        break;
    }
    // big-arr
    case 1:
    {
          const int which = 255;
          const int how = 255;
          int _len_input0 = 65025;
          const char * input = (const char *) malloc(_len_input0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            input[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = spk_set_mask_bits(input,which,how);
          printf("%d\n", benchRet); 
          free(input);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int which = 10;
          const int how = 10;
          int _len_input0 = 100;
          const char * input = (const char *) malloc(_len_input0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            input[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = spk_set_mask_bits(input,which,how);
          printf("%d\n", benchRet); 
          free(input);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
