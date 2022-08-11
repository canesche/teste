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
typedef  int uint16_t ;

/* Variables and functions */

__attribute__((used)) static bool parse_hex16(const char **sp, uint16_t *out)
{
	const char *s = *sp;
	uint16_t ret = 0;
	uint16_t i;
	uint16_t tmp;
	char c;

	for (i = 0; i < 4; i++) {
		c = *s++;
		if (c >= '0' && c <= '9')
			tmp = c - '0';
		else if (c >= 'A' && c <= 'F')
			tmp = c - 'A' + 10;
		else if (c >= 'a' && c <= 'f')
			tmp = c - 'a' + 10;
		else
			return false;

		ret <<= 4;
		ret += tmp;
	}
	
	if (out)
		*out = ret;
	*sp = s;
	return true;
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
          int _len_sp0 = 1;
          const char ** sp = (const char **) malloc(_len_sp0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
            int _len_sp1 = 1;
            sp[_i0] = (const char *) malloc(_len_sp1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_sp1; _i1++) {
              sp[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_out0 = 1;
          int * out = (int *) malloc(_len_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = parse_hex16(sp,out);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_sp0; i1++) {
            int _len_sp1 = 1;
              free(sp[i1]);
          }
          free(sp);
          free(out);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sp0 = 65025;
          const char ** sp = (const char **) malloc(_len_sp0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
            int _len_sp1 = 1;
            sp[_i0] = (const char *) malloc(_len_sp1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_sp1; _i1++) {
              sp[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_out0 = 65025;
          int * out = (int *) malloc(_len_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = parse_hex16(sp,out);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_sp0; i1++) {
            int _len_sp1 = 1;
              free(sp[i1]);
          }
          free(sp);
          free(out);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sp0 = 100;
          const char ** sp = (const char **) malloc(_len_sp0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
            int _len_sp1 = 1;
            sp[_i0] = (const char *) malloc(_len_sp1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_sp1; _i1++) {
              sp[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_out0 = 100;
          int * out = (int *) malloc(_len_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = parse_hex16(sp,out);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_sp0; i1++) {
            int _len_sp1 = 1;
              free(sp[i1]);
          }
          free(sp);
          free(out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
