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
struct udphdr {int /*<<< orphan*/  check; } ;
struct tcphdr {int /*<<< orphan*/  check; } ;
typedef  int /*<<< orphan*/  __sum16 ;

/* Variables and functions */
#define  IPPROTO_TCP 129 
#define  IPPROTO_UDP 128 

__attribute__((used)) static __sum16 *rmnet_map_get_csum_field(unsigned char protocol,
					 const void *txporthdr)
{
	__sum16 *check = NULL;

	switch (protocol) {
	case IPPROTO_TCP:
		check = &(((struct tcphdr *)txporthdr)->check);
		break;

	case IPPROTO_UDP:
		check = &(((struct udphdr *)txporthdr)->check);
		break;

	default:
		check = NULL;
		break;
	}

	return check;
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
          unsigned char protocol = 100;
          int _len_txporthdr0 = 1;
          const void * txporthdr = (const void *) malloc(_len_txporthdr0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_txporthdr0; _i0++) {
            txporthdr[_i0] = 0;
          }
          int * benchRet = rmnet_map_get_csum_field(protocol,txporthdr);
          printf("%d\n", (*benchRet)); 
          free(txporthdr);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned char protocol = 255;
          int _len_txporthdr0 = 65025;
          const void * txporthdr = (const void *) malloc(_len_txporthdr0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_txporthdr0; _i0++) {
            txporthdr[_i0] = 0;
          }
          int * benchRet = rmnet_map_get_csum_field(protocol,txporthdr);
          printf("%d\n", (*benchRet)); 
          free(txporthdr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned char protocol = 10;
          int _len_txporthdr0 = 100;
          const void * txporthdr = (const void *) malloc(_len_txporthdr0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_txporthdr0; _i0++) {
            txporthdr[_i0] = 0;
          }
          int * benchRet = rmnet_map_get_csum_field(protocol,txporthdr);
          printf("%d\n", (*benchRet)); 
          free(txporthdr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
