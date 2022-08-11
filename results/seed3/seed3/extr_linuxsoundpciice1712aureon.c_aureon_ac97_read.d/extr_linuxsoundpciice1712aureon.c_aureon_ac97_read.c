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
struct snd_ice1712 {struct aureon_spec* spec; } ;
struct aureon_spec {unsigned short* stac9744; } ;

/* Variables and functions */

__attribute__((used)) static unsigned short aureon_ac97_read(struct snd_ice1712 *ice, unsigned short reg)
{
	struct aureon_spec *spec = ice->spec;
	return spec->stac9744[(reg & 0x7F) >> 1];
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
          unsigned short reg = 100;
          int _len_ice0 = 1;
          struct snd_ice1712 * ice = (struct snd_ice1712 *) malloc(_len_ice0*sizeof(struct snd_ice1712));
          for(int _i0 = 0; _i0 < _len_ice0; _i0++) {
              int _len_ice__i0__spec0 = 1;
          ice[_i0].spec = (struct aureon_spec *) malloc(_len_ice__i0__spec0*sizeof(struct aureon_spec));
          for(int _j0 = 0; _j0 < _len_ice__i0__spec0; _j0++) {
              int _len_ice__i0__spec_stac97440 = 1;
          ice[_i0].spec->stac9744 = (unsigned short *) malloc(_len_ice__i0__spec_stac97440*sizeof(unsigned short));
          for(int _j0 = 0; _j0 < _len_ice__i0__spec_stac97440; _j0++) {
            ice[_i0].spec->stac9744[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned short benchRet = aureon_ac97_read(ice,reg);
          printf("%hu\n", benchRet); 
          for(int _aux = 0; _aux < _len_ice0; _aux++) {
          free(ice[_aux].spec);
          }
          free(ice);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned short reg = 255;
          int _len_ice0 = 65025;
          struct snd_ice1712 * ice = (struct snd_ice1712 *) malloc(_len_ice0*sizeof(struct snd_ice1712));
          for(int _i0 = 0; _i0 < _len_ice0; _i0++) {
              int _len_ice__i0__spec0 = 1;
          ice[_i0].spec = (struct aureon_spec *) malloc(_len_ice__i0__spec0*sizeof(struct aureon_spec));
          for(int _j0 = 0; _j0 < _len_ice__i0__spec0; _j0++) {
              int _len_ice__i0__spec_stac97440 = 1;
          ice[_i0].spec->stac9744 = (unsigned short *) malloc(_len_ice__i0__spec_stac97440*sizeof(unsigned short));
          for(int _j0 = 0; _j0 < _len_ice__i0__spec_stac97440; _j0++) {
            ice[_i0].spec->stac9744[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned short benchRet = aureon_ac97_read(ice,reg);
          printf("%hu\n", benchRet); 
          for(int _aux = 0; _aux < _len_ice0; _aux++) {
          free(ice[_aux].spec);
          }
          free(ice);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned short reg = 10;
          int _len_ice0 = 100;
          struct snd_ice1712 * ice = (struct snd_ice1712 *) malloc(_len_ice0*sizeof(struct snd_ice1712));
          for(int _i0 = 0; _i0 < _len_ice0; _i0++) {
              int _len_ice__i0__spec0 = 1;
          ice[_i0].spec = (struct aureon_spec *) malloc(_len_ice__i0__spec0*sizeof(struct aureon_spec));
          for(int _j0 = 0; _j0 < _len_ice__i0__spec0; _j0++) {
              int _len_ice__i0__spec_stac97440 = 1;
          ice[_i0].spec->stac9744 = (unsigned short *) malloc(_len_ice__i0__spec_stac97440*sizeof(unsigned short));
          for(int _j0 = 0; _j0 < _len_ice__i0__spec_stac97440; _j0++) {
            ice[_i0].spec->stac9744[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned short benchRet = aureon_ac97_read(ice,reg);
          printf("%hu\n", benchRet); 
          for(int _aux = 0; _aux < _len_ice0; _aux++) {
          free(ice[_aux].spec);
          }
          free(ice);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
