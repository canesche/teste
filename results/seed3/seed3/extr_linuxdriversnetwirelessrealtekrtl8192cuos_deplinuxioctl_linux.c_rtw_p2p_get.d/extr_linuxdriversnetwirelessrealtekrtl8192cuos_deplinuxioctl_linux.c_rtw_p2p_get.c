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
typedef  union iwreq_data {int dummy; } iwreq_data ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int rtw_p2p_get(struct net_device *dev,
                               struct iw_request_info *info,
                               union iwreq_data *wrqu, char *extra)
{
	
	int ret = 0;	
	
#ifdef CONFIG_P2P

	_adapter *padapter = (_adapter *)rtw_netdev_priv(dev);
	struct mlme_priv *pmlmepriv = &(padapter->mlmepriv);	
	struct iw_point *pdata = &wrqu->data;
	struct wifidirect_info *pwdinfo= &(padapter->wdinfo);
	struct mlme_ext_priv	*pmlmeext = &padapter->mlmeextpriv;

	if ( padapter->bShowGetP2PState )
	{
		DBG_871X( "[%s] extra = %s\n", __FUNCTION__, (char*) wrqu->data.pointer );
	}
	
	if ( _rtw_memcmp( wrqu->data.pointer, "status", 6 ) )
	{
		rtw_p2p_get_status( dev, info, wrqu, extra );
	}
	else if ( _rtw_memcmp( wrqu->data.pointer, "role", 4 ) )
	{
		rtw_p2p_get_role( dev, info, wrqu, extra);
	}
	else if ( _rtw_memcmp( wrqu->data.pointer, "peer_ifa", 8 ) )
	{
		rtw_p2p_get_peer_ifaddr( dev, info, wrqu, extra);
	}
	else if ( _rtw_memcmp( wrqu->data.pointer, "req_cm", 6 ) )
	{
		rtw_p2p_get_req_cm( dev, info, wrqu, extra);
	}
	else if ( _rtw_memcmp( wrqu->data.pointer, "peer_deva", 9 ) )
	{
		//	Get the P2P device address when receiving the provision discovery request frame.
		rtw_p2p_get_peer_devaddr( dev, info, wrqu, extra);
	}
	else if ( _rtw_memcmp( wrqu->data.pointer, "group_id", 8 ) )
	{
		rtw_p2p_get_groupid( dev, info, wrqu, extra);
	}
	else if ( _rtw_memcmp( wrqu->data.pointer, "inv_peer_deva", 13 ) )
	{
		//	Get the P2P device address when receiving the P2P Invitation request frame.
		rtw_p2p_get_peer_devaddr_by_invitation( dev, info, wrqu, extra);
	}
	else if ( _rtw_memcmp( wrqu->data.pointer, "op_ch", 5 ) )
	{
		rtw_p2p_get_op_ch( dev, info, wrqu, extra);
	}
#ifdef CONFIG_WFD
	else if ( _rtw_memcmp( wrqu->data.pointer, "peer_port", 9 ) )
	{
		rtw_p2p_get_peer_wfd_port( dev, info, wrqu, extra );
	}
	else if ( _rtw_memcmp( wrqu->data.pointer, "wfd_sa", 6 ) )
	{
		rtw_p2p_get_peer_wfd_session_available( dev, info, wrqu, extra );
	}
	else if ( _rtw_memcmp( wrqu->data.pointer, "wfd_pc", 6 ) )
	{
		rtw_p2p_get_peer_wfd_preferred_connection( dev, info, wrqu, extra );
	}
#endif // CONFIG_WFD	
	
#endif //CONFIG_P2P

	return ret;
		
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
          int _len_dev0 = 1;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 1;
          struct iw_request_info * info = (struct iw_request_info *) malloc(_len_info0*sizeof(struct iw_request_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wrqu0 = 1;
          union iwreq_data * wrqu = (union iwreq_data *) malloc(_len_wrqu0*sizeof(union iwreq_data));
          for(int _i0 = 0; _i0 < _len_wrqu0; _i0++) {
            wrqu[_i0] = 0;
          }
          int _len_extra0 = 1;
          char * extra = (char *) malloc(_len_extra0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_extra0; _i0++) {
            extra[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rtw_p2p_get(dev,info,wrqu,extra);
          printf("%d\n", benchRet); 
          free(dev);
          free(info);
          free(wrqu);
          free(extra);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 65025;
          struct iw_request_info * info = (struct iw_request_info *) malloc(_len_info0*sizeof(struct iw_request_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wrqu0 = 65025;
          union iwreq_data * wrqu = (union iwreq_data *) malloc(_len_wrqu0*sizeof(union iwreq_data));
          for(int _i0 = 0; _i0 < _len_wrqu0; _i0++) {
            wrqu[_i0] = 0;
          }
          int _len_extra0 = 65025;
          char * extra = (char *) malloc(_len_extra0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_extra0; _i0++) {
            extra[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rtw_p2p_get(dev,info,wrqu,extra);
          printf("%d\n", benchRet); 
          free(dev);
          free(info);
          free(wrqu);
          free(extra);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 100;
          struct iw_request_info * info = (struct iw_request_info *) malloc(_len_info0*sizeof(struct iw_request_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wrqu0 = 100;
          union iwreq_data * wrqu = (union iwreq_data *) malloc(_len_wrqu0*sizeof(union iwreq_data));
          for(int _i0 = 0; _i0 < _len_wrqu0; _i0++) {
            wrqu[_i0] = 0;
          }
          int _len_extra0 = 100;
          char * extra = (char *) malloc(_len_extra0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_extra0; _i0++) {
            extra[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rtw_p2p_get(dev,info,wrqu,extra);
          printf("%d\n", benchRet); 
          free(dev);
          free(info);
          free(wrqu);
          free(extra);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
