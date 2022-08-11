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
struct TYPE_2__ {int array_mode; } ;
union dc_tiling_info {TYPE_1__ gfx8; } ;
typedef  enum mi_tiling_format { ____Placeholder_mi_tiling_format } mi_tiling_format ;

/* Variables and functions */
#define  DC_ARRAY_1D_TILED_THICK 137 
#define  DC_ARRAY_1D_TILED_THIN1 136 
#define  DC_ARRAY_2D_TILED_THICK 135 
#define  DC_ARRAY_2D_TILED_THIN1 134 
#define  DC_ARRAY_2D_TILED_X_THICK 133 
#define  DC_ARRAY_LINEAR_ALLIGNED 132 
#define  DC_ARRAY_LINEAR_GENERAL 131 
#define  DC_ARRAY_PRT_2D_TILED_THICK 130 
#define  DC_ARRAY_PRT_2D_TILED_THIN1 129 
#define  DC_ARRAY_PRT_TILED_THIN1 128 
 int mi_tiling_1D ; 
 int mi_tiling_2D ; 
 int mi_tiling_linear ; 

__attribute__((used)) static enum mi_tiling_format get_mi_tiling(
		union dc_tiling_info *tiling_info)
{
	switch (tiling_info->gfx8.array_mode) {
	case DC_ARRAY_1D_TILED_THIN1:
	case DC_ARRAY_1D_TILED_THICK:
	case DC_ARRAY_PRT_TILED_THIN1:
		return mi_tiling_1D;
	case DC_ARRAY_2D_TILED_THIN1:
	case DC_ARRAY_2D_TILED_THICK:
	case DC_ARRAY_2D_TILED_X_THICK:
	case DC_ARRAY_PRT_2D_TILED_THIN1:
	case DC_ARRAY_PRT_2D_TILED_THICK:
		return mi_tiling_2D;
	case DC_ARRAY_LINEAR_GENERAL:
	case DC_ARRAY_LINEAR_ALLIGNED:
		return mi_tiling_linear;
	default:
		return mi_tiling_2D;
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
          int _len_tiling_info0 = 1;
          union dc_tiling_info * tiling_info = (union dc_tiling_info *) malloc(_len_tiling_info0*sizeof(union dc_tiling_info));
          for(int _i0 = 0; _i0 < _len_tiling_info0; _i0++) {
            tiling_info[_i0] = 0;
          }
          enum mi_tiling_format benchRet = get_mi_tiling(tiling_info);
          free(tiling_info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tiling_info0 = 65025;
          union dc_tiling_info * tiling_info = (union dc_tiling_info *) malloc(_len_tiling_info0*sizeof(union dc_tiling_info));
          for(int _i0 = 0; _i0 < _len_tiling_info0; _i0++) {
            tiling_info[_i0] = 0;
          }
          enum mi_tiling_format benchRet = get_mi_tiling(tiling_info);
          free(tiling_info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tiling_info0 = 100;
          union dc_tiling_info * tiling_info = (union dc_tiling_info *) malloc(_len_tiling_info0*sizeof(union dc_tiling_info));
          for(int _i0 = 0; _i0 < _len_tiling_info0; _i0++) {
            tiling_info[_i0] = 0;
          }
          enum mi_tiling_format benchRet = get_mi_tiling(tiling_info);
          free(tiling_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
