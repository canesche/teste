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
struct rtsx_pcr {int flags; unsigned int const card_exist; } ;

/* Variables and functions */
 int EIO ; 
#define  MS_EXIST 131 
 int PCR_MS_PMOS ; 
#define  RTSX_MS_CARD 130 
#define  RTSX_SD_CARD 129 
#define  SD_EXIST 128 

int rtsx_pci_card_exclusive_check(struct rtsx_pcr *pcr, int card)
{
	static const unsigned int cd_mask[] = {
		[RTSX_SD_CARD] = SD_EXIST,
		[RTSX_MS_CARD] = MS_EXIST
	};

	if (!(pcr->flags & PCR_MS_PMOS)) {
		/* When using single PMOS, accessing card is not permitted
		 * if the existing card is not the designated one.
		 */
		if (pcr->card_exist & (~cd_mask[card]))
			return -EIO;
	}

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
          int card = 100;
          int _len_pcr0 = 1;
          struct rtsx_pcr * pcr = (struct rtsx_pcr *) malloc(_len_pcr0*sizeof(struct rtsx_pcr));
          for(int _i0 = 0; _i0 < _len_pcr0; _i0++) {
            pcr[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        pcr[_i0].card_exist = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rtsx_pci_card_exclusive_check(pcr,card);
          printf("%d\n", benchRet); 
          free(pcr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int card = 255;
          int _len_pcr0 = 65025;
          struct rtsx_pcr * pcr = (struct rtsx_pcr *) malloc(_len_pcr0*sizeof(struct rtsx_pcr));
          for(int _i0 = 0; _i0 < _len_pcr0; _i0++) {
            pcr[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        pcr[_i0].card_exist = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rtsx_pci_card_exclusive_check(pcr,card);
          printf("%d\n", benchRet); 
          free(pcr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int card = 10;
          int _len_pcr0 = 100;
          struct rtsx_pcr * pcr = (struct rtsx_pcr *) malloc(_len_pcr0*sizeof(struct rtsx_pcr));
          for(int _i0 = 0; _i0 < _len_pcr0; _i0++) {
            pcr[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        pcr[_i0].card_exist = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rtsx_pci_card_exclusive_check(pcr,card);
          printf("%d\n", benchRet); 
          free(pcr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
