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
typedef  size_t u8 ;
struct mlxsw_sx {int /*<<< orphan*/ ** ports; } ;

/* Variables and functions */

__attribute__((used)) static bool mlxsw_sx_port_created(struct mlxsw_sx *mlxsw_sx, u8 local_port)
{
	return mlxsw_sx->ports[local_port] != NULL;
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
          unsigned long local_port = 100;
          int _len_mlxsw_sx0 = 1;
          struct mlxsw_sx * mlxsw_sx = (struct mlxsw_sx *) malloc(_len_mlxsw_sx0*sizeof(struct mlxsw_sx));
          for(int _i0 = 0; _i0 < _len_mlxsw_sx0; _i0++) {
              int _len_mlxsw_sx__i0__ports0 = 1;
          mlxsw_sx[_i0].ports = (int **) malloc(_len_mlxsw_sx__i0__ports0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_mlxsw_sx__i0__ports0; _j0++) {
            int _len_mlxsw_sx__i0__ports1 = 1;
            mlxsw_sx[_i0].ports[_j0] = (int *) malloc(_len_mlxsw_sx__i0__ports1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_mlxsw_sx__i0__ports1; _j1++) {
              mlxsw_sx[_i0].ports[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = mlxsw_sx_port_created(mlxsw_sx,local_port);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mlxsw_sx0; _aux++) {
          free(*(mlxsw_sx[_aux].ports));
        free(mlxsw_sx[_aux].ports);
          }
          free(mlxsw_sx);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long local_port = 255;
          int _len_mlxsw_sx0 = 65025;
          struct mlxsw_sx * mlxsw_sx = (struct mlxsw_sx *) malloc(_len_mlxsw_sx0*sizeof(struct mlxsw_sx));
          for(int _i0 = 0; _i0 < _len_mlxsw_sx0; _i0++) {
              int _len_mlxsw_sx__i0__ports0 = 1;
          mlxsw_sx[_i0].ports = (int **) malloc(_len_mlxsw_sx__i0__ports0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_mlxsw_sx__i0__ports0; _j0++) {
            int _len_mlxsw_sx__i0__ports1 = 1;
            mlxsw_sx[_i0].ports[_j0] = (int *) malloc(_len_mlxsw_sx__i0__ports1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_mlxsw_sx__i0__ports1; _j1++) {
              mlxsw_sx[_i0].ports[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = mlxsw_sx_port_created(mlxsw_sx,local_port);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mlxsw_sx0; _aux++) {
          free(*(mlxsw_sx[_aux].ports));
        free(mlxsw_sx[_aux].ports);
          }
          free(mlxsw_sx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long local_port = 10;
          int _len_mlxsw_sx0 = 100;
          struct mlxsw_sx * mlxsw_sx = (struct mlxsw_sx *) malloc(_len_mlxsw_sx0*sizeof(struct mlxsw_sx));
          for(int _i0 = 0; _i0 < _len_mlxsw_sx0; _i0++) {
              int _len_mlxsw_sx__i0__ports0 = 1;
          mlxsw_sx[_i0].ports = (int **) malloc(_len_mlxsw_sx__i0__ports0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_mlxsw_sx__i0__ports0; _j0++) {
            int _len_mlxsw_sx__i0__ports1 = 1;
            mlxsw_sx[_i0].ports[_j0] = (int *) malloc(_len_mlxsw_sx__i0__ports1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_mlxsw_sx__i0__ports1; _j1++) {
              mlxsw_sx[_i0].ports[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = mlxsw_sx_port_created(mlxsw_sx,local_port);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mlxsw_sx0; _aux++) {
          free(*(mlxsw_sx[_aux].ports));
        free(mlxsw_sx[_aux].ports);
          }
          free(mlxsw_sx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
