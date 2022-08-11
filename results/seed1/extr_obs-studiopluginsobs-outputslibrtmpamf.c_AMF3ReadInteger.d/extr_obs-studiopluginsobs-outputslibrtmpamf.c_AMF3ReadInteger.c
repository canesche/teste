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
typedef  int int32_t ;

/* Variables and functions */
 int AMF3_INTEGER_MAX ; 

int
AMF3ReadInteger(const char *data, int32_t *valp)
{
    int i = 0;
    int32_t val = 0;

    while (i <= 2)
    {
        /* handle first 3 bytes */
        if (data[i] & 0x80)
        {
            /* byte used */
            val <<= 7;		/* shift up */
            val |= (data[i] & 0x7f);	/* add bits */
            i++;
        }
        else
        {
            break;
        }
    }

    if (i > 2)
    {
        /* use 4th byte, all 8bits */
        val <<= 8;
        val |= data[3];

        /* range check */
        if (val > AMF3_INTEGER_MAX)
            val -= (1 << 29);
    }
    else
    {
        /* use 7bits of last unparsed byte (0xxxxxxx) */
        val <<= 7;
        val |= data[i];
    }

    *valp = val;

    return i > 2 ? 4 : i + 1;
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
          int _len_data0 = 1;
          const char * data = (const char *) malloc(_len_data0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_valp0 = 1;
          int * valp = (int *) malloc(_len_valp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_valp0; _i0++) {
            valp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = AMF3ReadInteger(data,valp);
          printf("%d\n", benchRet); 
          free(data);
          free(valp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_data0 = 65025;
          const char * data = (const char *) malloc(_len_data0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_valp0 = 65025;
          int * valp = (int *) malloc(_len_valp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_valp0; _i0++) {
            valp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = AMF3ReadInteger(data,valp);
          printf("%d\n", benchRet); 
          free(data);
          free(valp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_data0 = 100;
          const char * data = (const char *) malloc(_len_data0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_valp0 = 100;
          int * valp = (int *) malloc(_len_valp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_valp0; _i0++) {
            valp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = AMF3ReadInteger(data,valp);
          printf("%d\n", benchRet); 
          free(data);
          free(valp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
