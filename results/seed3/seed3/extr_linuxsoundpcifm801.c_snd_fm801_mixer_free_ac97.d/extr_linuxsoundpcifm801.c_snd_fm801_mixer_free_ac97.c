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
struct snd_ac97 {scalar_t__ num; struct fm801* private_data; } ;
struct fm801 {int /*<<< orphan*/ * ac97_sec; int /*<<< orphan*/ * ac97; } ;

/* Variables and functions */

__attribute__((used)) static void snd_fm801_mixer_free_ac97(struct snd_ac97 *ac97)
{
	struct fm801 *chip = ac97->private_data;
	if (ac97->num == 0) {
		chip->ac97 = NULL;
	} else {
		chip->ac97_sec = NULL;
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
          int _len_ac970 = 1;
          struct snd_ac97 * ac97 = (struct snd_ac97 *) malloc(_len_ac970*sizeof(struct snd_ac97));
          for(int _i0 = 0; _i0 < _len_ac970; _i0++) {
            ac97[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ac97__i0__private_data0 = 1;
          ac97[_i0].private_data = (struct fm801 *) malloc(_len_ac97__i0__private_data0*sizeof(struct fm801));
          for(int _j0 = 0; _j0 < _len_ac97__i0__private_data0; _j0++) {
              int _len_ac97__i0__private_data_ac97_sec0 = 1;
          ac97[_i0].private_data->ac97_sec = (int *) malloc(_len_ac97__i0__private_data_ac97_sec0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ac97__i0__private_data_ac97_sec0; _j0++) {
            ac97[_i0].private_data->ac97_sec[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ac97__i0__private_data_ac970 = 1;
          ac97[_i0].private_data->ac97 = (int *) malloc(_len_ac97__i0__private_data_ac970*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ac97__i0__private_data_ac970; _j0++) {
            ac97[_i0].private_data->ac97[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          snd_fm801_mixer_free_ac97(ac97);
          for(int _aux = 0; _aux < _len_ac970; _aux++) {
          free(ac97[_aux].private_data);
          }
          free(ac97);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ac970 = 65025;
          struct snd_ac97 * ac97 = (struct snd_ac97 *) malloc(_len_ac970*sizeof(struct snd_ac97));
          for(int _i0 = 0; _i0 < _len_ac970; _i0++) {
            ac97[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ac97__i0__private_data0 = 1;
          ac97[_i0].private_data = (struct fm801 *) malloc(_len_ac97__i0__private_data0*sizeof(struct fm801));
          for(int _j0 = 0; _j0 < _len_ac97__i0__private_data0; _j0++) {
              int _len_ac97__i0__private_data_ac97_sec0 = 1;
          ac97[_i0].private_data->ac97_sec = (int *) malloc(_len_ac97__i0__private_data_ac97_sec0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ac97__i0__private_data_ac97_sec0; _j0++) {
            ac97[_i0].private_data->ac97_sec[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ac97__i0__private_data_ac970 = 1;
          ac97[_i0].private_data->ac97 = (int *) malloc(_len_ac97__i0__private_data_ac970*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ac97__i0__private_data_ac970; _j0++) {
            ac97[_i0].private_data->ac97[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          snd_fm801_mixer_free_ac97(ac97);
          for(int _aux = 0; _aux < _len_ac970; _aux++) {
          free(ac97[_aux].private_data);
          }
          free(ac97);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ac970 = 100;
          struct snd_ac97 * ac97 = (struct snd_ac97 *) malloc(_len_ac970*sizeof(struct snd_ac97));
          for(int _i0 = 0; _i0 < _len_ac970; _i0++) {
            ac97[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ac97__i0__private_data0 = 1;
          ac97[_i0].private_data = (struct fm801 *) malloc(_len_ac97__i0__private_data0*sizeof(struct fm801));
          for(int _j0 = 0; _j0 < _len_ac97__i0__private_data0; _j0++) {
              int _len_ac97__i0__private_data_ac97_sec0 = 1;
          ac97[_i0].private_data->ac97_sec = (int *) malloc(_len_ac97__i0__private_data_ac97_sec0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ac97__i0__private_data_ac97_sec0; _j0++) {
            ac97[_i0].private_data->ac97_sec[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ac97__i0__private_data_ac970 = 1;
          ac97[_i0].private_data->ac97 = (int *) malloc(_len_ac97__i0__private_data_ac970*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ac97__i0__private_data_ac970; _j0++) {
            ac97[_i0].private_data->ac97[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          snd_fm801_mixer_free_ac97(ac97);
          for(int _aux = 0; _aux < _len_ac970; _aux++) {
          free(ac97[_aux].private_data);
          }
          free(ac97);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
