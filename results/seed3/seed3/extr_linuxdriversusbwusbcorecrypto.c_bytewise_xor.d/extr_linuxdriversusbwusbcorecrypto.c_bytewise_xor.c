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

__attribute__((used)) static void bytewise_xor(void *_bo, const void *_bi1, const void *_bi2,
			 size_t size)
{
	u8 *bo = _bo;
	const u8 *bi1 = _bi1, *bi2 = _bi2;
	size_t itr;
	for (itr = 0; itr < size; itr++)
		bo[itr] = bi1[itr] ^ bi2[itr];
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
          unsigned long size = 100;
          void * _bo;
          int _len__bi10 = 1;
          const void * _bi1 = (const void *) malloc(_len__bi10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__bi10; _i0++) {
            _bi1[_i0] = 0;
          }
          int _len__bi20 = 1;
          const void * _bi2 = (const void *) malloc(_len__bi20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__bi20; _i0++) {
            _bi2[_i0] = 0;
          }
          bytewise_xor(_bo,_bi1,_bi2,size);
          free(_bi1);
          free(_bi2);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long size = 255;
          void * _bo;
          int _len__bi10 = 65025;
          const void * _bi1 = (const void *) malloc(_len__bi10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__bi10; _i0++) {
            _bi1[_i0] = 0;
          }
          int _len__bi20 = 65025;
          const void * _bi2 = (const void *) malloc(_len__bi20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__bi20; _i0++) {
            _bi2[_i0] = 0;
          }
          bytewise_xor(_bo,_bi1,_bi2,size);
          free(_bi1);
          free(_bi2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long size = 10;
          void * _bo;
          int _len__bi10 = 100;
          const void * _bi1 = (const void *) malloc(_len__bi10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__bi10; _i0++) {
            _bi1[_i0] = 0;
          }
          int _len__bi20 = 100;
          const void * _bi2 = (const void *) malloc(_len__bi20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__bi20; _i0++) {
            _bi2[_i0] = 0;
          }
          bytewise_xor(_bo,_bi1,_bi2,size);
          free(_bi1);
          free(_bi2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
