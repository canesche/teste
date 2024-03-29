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
struct sock {int dummy; } ;
struct net {int dummy; } ;
struct flowi6 {int dummy; } ;
struct dst_entry {int dummy; } ;

/* Variables and functions */
 int EAFNOSUPPORT ; 

__attribute__((used)) static int eafnosupport_ipv6_dst_lookup(struct net *net, struct sock *u1,
					struct dst_entry **u2,
					struct flowi6 *u3)
{
	return -EAFNOSUPPORT;
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
          int _len_net0 = 1;
          struct net * net = (struct net *) malloc(_len_net0*sizeof(struct net));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
            net[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_u10 = 1;
          struct sock * u1 = (struct sock *) malloc(_len_u10*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_u10; _i0++) {
            u1[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_u20 = 1;
          struct dst_entry ** u2 = (struct dst_entry **) malloc(_len_u20*sizeof(struct dst_entry *));
          for(int _i0 = 0; _i0 < _len_u20; _i0++) {
            int _len_u21 = 1;
            u2[_i0] = (struct dst_entry *) malloc(_len_u21*sizeof(struct dst_entry));
            for(int _i1 = 0; _i1 < _len_u21; _i1++) {
              u2[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_u30 = 1;
          struct flowi6 * u3 = (struct flowi6 *) malloc(_len_u30*sizeof(struct flowi6));
          for(int _i0 = 0; _i0 < _len_u30; _i0++) {
            u3[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = eafnosupport_ipv6_dst_lookup(net,u1,u2,u3);
          printf("%d\n", benchRet); 
          free(net);
          free(u1);
          for(int i1 = 0; i1 < _len_u20; i1++) {
            int _len_u21 = 1;
              free(u2[i1]);
          }
          free(u2);
          free(u3);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_net0 = 65025;
          struct net * net = (struct net *) malloc(_len_net0*sizeof(struct net));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
            net[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_u10 = 65025;
          struct sock * u1 = (struct sock *) malloc(_len_u10*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_u10; _i0++) {
            u1[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_u20 = 65025;
          struct dst_entry ** u2 = (struct dst_entry **) malloc(_len_u20*sizeof(struct dst_entry *));
          for(int _i0 = 0; _i0 < _len_u20; _i0++) {
            int _len_u21 = 1;
            u2[_i0] = (struct dst_entry *) malloc(_len_u21*sizeof(struct dst_entry));
            for(int _i1 = 0; _i1 < _len_u21; _i1++) {
              u2[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_u30 = 65025;
          struct flowi6 * u3 = (struct flowi6 *) malloc(_len_u30*sizeof(struct flowi6));
          for(int _i0 = 0; _i0 < _len_u30; _i0++) {
            u3[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = eafnosupport_ipv6_dst_lookup(net,u1,u2,u3);
          printf("%d\n", benchRet); 
          free(net);
          free(u1);
          for(int i1 = 0; i1 < _len_u20; i1++) {
            int _len_u21 = 1;
              free(u2[i1]);
          }
          free(u2);
          free(u3);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_net0 = 100;
          struct net * net = (struct net *) malloc(_len_net0*sizeof(struct net));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
            net[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_u10 = 100;
          struct sock * u1 = (struct sock *) malloc(_len_u10*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_u10; _i0++) {
            u1[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_u20 = 100;
          struct dst_entry ** u2 = (struct dst_entry **) malloc(_len_u20*sizeof(struct dst_entry *));
          for(int _i0 = 0; _i0 < _len_u20; _i0++) {
            int _len_u21 = 1;
            u2[_i0] = (struct dst_entry *) malloc(_len_u21*sizeof(struct dst_entry));
            for(int _i1 = 0; _i1 < _len_u21; _i1++) {
              u2[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_u30 = 100;
          struct flowi6 * u3 = (struct flowi6 *) malloc(_len_u30*sizeof(struct flowi6));
          for(int _i0 = 0; _i0 < _len_u30; _i0++) {
            u3[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = eafnosupport_ipv6_dst_lookup(net,u1,u2,u3);
          printf("%d\n", benchRet); 
          free(net);
          free(u1);
          for(int i1 = 0; i1 < _len_u20; i1++) {
            int _len_u21 = 1;
              free(u2[i1]);
          }
          free(u2);
          free(u3);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
