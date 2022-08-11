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
typedef  int u32 ;
typedef  int u16 ;
struct us_data {scalar_t__ extra; } ;
struct TYPE_2__ {scalar_t__ IsMMC; scalar_t__ HiCapacity; } ;
struct ene_ub6250_info {int SD_READ_BL_LEN; int HC_C_SIZE; int SD_C_SIZE; int SD_C_SIZE_MULT; int SD_Block_Mult; TYPE_1__ SD_Status; } ;

/* Variables and functions */
 scalar_t__ SD_BLOCK_LEN ; 
 int USB_STOR_TRANSPORT_GOOD ; 

__attribute__((used)) static int ene_get_card_status(struct us_data *us, u8 *buf)
{
	u16 tmpreg;
	u32 reg4b;
	struct ene_ub6250_info *info = (struct ene_ub6250_info *) us->extra;

	/*usb_stor_dbg(us, "transport --- ENE_ReadSDReg\n");*/
	reg4b = *(u32 *)&buf[0x18];
	info->SD_READ_BL_LEN = (u8)((reg4b >> 8) & 0x0f);

	tmpreg = (u16) reg4b;
	reg4b = *(u32 *)(&buf[0x14]);
	if (info->SD_Status.HiCapacity && !info->SD_Status.IsMMC)
		info->HC_C_SIZE = (reg4b >> 8) & 0x3fffff;

	info->SD_C_SIZE = ((tmpreg & 0x03) << 10) | (u16)(reg4b >> 22);
	info->SD_C_SIZE_MULT = (u8)(reg4b >> 7)  & 0x07;
	if (info->SD_Status.HiCapacity && info->SD_Status.IsMMC)
		info->HC_C_SIZE = *(u32 *)(&buf[0x100]);

	if (info->SD_READ_BL_LEN > SD_BLOCK_LEN) {
		info->SD_Block_Mult = 1 << (info->SD_READ_BL_LEN-SD_BLOCK_LEN);
		info->SD_READ_BL_LEN = SD_BLOCK_LEN;
	} else {
		info->SD_Block_Mult = 1;
	}

	return USB_STOR_TRANSPORT_GOOD;
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
          int _len_us0 = 1;
          struct us_data * us = (struct us_data *) malloc(_len_us0*sizeof(struct us_data));
          for(int _i0 = 0; _i0 < _len_us0; _i0++) {
            us[_i0].extra = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 1;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ene_get_card_status(us,buf);
          printf("%d\n", benchRet); 
          free(us);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_us0 = 65025;
          struct us_data * us = (struct us_data *) malloc(_len_us0*sizeof(struct us_data));
          for(int _i0 = 0; _i0 < _len_us0; _i0++) {
            us[_i0].extra = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 65025;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ene_get_card_status(us,buf);
          printf("%d\n", benchRet); 
          free(us);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_us0 = 100;
          struct us_data * us = (struct us_data *) malloc(_len_us0*sizeof(struct us_data));
          for(int _i0 = 0; _i0 < _len_us0; _i0++) {
            us[_i0].extra = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 100;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ene_get_card_status(us,buf);
          printf("%d\n", benchRet); 
          free(us);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
