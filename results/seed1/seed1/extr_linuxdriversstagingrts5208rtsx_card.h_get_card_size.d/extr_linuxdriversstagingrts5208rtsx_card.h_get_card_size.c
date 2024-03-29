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
typedef  int /*<<< orphan*/  u32 ;
struct rtsx_chip {int /*<<< orphan*/ * capacity; } ;

/* Variables and functions */

__attribute__((used)) static inline u32 get_card_size(struct rtsx_chip *chip, unsigned int lun)
{
#ifdef SUPPORT_SD_LOCK
	struct sd_info *sd_card = &chip->sd_card;

	if ((get_lun_card(chip, lun) == SD_CARD) &&
	    (sd_card->sd_lock_status & SD_LOCKED))
		return 0;

	return chip->capacity[lun];
#else
	return chip->capacity[lun];
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
          unsigned int lun = 100;
          int _len_chip0 = 1;
          struct rtsx_chip * chip = (struct rtsx_chip *) malloc(_len_chip0*sizeof(struct rtsx_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              int _len_chip__i0__capacity0 = 1;
          chip[_i0].capacity = (int *) malloc(_len_chip__i0__capacity0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chip__i0__capacity0; _j0++) {
            chip[_i0].capacity[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_card_size(chip,lun);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].capacity);
          }
          free(chip);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int lun = 255;
          int _len_chip0 = 65025;
          struct rtsx_chip * chip = (struct rtsx_chip *) malloc(_len_chip0*sizeof(struct rtsx_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              int _len_chip__i0__capacity0 = 1;
          chip[_i0].capacity = (int *) malloc(_len_chip__i0__capacity0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chip__i0__capacity0; _j0++) {
            chip[_i0].capacity[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_card_size(chip,lun);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].capacity);
          }
          free(chip);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int lun = 10;
          int _len_chip0 = 100;
          struct rtsx_chip * chip = (struct rtsx_chip *) malloc(_len_chip0*sizeof(struct rtsx_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              int _len_chip__i0__capacity0 = 1;
          chip[_i0].capacity = (int *) malloc(_len_chip__i0__capacity0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chip__i0__capacity0; _j0++) {
            chip[_i0].capacity[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_card_size(chip,lun);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].capacity);
          }
          free(chip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
