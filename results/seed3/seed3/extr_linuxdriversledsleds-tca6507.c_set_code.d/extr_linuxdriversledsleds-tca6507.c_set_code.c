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
struct tca6507_chip {int* reg_file; int reg_set; } ;

/* Variables and functions */

__attribute__((used)) static void set_code(struct tca6507_chip *tca, int reg, int bank, int new)
{
	int mask = 0xF;
	int n;
	if (bank) {
		mask <<= 4;
		new <<= 4;
	}
	n = tca->reg_file[reg] & ~mask;
	n |= new;
	if (tca->reg_file[reg] != n) {
		tca->reg_file[reg] = n;
		tca->reg_set |= 1 << reg;
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
          int reg = 100;
          int bank = 100;
          int new = 100;
          int _len_tca0 = 1;
          struct tca6507_chip * tca = (struct tca6507_chip *) malloc(_len_tca0*sizeof(struct tca6507_chip));
          for(int _i0 = 0; _i0 < _len_tca0; _i0++) {
              int _len_tca__i0__reg_file0 = 1;
          tca[_i0].reg_file = (int *) malloc(_len_tca__i0__reg_file0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tca__i0__reg_file0; _j0++) {
            tca[_i0].reg_file[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tca[_i0].reg_set = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_code(tca,reg,bank,new);
          for(int _aux = 0; _aux < _len_tca0; _aux++) {
          free(tca[_aux].reg_file);
          }
          free(tca);
        
        break;
    }
    // big-arr
    case 1:
    {
          int reg = 255;
          int bank = 255;
          int new = 255;
          int _len_tca0 = 65025;
          struct tca6507_chip * tca = (struct tca6507_chip *) malloc(_len_tca0*sizeof(struct tca6507_chip));
          for(int _i0 = 0; _i0 < _len_tca0; _i0++) {
              int _len_tca__i0__reg_file0 = 1;
          tca[_i0].reg_file = (int *) malloc(_len_tca__i0__reg_file0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tca__i0__reg_file0; _j0++) {
            tca[_i0].reg_file[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tca[_i0].reg_set = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_code(tca,reg,bank,new);
          for(int _aux = 0; _aux < _len_tca0; _aux++) {
          free(tca[_aux].reg_file);
          }
          free(tca);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int reg = 10;
          int bank = 10;
          int new = 10;
          int _len_tca0 = 100;
          struct tca6507_chip * tca = (struct tca6507_chip *) malloc(_len_tca0*sizeof(struct tca6507_chip));
          for(int _i0 = 0; _i0 < _len_tca0; _i0++) {
              int _len_tca__i0__reg_file0 = 1;
          tca[_i0].reg_file = (int *) malloc(_len_tca__i0__reg_file0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tca__i0__reg_file0; _j0++) {
            tca[_i0].reg_file[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tca[_i0].reg_set = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_code(tca,reg,bank,new);
          for(int _aux = 0; _aux < _len_tca0; _aux++) {
          free(tca[_aux].reg_file);
          }
          free(tca);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
