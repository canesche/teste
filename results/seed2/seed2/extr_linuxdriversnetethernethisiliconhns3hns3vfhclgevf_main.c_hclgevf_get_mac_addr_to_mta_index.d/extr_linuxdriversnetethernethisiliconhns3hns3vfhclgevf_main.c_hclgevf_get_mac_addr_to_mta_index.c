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
typedef  int u8 ;
typedef  int u32 ;
typedef  int u16 ;
struct hclgevf_dev {int mta_mac_sel_type; } ;

/* Variables and functions */
 int HCLGEVF_MTA_TYPE_SEL_MAX ; 

__attribute__((used)) static u16 hclgevf_get_mac_addr_to_mta_index(struct hclgevf_dev *hdev,
					     const u8 *addr)
{
	u32 rsh = HCLGEVF_MTA_TYPE_SEL_MAX - hdev->mta_mac_sel_type;
	u16 high_val = addr[1] | (addr[0] << 8);

	return (high_val >> rsh) & 0xfff;
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
          int _len_hdev0 = 1;
          struct hclgevf_dev * hdev = (struct hclgevf_dev *) malloc(_len_hdev0*sizeof(struct hclgevf_dev));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].mta_mac_sel_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_addr0 = 1;
          const int * addr = (const int *) malloc(_len_addr0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hclgevf_get_mac_addr_to_mta_index(hdev,addr);
          printf("%d\n", benchRet); 
          free(hdev);
          free(addr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hdev0 = 65025;
          struct hclgevf_dev * hdev = (struct hclgevf_dev *) malloc(_len_hdev0*sizeof(struct hclgevf_dev));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].mta_mac_sel_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_addr0 = 65025;
          const int * addr = (const int *) malloc(_len_addr0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hclgevf_get_mac_addr_to_mta_index(hdev,addr);
          printf("%d\n", benchRet); 
          free(hdev);
          free(addr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hdev0 = 100;
          struct hclgevf_dev * hdev = (struct hclgevf_dev *) malloc(_len_hdev0*sizeof(struct hclgevf_dev));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].mta_mac_sel_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_addr0 = 100;
          const int * addr = (const int *) malloc(_len_addr0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hclgevf_get_mac_addr_to_mta_index(hdev,addr);
          printf("%d\n", benchRet); 
          free(hdev);
          free(addr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
