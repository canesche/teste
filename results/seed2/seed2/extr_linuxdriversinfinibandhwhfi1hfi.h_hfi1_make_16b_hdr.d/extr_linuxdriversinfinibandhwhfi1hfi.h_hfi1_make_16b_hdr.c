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
typedef  int u8 ;
typedef  int u32 ;
typedef  int u16 ;
struct hfi1_16b_header {int* lrh; } ;

/* Variables and functions */
 int OPA_16B_BECN_MASK ; 
 int OPA_16B_BECN_SHIFT ; 
 int OPA_16B_DLID_HIGH_SHIFT ; 
 int OPA_16B_DLID_MASK ; 
 int OPA_16B_DLID_SHIFT ; 
 int OPA_16B_FECN_MASK ; 
 int OPA_16B_FECN_SHIFT ; 
 int OPA_16B_L4_MASK ; 
 int OPA_16B_LEN_MASK ; 
 int OPA_16B_LEN_SHIFT ; 
 int OPA_16B_LID_MASK ; 
 int OPA_16B_PKEY_MASK ; 
 int OPA_16B_PKEY_SHIFT ; 
 int OPA_16B_SC_MASK ; 
 int OPA_16B_SC_SHIFT ; 
 int OPA_16B_SLID_HIGH_SHIFT ; 
 int OPA_16B_SLID_MASK ; 
 int OPA_16B_SLID_SHIFT ; 

__attribute__((used)) static inline void hfi1_make_16b_hdr(struct hfi1_16b_header *hdr,
				     u32 slid, u32 dlid,
				     u16 len, u16 pkey,
				     bool becn, bool fecn, u8 l4,
				     u8 sc)
{
	u32 lrh0 = 0;
	u32 lrh1 = 0x40000000;
	u32 lrh2 = 0;
	u32 lrh3 = 0;

	lrh0 = (lrh0 & ~OPA_16B_BECN_MASK) | (becn << OPA_16B_BECN_SHIFT);
	lrh0 = (lrh0 & ~OPA_16B_LEN_MASK) | (len << OPA_16B_LEN_SHIFT);
	lrh0 = (lrh0 & ~OPA_16B_LID_MASK)  | (slid & OPA_16B_LID_MASK);
	lrh1 = (lrh1 & ~OPA_16B_FECN_MASK) | (fecn << OPA_16B_FECN_SHIFT);
	lrh1 = (lrh1 & ~OPA_16B_SC_MASK) | (sc << OPA_16B_SC_SHIFT);
	lrh1 = (lrh1 & ~OPA_16B_LID_MASK) | (dlid & OPA_16B_LID_MASK);
	lrh2 = (lrh2 & ~OPA_16B_SLID_MASK) |
		((slid >> OPA_16B_SLID_SHIFT) << OPA_16B_SLID_HIGH_SHIFT);
	lrh2 = (lrh2 & ~OPA_16B_DLID_MASK) |
		((dlid >> OPA_16B_DLID_SHIFT) << OPA_16B_DLID_HIGH_SHIFT);
	lrh2 = (lrh2 & ~OPA_16B_PKEY_MASK) | ((u32)pkey << OPA_16B_PKEY_SHIFT);
	lrh2 = (lrh2 & ~OPA_16B_L4_MASK) | l4;

	hdr->lrh[0] = lrh0;
	hdr->lrh[1] = lrh1;
	hdr->lrh[2] = lrh2;
	hdr->lrh[3] = lrh3;
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
          int slid = 100;
          int dlid = 100;
          int len = 100;
          int pkey = 100;
          int becn = 100;
          int fecn = 100;
          int l4 = 100;
          int sc = 100;
          int _len_hdr0 = 1;
          struct hfi1_16b_header * hdr = (struct hfi1_16b_header *) malloc(_len_hdr0*sizeof(struct hfi1_16b_header));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
              int _len_hdr__i0__lrh0 = 1;
          hdr[_i0].lrh = (int *) malloc(_len_hdr__i0__lrh0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hdr__i0__lrh0; _j0++) {
            hdr[_i0].lrh[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          hfi1_make_16b_hdr(hdr,slid,dlid,len,pkey,becn,fecn,l4,sc);
          for(int _aux = 0; _aux < _len_hdr0; _aux++) {
          free(hdr[_aux].lrh);
          }
          free(hdr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int slid = 255;
          int dlid = 255;
          int len = 255;
          int pkey = 255;
          int becn = 255;
          int fecn = 255;
          int l4 = 255;
          int sc = 255;
          int _len_hdr0 = 65025;
          struct hfi1_16b_header * hdr = (struct hfi1_16b_header *) malloc(_len_hdr0*sizeof(struct hfi1_16b_header));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
              int _len_hdr__i0__lrh0 = 1;
          hdr[_i0].lrh = (int *) malloc(_len_hdr__i0__lrh0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hdr__i0__lrh0; _j0++) {
            hdr[_i0].lrh[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          hfi1_make_16b_hdr(hdr,slid,dlid,len,pkey,becn,fecn,l4,sc);
          for(int _aux = 0; _aux < _len_hdr0; _aux++) {
          free(hdr[_aux].lrh);
          }
          free(hdr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int slid = 10;
          int dlid = 10;
          int len = 10;
          int pkey = 10;
          int becn = 10;
          int fecn = 10;
          int l4 = 10;
          int sc = 10;
          int _len_hdr0 = 100;
          struct hfi1_16b_header * hdr = (struct hfi1_16b_header *) malloc(_len_hdr0*sizeof(struct hfi1_16b_header));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
              int _len_hdr__i0__lrh0 = 1;
          hdr[_i0].lrh = (int *) malloc(_len_hdr__i0__lrh0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hdr__i0__lrh0; _j0++) {
            hdr[_i0].lrh[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          hfi1_make_16b_hdr(hdr,slid,dlid,len,pkey,becn,fecn,l4,sc);
          for(int _aux = 0; _aux < _len_hdr0; _aux++) {
          free(hdr[_aux].lrh);
          }
          free(hdr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
