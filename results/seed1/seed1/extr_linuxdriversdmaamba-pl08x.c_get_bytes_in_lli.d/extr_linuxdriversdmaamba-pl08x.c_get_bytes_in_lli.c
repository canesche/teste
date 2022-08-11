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
typedef  int u32 ;
struct pl08x_phy_chan {scalar_t__ pl080s; scalar_t__ ftdmac020; } ;

/* Variables and functions */
 int FTDMAC020_LLI_SRC_WIDTH_MSK ; 
 int FTDMAC020_LLI_SRC_WIDTH_SHIFT ; 
 int FTDMAC020_LLI_TRANSFER_SIZE_MASK ; 
 int PL080S_CONTROL_TRANSFER_SIZE_MASK ; 
 size_t PL080S_LLI_CCTL2 ; 
 int PL080_CONTROL_SWIDTH_MASK ; 
 int PL080_CONTROL_SWIDTH_SHIFT ; 
 int PL080_CONTROL_TRANSFER_SIZE_MASK ; 
 size_t PL080_LLI_CCTL ; 
#define  PL080_WIDTH_16BIT 130 
#define  PL080_WIDTH_32BIT 129 
#define  PL080_WIDTH_8BIT 128 

__attribute__((used)) static u32 get_bytes_in_lli(struct pl08x_phy_chan *ch, const u32 *llis_va)
{
	u32 val;
	u32 bytes;

	if (ch->ftdmac020) {
		val = llis_va[PL080_LLI_CCTL];
		bytes = val & FTDMAC020_LLI_TRANSFER_SIZE_MASK;

		val = llis_va[PL080_LLI_CCTL];
		val &= FTDMAC020_LLI_SRC_WIDTH_MSK;
		val >>= FTDMAC020_LLI_SRC_WIDTH_SHIFT;
	} else if (ch->pl080s) {
		val = llis_va[PL080S_LLI_CCTL2];
		bytes = val & PL080S_CONTROL_TRANSFER_SIZE_MASK;

		val = llis_va[PL080_LLI_CCTL];
		val &= PL080_CONTROL_SWIDTH_MASK;
		val >>= PL080_CONTROL_SWIDTH_SHIFT;
	} else {
		/* Plain PL08x */
		val = llis_va[PL080_LLI_CCTL];
		bytes = val & PL080_CONTROL_TRANSFER_SIZE_MASK;

		val &= PL080_CONTROL_SWIDTH_MASK;
		val >>= PL080_CONTROL_SWIDTH_SHIFT;
	}

	switch (val) {
	case PL080_WIDTH_8BIT:
		break;
	case PL080_WIDTH_16BIT:
		bytes *= 2;
		break;
	case PL080_WIDTH_32BIT:
		bytes *= 4;
		break;
	}
	return bytes;
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
          int _len_ch0 = 1;
          struct pl08x_phy_chan * ch = (struct pl08x_phy_chan *) malloc(_len_ch0*sizeof(struct pl08x_phy_chan));
          for(int _i0 = 0; _i0 < _len_ch0; _i0++) {
            ch[_i0].pl080s = ((-2 * (next_i()%2)) + 1) * next_i();
        ch[_i0].ftdmac020 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_llis_va0 = 1;
          const int * llis_va = (const int *) malloc(_len_llis_va0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_llis_va0; _i0++) {
            llis_va[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_bytes_in_lli(ch,llis_va);
          printf("%d\n", benchRet); 
          free(ch);
          free(llis_va);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ch0 = 65025;
          struct pl08x_phy_chan * ch = (struct pl08x_phy_chan *) malloc(_len_ch0*sizeof(struct pl08x_phy_chan));
          for(int _i0 = 0; _i0 < _len_ch0; _i0++) {
            ch[_i0].pl080s = ((-2 * (next_i()%2)) + 1) * next_i();
        ch[_i0].ftdmac020 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_llis_va0 = 65025;
          const int * llis_va = (const int *) malloc(_len_llis_va0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_llis_va0; _i0++) {
            llis_va[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_bytes_in_lli(ch,llis_va);
          printf("%d\n", benchRet); 
          free(ch);
          free(llis_va);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ch0 = 100;
          struct pl08x_phy_chan * ch = (struct pl08x_phy_chan *) malloc(_len_ch0*sizeof(struct pl08x_phy_chan));
          for(int _i0 = 0; _i0 < _len_ch0; _i0++) {
            ch[_i0].pl080s = ((-2 * (next_i()%2)) + 1) * next_i();
        ch[_i0].ftdmac020 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_llis_va0 = 100;
          const int * llis_va = (const int *) malloc(_len_llis_va0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_llis_va0; _i0++) {
            llis_va[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_bytes_in_lli(ch,llis_va);
          printf("%d\n", benchRet); 
          free(ch);
          free(llis_va);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
