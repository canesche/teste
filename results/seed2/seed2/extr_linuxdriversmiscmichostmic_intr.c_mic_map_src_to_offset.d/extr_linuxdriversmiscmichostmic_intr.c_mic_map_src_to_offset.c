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
typedef  scalar_t__ u16 ;
struct mic_device {TYPE_1__* intr_info; } ;
typedef  enum mic_intr_type { ____Placeholder_mic_intr_type } mic_intr_type ;
struct TYPE_2__ {int* intr_len; scalar_t__* intr_start_idx; } ;

/* Variables and functions */
 int MIC_NUM_INTR_TYPES ; 
 scalar_t__ MIC_NUM_OFFSETS ; 

__attribute__((used)) static u16 mic_map_src_to_offset(struct mic_device *mdev,
				 int intr_src, enum mic_intr_type type)
{
	if (type >= MIC_NUM_INTR_TYPES)
		return MIC_NUM_OFFSETS;
	if (intr_src >= mdev->intr_info->intr_len[type])
		return MIC_NUM_OFFSETS;

	return mdev->intr_info->intr_start_idx[type] + intr_src;
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
          int intr_src = 100;
          enum mic_intr_type type = 100;
          int _len_mdev0 = 1;
          struct mic_device * mdev = (struct mic_device *) malloc(_len_mdev0*sizeof(struct mic_device));
          for(int _i0 = 0; _i0 < _len_mdev0; _i0++) {
              int _len_mdev__i0__intr_info0 = 1;
          mdev[_i0].intr_info = (struct TYPE_2__ *) malloc(_len_mdev__i0__intr_info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mdev__i0__intr_info0; _j0++) {
              int _len_mdev__i0__intr_info_intr_len0 = 1;
          mdev[_i0].intr_info->intr_len = (int *) malloc(_len_mdev__i0__intr_info_intr_len0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mdev__i0__intr_info_intr_len0; _j0++) {
            mdev[_i0].intr_info->intr_len[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mdev__i0__intr_info_intr_start_idx0 = 1;
          mdev[_i0].intr_info->intr_start_idx = (long *) malloc(_len_mdev__i0__intr_info_intr_start_idx0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_mdev__i0__intr_info_intr_start_idx0; _j0++) {
            mdev[_i0].intr_info->intr_start_idx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          long benchRet = mic_map_src_to_offset(mdev,intr_src,type);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_mdev0; _aux++) {
          free(mdev[_aux].intr_info);
          }
          free(mdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int intr_src = 255;
          enum mic_intr_type type = 255;
          int _len_mdev0 = 65025;
          struct mic_device * mdev = (struct mic_device *) malloc(_len_mdev0*sizeof(struct mic_device));
          for(int _i0 = 0; _i0 < _len_mdev0; _i0++) {
              int _len_mdev__i0__intr_info0 = 1;
          mdev[_i0].intr_info = (struct TYPE_2__ *) malloc(_len_mdev__i0__intr_info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mdev__i0__intr_info0; _j0++) {
              int _len_mdev__i0__intr_info_intr_len0 = 1;
          mdev[_i0].intr_info->intr_len = (int *) malloc(_len_mdev__i0__intr_info_intr_len0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mdev__i0__intr_info_intr_len0; _j0++) {
            mdev[_i0].intr_info->intr_len[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mdev__i0__intr_info_intr_start_idx0 = 1;
          mdev[_i0].intr_info->intr_start_idx = (long *) malloc(_len_mdev__i0__intr_info_intr_start_idx0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_mdev__i0__intr_info_intr_start_idx0; _j0++) {
            mdev[_i0].intr_info->intr_start_idx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          long benchRet = mic_map_src_to_offset(mdev,intr_src,type);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_mdev0; _aux++) {
          free(mdev[_aux].intr_info);
          }
          free(mdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int intr_src = 10;
          enum mic_intr_type type = 10;
          int _len_mdev0 = 100;
          struct mic_device * mdev = (struct mic_device *) malloc(_len_mdev0*sizeof(struct mic_device));
          for(int _i0 = 0; _i0 < _len_mdev0; _i0++) {
              int _len_mdev__i0__intr_info0 = 1;
          mdev[_i0].intr_info = (struct TYPE_2__ *) malloc(_len_mdev__i0__intr_info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mdev__i0__intr_info0; _j0++) {
              int _len_mdev__i0__intr_info_intr_len0 = 1;
          mdev[_i0].intr_info->intr_len = (int *) malloc(_len_mdev__i0__intr_info_intr_len0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mdev__i0__intr_info_intr_len0; _j0++) {
            mdev[_i0].intr_info->intr_len[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mdev__i0__intr_info_intr_start_idx0 = 1;
          mdev[_i0].intr_info->intr_start_idx = (long *) malloc(_len_mdev__i0__intr_info_intr_start_idx0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_mdev__i0__intr_info_intr_start_idx0; _j0++) {
            mdev[_i0].intr_info->intr_start_idx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          long benchRet = mic_map_src_to_offset(mdev,intr_src,type);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_mdev0; _aux++) {
          free(mdev[_aux].intr_info);
          }
          free(mdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
