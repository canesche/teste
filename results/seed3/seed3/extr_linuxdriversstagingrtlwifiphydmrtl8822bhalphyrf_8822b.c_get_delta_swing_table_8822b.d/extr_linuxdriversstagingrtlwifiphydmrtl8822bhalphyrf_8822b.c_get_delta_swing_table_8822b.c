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
struct rtl_phy {int current_channel; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct dm_rf_calibration_struct {int* delta_swing_table_idx_2ga_p; int* delta_swing_table_idx_2ga_n; int* delta_swing_table_idx_2gb_p; int* delta_swing_table_idx_2gb_n; int** delta_swing_table_idx_5ga_p; int** delta_swing_table_idx_5ga_n; int** delta_swing_table_idx_5gb_p; int** delta_swing_table_idx_5gb_n; } ;
struct phy_dm_struct {scalar_t__ adapter; struct dm_rf_calibration_struct rf_calibrate_info; } ;

/* Variables and functions */

void get_delta_swing_table_8822b(void *dm_void, u8 **temperature_up_a,
				 u8 **temperature_down_a, u8 **temperature_up_b,
				 u8 **temperature_down_b)
{
	struct phy_dm_struct *dm = (struct phy_dm_struct *)dm_void;
	struct dm_rf_calibration_struct *cali_info = &dm->rf_calibrate_info;

	struct rtl_priv *rtlpriv = (struct rtl_priv *)dm->adapter;
	struct rtl_phy *rtlphy = &rtlpriv->phy;
	u8 channel = rtlphy->current_channel;

	*temperature_up_a = cali_info->delta_swing_table_idx_2ga_p;
	*temperature_down_a = cali_info->delta_swing_table_idx_2ga_n;
	*temperature_up_b = cali_info->delta_swing_table_idx_2gb_p;
	*temperature_down_b = cali_info->delta_swing_table_idx_2gb_n;

	if (channel >= 36 && channel <= 64) {
		*temperature_up_a = cali_info->delta_swing_table_idx_5ga_p[0];
		*temperature_down_a = cali_info->delta_swing_table_idx_5ga_n[0];
		*temperature_up_b = cali_info->delta_swing_table_idx_5gb_p[0];
		*temperature_down_b = cali_info->delta_swing_table_idx_5gb_n[0];
	} else if (channel >= 100 && channel <= 144) {
		*temperature_up_a = cali_info->delta_swing_table_idx_5ga_p[1];
		*temperature_down_a = cali_info->delta_swing_table_idx_5ga_n[1];
		*temperature_up_b = cali_info->delta_swing_table_idx_5gb_p[1];
		*temperature_down_b = cali_info->delta_swing_table_idx_5gb_n[1];
	} else if (channel >= 149 && channel <= 177) {
		*temperature_up_a = cali_info->delta_swing_table_idx_5ga_p[2];
		*temperature_down_a = cali_info->delta_swing_table_idx_5ga_n[2];
		*temperature_up_b = cali_info->delta_swing_table_idx_5gb_p[2];
		*temperature_down_b = cali_info->delta_swing_table_idx_5gb_n[2];
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
          void * dm_void;
          int _len_temperature_up_a0 = 1;
          int ** temperature_up_a = (int **) malloc(_len_temperature_up_a0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_temperature_up_a0; _i0++) {
            int _len_temperature_up_a1 = 1;
            temperature_up_a[_i0] = (int *) malloc(_len_temperature_up_a1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_temperature_up_a1; _i1++) {
              temperature_up_a[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_temperature_down_a0 = 1;
          int ** temperature_down_a = (int **) malloc(_len_temperature_down_a0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_temperature_down_a0; _i0++) {
            int _len_temperature_down_a1 = 1;
            temperature_down_a[_i0] = (int *) malloc(_len_temperature_down_a1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_temperature_down_a1; _i1++) {
              temperature_down_a[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_temperature_up_b0 = 1;
          int ** temperature_up_b = (int **) malloc(_len_temperature_up_b0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_temperature_up_b0; _i0++) {
            int _len_temperature_up_b1 = 1;
            temperature_up_b[_i0] = (int *) malloc(_len_temperature_up_b1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_temperature_up_b1; _i1++) {
              temperature_up_b[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_temperature_down_b0 = 1;
          int ** temperature_down_b = (int **) malloc(_len_temperature_down_b0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_temperature_down_b0; _i0++) {
            int _len_temperature_down_b1 = 1;
            temperature_down_b[_i0] = (int *) malloc(_len_temperature_down_b1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_temperature_down_b1; _i1++) {
              temperature_down_b[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          get_delta_swing_table_8822b(dm_void,temperature_up_a,temperature_down_a,temperature_up_b,temperature_down_b);
          for(int i1 = 0; i1 < _len_temperature_up_a0; i1++) {
            int _len_temperature_up_a1 = 1;
              free(temperature_up_a[i1]);
          }
          free(temperature_up_a);
          for(int i1 = 0; i1 < _len_temperature_down_a0; i1++) {
            int _len_temperature_down_a1 = 1;
              free(temperature_down_a[i1]);
          }
          free(temperature_down_a);
          for(int i1 = 0; i1 < _len_temperature_up_b0; i1++) {
            int _len_temperature_up_b1 = 1;
              free(temperature_up_b[i1]);
          }
          free(temperature_up_b);
          for(int i1 = 0; i1 < _len_temperature_down_b0; i1++) {
            int _len_temperature_down_b1 = 1;
              free(temperature_down_b[i1]);
          }
          free(temperature_down_b);
        
        break;
    }
    // big-arr
    case 1:
    {
          void * dm_void;
          int _len_temperature_up_a0 = 65025;
          int ** temperature_up_a = (int **) malloc(_len_temperature_up_a0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_temperature_up_a0; _i0++) {
            int _len_temperature_up_a1 = 1;
            temperature_up_a[_i0] = (int *) malloc(_len_temperature_up_a1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_temperature_up_a1; _i1++) {
              temperature_up_a[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_temperature_down_a0 = 65025;
          int ** temperature_down_a = (int **) malloc(_len_temperature_down_a0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_temperature_down_a0; _i0++) {
            int _len_temperature_down_a1 = 1;
            temperature_down_a[_i0] = (int *) malloc(_len_temperature_down_a1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_temperature_down_a1; _i1++) {
              temperature_down_a[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_temperature_up_b0 = 65025;
          int ** temperature_up_b = (int **) malloc(_len_temperature_up_b0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_temperature_up_b0; _i0++) {
            int _len_temperature_up_b1 = 1;
            temperature_up_b[_i0] = (int *) malloc(_len_temperature_up_b1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_temperature_up_b1; _i1++) {
              temperature_up_b[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_temperature_down_b0 = 65025;
          int ** temperature_down_b = (int **) malloc(_len_temperature_down_b0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_temperature_down_b0; _i0++) {
            int _len_temperature_down_b1 = 1;
            temperature_down_b[_i0] = (int *) malloc(_len_temperature_down_b1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_temperature_down_b1; _i1++) {
              temperature_down_b[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          get_delta_swing_table_8822b(dm_void,temperature_up_a,temperature_down_a,temperature_up_b,temperature_down_b);
          for(int i1 = 0; i1 < _len_temperature_up_a0; i1++) {
            int _len_temperature_up_a1 = 1;
              free(temperature_up_a[i1]);
          }
          free(temperature_up_a);
          for(int i1 = 0; i1 < _len_temperature_down_a0; i1++) {
            int _len_temperature_down_a1 = 1;
              free(temperature_down_a[i1]);
          }
          free(temperature_down_a);
          for(int i1 = 0; i1 < _len_temperature_up_b0; i1++) {
            int _len_temperature_up_b1 = 1;
              free(temperature_up_b[i1]);
          }
          free(temperature_up_b);
          for(int i1 = 0; i1 < _len_temperature_down_b0; i1++) {
            int _len_temperature_down_b1 = 1;
              free(temperature_down_b[i1]);
          }
          free(temperature_down_b);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * dm_void;
          int _len_temperature_up_a0 = 100;
          int ** temperature_up_a = (int **) malloc(_len_temperature_up_a0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_temperature_up_a0; _i0++) {
            int _len_temperature_up_a1 = 1;
            temperature_up_a[_i0] = (int *) malloc(_len_temperature_up_a1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_temperature_up_a1; _i1++) {
              temperature_up_a[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_temperature_down_a0 = 100;
          int ** temperature_down_a = (int **) malloc(_len_temperature_down_a0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_temperature_down_a0; _i0++) {
            int _len_temperature_down_a1 = 1;
            temperature_down_a[_i0] = (int *) malloc(_len_temperature_down_a1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_temperature_down_a1; _i1++) {
              temperature_down_a[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_temperature_up_b0 = 100;
          int ** temperature_up_b = (int **) malloc(_len_temperature_up_b0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_temperature_up_b0; _i0++) {
            int _len_temperature_up_b1 = 1;
            temperature_up_b[_i0] = (int *) malloc(_len_temperature_up_b1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_temperature_up_b1; _i1++) {
              temperature_up_b[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_temperature_down_b0 = 100;
          int ** temperature_down_b = (int **) malloc(_len_temperature_down_b0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_temperature_down_b0; _i0++) {
            int _len_temperature_down_b1 = 1;
            temperature_down_b[_i0] = (int *) malloc(_len_temperature_down_b1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_temperature_down_b1; _i1++) {
              temperature_down_b[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          get_delta_swing_table_8822b(dm_void,temperature_up_a,temperature_down_a,temperature_up_b,temperature_down_b);
          for(int i1 = 0; i1 < _len_temperature_up_a0; i1++) {
            int _len_temperature_up_a1 = 1;
              free(temperature_up_a[i1]);
          }
          free(temperature_up_a);
          for(int i1 = 0; i1 < _len_temperature_down_a0; i1++) {
            int _len_temperature_down_a1 = 1;
              free(temperature_down_a[i1]);
          }
          free(temperature_down_a);
          for(int i1 = 0; i1 < _len_temperature_up_b0; i1++) {
            int _len_temperature_up_b1 = 1;
              free(temperature_up_b[i1]);
          }
          free(temperature_up_b);
          for(int i1 = 0; i1 < _len_temperature_down_b0; i1++) {
            int _len_temperature_down_b1 = 1;
              free(temperature_down_b[i1]);
          }
          free(temperature_down_b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
