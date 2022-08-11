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
struct TYPE_2__ {unsigned char* status; } ;
struct stm32_sai_sub_data {TYPE_1__ iec958; } ;

/* Variables and functions */
 unsigned char IEC958_AES0_CON_EMPHASIS_NONE ; 
 unsigned char IEC958_AES0_CON_NOT_COPYRIGHT ; 
 unsigned char IEC958_AES1_CON_GENERAL ; 
 unsigned char IEC958_AES2_CON_CHANNEL_UNSPEC ; 
 unsigned char IEC958_AES2_CON_SOURCE_UNSPEC ; 
 unsigned char IEC958_AES3_CON_CLOCK_1000PPM ; 
 unsigned char IEC958_AES3_CON_FS_NOTID ; 

__attribute__((used)) static void stm32_sai_init_iec958_status(struct stm32_sai_sub_data *sai)
{
	unsigned char *cs = sai->iec958.status;

	cs[0] = IEC958_AES0_CON_NOT_COPYRIGHT | IEC958_AES0_CON_EMPHASIS_NONE;
	cs[1] = IEC958_AES1_CON_GENERAL;
	cs[2] = IEC958_AES2_CON_SOURCE_UNSPEC | IEC958_AES2_CON_CHANNEL_UNSPEC;
	cs[3] = IEC958_AES3_CON_CLOCK_1000PPM | IEC958_AES3_CON_FS_NOTID;
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
          int _len_sai0 = 1;
          struct stm32_sai_sub_data * sai = (struct stm32_sai_sub_data *) malloc(_len_sai0*sizeof(struct stm32_sai_sub_data));
          for(int _i0 = 0; _i0 < _len_sai0; _i0++) {
              int _len_sai__i0__iec958_status0 = 1;
          sai[_i0].iec958.status = (unsigned char *) malloc(_len_sai__i0__iec958_status0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_sai__i0__iec958_status0; _j0++) {
            sai[_i0].iec958.status[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          stm32_sai_init_iec958_status(sai);
          free(sai);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sai0 = 65025;
          struct stm32_sai_sub_data * sai = (struct stm32_sai_sub_data *) malloc(_len_sai0*sizeof(struct stm32_sai_sub_data));
          for(int _i0 = 0; _i0 < _len_sai0; _i0++) {
              int _len_sai__i0__iec958_status0 = 1;
          sai[_i0].iec958.status = (unsigned char *) malloc(_len_sai__i0__iec958_status0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_sai__i0__iec958_status0; _j0++) {
            sai[_i0].iec958.status[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          stm32_sai_init_iec958_status(sai);
          free(sai);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sai0 = 100;
          struct stm32_sai_sub_data * sai = (struct stm32_sai_sub_data *) malloc(_len_sai0*sizeof(struct stm32_sai_sub_data));
          for(int _i0 = 0; _i0 < _len_sai0; _i0++) {
              int _len_sai__i0__iec958_status0 = 1;
          sai[_i0].iec958.status = (unsigned char *) malloc(_len_sai__i0__iec958_status0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_sai__i0__iec958_status0; _j0++) {
            sai[_i0].iec958.status[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          stm32_sai_init_iec958_status(sai);
          free(sai);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
