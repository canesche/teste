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
struct TYPE_2__ {int* ofdm_index; } ;
struct rtl_priv {TYPE_1__ dm; } ;
struct rtl_phy {int current_channel; } ;
struct rtl_hal {scalar_t__ macphymode; int interfaceindex; } ;
struct rtl_efuse {int* internal_pa_5g; int eeprom_thermalmeter; } ;

/* Variables and functions */
 scalar_t__ DUALMAC_DUALPHY ; 
 int INDEX_MAPPING_NUM ; 

__attribute__((used)) static void rtl92d_bandtype_5G(struct rtl_hal *rtlhal, u8 *ofdm_index,
			       bool *internal_pa, u8 thermalvalue, u8 delta,
			       u8 rf, struct rtl_efuse *rtlefuse,
			       struct rtl_priv *rtlpriv, struct rtl_phy *rtlphy,
			       u8 index_mapping[5][INDEX_MAPPING_NUM],
			       u8 index_mapping_pa[8][INDEX_MAPPING_NUM])
{
	int i;
	u8 index;
	u8 offset = 0;

	for (i = 0; i < rf; i++) {
		if (rtlhal->macphymode == DUALMAC_DUALPHY &&
		    rtlhal->interfaceindex == 1)	/* MAC 1 5G */
			*internal_pa = rtlefuse->internal_pa_5g[1];
		else
			*internal_pa = rtlefuse->internal_pa_5g[i];
		if (*internal_pa) {
			if (rtlhal->interfaceindex == 1 || i == rf)
				offset = 4;
			else
				offset = 0;
			if (rtlphy->current_channel >= 100 &&
				rtlphy->current_channel <= 165)
				offset += 2;
		} else {
			if (rtlhal->interfaceindex == 1 || i == rf)
				offset = 2;
			else
				offset = 0;
		}
		if (thermalvalue > rtlefuse->eeprom_thermalmeter)
			offset++;
		if (*internal_pa) {
			if (delta > INDEX_MAPPING_NUM - 1)
				index = index_mapping_pa[offset]
						    [INDEX_MAPPING_NUM - 1];
			else
				index =
				     index_mapping_pa[offset][delta];
		} else {
			if (delta > INDEX_MAPPING_NUM - 1)
				index =
				   index_mapping[offset][INDEX_MAPPING_NUM - 1];
			else
				index = index_mapping[offset][delta];
		}
		if (thermalvalue > rtlefuse->eeprom_thermalmeter) {
			if (*internal_pa && thermalvalue > 0x12) {
				ofdm_index[i] = rtlpriv->dm.ofdm_index[i] -
						((delta / 2) * 3 + (delta % 2));
			} else {
				ofdm_index[i] -= index;
			}
		} else {
			ofdm_index[i] += index;
		}
	}
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
          int thermalvalue = 100;
          int delta = 100;
          int rf = 100;
          int _len_rtlhal0 = 1;
          struct rtl_hal * rtlhal = (struct rtl_hal *) malloc(_len_rtlhal0*sizeof(struct rtl_hal));
          for(int _i0 = 0; _i0 < _len_rtlhal0; _i0++) {
            rtlhal[_i0].macphymode = ((-2 * (next_i()%2)) + 1) * next_i();
        rtlhal[_i0].interfaceindex = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ofdm_index0 = 1;
          int * ofdm_index = (int *) malloc(_len_ofdm_index0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ofdm_index0; _i0++) {
            ofdm_index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_internal_pa0 = 1;
          int * internal_pa = (int *) malloc(_len_internal_pa0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_internal_pa0; _i0++) {
            internal_pa[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rtlefuse0 = 1;
          struct rtl_efuse * rtlefuse = (struct rtl_efuse *) malloc(_len_rtlefuse0*sizeof(struct rtl_efuse));
          for(int _i0 = 0; _i0 < _len_rtlefuse0; _i0++) {
              int _len_rtlefuse__i0__internal_pa_5g0 = 1;
          rtlefuse[_i0].internal_pa_5g = (int *) malloc(_len_rtlefuse__i0__internal_pa_5g0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rtlefuse__i0__internal_pa_5g0; _j0++) {
            rtlefuse[_i0].internal_pa_5g[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rtlefuse[_i0].eeprom_thermalmeter = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rtlpriv0 = 1;
          struct rtl_priv * rtlpriv = (struct rtl_priv *) malloc(_len_rtlpriv0*sizeof(struct rtl_priv));
          for(int _i0 = 0; _i0 < _len_rtlpriv0; _i0++) {
              int _len_rtlpriv__i0__dm_ofdm_index0 = 1;
          rtlpriv[_i0].dm.ofdm_index = (int *) malloc(_len_rtlpriv__i0__dm_ofdm_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rtlpriv__i0__dm_ofdm_index0; _j0++) {
            rtlpriv[_i0].dm.ofdm_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rtlphy0 = 1;
          struct rtl_phy * rtlphy = (struct rtl_phy *) malloc(_len_rtlphy0*sizeof(struct rtl_phy));
          for(int _i0 = 0; _i0 < _len_rtlphy0; _i0++) {
            rtlphy[_i0].current_channel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_index_mapping0 = 5;
          int ** index_mapping = (int **) malloc(_len_index_mapping0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_index_mapping0; _i0++) {
            int _len_index_mapping1 = INDEX_MAPPING_NUM;
            index_mapping[_i0] = (int *) malloc(_len_index_mapping1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_index_mapping1; _i1++) {
              index_mapping[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_index_mapping_pa0 = 8;
          int ** index_mapping_pa = (int **) malloc(_len_index_mapping_pa0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_index_mapping_pa0; _i0++) {
            int _len_index_mapping_pa1 = INDEX_MAPPING_NUM;
            index_mapping_pa[_i0] = (int *) malloc(_len_index_mapping_pa1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_index_mapping_pa1; _i1++) {
              index_mapping_pa[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          rtl92d_bandtype_5G(rtlhal,ofdm_index,internal_pa,thermalvalue,delta,rf,rtlefuse,rtlpriv,rtlphy,index_mapping,index_mapping_pa);
          free(rtlhal);
          free(ofdm_index);
          free(internal_pa);
          for(int _aux = 0; _aux < _len_rtlefuse0; _aux++) {
          free(rtlefuse[_aux].internal_pa_5g);
          }
          free(rtlefuse);
          free(rtlpriv);
          free(rtlphy);
          for(int i1 = 0; i1 < _len_index_mapping0; i1++) {
            int _len_index_mapping1 = INDEX_MAPPING_NUM;
              free(index_mapping[i1]);
          }
          free(index_mapping);
          for(int i1 = 0; i1 < _len_index_mapping_pa0; i1++) {
            int _len_index_mapping_pa1 = INDEX_MAPPING_NUM;
              free(index_mapping_pa[i1]);
          }
          free(index_mapping_pa);
        
        break;
    }
    // big-arr
    case 1:
    {
          int thermalvalue = 255;
          int delta = 255;
          int rf = 255;
          int _len_rtlhal0 = 65025;
          struct rtl_hal * rtlhal = (struct rtl_hal *) malloc(_len_rtlhal0*sizeof(struct rtl_hal));
          for(int _i0 = 0; _i0 < _len_rtlhal0; _i0++) {
            rtlhal[_i0].macphymode = ((-2 * (next_i()%2)) + 1) * next_i();
        rtlhal[_i0].interfaceindex = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ofdm_index0 = 65025;
          int * ofdm_index = (int *) malloc(_len_ofdm_index0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ofdm_index0; _i0++) {
            ofdm_index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_internal_pa0 = 65025;
          int * internal_pa = (int *) malloc(_len_internal_pa0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_internal_pa0; _i0++) {
            internal_pa[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rtlefuse0 = 65025;
          struct rtl_efuse * rtlefuse = (struct rtl_efuse *) malloc(_len_rtlefuse0*sizeof(struct rtl_efuse));
          for(int _i0 = 0; _i0 < _len_rtlefuse0; _i0++) {
              int _len_rtlefuse__i0__internal_pa_5g0 = 1;
          rtlefuse[_i0].internal_pa_5g = (int *) malloc(_len_rtlefuse__i0__internal_pa_5g0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rtlefuse__i0__internal_pa_5g0; _j0++) {
            rtlefuse[_i0].internal_pa_5g[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rtlefuse[_i0].eeprom_thermalmeter = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rtlpriv0 = 65025;
          struct rtl_priv * rtlpriv = (struct rtl_priv *) malloc(_len_rtlpriv0*sizeof(struct rtl_priv));
          for(int _i0 = 0; _i0 < _len_rtlpriv0; _i0++) {
              int _len_rtlpriv__i0__dm_ofdm_index0 = 1;
          rtlpriv[_i0].dm.ofdm_index = (int *) malloc(_len_rtlpriv__i0__dm_ofdm_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rtlpriv__i0__dm_ofdm_index0; _j0++) {
            rtlpriv[_i0].dm.ofdm_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rtlphy0 = 65025;
          struct rtl_phy * rtlphy = (struct rtl_phy *) malloc(_len_rtlphy0*sizeof(struct rtl_phy));
          for(int _i0 = 0; _i0 < _len_rtlphy0; _i0++) {
            rtlphy[_i0].current_channel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_index_mapping0 = 65025;
          int ** index_mapping = (int **) malloc(_len_index_mapping0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_index_mapping0; _i0++) {
            int _len_index_mapping1 = INDEX_MAPPING_NUM;
            index_mapping[_i0] = (int *) malloc(_len_index_mapping1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_index_mapping1; _i1++) {
              index_mapping[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_index_mapping_pa0 = 65025;
          int ** index_mapping_pa = (int **) malloc(_len_index_mapping_pa0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_index_mapping_pa0; _i0++) {
            int _len_index_mapping_pa1 = INDEX_MAPPING_NUM;
            index_mapping_pa[_i0] = (int *) malloc(_len_index_mapping_pa1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_index_mapping_pa1; _i1++) {
              index_mapping_pa[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          rtl92d_bandtype_5G(rtlhal,ofdm_index,internal_pa,thermalvalue,delta,rf,rtlefuse,rtlpriv,rtlphy,index_mapping,index_mapping_pa);
          free(rtlhal);
          free(ofdm_index);
          free(internal_pa);
          for(int _aux = 0; _aux < _len_rtlefuse0; _aux++) {
          free(rtlefuse[_aux].internal_pa_5g);
          }
          free(rtlefuse);
          free(rtlpriv);
          free(rtlphy);
          for(int i1 = 0; i1 < _len_index_mapping0; i1++) {
            int _len_index_mapping1 = INDEX_MAPPING_NUM;
              free(index_mapping[i1]);
          }
          free(index_mapping);
          for(int i1 = 0; i1 < _len_index_mapping_pa0; i1++) {
            int _len_index_mapping_pa1 = INDEX_MAPPING_NUM;
              free(index_mapping_pa[i1]);
          }
          free(index_mapping_pa);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int thermalvalue = 10;
          int delta = 10;
          int rf = 10;
          int _len_rtlhal0 = 100;
          struct rtl_hal * rtlhal = (struct rtl_hal *) malloc(_len_rtlhal0*sizeof(struct rtl_hal));
          for(int _i0 = 0; _i0 < _len_rtlhal0; _i0++) {
            rtlhal[_i0].macphymode = ((-2 * (next_i()%2)) + 1) * next_i();
        rtlhal[_i0].interfaceindex = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ofdm_index0 = 100;
          int * ofdm_index = (int *) malloc(_len_ofdm_index0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ofdm_index0; _i0++) {
            ofdm_index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_internal_pa0 = 100;
          int * internal_pa = (int *) malloc(_len_internal_pa0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_internal_pa0; _i0++) {
            internal_pa[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rtlefuse0 = 100;
          struct rtl_efuse * rtlefuse = (struct rtl_efuse *) malloc(_len_rtlefuse0*sizeof(struct rtl_efuse));
          for(int _i0 = 0; _i0 < _len_rtlefuse0; _i0++) {
              int _len_rtlefuse__i0__internal_pa_5g0 = 1;
          rtlefuse[_i0].internal_pa_5g = (int *) malloc(_len_rtlefuse__i0__internal_pa_5g0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rtlefuse__i0__internal_pa_5g0; _j0++) {
            rtlefuse[_i0].internal_pa_5g[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rtlefuse[_i0].eeprom_thermalmeter = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rtlpriv0 = 100;
          struct rtl_priv * rtlpriv = (struct rtl_priv *) malloc(_len_rtlpriv0*sizeof(struct rtl_priv));
          for(int _i0 = 0; _i0 < _len_rtlpriv0; _i0++) {
              int _len_rtlpriv__i0__dm_ofdm_index0 = 1;
          rtlpriv[_i0].dm.ofdm_index = (int *) malloc(_len_rtlpriv__i0__dm_ofdm_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rtlpriv__i0__dm_ofdm_index0; _j0++) {
            rtlpriv[_i0].dm.ofdm_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rtlphy0 = 100;
          struct rtl_phy * rtlphy = (struct rtl_phy *) malloc(_len_rtlphy0*sizeof(struct rtl_phy));
          for(int _i0 = 0; _i0 < _len_rtlphy0; _i0++) {
            rtlphy[_i0].current_channel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_index_mapping0 = 100;
          int ** index_mapping = (int **) malloc(_len_index_mapping0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_index_mapping0; _i0++) {
            int _len_index_mapping1 = INDEX_MAPPING_NUM;
            index_mapping[_i0] = (int *) malloc(_len_index_mapping1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_index_mapping1; _i1++) {
              index_mapping[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_index_mapping_pa0 = 100;
          int ** index_mapping_pa = (int **) malloc(_len_index_mapping_pa0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_index_mapping_pa0; _i0++) {
            int _len_index_mapping_pa1 = INDEX_MAPPING_NUM;
            index_mapping_pa[_i0] = (int *) malloc(_len_index_mapping_pa1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_index_mapping_pa1; _i1++) {
              index_mapping_pa[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          rtl92d_bandtype_5G(rtlhal,ofdm_index,internal_pa,thermalvalue,delta,rf,rtlefuse,rtlpriv,rtlphy,index_mapping,index_mapping_pa);
          free(rtlhal);
          free(ofdm_index);
          free(internal_pa);
          for(int _aux = 0; _aux < _len_rtlefuse0; _aux++) {
          free(rtlefuse[_aux].internal_pa_5g);
          }
          free(rtlefuse);
          free(rtlpriv);
          free(rtlphy);
          for(int i1 = 0; i1 < _len_index_mapping0; i1++) {
            int _len_index_mapping1 = INDEX_MAPPING_NUM;
              free(index_mapping[i1]);
          }
          free(index_mapping);
          for(int i1 = 0; i1 < _len_index_mapping_pa0; i1++) {
            int _len_index_mapping_pa1 = INDEX_MAPPING_NUM;
              free(index_mapping_pa[i1]);
          }
          free(index_mapping_pa);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
