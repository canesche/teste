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
typedef  void* u8 ;
struct TYPE_2__ {int willing; void* pfccap; void* pfcenable; } ;
struct i40e_dcbx_config {TYPE_1__ pfc; } ;
struct i40e_cee_feat_tlv {void** tlvinfo; int en_will_err; } ;

/* Variables and functions */
 int I40E_CEE_FEAT_TLV_WILLING_MASK ; 

__attribute__((used)) static void i40e_parse_cee_pfccfg_tlv(struct i40e_cee_feat_tlv *tlv,
				      struct i40e_dcbx_config *dcbcfg)
{
	u8 *buf = tlv->tlvinfo;

	if (tlv->en_will_err & I40E_CEE_FEAT_TLV_WILLING_MASK)
		dcbcfg->pfc.willing = 1;

	/* ------------------------
	 * | PFC Enable | PFC TCs |
	 * ------------------------
	 * | 1 octet    | 1 octet |
	 */
	dcbcfg->pfc.pfcenable = buf[0];
	dcbcfg->pfc.pfccap = buf[1];
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
          int _len_tlv0 = 1;
          struct i40e_cee_feat_tlv * tlv = (struct i40e_cee_feat_tlv *) malloc(_len_tlv0*sizeof(struct i40e_cee_feat_tlv));
          for(int _i0 = 0; _i0 < _len_tlv0; _i0++) {
              int _len_tlv__i0__tlvinfo0 = 1;
          tlv[_i0].tlvinfo = (void **) malloc(_len_tlv__i0__tlvinfo0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_tlv__i0__tlvinfo0; _j0++) {
          }
        tlv[_i0].en_will_err = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dcbcfg0 = 1;
          struct i40e_dcbx_config * dcbcfg = (struct i40e_dcbx_config *) malloc(_len_dcbcfg0*sizeof(struct i40e_dcbx_config));
          for(int _i0 = 0; _i0 < _len_dcbcfg0; _i0++) {
            dcbcfg[_i0].pfc.willing = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          i40e_parse_cee_pfccfg_tlv(tlv,dcbcfg);
          free(tlv);
          free(dcbcfg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tlv0 = 65025;
          struct i40e_cee_feat_tlv * tlv = (struct i40e_cee_feat_tlv *) malloc(_len_tlv0*sizeof(struct i40e_cee_feat_tlv));
          for(int _i0 = 0; _i0 < _len_tlv0; _i0++) {
              int _len_tlv__i0__tlvinfo0 = 1;
          tlv[_i0].tlvinfo = (void **) malloc(_len_tlv__i0__tlvinfo0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_tlv__i0__tlvinfo0; _j0++) {
          }
        tlv[_i0].en_will_err = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dcbcfg0 = 65025;
          struct i40e_dcbx_config * dcbcfg = (struct i40e_dcbx_config *) malloc(_len_dcbcfg0*sizeof(struct i40e_dcbx_config));
          for(int _i0 = 0; _i0 < _len_dcbcfg0; _i0++) {
            dcbcfg[_i0].pfc.willing = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          i40e_parse_cee_pfccfg_tlv(tlv,dcbcfg);
          free(tlv);
          free(dcbcfg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tlv0 = 100;
          struct i40e_cee_feat_tlv * tlv = (struct i40e_cee_feat_tlv *) malloc(_len_tlv0*sizeof(struct i40e_cee_feat_tlv));
          for(int _i0 = 0; _i0 < _len_tlv0; _i0++) {
              int _len_tlv__i0__tlvinfo0 = 1;
          tlv[_i0].tlvinfo = (void **) malloc(_len_tlv__i0__tlvinfo0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_tlv__i0__tlvinfo0; _j0++) {
          }
        tlv[_i0].en_will_err = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dcbcfg0 = 100;
          struct i40e_dcbx_config * dcbcfg = (struct i40e_dcbx_config *) malloc(_len_dcbcfg0*sizeof(struct i40e_dcbx_config));
          for(int _i0 = 0; _i0 < _len_dcbcfg0; _i0++) {
            dcbcfg[_i0].pfc.willing = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          i40e_parse_cee_pfccfg_tlv(tlv,dcbcfg);
          free(tlv);
          free(dcbcfg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
