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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct iwl_firmware_pieces {TYPE_1__* img; } ;
struct fw_sec {int dummy; } ;
typedef  enum iwl_ucode_type { ____Placeholder_iwl_ucode_type } iwl_ucode_type ;
struct TYPE_2__ {struct fw_sec* sec; } ;

/* Variables and functions */

__attribute__((used)) static struct fw_sec *get_sec(struct iwl_firmware_pieces *pieces,
			      enum iwl_ucode_type type,
			      int  sec)
{
	return &pieces->img[type].sec[sec];
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
          enum iwl_ucode_type type = 0;
          int sec = 100;
          int _len_pieces0 = 1;
          struct iwl_firmware_pieces * pieces = (struct iwl_firmware_pieces *) malloc(_len_pieces0*sizeof(struct iwl_firmware_pieces));
          for(int _i0 = 0; _i0 < _len_pieces0; _i0++) {
              int _len_pieces__i0__img0 = 1;
          pieces[_i0].img = (struct TYPE_2__ *) malloc(_len_pieces__i0__img0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pieces__i0__img0; _j0++) {
              int _len_pieces__i0__img_sec0 = 1;
          pieces[_i0].img->sec = (struct fw_sec *) malloc(_len_pieces__i0__img_sec0*sizeof(struct fw_sec));
          for(int _j0 = 0; _j0 < _len_pieces__i0__img_sec0; _j0++) {
            pieces[_i0].img->sec->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct fw_sec * benchRet = get_sec(pieces,type,sec);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_pieces0; _aux++) {
          free(pieces[_aux].img);
          }
          free(pieces);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum iwl_ucode_type type = 0;
          int sec = 255;
          int _len_pieces0 = 65025;
          struct iwl_firmware_pieces * pieces = (struct iwl_firmware_pieces *) malloc(_len_pieces0*sizeof(struct iwl_firmware_pieces));
          for(int _i0 = 0; _i0 < _len_pieces0; _i0++) {
              int _len_pieces__i0__img0 = 1;
          pieces[_i0].img = (struct TYPE_2__ *) malloc(_len_pieces__i0__img0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pieces__i0__img0; _j0++) {
              int _len_pieces__i0__img_sec0 = 1;
          pieces[_i0].img->sec = (struct fw_sec *) malloc(_len_pieces__i0__img_sec0*sizeof(struct fw_sec));
          for(int _j0 = 0; _j0 < _len_pieces__i0__img_sec0; _j0++) {
            pieces[_i0].img->sec->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct fw_sec * benchRet = get_sec(pieces,type,sec);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_pieces0; _aux++) {
          free(pieces[_aux].img);
          }
          free(pieces);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum iwl_ucode_type type = 0;
          int sec = 10;
          int _len_pieces0 = 100;
          struct iwl_firmware_pieces * pieces = (struct iwl_firmware_pieces *) malloc(_len_pieces0*sizeof(struct iwl_firmware_pieces));
          for(int _i0 = 0; _i0 < _len_pieces0; _i0++) {
              int _len_pieces__i0__img0 = 1;
          pieces[_i0].img = (struct TYPE_2__ *) malloc(_len_pieces__i0__img0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pieces__i0__img0; _j0++) {
              int _len_pieces__i0__img_sec0 = 1;
          pieces[_i0].img->sec = (struct fw_sec *) malloc(_len_pieces__i0__img_sec0*sizeof(struct fw_sec));
          for(int _j0 = 0; _j0 < _len_pieces__i0__img_sec0; _j0++) {
            pieces[_i0].img->sec->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct fw_sec * benchRet = get_sec(pieces,type,sec);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_pieces0; _aux++) {
          free(pieces[_aux].img);
          }
          free(pieces);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
