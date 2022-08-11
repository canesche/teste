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
struct mlxsw_sp_fid {TYPE_1__* fid_family; } ;
struct TYPE_2__ {scalar_t__ start_index; } ;

/* Variables and functions */

__attribute__((used)) static int mlxsw_sp_fid_rfid_index_alloc(struct mlxsw_sp_fid *fid,
					 const void *arg, u16 *p_fid_index)
{
	u16 rif_index = *(u16 *) arg;

	*p_fid_index = fid->fid_family->start_index + rif_index;

	return 0;
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
          int _len_fid0 = 1;
          struct mlxsw_sp_fid * fid = (struct mlxsw_sp_fid *) malloc(_len_fid0*sizeof(struct mlxsw_sp_fid));
          for(int _i0 = 0; _i0 < _len_fid0; _i0++) {
              int _len_fid__i0__fid_family0 = 1;
          fid[_i0].fid_family = (struct TYPE_2__ *) malloc(_len_fid__i0__fid_family0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_fid__i0__fid_family0; _j0++) {
            fid[_i0].fid_family->start_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_arg0 = 1;
          const void * arg = (const void *) malloc(_len_arg0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
            arg[_i0] = 0;
          }
          int _len_p_fid_index0 = 1;
          long * p_fid_index = (long *) malloc(_len_p_fid_index0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_p_fid_index0; _i0++) {
            p_fid_index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlxsw_sp_fid_rfid_index_alloc(fid,arg,p_fid_index);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fid0; _aux++) {
          free(fid[_aux].fid_family);
          }
          free(fid);
          free(arg);
          free(p_fid_index);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fid0 = 65025;
          struct mlxsw_sp_fid * fid = (struct mlxsw_sp_fid *) malloc(_len_fid0*sizeof(struct mlxsw_sp_fid));
          for(int _i0 = 0; _i0 < _len_fid0; _i0++) {
              int _len_fid__i0__fid_family0 = 1;
          fid[_i0].fid_family = (struct TYPE_2__ *) malloc(_len_fid__i0__fid_family0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_fid__i0__fid_family0; _j0++) {
            fid[_i0].fid_family->start_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_arg0 = 65025;
          const void * arg = (const void *) malloc(_len_arg0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
            arg[_i0] = 0;
          }
          int _len_p_fid_index0 = 65025;
          long * p_fid_index = (long *) malloc(_len_p_fid_index0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_p_fid_index0; _i0++) {
            p_fid_index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlxsw_sp_fid_rfid_index_alloc(fid,arg,p_fid_index);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fid0; _aux++) {
          free(fid[_aux].fid_family);
          }
          free(fid);
          free(arg);
          free(p_fid_index);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fid0 = 100;
          struct mlxsw_sp_fid * fid = (struct mlxsw_sp_fid *) malloc(_len_fid0*sizeof(struct mlxsw_sp_fid));
          for(int _i0 = 0; _i0 < _len_fid0; _i0++) {
              int _len_fid__i0__fid_family0 = 1;
          fid[_i0].fid_family = (struct TYPE_2__ *) malloc(_len_fid__i0__fid_family0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_fid__i0__fid_family0; _j0++) {
            fid[_i0].fid_family->start_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_arg0 = 100;
          const void * arg = (const void *) malloc(_len_arg0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
            arg[_i0] = 0;
          }
          int _len_p_fid_index0 = 100;
          long * p_fid_index = (long *) malloc(_len_p_fid_index0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_p_fid_index0; _i0++) {
            p_fid_index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlxsw_sp_fid_rfid_index_alloc(fid,arg,p_fid_index);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fid0; _aux++) {
          free(fid[_aux].fid_family);
          }
          free(fid);
          free(arg);
          free(p_fid_index);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
