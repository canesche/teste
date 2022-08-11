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
struct TYPE_3__ {int* color; } ;
typedef  TYPE_1__ setColorCommand_t ;
struct TYPE_4__ {int* color2D; } ;

/* Variables and functions */
 TYPE_2__ backEnd ; 

const void	*RB_SetColor( const void *data ) {
	const setColorCommand_t	*cmd;

	cmd = (const setColorCommand_t *)data;

	backEnd.color2D[0] = cmd->color[0] * 255;
	backEnd.color2D[1] = cmd->color[1] * 255;
	backEnd.color2D[2] = cmd->color[2] * 255;
	backEnd.color2D[3] = cmd->color[3] * 255;

	return (const void *)(cmd + 1);
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
          int _len_data0 = 1;
          const void * data = (const void *) malloc(_len_data0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = 0;
          }
          const void * benchRet = RB_SetColor(data);
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_data0 = 65025;
          const void * data = (const void *) malloc(_len_data0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = 0;
          }
          const void * benchRet = RB_SetColor(data);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_data0 = 100;
          const void * data = (const void *) malloc(_len_data0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = 0;
          }
          const void * benchRet = RB_SetColor(data);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
