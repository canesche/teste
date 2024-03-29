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
typedef  int /*<<< orphan*/  u8 ;
struct rtsx_chip {int card_ready; int* lun2card; } ;

/* Variables and functions */
 int MS_CARD ; 
 int SD_CARD ; 
 int XD_CARD ; 

u8 get_lun_card(struct rtsx_chip *chip, unsigned int lun)
{
	if ((chip->card_ready & chip->lun2card[lun]) == XD_CARD)
		return (u8)XD_CARD;
	else if ((chip->card_ready & chip->lun2card[lun]) == SD_CARD)
		return (u8)SD_CARD;
	else if ((chip->card_ready & chip->lun2card[lun]) == MS_CARD)
		return (u8)MS_CARD;

	return 0;
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
            chip[_i0].card_ready = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chip__i0__lun2card0 = 1;
          chip[_i0].lun2card = (int *) malloc(_len_chip__i0__lun2card0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chip__i0__lun2card0; _j0++) {
            chip[_i0].lun2card[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_lun_card(chip,lun);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].lun2card);
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
            chip[_i0].card_ready = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chip__i0__lun2card0 = 1;
          chip[_i0].lun2card = (int *) malloc(_len_chip__i0__lun2card0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chip__i0__lun2card0; _j0++) {
            chip[_i0].lun2card[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_lun_card(chip,lun);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].lun2card);
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
            chip[_i0].card_ready = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chip__i0__lun2card0 = 1;
          chip[_i0].lun2card = (int *) malloc(_len_chip__i0__lun2card0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chip__i0__lun2card0; _j0++) {
            chip[_i0].lun2card[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_lun_card(chip,lun);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].lun2card);
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
