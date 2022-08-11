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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {double width; int x; int y; } ;
struct TYPE_4__ {TYPE_1__ rect; } ;
typedef  TYPE_2__ ccv_comp_t ;

/* Variables and functions */

__attribute__((used)) static int _ccv_is_equal(const void* _r1, const void* _r2, void* data)
{
	const ccv_comp_t* r1 = (const ccv_comp_t*)_r1;
	const ccv_comp_t* r2 = (const ccv_comp_t*)_r2;
	int distance = (int)(r1->rect.width * 0.25 + 0.5);

	return r2->rect.x <= r1->rect.x + distance &&
		   r2->rect.x >= r1->rect.x - distance &&
		   r2->rect.y <= r1->rect.y + distance &&
		   r2->rect.y >= r1->rect.y - distance &&
		   r2->rect.width <= (int)(r1->rect.width * 1.5 + 0.5) &&
		   (int)(r2->rect.width * 1.5 + 0.5) >= r1->rect.width;
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
          int _len__r10 = 1;
          const void * _r1 = (const void *) malloc(_len__r10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__r10; _i0++) {
            _r1[_i0] = 0;
          }
          int _len__r20 = 1;
          const void * _r2 = (const void *) malloc(_len__r20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__r20; _i0++) {
            _r2[_i0] = 0;
          }
          void * data;
          int benchRet = _ccv_is_equal(_r1,_r2,data);
          printf("%d\n", benchRet); 
          free(_r1);
          free(_r2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len__r10 = 65025;
          const void * _r1 = (const void *) malloc(_len__r10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__r10; _i0++) {
            _r1[_i0] = 0;
          }
          int _len__r20 = 65025;
          const void * _r2 = (const void *) malloc(_len__r20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__r20; _i0++) {
            _r2[_i0] = 0;
          }
          void * data;
          int benchRet = _ccv_is_equal(_r1,_r2,data);
          printf("%d\n", benchRet); 
          free(_r1);
          free(_r2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len__r10 = 100;
          const void * _r1 = (const void *) malloc(_len__r10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__r10; _i0++) {
            _r1[_i0] = 0;
          }
          int _len__r20 = 100;
          const void * _r2 = (const void *) malloc(_len__r20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__r20; _i0++) {
            _r2[_i0] = 0;
          }
          void * data;
          int benchRet = _ccv_is_equal(_r1,_r2,data);
          printf("%d\n", benchRet); 
          free(_r1);
          free(_r2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
