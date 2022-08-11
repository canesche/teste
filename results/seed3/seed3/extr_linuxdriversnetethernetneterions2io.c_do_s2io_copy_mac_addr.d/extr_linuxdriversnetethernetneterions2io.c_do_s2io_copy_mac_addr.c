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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  void* u8 ;
typedef  int u64 ;
struct s2io_nic {TYPE_1__* def_mac_addr; } ;
struct TYPE_2__ {void** mac_addr; } ;

/* Variables and functions */

__attribute__((used)) static void do_s2io_copy_mac_addr(struct s2io_nic *sp, int offset, u64 mac_addr)
{
	sp->def_mac_addr[offset].mac_addr[5] = (u8) (mac_addr);
	sp->def_mac_addr[offset].mac_addr[4] = (u8) (mac_addr >> 8);
	sp->def_mac_addr[offset].mac_addr[3] = (u8) (mac_addr >> 16);
	sp->def_mac_addr[offset].mac_addr[2] = (u8) (mac_addr >> 24);
	sp->def_mac_addr[offset].mac_addr[1] = (u8) (mac_addr >> 32);
	sp->def_mac_addr[offset].mac_addr[0] = (u8) (mac_addr >> 40);
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
          int offset = 100;
          int mac_addr = 100;
          int _len_sp0 = 1;
          struct s2io_nic * sp = (struct s2io_nic *) malloc(_len_sp0*sizeof(struct s2io_nic));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
              int _len_sp__i0__def_mac_addr0 = 1;
          sp[_i0].def_mac_addr = (struct TYPE_2__ *) malloc(_len_sp__i0__def_mac_addr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sp__i0__def_mac_addr0; _j0++) {
              int _len_sp__i0__def_mac_addr_mac_addr0 = 1;
          sp[_i0].def_mac_addr->mac_addr = (void **) malloc(_len_sp__i0__def_mac_addr_mac_addr0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_sp__i0__def_mac_addr_mac_addr0; _j0++) {
          }
          }
          }
          do_s2io_copy_mac_addr(sp,offset,mac_addr);
          for(int _aux = 0; _aux < _len_sp0; _aux++) {
          free(sp[_aux].def_mac_addr);
          }
          free(sp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int offset = 255;
          int mac_addr = 255;
          int _len_sp0 = 65025;
          struct s2io_nic * sp = (struct s2io_nic *) malloc(_len_sp0*sizeof(struct s2io_nic));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
              int _len_sp__i0__def_mac_addr0 = 1;
          sp[_i0].def_mac_addr = (struct TYPE_2__ *) malloc(_len_sp__i0__def_mac_addr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sp__i0__def_mac_addr0; _j0++) {
              int _len_sp__i0__def_mac_addr_mac_addr0 = 1;
          sp[_i0].def_mac_addr->mac_addr = (void **) malloc(_len_sp__i0__def_mac_addr_mac_addr0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_sp__i0__def_mac_addr_mac_addr0; _j0++) {
          }
          }
          }
          do_s2io_copy_mac_addr(sp,offset,mac_addr);
          for(int _aux = 0; _aux < _len_sp0; _aux++) {
          free(sp[_aux].def_mac_addr);
          }
          free(sp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int offset = 10;
          int mac_addr = 10;
          int _len_sp0 = 100;
          struct s2io_nic * sp = (struct s2io_nic *) malloc(_len_sp0*sizeof(struct s2io_nic));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
              int _len_sp__i0__def_mac_addr0 = 1;
          sp[_i0].def_mac_addr = (struct TYPE_2__ *) malloc(_len_sp__i0__def_mac_addr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sp__i0__def_mac_addr0; _j0++) {
              int _len_sp__i0__def_mac_addr_mac_addr0 = 1;
          sp[_i0].def_mac_addr->mac_addr = (void **) malloc(_len_sp__i0__def_mac_addr_mac_addr0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_sp__i0__def_mac_addr_mac_addr0; _j0++) {
          }
          }
          }
          do_s2io_copy_mac_addr(sp,offset,mac_addr);
          for(int _aux = 0; _aux < _len_sp0; _aux++) {
          free(sp[_aux].def_mac_addr);
          }
          free(sp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
