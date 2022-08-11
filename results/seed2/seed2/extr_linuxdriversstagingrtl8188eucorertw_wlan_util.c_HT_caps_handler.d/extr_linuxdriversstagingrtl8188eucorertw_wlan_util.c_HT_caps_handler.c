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
struct ndis_802_11_var_ie {unsigned int Length; int* data; } ;
struct ht_priv {int /*<<< orphan*/  ht_option; } ;
struct mlme_priv {struct ht_priv htpriv; } ;
struct TYPE_2__ {int ampdu_params_info; int /*<<< orphan*/  mcs; } ;
struct mlme_ext_info {int HT_caps_enable; TYPE_1__ HT_caps; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_priv mlmepriv; struct mlme_ext_priv mlmeextpriv; } ;

/* Variables and functions */
 int* MCS_rate_1R ; 

void HT_caps_handler(struct adapter *padapter, struct ndis_802_11_var_ie *pIE)
{
	unsigned int	i;
	u8	max_AMPDU_len, min_MPDU_spacing;
	struct mlme_ext_priv	*pmlmeext = &padapter->mlmeextpriv;
	struct mlme_ext_info	*pmlmeinfo = &(pmlmeext->mlmext_info);
	struct mlme_priv		*pmlmepriv = &padapter->mlmepriv;
	struct ht_priv			*phtpriv = &pmlmepriv->htpriv;
	u8 *HT_cap = (u8 *)(&pmlmeinfo->HT_caps);

	if (!pIE)
		return;

	if (!phtpriv->ht_option)
		return;

	pmlmeinfo->HT_caps_enable = 1;

	for (i = 0; i < (pIE->Length); i++) {
		if (i != 2) {
			/*	Got the endian issue here. */
			HT_cap[i] &= (pIE->data[i]);
		} else {
			/* modify from  fw by Thomas 2010/11/17 */
			if ((pmlmeinfo->HT_caps.ampdu_params_info & 0x3) > (pIE->data[i] & 0x3))
				max_AMPDU_len = pIE->data[i] & 0x3;
			else
				max_AMPDU_len = pmlmeinfo->HT_caps.ampdu_params_info & 0x3;

			if ((pmlmeinfo->HT_caps.ampdu_params_info & 0x1c) > (pIE->data[i] & 0x1c))
				min_MPDU_spacing = pmlmeinfo->HT_caps.ampdu_params_info & 0x1c;
			else
				min_MPDU_spacing = pIE->data[i] & 0x1c;

			pmlmeinfo->HT_caps.ampdu_params_info = max_AMPDU_len | min_MPDU_spacing;
		}
	}

	/* update the MCS rates */
	for (i = 0; i < 16; i++)
		((u8 *)&pmlmeinfo->HT_caps.mcs)[i] &= MCS_rate_1R[i];
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
          int _len_padapter0 = 1;
          struct adapter * padapter = (struct adapter *) malloc(_len_padapter0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
            padapter[_i0].mlmepriv.htpriv.ht_option = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].mlmeextpriv.mlmext_info.HT_caps_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].mlmeextpriv.mlmext_info.HT_caps.ampdu_params_info = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].mlmeextpriv.mlmext_info.HT_caps.mcs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pIE0 = 1;
          struct ndis_802_11_var_ie * pIE = (struct ndis_802_11_var_ie *) malloc(_len_pIE0*sizeof(struct ndis_802_11_var_ie));
          for(int _i0 = 0; _i0 < _len_pIE0; _i0++) {
            pIE[_i0].Length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pIE__i0__data0 = 1;
          pIE[_i0].data = (int *) malloc(_len_pIE__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pIE__i0__data0; _j0++) {
            pIE[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          HT_caps_handler(padapter,pIE);
          free(padapter);
          for(int _aux = 0; _aux < _len_pIE0; _aux++) {
          free(pIE[_aux].data);
          }
          free(pIE);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_padapter0 = 65025;
          struct adapter * padapter = (struct adapter *) malloc(_len_padapter0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
            padapter[_i0].mlmepriv.htpriv.ht_option = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].mlmeextpriv.mlmext_info.HT_caps_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].mlmeextpriv.mlmext_info.HT_caps.ampdu_params_info = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].mlmeextpriv.mlmext_info.HT_caps.mcs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pIE0 = 65025;
          struct ndis_802_11_var_ie * pIE = (struct ndis_802_11_var_ie *) malloc(_len_pIE0*sizeof(struct ndis_802_11_var_ie));
          for(int _i0 = 0; _i0 < _len_pIE0; _i0++) {
            pIE[_i0].Length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pIE__i0__data0 = 1;
          pIE[_i0].data = (int *) malloc(_len_pIE__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pIE__i0__data0; _j0++) {
            pIE[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          HT_caps_handler(padapter,pIE);
          free(padapter);
          for(int _aux = 0; _aux < _len_pIE0; _aux++) {
          free(pIE[_aux].data);
          }
          free(pIE);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_padapter0 = 100;
          struct adapter * padapter = (struct adapter *) malloc(_len_padapter0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
            padapter[_i0].mlmepriv.htpriv.ht_option = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].mlmeextpriv.mlmext_info.HT_caps_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].mlmeextpriv.mlmext_info.HT_caps.ampdu_params_info = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].mlmeextpriv.mlmext_info.HT_caps.mcs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pIE0 = 100;
          struct ndis_802_11_var_ie * pIE = (struct ndis_802_11_var_ie *) malloc(_len_pIE0*sizeof(struct ndis_802_11_var_ie));
          for(int _i0 = 0; _i0 < _len_pIE0; _i0++) {
            pIE[_i0].Length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pIE__i0__data0 = 1;
          pIE[_i0].data = (int *) malloc(_len_pIE__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pIE__i0__data0; _j0++) {
            pIE[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          HT_caps_handler(padapter,pIE);
          free(padapter);
          for(int _aux = 0; _aux < _len_pIE0; _aux++) {
          free(pIE[_aux].data);
          }
          free(pIE);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
