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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int* b; } ;
struct TYPE_4__ {int type; TYPE_1__ bdaddr; } ;
struct mgmt_ltk_info {int master; TYPE_2__ addr; } ;

/* Variables and functions */
#define  BDADDR_LE_PUBLIC 129 
#define  BDADDR_LE_RANDOM 128 

__attribute__((used)) static bool ltk_is_valid(struct mgmt_ltk_info *key)
{
	if (key->master != 0x00 && key->master != 0x01)
		return false;

	switch (key->addr.type) {
	case BDADDR_LE_PUBLIC:
		return true;

	case BDADDR_LE_RANDOM:
		/* Two most significant bits shall be set */
		if ((key->addr.bdaddr.b[5] & 0xc0) != 0xc0)
			return false;
		return true;
	}

	return false;
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
          int _len_key0 = 1;
          struct mgmt_ltk_info * key = (struct mgmt_ltk_info *) malloc(_len_key0*sizeof(struct mgmt_ltk_info));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0].master = ((-2 * (next_i()%2)) + 1) * next_i();
        key[_i0].addr.type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_key__i0__addr_bdaddr_b0 = 1;
          key[_i0].addr.bdaddr.b = (int *) malloc(_len_key__i0__addr_bdaddr_b0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_key__i0__addr_bdaddr_b0; _j0++) {
            key[_i0].addr.bdaddr.b[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ltk_is_valid(key);
          printf("%d\n", benchRet); 
          free(key);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_key0 = 65025;
          struct mgmt_ltk_info * key = (struct mgmt_ltk_info *) malloc(_len_key0*sizeof(struct mgmt_ltk_info));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0].master = ((-2 * (next_i()%2)) + 1) * next_i();
        key[_i0].addr.type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_key__i0__addr_bdaddr_b0 = 1;
          key[_i0].addr.bdaddr.b = (int *) malloc(_len_key__i0__addr_bdaddr_b0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_key__i0__addr_bdaddr_b0; _j0++) {
            key[_i0].addr.bdaddr.b[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ltk_is_valid(key);
          printf("%d\n", benchRet); 
          free(key);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_key0 = 100;
          struct mgmt_ltk_info * key = (struct mgmt_ltk_info *) malloc(_len_key0*sizeof(struct mgmt_ltk_info));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0].master = ((-2 * (next_i()%2)) + 1) * next_i();
        key[_i0].addr.type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_key__i0__addr_bdaddr_b0 = 1;
          key[_i0].addr.bdaddr.b = (int *) malloc(_len_key__i0__addr_bdaddr_b0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_key__i0__addr_bdaddr_b0; _j0++) {
            key[_i0].addr.bdaddr.b[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ltk_is_valid(key);
          printf("%d\n", benchRet); 
          free(key);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
