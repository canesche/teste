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
struct snd_ad1843 {int dummy; } ;
struct ad1843_gain {int /*<<< orphan*/  lmute; TYPE_1__* lfield; } ;
struct TYPE_2__ {int nbits; } ;

/* Variables and functions */
 struct ad1843_gain** ad1843_gain ; 

int ad1843_get_gain_max(struct snd_ad1843 *ad1843, int id)
{
	const struct ad1843_gain *gp = ad1843_gain[id];
	int ret;

	ret = (1 << gp->lfield->nbits);
	if (!gp->lmute)
		ret -= 1;
	return ret;
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
          int id = 100;
          int _len_ad18430 = 1;
          struct snd_ad1843 * ad1843 = (struct snd_ad1843 *) malloc(_len_ad18430*sizeof(struct snd_ad1843));
          for(int _i0 = 0; _i0 < _len_ad18430; _i0++) {
            ad1843[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ad1843_get_gain_max(ad1843,id);
          printf("%d\n", benchRet); 
          free(ad1843);
        
        break;
    }
    // big-arr
    case 1:
    {
          int id = 255;
          int _len_ad18430 = 65025;
          struct snd_ad1843 * ad1843 = (struct snd_ad1843 *) malloc(_len_ad18430*sizeof(struct snd_ad1843));
          for(int _i0 = 0; _i0 < _len_ad18430; _i0++) {
            ad1843[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ad1843_get_gain_max(ad1843,id);
          printf("%d\n", benchRet); 
          free(ad1843);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int id = 10;
          int _len_ad18430 = 100;
          struct snd_ad1843 * ad1843 = (struct snd_ad1843 *) malloc(_len_ad18430*sizeof(struct snd_ad1843));
          for(int _i0 = 0; _i0 < _len_ad18430; _i0++) {
            ad1843[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ad1843_get_gain_max(ad1843,id);
          printf("%d\n", benchRet); 
          free(ad1843);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
