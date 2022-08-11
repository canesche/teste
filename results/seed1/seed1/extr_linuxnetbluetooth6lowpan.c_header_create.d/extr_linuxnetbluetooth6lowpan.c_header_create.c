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
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 
 unsigned short ETH_P_IPV6 ; 

__attribute__((used)) static int header_create(struct sk_buff *skb, struct net_device *netdev,
			 unsigned short type, const void *_daddr,
			 const void *_saddr, unsigned int len)
{
	if (type != ETH_P_IPV6)
		return -EINVAL;

	return 0;
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
          unsigned short type = 100;
          unsigned int len = 100;
          int _len_skb0 = 1;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_netdev0 = 1;
          struct net_device * netdev = (struct net_device *) malloc(_len_netdev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_netdev0; _i0++) {
            netdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len__daddr0 = 1;
          const void * _daddr = (const void *) malloc(_len__daddr0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__daddr0; _i0++) {
            _daddr[_i0] = 0;
          }
          int _len__saddr0 = 1;
          const void * _saddr = (const void *) malloc(_len__saddr0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__saddr0; _i0++) {
            _saddr[_i0] = 0;
          }
          int benchRet = header_create(skb,netdev,type,_daddr,_saddr,len);
          printf("%d\n", benchRet); 
          free(skb);
          free(netdev);
          free(_daddr);
          free(_saddr);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned short type = 255;
          unsigned int len = 255;
          int _len_skb0 = 65025;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_netdev0 = 65025;
          struct net_device * netdev = (struct net_device *) malloc(_len_netdev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_netdev0; _i0++) {
            netdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len__daddr0 = 65025;
          const void * _daddr = (const void *) malloc(_len__daddr0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__daddr0; _i0++) {
            _daddr[_i0] = 0;
          }
          int _len__saddr0 = 65025;
          const void * _saddr = (const void *) malloc(_len__saddr0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__saddr0; _i0++) {
            _saddr[_i0] = 0;
          }
          int benchRet = header_create(skb,netdev,type,_daddr,_saddr,len);
          printf("%d\n", benchRet); 
          free(skb);
          free(netdev);
          free(_daddr);
          free(_saddr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned short type = 10;
          unsigned int len = 10;
          int _len_skb0 = 100;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_netdev0 = 100;
          struct net_device * netdev = (struct net_device *) malloc(_len_netdev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_netdev0; _i0++) {
            netdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len__daddr0 = 100;
          const void * _daddr = (const void *) malloc(_len__daddr0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__daddr0; _i0++) {
            _daddr[_i0] = 0;
          }
          int _len__saddr0 = 100;
          const void * _saddr = (const void *) malloc(_len__saddr0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__saddr0; _i0++) {
            _saddr[_i0] = 0;
          }
          int benchRet = header_create(skb,netdev,type,_daddr,_saddr,len);
          printf("%d\n", benchRet); 
          free(skb);
          free(netdev);
          free(_daddr);
          free(_saddr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
