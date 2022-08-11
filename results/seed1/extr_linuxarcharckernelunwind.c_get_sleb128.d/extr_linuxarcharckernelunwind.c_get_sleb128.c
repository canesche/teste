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
typedef  int /*<<< orphan*/  value ;
typedef  int u8 ;
typedef  unsigned int sleb128_t ;

/* Variables and functions */

__attribute__((used)) static sleb128_t get_sleb128(const u8 **pcur, const u8 *end)
{
	const u8 *cur = *pcur;
	sleb128_t value;
	unsigned shift;

	for (shift = 0, value = 0; cur < end; shift += 7) {
		if (shift + 7 > 8 * sizeof(value)
		    && (*cur & 0x7fU) >= (1U << (8 * sizeof(value) - shift))) {
			cur = end + 1;
			break;
		}
		value |= (sleb128_t) (*cur & 0x7f) << shift;
		if (!(*cur & 0x80)) {
			value |= -(*cur++ & 0x40) << shift;
			break;
		}
	}
	*pcur = cur;

	return value;
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
          int _len_pcur0 = 1;
          const int ** pcur = (const int **) malloc(_len_pcur0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_pcur0; _i0++) {
            int _len_pcur1 = 1;
            pcur[_i0] = (const int *) malloc(_len_pcur1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_pcur1; _i1++) {
              pcur[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_end0 = 1;
          const int * end = (const int *) malloc(_len_end0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = get_sleb128(pcur,end);
          printf("%u\n", benchRet); 
          for(int i1 = 0; i1 < _len_pcur0; i1++) {
            int _len_pcur1 = 1;
              free(pcur[i1]);
          }
          free(pcur);
          free(end);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pcur0 = 65025;
          const int ** pcur = (const int **) malloc(_len_pcur0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_pcur0; _i0++) {
            int _len_pcur1 = 1;
            pcur[_i0] = (const int *) malloc(_len_pcur1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_pcur1; _i1++) {
              pcur[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_end0 = 65025;
          const int * end = (const int *) malloc(_len_end0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = get_sleb128(pcur,end);
          printf("%u\n", benchRet); 
          for(int i1 = 0; i1 < _len_pcur0; i1++) {
            int _len_pcur1 = 1;
              free(pcur[i1]);
          }
          free(pcur);
          free(end);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pcur0 = 100;
          const int ** pcur = (const int **) malloc(_len_pcur0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_pcur0; _i0++) {
            int _len_pcur1 = 1;
            pcur[_i0] = (const int *) malloc(_len_pcur1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_pcur1; _i1++) {
              pcur[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_end0 = 100;
          const int * end = (const int *) malloc(_len_end0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = get_sleb128(pcur,end);
          printf("%u\n", benchRet); 
          for(int i1 = 0; i1 < _len_pcur0; i1++) {
            int _len_pcur1 = 1;
              free(pcur[i1]);
          }
          free(pcur);
          free(end);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
