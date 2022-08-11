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
struct zoran_jpg_settings {int VerDcm; int HorDcm; int TmpDcm; } ;
typedef  int __u8 ;
typedef  int __u32 ;

/* Variables and functions */
 int jpg_bufsize ; 

__attribute__((used)) static __u32
zoran_v4l2_calc_bufsize (struct zoran_jpg_settings *settings)
{
	__u8 div = settings->VerDcm * settings->HorDcm * settings->TmpDcm;
	__u32 num = (1024 * 512) / (div);
	__u32 result = 2;

	num--;
	while (num) {
		num >>= 1;
		result <<= 1;
	}

	if (result > jpg_bufsize)
		return jpg_bufsize;
	if (result < 8192)
		return 8192;
	return result;
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
          int _len_settings0 = 1;
          struct zoran_jpg_settings * settings = (struct zoran_jpg_settings *) malloc(_len_settings0*sizeof(struct zoran_jpg_settings));
          for(int _i0 = 0; _i0 < _len_settings0; _i0++) {
            settings[_i0].VerDcm = ((-2 * (next_i()%2)) + 1) * next_i();
        settings[_i0].HorDcm = ((-2 * (next_i()%2)) + 1) * next_i();
        settings[_i0].TmpDcm = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = zoran_v4l2_calc_bufsize(settings);
          printf("%d\n", benchRet); 
          free(settings);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_settings0 = 65025;
          struct zoran_jpg_settings * settings = (struct zoran_jpg_settings *) malloc(_len_settings0*sizeof(struct zoran_jpg_settings));
          for(int _i0 = 0; _i0 < _len_settings0; _i0++) {
            settings[_i0].VerDcm = ((-2 * (next_i()%2)) + 1) * next_i();
        settings[_i0].HorDcm = ((-2 * (next_i()%2)) + 1) * next_i();
        settings[_i0].TmpDcm = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = zoran_v4l2_calc_bufsize(settings);
          printf("%d\n", benchRet); 
          free(settings);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_settings0 = 100;
          struct zoran_jpg_settings * settings = (struct zoran_jpg_settings *) malloc(_len_settings0*sizeof(struct zoran_jpg_settings));
          for(int _i0 = 0; _i0 < _len_settings0; _i0++) {
            settings[_i0].VerDcm = ((-2 * (next_i()%2)) + 1) * next_i();
        settings[_i0].HorDcm = ((-2 * (next_i()%2)) + 1) * next_i();
        settings[_i0].TmpDcm = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = zoran_v4l2_calc_bufsize(settings);
          printf("%d\n", benchRet); 
          free(settings);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
