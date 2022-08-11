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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  void* uint64_t ;
struct TYPE_4__ {int TimeStamp_tick; void* Ticks_per_sec; void* Ticks_scale; void* TimeStamp_frac; void* TimeStamp_sec; } ;
typedef  TYPE_1__ new_commpage_timeofday_data_t ;

/* Variables and functions */
 TYPE_1__* gtod_time_data32 ; 
 TYPE_1__* gtod_time_data64 ; 

void
commpage_set_timestamp(
		uint64_t	abstime,
		uint64_t	sec,
		uint64_t	frac,
		uint64_t	scale,
		uint64_t	tick_per_sec)
{
	new_commpage_timeofday_data_t	*p32 = gtod_time_data32;
	new_commpage_timeofday_data_t	*p64 = gtod_time_data64;
	
	p32->TimeStamp_tick = 0x0ULL;
	p64->TimeStamp_tick = 0x0ULL;

	p32->TimeStamp_sec = sec;
	p64->TimeStamp_sec = sec;

	p32->TimeStamp_frac = frac;
	p64->TimeStamp_frac = frac;

	p32->Ticks_scale = scale;
	p64->Ticks_scale = scale;

	p32->Ticks_per_sec = tick_per_sec;
	p64->Ticks_per_sec = tick_per_sec;

	p32->TimeStamp_tick = abstime;
	p64->TimeStamp_tick = abstime;
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
          void * abstime;
          void * sec;
          void * frac;
          void * scale;
          void * tick_per_sec;
          commpage_set_timestamp(abstime,sec,frac,scale,tick_per_sec);
        
        break;
    }
    // big-arr
    case 1:
    {
          void * abstime;
          void * sec;
          void * frac;
          void * scale;
          void * tick_per_sec;
          commpage_set_timestamp(abstime,sec,frac,scale,tick_per_sec);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * abstime;
          void * sec;
          void * frac;
          void * scale;
          void * tick_per_sec;
          commpage_set_timestamp(abstime,sec,frac,scale,tick_per_sec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
