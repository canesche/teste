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
struct ufs_sb_private_info {scalar_t__ fs_magic; } ;
typedef  scalar_t__ __fs64 ;
typedef  scalar_t__ __fs32 ;

/* Variables and functions */
 scalar_t__ UFS2_MAGIC ; 

__attribute__((used)) static inline int ufs_is_data_ptr_zero(struct ufs_sb_private_info *uspi,
				       void *p)
{
	if (uspi->fs_magic == UFS2_MAGIC)
		return *(__fs64 *)p == 0;
	else
		return *(__fs32 *)p == 0;
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
          int _len_uspi0 = 1;
          struct ufs_sb_private_info * uspi = (struct ufs_sb_private_info *) malloc(_len_uspi0*sizeof(struct ufs_sb_private_info));
          for(int _i0 = 0; _i0 < _len_uspi0; _i0++) {
            uspi[_i0].fs_magic = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * p;
          int benchRet = ufs_is_data_ptr_zero(uspi,p);
          printf("%d\n", benchRet); 
          free(uspi);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_uspi0 = 65025;
          struct ufs_sb_private_info * uspi = (struct ufs_sb_private_info *) malloc(_len_uspi0*sizeof(struct ufs_sb_private_info));
          for(int _i0 = 0; _i0 < _len_uspi0; _i0++) {
            uspi[_i0].fs_magic = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * p;
          int benchRet = ufs_is_data_ptr_zero(uspi,p);
          printf("%d\n", benchRet); 
          free(uspi);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_uspi0 = 100;
          struct ufs_sb_private_info * uspi = (struct ufs_sb_private_info *) malloc(_len_uspi0*sizeof(struct ufs_sb_private_info));
          for(int _i0 = 0; _i0 < _len_uspi0; _i0++) {
            uspi[_i0].fs_magic = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * p;
          int benchRet = ufs_is_data_ptr_zero(uspi,p);
          printf("%d\n", benchRet); 
          free(uspi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
