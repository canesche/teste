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
typedef  union recv_frame {int dummy; } recv_frame ;
typedef  int /*<<< orphan*/  _adapter ;

/* Variables and functions */

void process_pwrbit_data(_adapter *padapter, union recv_frame *precv_frame)
{
#ifdef CONFIG_AP_MODE
	unsigned char pwrbit;
	u8 *ptr = precv_frame->u.hdr.rx_data;
	struct rx_pkt_attrib *pattrib = &precv_frame->u.hdr.attrib;
	struct sta_priv *pstapriv = &padapter->stapriv;
	struct sta_info *psta=NULL;

	psta = rtw_get_stainfo(pstapriv, pattrib->src);

	pwrbit = GetPwrMgt(ptr);

	if(psta)
	{
		if(pwrbit)
		{
			if(!(psta->state & WIFI_SLEEP_STATE))
			{
				//psta->state |= WIFI_SLEEP_STATE;
				//pstapriv->sta_dz_bitmap |= BIT(psta->aid);

				stop_sta_xmit(padapter, psta);

				//DBG_871X("to sleep, sta_dz_bitmap=%x\n", pstapriv->sta_dz_bitmap);
			}
		}
		else
		{
			if(psta->state & WIFI_SLEEP_STATE)
			{
				//psta->state ^= WIFI_SLEEP_STATE;
				//pstapriv->sta_dz_bitmap &= ~BIT(psta->aid);				

				wakeup_sta_to_xmit(padapter, psta);

				//DBG_871X("to wakeup, sta_dz_bitmap=%x\n", pstapriv->sta_dz_bitmap);
			}
		}

	}

#endif
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
          int * padapter = (int *) malloc(_len_padapter0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
            padapter[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_precv_frame0 = 1;
          union recv_frame * precv_frame = (union recv_frame *) malloc(_len_precv_frame0*sizeof(union recv_frame));
          for(int _i0 = 0; _i0 < _len_precv_frame0; _i0++) {
            precv_frame[_i0] = 0;
          }
          process_pwrbit_data(padapter,precv_frame);
          free(padapter);
          free(precv_frame);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_padapter0 = 65025;
          int * padapter = (int *) malloc(_len_padapter0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
            padapter[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_precv_frame0 = 65025;
          union recv_frame * precv_frame = (union recv_frame *) malloc(_len_precv_frame0*sizeof(union recv_frame));
          for(int _i0 = 0; _i0 < _len_precv_frame0; _i0++) {
            precv_frame[_i0] = 0;
          }
          process_pwrbit_data(padapter,precv_frame);
          free(padapter);
          free(precv_frame);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_padapter0 = 100;
          int * padapter = (int *) malloc(_len_padapter0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
            padapter[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_precv_frame0 = 100;
          union recv_frame * precv_frame = (union recv_frame *) malloc(_len_precv_frame0*sizeof(union recv_frame));
          for(int _i0 = 0; _i0 < _len_precv_frame0; _i0++) {
            precv_frame[_i0] = 0;
          }
          process_pwrbit_data(padapter,precv_frame);
          free(padapter);
          free(precv_frame);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
