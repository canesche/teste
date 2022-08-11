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
struct solo_enc_dev {int ch; struct solo_dev* solo_dev; } ;
struct solo_dev {int motion_mask; } ;

/* Variables and functions */

__attribute__((used)) static int solo_is_motion_on(struct solo_enc_dev *solo_enc)
{
	struct solo_dev *solo_dev = solo_enc->solo_dev;

	return (solo_dev->motion_mask >> solo_enc->ch) & 1;
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
          int _len_solo_enc0 = 1;
          struct solo_enc_dev * solo_enc = (struct solo_enc_dev *) malloc(_len_solo_enc0*sizeof(struct solo_enc_dev));
          for(int _i0 = 0; _i0 < _len_solo_enc0; _i0++) {
            solo_enc[_i0].ch = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_solo_enc__i0__solo_dev0 = 1;
          solo_enc[_i0].solo_dev = (struct solo_dev *) malloc(_len_solo_enc__i0__solo_dev0*sizeof(struct solo_dev));
          for(int _j0 = 0; _j0 < _len_solo_enc__i0__solo_dev0; _j0++) {
            solo_enc[_i0].solo_dev->motion_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = solo_is_motion_on(solo_enc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_solo_enc0; _aux++) {
          free(solo_enc[_aux].solo_dev);
          }
          free(solo_enc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_solo_enc0 = 65025;
          struct solo_enc_dev * solo_enc = (struct solo_enc_dev *) malloc(_len_solo_enc0*sizeof(struct solo_enc_dev));
          for(int _i0 = 0; _i0 < _len_solo_enc0; _i0++) {
            solo_enc[_i0].ch = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_solo_enc__i0__solo_dev0 = 1;
          solo_enc[_i0].solo_dev = (struct solo_dev *) malloc(_len_solo_enc__i0__solo_dev0*sizeof(struct solo_dev));
          for(int _j0 = 0; _j0 < _len_solo_enc__i0__solo_dev0; _j0++) {
            solo_enc[_i0].solo_dev->motion_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = solo_is_motion_on(solo_enc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_solo_enc0; _aux++) {
          free(solo_enc[_aux].solo_dev);
          }
          free(solo_enc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_solo_enc0 = 100;
          struct solo_enc_dev * solo_enc = (struct solo_enc_dev *) malloc(_len_solo_enc0*sizeof(struct solo_enc_dev));
          for(int _i0 = 0; _i0 < _len_solo_enc0; _i0++) {
            solo_enc[_i0].ch = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_solo_enc__i0__solo_dev0 = 1;
          solo_enc[_i0].solo_dev = (struct solo_dev *) malloc(_len_solo_enc__i0__solo_dev0*sizeof(struct solo_dev));
          for(int _j0 = 0; _j0 < _len_solo_enc__i0__solo_dev0; _j0++) {
            solo_enc[_i0].solo_dev->motion_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = solo_is_motion_on(solo_enc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_solo_enc0; _aux++) {
          free(solo_enc[_aux].solo_dev);
          }
          free(solo_enc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
