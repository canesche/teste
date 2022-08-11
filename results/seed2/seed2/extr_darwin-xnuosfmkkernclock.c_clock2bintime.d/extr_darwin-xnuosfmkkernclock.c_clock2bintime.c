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
typedef  int const uint64_t ;
struct bintime {int frac; int /*<<< orphan*/  sec; } ;
typedef  int clock_usec_t ;
typedef  int /*<<< orphan*/  clock_sec_t ;

/* Variables and functions */

__attribute__((used)) static __inline void
clock2bintime(const clock_sec_t *secs, const clock_usec_t *microsecs, struct bintime *_bt)
{

	_bt->sec = *secs;
	/* 18446744073709 = int(2^64 / 1000000) */
	_bt->frac = *microsecs * (uint64_t)18446744073709LL;
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
          int _len_secs0 = 1;
          const int * secs = (const int *) malloc(_len_secs0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_secs0; _i0++) {
            secs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_microsecs0 = 1;
          const int * microsecs = (const int *) malloc(_len_microsecs0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_microsecs0; _i0++) {
            microsecs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len__bt0 = 1;
          struct bintime * _bt = (struct bintime *) malloc(_len__bt0*sizeof(struct bintime));
          for(int _i0 = 0; _i0 < _len__bt0; _i0++) {
            _bt[_i0].frac = ((-2 * (next_i()%2)) + 1) * next_i();
        _bt[_i0].sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          clock2bintime(secs,microsecs,_bt);
          free(secs);
          free(microsecs);
          free(_bt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_secs0 = 65025;
          const int * secs = (const int *) malloc(_len_secs0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_secs0; _i0++) {
            secs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_microsecs0 = 65025;
          const int * microsecs = (const int *) malloc(_len_microsecs0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_microsecs0; _i0++) {
            microsecs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len__bt0 = 65025;
          struct bintime * _bt = (struct bintime *) malloc(_len__bt0*sizeof(struct bintime));
          for(int _i0 = 0; _i0 < _len__bt0; _i0++) {
            _bt[_i0].frac = ((-2 * (next_i()%2)) + 1) * next_i();
        _bt[_i0].sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          clock2bintime(secs,microsecs,_bt);
          free(secs);
          free(microsecs);
          free(_bt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_secs0 = 100;
          const int * secs = (const int *) malloc(_len_secs0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_secs0; _i0++) {
            secs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_microsecs0 = 100;
          const int * microsecs = (const int *) malloc(_len_microsecs0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_microsecs0; _i0++) {
            microsecs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len__bt0 = 100;
          struct bintime * _bt = (struct bintime *) malloc(_len__bt0*sizeof(struct bintime));
          for(int _i0 = 0; _i0 < _len__bt0; _i0++) {
            _bt[_i0].frac = ((-2 * (next_i()%2)) + 1) * next_i();
        _bt[_i0].sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          clock2bintime(secs,microsecs,_bt);
          free(secs);
          free(microsecs);
          free(_bt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
