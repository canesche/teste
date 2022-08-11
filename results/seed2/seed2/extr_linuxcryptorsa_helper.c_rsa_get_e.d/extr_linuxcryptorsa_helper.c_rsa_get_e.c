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
struct rsa_key {size_t n_sz; size_t e_sz; void const* e; } ;

/* Variables and functions */
 int EINVAL ; 

int rsa_get_e(void *context, size_t hdrlen, unsigned char tag,
	      const void *value, size_t vlen)
{
	struct rsa_key *key = context;

	/* invalid key provided */
	if (!value || !key->n_sz || !vlen || vlen > key->n_sz)
		return -EINVAL;

	key->e = value;
	key->e_sz = vlen;

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
          unsigned long hdrlen = 100;
          unsigned char tag = 100;
          unsigned long vlen = 100;
          void * context;
          int _len_value0 = 1;
          const void * value = (const void *) malloc(_len_value0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = 0;
          }
          int benchRet = rsa_get_e(context,hdrlen,tag,value,vlen);
          printf("%d\n", benchRet); 
          free(value);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long hdrlen = 255;
          unsigned char tag = 255;
          unsigned long vlen = 255;
          void * context;
          int _len_value0 = 65025;
          const void * value = (const void *) malloc(_len_value0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = 0;
          }
          int benchRet = rsa_get_e(context,hdrlen,tag,value,vlen);
          printf("%d\n", benchRet); 
          free(value);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long hdrlen = 10;
          unsigned char tag = 10;
          unsigned long vlen = 10;
          void * context;
          int _len_value0 = 100;
          const void * value = (const void *) malloc(_len_value0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = 0;
          }
          int benchRet = rsa_get_e(context,hdrlen,tag,value,vlen);
          printf("%d\n", benchRet); 
          free(value);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
