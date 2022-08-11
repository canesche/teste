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
struct ahd_softc {int dummy; } ;
typedef  int /*<<< orphan*/  ahd_mode ;

/* Variables and functions */

__attribute__((used)) static void
ahd_assert_modes(struct ahd_softc *ahd, ahd_mode srcmode,
		 ahd_mode dstmode, const char *file, int line)
{
#ifdef AHD_DEBUG
	if ((srcmode & AHD_MK_MSK(ahd->src_mode)) == 0
	 || (dstmode & AHD_MK_MSK(ahd->dst_mode)) == 0) {
		panic("%s:%s:%d: Mode assertion failed.\n",
		       ahd_name(ahd), file, line);
	}
#endif
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
          int srcmode = 100;
          int dstmode = 100;
          int line = 100;
          int _len_ahd0 = 1;
          struct ahd_softc * ahd = (struct ahd_softc *) malloc(_len_ahd0*sizeof(struct ahd_softc));
          for(int _i0 = 0; _i0 < _len_ahd0; _i0++) {
            ahd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_file0 = 1;
          const char * file = (const char *) malloc(_len_file0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ahd_assert_modes(ahd,srcmode,dstmode,file,line);
          free(ahd);
          free(file);
        
        break;
    }
    // big-arr
    case 1:
    {
          int srcmode = 255;
          int dstmode = 255;
          int line = 255;
          int _len_ahd0 = 65025;
          struct ahd_softc * ahd = (struct ahd_softc *) malloc(_len_ahd0*sizeof(struct ahd_softc));
          for(int _i0 = 0; _i0 < _len_ahd0; _i0++) {
            ahd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_file0 = 65025;
          const char * file = (const char *) malloc(_len_file0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ahd_assert_modes(ahd,srcmode,dstmode,file,line);
          free(ahd);
          free(file);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int srcmode = 10;
          int dstmode = 10;
          int line = 10;
          int _len_ahd0 = 100;
          struct ahd_softc * ahd = (struct ahd_softc *) malloc(_len_ahd0*sizeof(struct ahd_softc));
          for(int _i0 = 0; _i0 < _len_ahd0; _i0++) {
            ahd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_file0 = 100;
          const char * file = (const char *) malloc(_len_file0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ahd_assert_modes(ahd,srcmode,dstmode,file,line);
          free(ahd);
          free(file);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
