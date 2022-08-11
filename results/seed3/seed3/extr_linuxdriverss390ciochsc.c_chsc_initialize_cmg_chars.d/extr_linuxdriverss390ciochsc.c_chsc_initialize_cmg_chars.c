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
typedef  int u8 ;
struct cmg_chars {scalar_t__* values; } ;
struct TYPE_2__ {scalar_t__* values; } ;
struct channel_path {TYPE_1__ cmg_chars; } ;

/* Variables and functions */
 int NR_MEASUREMENT_CHARS ; 

__attribute__((used)) static void
chsc_initialize_cmg_chars(struct channel_path *chp, u8 cmcv,
			  struct cmg_chars *chars)
{
	int i, mask;

	for (i = 0; i < NR_MEASUREMENT_CHARS; i++) {
		mask = 0x80 >> (i + 3);
		if (cmcv & mask)
			chp->cmg_chars.values[i] = chars->values[i];
		else
			chp->cmg_chars.values[i] = 0;
	}
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
          int cmcv = 100;
          int _len_chp0 = 1;
          struct channel_path * chp = (struct channel_path *) malloc(_len_chp0*sizeof(struct channel_path));
          for(int _i0 = 0; _i0 < _len_chp0; _i0++) {
              int _len_chp__i0__cmg_chars_values0 = 1;
          chp[_i0].cmg_chars.values = (long *) malloc(_len_chp__i0__cmg_chars_values0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_chp__i0__cmg_chars_values0; _j0++) {
            chp[_i0].cmg_chars.values[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_chars0 = 1;
          struct cmg_chars * chars = (struct cmg_chars *) malloc(_len_chars0*sizeof(struct cmg_chars));
          for(int _i0 = 0; _i0 < _len_chars0; _i0++) {
              int _len_chars__i0__values0 = 1;
          chars[_i0].values = (long *) malloc(_len_chars__i0__values0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_chars__i0__values0; _j0++) {
            chars[_i0].values[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          chsc_initialize_cmg_chars(chp,cmcv,chars);
          free(chp);
          for(int _aux = 0; _aux < _len_chars0; _aux++) {
          free(chars[_aux].values);
          }
          free(chars);
        
        break;
    }
    // big-arr
    case 1:
    {
          int cmcv = 255;
          int _len_chp0 = 65025;
          struct channel_path * chp = (struct channel_path *) malloc(_len_chp0*sizeof(struct channel_path));
          for(int _i0 = 0; _i0 < _len_chp0; _i0++) {
              int _len_chp__i0__cmg_chars_values0 = 1;
          chp[_i0].cmg_chars.values = (long *) malloc(_len_chp__i0__cmg_chars_values0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_chp__i0__cmg_chars_values0; _j0++) {
            chp[_i0].cmg_chars.values[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_chars0 = 65025;
          struct cmg_chars * chars = (struct cmg_chars *) malloc(_len_chars0*sizeof(struct cmg_chars));
          for(int _i0 = 0; _i0 < _len_chars0; _i0++) {
              int _len_chars__i0__values0 = 1;
          chars[_i0].values = (long *) malloc(_len_chars__i0__values0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_chars__i0__values0; _j0++) {
            chars[_i0].values[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          chsc_initialize_cmg_chars(chp,cmcv,chars);
          free(chp);
          for(int _aux = 0; _aux < _len_chars0; _aux++) {
          free(chars[_aux].values);
          }
          free(chars);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cmcv = 10;
          int _len_chp0 = 100;
          struct channel_path * chp = (struct channel_path *) malloc(_len_chp0*sizeof(struct channel_path));
          for(int _i0 = 0; _i0 < _len_chp0; _i0++) {
              int _len_chp__i0__cmg_chars_values0 = 1;
          chp[_i0].cmg_chars.values = (long *) malloc(_len_chp__i0__cmg_chars_values0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_chp__i0__cmg_chars_values0; _j0++) {
            chp[_i0].cmg_chars.values[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_chars0 = 100;
          struct cmg_chars * chars = (struct cmg_chars *) malloc(_len_chars0*sizeof(struct cmg_chars));
          for(int _i0 = 0; _i0 < _len_chars0; _i0++) {
              int _len_chars__i0__values0 = 1;
          chars[_i0].values = (long *) malloc(_len_chars__i0__values0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_chars__i0__values0; _j0++) {
            chars[_i0].values[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          chsc_initialize_cmg_chars(chp,cmcv,chars);
          free(chp);
          for(int _aux = 0; _aux < _len_chars0; _aux++) {
          free(chars[_aux].values);
          }
          free(chars);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
