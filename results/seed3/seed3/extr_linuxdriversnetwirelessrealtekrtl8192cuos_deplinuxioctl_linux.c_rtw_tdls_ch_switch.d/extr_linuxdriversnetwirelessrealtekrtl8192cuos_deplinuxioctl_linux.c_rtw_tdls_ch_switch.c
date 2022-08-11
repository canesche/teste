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

__attribute__((used)) static int rtw_tdls_ch_switch(struct net_device *dev,
				struct iw_request_info *info,
				union iwreq_data *wrqu, char *extra)
{
	int ret = 0;

#ifdef CONFIG_TDLS
	
	_adapter *padapter = (_adapter *)rtw_netdev_priv(dev);
	struct tdls_info	*ptdlsinfo = &padapter->tdlsinfo;
	u8 i, j, mac_addr[ETH_ALEN];
	struct sta_info *ptdls_sta = NULL;

	printk( "[%s] %s %d\n", __FUNCTION__, extra, wrqu->data.length -1  );

	for( i=0, j=0 ; i < ETH_ALEN; i++, j+=3 ){
		mac_addr[i]=key_2char2num(*(extra+j), *(extra+j+1));
	}

	ptdls_sta = rtw_get_stainfo(&padapter->stapriv, mac_addr);
	if( ptdls_sta == NULL )
		return ret;
	ptdlsinfo->ch_sensing=1;

	rtw_tdls_cmd(padapter, ptdls_sta->hwaddr, TDLS_INIT_CH_SEN);

#endif //CONFIG_TDLS

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
          int benchRet = rtw_tdls_ch_switch(dev,info,wrqu,extra);
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
          int benchRet = rtw_tdls_ch_switch(dev,info,wrqu,extra);
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
          int benchRet = rtw_tdls_ch_switch(dev,info,wrqu,extra);
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
