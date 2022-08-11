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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int s_b1; int s_b2; int s_b3; int s_b4; } ;
struct TYPE_6__ {int S_addr; TYPE_1__ S_un_b; } ;
struct TYPE_7__ {TYPE_2__ S_un; } ;
typedef  TYPE_3__ IN_ADDR ;

/* Variables and functions */

__attribute__((used)) static void init_ip4(IN_ADDR* addr, const int src[4])
{
    if (!src || src[0] == -1)
    {
        addr->S_un.S_addr = 0xabababab;
    }
    else
    {
        addr->S_un.S_un_b.s_b1 = src[0];
        addr->S_un.S_un_b.s_b2 = src[1];
        addr->S_un.S_un_b.s_b3 = src[2];
        addr->S_un.S_un_b.s_b4 = src[3];
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
          int _len_addr0 = 1;
          struct TYPE_7__ * addr = (struct TYPE_7__ *) malloc(_len_addr0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0].S_un.S_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        addr[_i0].S_un.S_un_b.s_b1 = ((-2 * (next_i()%2)) + 1) * next_i();
        addr[_i0].S_un.S_un_b.s_b2 = ((-2 * (next_i()%2)) + 1) * next_i();
        addr[_i0].S_un.S_un_b.s_b3 = ((-2 * (next_i()%2)) + 1) * next_i();
        addr[_i0].S_un.S_un_b.s_b4 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 4;
          int const* src = (int const*) malloc(_len_src0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_ip4(addr,src);
          free(addr);
          free(src);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_addr0 = 65025;
          struct TYPE_7__ * addr = (struct TYPE_7__ *) malloc(_len_addr0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0].S_un.S_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        addr[_i0].S_un.S_un_b.s_b1 = ((-2 * (next_i()%2)) + 1) * next_i();
        addr[_i0].S_un.S_un_b.s_b2 = ((-2 * (next_i()%2)) + 1) * next_i();
        addr[_i0].S_un.S_un_b.s_b3 = ((-2 * (next_i()%2)) + 1) * next_i();
        addr[_i0].S_un.S_un_b.s_b4 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 65025;
          int const* src = (int const*) malloc(_len_src0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_ip4(addr,src);
          free(addr);
          free(src);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_addr0 = 100;
          struct TYPE_7__ * addr = (struct TYPE_7__ *) malloc(_len_addr0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0].S_un.S_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        addr[_i0].S_un.S_un_b.s_b1 = ((-2 * (next_i()%2)) + 1) * next_i();
        addr[_i0].S_un.S_un_b.s_b2 = ((-2 * (next_i()%2)) + 1) * next_i();
        addr[_i0].S_un.S_un_b.s_b3 = ((-2 * (next_i()%2)) + 1) * next_i();
        addr[_i0].S_un.S_un_b.s_b4 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 100;
          int const* src = (int const*) malloc(_len_src0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_ip4(addr,src);
          free(addr);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
