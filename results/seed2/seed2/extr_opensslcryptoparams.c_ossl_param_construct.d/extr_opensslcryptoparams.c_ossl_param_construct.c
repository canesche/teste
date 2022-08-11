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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {char const* key; unsigned int data_type; size_t data_size; size_t* return_size; void* data; } ;
typedef  TYPE_1__ OSSL_PARAM ;

/* Variables and functions */

__attribute__((used)) static OSSL_PARAM ossl_param_construct(const char *key, unsigned int data_type,
                                       void *data, size_t data_size,
                                       size_t *return_size)
{
    OSSL_PARAM res;

    res.key = key;
    res.data_type = data_type;
    res.data = data;
    res.data_size = data_size;
    res.return_size = return_size;
    return res;
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
          unsigned int data_type = 100;
          unsigned long data_size = 100;
          int _len_key0 = 1;
          const char * key = (const char *) malloc(_len_key0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int _len_return_size0 = 1;
          unsigned long * return_size = (unsigned long *) malloc(_len_return_size0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_return_size0; _i0++) {
            return_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_3__ benchRet = ossl_param_construct(key,data_type,data,data_size,return_size);
          printf("%u\n", benchRet.data_type);
          printf("%lu\n", benchRet.data_size);
          free(key);
          free(return_size);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int data_type = 255;
          unsigned long data_size = 255;
          int _len_key0 = 65025;
          const char * key = (const char *) malloc(_len_key0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int _len_return_size0 = 65025;
          unsigned long * return_size = (unsigned long *) malloc(_len_return_size0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_return_size0; _i0++) {
            return_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_3__ benchRet = ossl_param_construct(key,data_type,data,data_size,return_size);
          printf("%u\n", benchRet.data_type);
          printf("%lu\n", benchRet.data_size);
          free(key);
          free(return_size);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int data_type = 10;
          unsigned long data_size = 10;
          int _len_key0 = 100;
          const char * key = (const char *) malloc(_len_key0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int _len_return_size0 = 100;
          unsigned long * return_size = (unsigned long *) malloc(_len_return_size0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_return_size0; _i0++) {
            return_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_3__ benchRet = ossl_param_construct(key,data_type,data,data_size,return_size);
          printf("%u\n", benchRet.data_type);
          printf("%lu\n", benchRet.data_size);
          free(key);
          free(return_size);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
