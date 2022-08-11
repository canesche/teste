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
struct TYPE_2__ {scalar_t__* vlan_id; } ;
union ep_buffer_info {TYPE_1__ v1i; } ;
typedef  scalar_t__ u16 ;
struct epbuf_handler {union ep_buffer_info* info; } ;

/* Variables and functions */
 int EP_BUFFER_SUPPORT_VLAN_MAX ; 

bool fjes_hw_check_vlan_id(struct epbuf_handler *epbh, u16 vlan_id)
{
	union ep_buffer_info *info = epbh->info;
	bool ret = false;
	int i;

	if (vlan_id == 0) {
		ret = true;
	} else {
		for (i = 0; i < EP_BUFFER_SUPPORT_VLAN_MAX; i++) {
			if (vlan_id == info->v1i.vlan_id[i]) {
				ret = true;
				break;
			}
		}
	}
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
          long vlan_id = 100;
          int _len_epbh0 = 1;
          struct epbuf_handler * epbh = (struct epbuf_handler *) malloc(_len_epbh0*sizeof(struct epbuf_handler));
          for(int _i0 = 0; _i0 < _len_epbh0; _i0++) {
              int _len_epbh__i0__info0 = 1;
          epbh[_i0].info = (union ep_buffer_info *) malloc(_len_epbh__i0__info0*sizeof(union ep_buffer_info));
          for(int _j0 = 0; _j0 < _len_epbh__i0__info0; _j0++) {
            epbh[_i0].info[_j0] = 0;
          }
          }
          int benchRet = fjes_hw_check_vlan_id(epbh,vlan_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_epbh0; _aux++) {
          free(epbh[_aux].info);
          }
          free(epbh);
        
        break;
    }
    // big-arr
    case 1:
    {
          long vlan_id = 255;
          int _len_epbh0 = 65025;
          struct epbuf_handler * epbh = (struct epbuf_handler *) malloc(_len_epbh0*sizeof(struct epbuf_handler));
          for(int _i0 = 0; _i0 < _len_epbh0; _i0++) {
              int _len_epbh__i0__info0 = 1;
          epbh[_i0].info = (union ep_buffer_info *) malloc(_len_epbh__i0__info0*sizeof(union ep_buffer_info));
          for(int _j0 = 0; _j0 < _len_epbh__i0__info0; _j0++) {
            epbh[_i0].info[_j0] = 0;
          }
          }
          int benchRet = fjes_hw_check_vlan_id(epbh,vlan_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_epbh0; _aux++) {
          free(epbh[_aux].info);
          }
          free(epbh);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long vlan_id = 10;
          int _len_epbh0 = 100;
          struct epbuf_handler * epbh = (struct epbuf_handler *) malloc(_len_epbh0*sizeof(struct epbuf_handler));
          for(int _i0 = 0; _i0 < _len_epbh0; _i0++) {
              int _len_epbh__i0__info0 = 1;
          epbh[_i0].info = (union ep_buffer_info *) malloc(_len_epbh__i0__info0*sizeof(union ep_buffer_info));
          for(int _j0 = 0; _j0 < _len_epbh__i0__info0; _j0++) {
            epbh[_i0].info[_j0] = 0;
          }
          }
          int benchRet = fjes_hw_check_vlan_id(epbh,vlan_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_epbh0; _aux++) {
          free(epbh[_aux].info);
          }
          free(epbh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
