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
struct tcphdr {int doff; } ;
struct sk_buff {scalar_t__ data; } ;
struct ip_vs_iphdr {int len; } ;

/* Variables and functions */

__attribute__((used)) static char *ip_vs_ftp_data_ptr(struct sk_buff *skb, struct ip_vs_iphdr *ipvsh)
{
	struct tcphdr *th = (struct tcphdr *)((char *)skb->data + ipvsh->len);

	if ((th->doff << 2) < sizeof(struct tcphdr))
		return NULL;

	return (char *)th + (th->doff << 2);
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
          int _len_skb0 = 1;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ipvsh0 = 1;
          struct ip_vs_iphdr * ipvsh = (struct ip_vs_iphdr *) malloc(_len_ipvsh0*sizeof(struct ip_vs_iphdr));
          for(int _i0 = 0; _i0 < _len_ipvsh0; _i0++) {
            ipvsh[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = ip_vs_ftp_data_ptr(skb,ipvsh);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(skb);
          free(ipvsh);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_skb0 = 65025;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ipvsh0 = 65025;
          struct ip_vs_iphdr * ipvsh = (struct ip_vs_iphdr *) malloc(_len_ipvsh0*sizeof(struct ip_vs_iphdr));
          for(int _i0 = 0; _i0 < _len_ipvsh0; _i0++) {
            ipvsh[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = ip_vs_ftp_data_ptr(skb,ipvsh);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(skb);
          free(ipvsh);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_skb0 = 100;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ipvsh0 = 100;
          struct ip_vs_iphdr * ipvsh = (struct ip_vs_iphdr *) malloc(_len_ipvsh0*sizeof(struct ip_vs_iphdr));
          for(int _i0 = 0; _i0 < _len_ipvsh0; _i0++) {
            ipvsh[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = ip_vs_ftp_data_ptr(skb,ipvsh);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(skb);
          free(ipvsh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
