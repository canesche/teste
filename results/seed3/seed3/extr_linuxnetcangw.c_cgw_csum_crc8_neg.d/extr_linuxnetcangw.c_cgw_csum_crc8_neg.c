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
typedef  size_t u8 ;
struct cgw_csum_crc8 {size_t init_crc_val; int from_idx; int to_idx; size_t* crctab; int profile; size_t* profile_data; size_t result_idx; size_t final_xor_val; } ;
struct can_frame {size_t* data; int can_id; } ;

/* Variables and functions */
#define  CGW_CRC8PRF_16U8 130 
#define  CGW_CRC8PRF_1U8 129 
#define  CGW_CRC8PRF_SFFID_XOR 128 

__attribute__((used)) static void cgw_csum_crc8_neg(struct can_frame *cf, struct cgw_csum_crc8 *crc8)
{
	u8 crc = crc8->init_crc_val;
	int i;

	for (i = crc8->from_idx; i >= crc8->to_idx; i--)
		crc = crc8->crctab[crc^cf->data[i]];

	switch (crc8->profile) {

	case CGW_CRC8PRF_1U8:
		crc = crc8->crctab[crc^crc8->profile_data[0]];
		break;

	case  CGW_CRC8PRF_16U8:
		crc = crc8->crctab[crc^crc8->profile_data[cf->data[1] & 0xF]];
		break;

	case CGW_CRC8PRF_SFFID_XOR:
		crc = crc8->crctab[crc^(cf->can_id & 0xFF)^
				   (cf->can_id >> 8 & 0xFF)];
		break;
	}

	cf->data[crc8->result_idx] = crc^crc8->final_xor_val;
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
          int _len_cf0 = 1;
          struct can_frame * cf = (struct can_frame *) malloc(_len_cf0*sizeof(struct can_frame));
          for(int _i0 = 0; _i0 < _len_cf0; _i0++) {
              int _len_cf__i0__data0 = 1;
          cf[_i0].data = (unsigned long *) malloc(_len_cf__i0__data0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_cf__i0__data0; _j0++) {
            cf[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cf[_i0].can_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_crc80 = 1;
          struct cgw_csum_crc8 * crc8 = (struct cgw_csum_crc8 *) malloc(_len_crc80*sizeof(struct cgw_csum_crc8));
          for(int _i0 = 0; _i0 < _len_crc80; _i0++) {
            crc8[_i0].init_crc_val = ((-2 * (next_i()%2)) + 1) * next_i();
        crc8[_i0].from_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        crc8[_i0].to_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_crc8__i0__crctab0 = 1;
          crc8[_i0].crctab = (unsigned long *) malloc(_len_crc8__i0__crctab0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_crc8__i0__crctab0; _j0++) {
            crc8[_i0].crctab[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        crc8[_i0].profile = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_crc8__i0__profile_data0 = 1;
          crc8[_i0].profile_data = (unsigned long *) malloc(_len_crc8__i0__profile_data0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_crc8__i0__profile_data0; _j0++) {
            crc8[_i0].profile_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        crc8[_i0].result_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        crc8[_i0].final_xor_val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cgw_csum_crc8_neg(cf,crc8);
          for(int _aux = 0; _aux < _len_cf0; _aux++) {
          free(cf[_aux].data);
          }
          free(cf);
          for(int _aux = 0; _aux < _len_crc80; _aux++) {
          free(crc8[_aux].crctab);
          }
          for(int _aux = 0; _aux < _len_crc80; _aux++) {
          free(crc8[_aux].profile_data);
          }
          free(crc8);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cf0 = 65025;
          struct can_frame * cf = (struct can_frame *) malloc(_len_cf0*sizeof(struct can_frame));
          for(int _i0 = 0; _i0 < _len_cf0; _i0++) {
              int _len_cf__i0__data0 = 1;
          cf[_i0].data = (unsigned long *) malloc(_len_cf__i0__data0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_cf__i0__data0; _j0++) {
            cf[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cf[_i0].can_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_crc80 = 65025;
          struct cgw_csum_crc8 * crc8 = (struct cgw_csum_crc8 *) malloc(_len_crc80*sizeof(struct cgw_csum_crc8));
          for(int _i0 = 0; _i0 < _len_crc80; _i0++) {
            crc8[_i0].init_crc_val = ((-2 * (next_i()%2)) + 1) * next_i();
        crc8[_i0].from_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        crc8[_i0].to_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_crc8__i0__crctab0 = 1;
          crc8[_i0].crctab = (unsigned long *) malloc(_len_crc8__i0__crctab0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_crc8__i0__crctab0; _j0++) {
            crc8[_i0].crctab[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        crc8[_i0].profile = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_crc8__i0__profile_data0 = 1;
          crc8[_i0].profile_data = (unsigned long *) malloc(_len_crc8__i0__profile_data0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_crc8__i0__profile_data0; _j0++) {
            crc8[_i0].profile_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        crc8[_i0].result_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        crc8[_i0].final_xor_val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cgw_csum_crc8_neg(cf,crc8);
          for(int _aux = 0; _aux < _len_cf0; _aux++) {
          free(cf[_aux].data);
          }
          free(cf);
          for(int _aux = 0; _aux < _len_crc80; _aux++) {
          free(crc8[_aux].crctab);
          }
          for(int _aux = 0; _aux < _len_crc80; _aux++) {
          free(crc8[_aux].profile_data);
          }
          free(crc8);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cf0 = 100;
          struct can_frame * cf = (struct can_frame *) malloc(_len_cf0*sizeof(struct can_frame));
          for(int _i0 = 0; _i0 < _len_cf0; _i0++) {
              int _len_cf__i0__data0 = 1;
          cf[_i0].data = (unsigned long *) malloc(_len_cf__i0__data0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_cf__i0__data0; _j0++) {
            cf[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cf[_i0].can_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_crc80 = 100;
          struct cgw_csum_crc8 * crc8 = (struct cgw_csum_crc8 *) malloc(_len_crc80*sizeof(struct cgw_csum_crc8));
          for(int _i0 = 0; _i0 < _len_crc80; _i0++) {
            crc8[_i0].init_crc_val = ((-2 * (next_i()%2)) + 1) * next_i();
        crc8[_i0].from_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        crc8[_i0].to_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_crc8__i0__crctab0 = 1;
          crc8[_i0].crctab = (unsigned long *) malloc(_len_crc8__i0__crctab0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_crc8__i0__crctab0; _j0++) {
            crc8[_i0].crctab[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        crc8[_i0].profile = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_crc8__i0__profile_data0 = 1;
          crc8[_i0].profile_data = (unsigned long *) malloc(_len_crc8__i0__profile_data0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_crc8__i0__profile_data0; _j0++) {
            crc8[_i0].profile_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        crc8[_i0].result_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        crc8[_i0].final_xor_val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cgw_csum_crc8_neg(cf,crc8);
          for(int _aux = 0; _aux < _len_cf0; _aux++) {
          free(cf[_aux].data);
          }
          free(cf);
          for(int _aux = 0; _aux < _len_crc80; _aux++) {
          free(crc8[_aux].crctab);
          }
          for(int _aux = 0; _aux < _len_crc80; _aux++) {
          free(crc8[_aux].profile_data);
          }
          free(crc8);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
