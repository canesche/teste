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
 unsigned int _SUCCESS ; 

unsigned int OnAction_p2p(_adapter *padapter, union recv_frame *precv_frame)
{
#ifdef CONFIG_P2P
	u8 *frame_body;
	u8 category, OUI_Subtype, dialogToken=0;
	u8 *pframe = precv_frame->u.hdr.rx_data;
	uint len = precv_frame->u.hdr.len;
	struct	wifidirect_info	*pwdinfo = &( padapter->wdinfo );
	

	DBG_871X("%s\n", __FUNCTION__);
	
	//check RA matches or not
	if (!_rtw_memcmp(myid(&(padapter->eeprompriv)), GetAddr1Ptr(pframe), ETH_ALEN))//for if1, sta/ap mode
		return _SUCCESS;

	frame_body = (unsigned char *)(pframe + sizeof(struct rtw_ieee80211_hdr_3addr));

	category = frame_body[0];
	if(category != RTW_WLAN_CATEGORY_P2P)
		return _SUCCESS;

	if ( cpu_to_be32( *( ( u32* ) ( frame_body + 1 ) ) ) != P2POUI )
		return _SUCCESS;

#ifdef CONFIG_IOCTL_CFG80211
	if(wdev_to_priv(padapter->rtw_wdev)->p2p_enabled && pwdinfo->driver_interface == DRIVER_CFG80211 )
	{
		rtw_cfg80211_rx_action_p2p(padapter, pframe, len);
		return _SUCCESS;
	}
	else
#endif //CONFIG_IOCTL_CFG80211
	{
		len -= sizeof(struct rtw_ieee80211_hdr_3addr);
		OUI_Subtype = frame_body[5];
		dialogToken = frame_body[6];

		switch(OUI_Subtype)
		{
			case P2P_NOTICE_OF_ABSENCE:
				
				break;
				
			case P2P_PRESENCE_REQUEST:

				process_p2p_presence_req(pwdinfo, pframe, len);			
				
				break;
				
			case P2P_PRESENCE_RESPONSE:
				
				break;
				
			case P2P_GO_DISC_REQUEST:
				
				break;
				
			default:
				break;
				
		}
	}
#endif //CONFIG_P2P

	return _SUCCESS;

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
          unsigned int benchRet = OnAction_p2p(padapter,precv_frame);
          printf("%u\n", benchRet); 
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
          unsigned int benchRet = OnAction_p2p(padapter,precv_frame);
          printf("%u\n", benchRet); 
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
          unsigned int benchRet = OnAction_p2p(padapter,precv_frame);
          printf("%u\n", benchRet); 
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
