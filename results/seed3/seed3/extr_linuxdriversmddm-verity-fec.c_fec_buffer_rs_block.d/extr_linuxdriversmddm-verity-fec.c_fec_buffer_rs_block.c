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
typedef  int /*<<< orphan*/  u8 ;
struct dm_verity_fec_io {int /*<<< orphan*/ ** bufs; } ;
struct dm_verity {TYPE_1__* fec; } ;
struct TYPE_2__ {unsigned int rsn; } ;

/* Variables and functions */

__attribute__((used)) static inline u8 *fec_buffer_rs_block(struct dm_verity *v,
				      struct dm_verity_fec_io *fio,
				      unsigned i, unsigned j)
{
	return &fio->bufs[i][j * v->fec->rsn];
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
          unsigned int i = 100;
          unsigned int j = 100;
          int _len_v0 = 1;
          struct dm_verity * v = (struct dm_verity *) malloc(_len_v0*sizeof(struct dm_verity));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
              int _len_v__i0__fec0 = 1;
          v[_i0].fec = (struct TYPE_2__ *) malloc(_len_v__i0__fec0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_v__i0__fec0; _j0++) {
            v[_i0].fec->rsn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_fio0 = 1;
          struct dm_verity_fec_io * fio = (struct dm_verity_fec_io *) malloc(_len_fio0*sizeof(struct dm_verity_fec_io));
          for(int _i0 = 0; _i0 < _len_fio0; _i0++) {
              int _len_fio__i0__bufs0 = 1;
          fio[_i0].bufs = (int **) malloc(_len_fio__i0__bufs0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_fio__i0__bufs0; _j0++) {
            int _len_fio__i0__bufs1 = 1;
            fio[_i0].bufs[_j0] = (int *) malloc(_len_fio__i0__bufs1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_fio__i0__bufs1; _j1++) {
              fio[_i0].bufs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int * benchRet = fec_buffer_rs_block(v,fio,i,j);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_v0; _aux++) {
          free(v[_aux].fec);
          }
          free(v);
          for(int _aux = 0; _aux < _len_fio0; _aux++) {
          free(*(fio[_aux].bufs));
        free(fio[_aux].bufs);
          }
          free(fio);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int i = 255;
          unsigned int j = 255;
          int _len_v0 = 65025;
          struct dm_verity * v = (struct dm_verity *) malloc(_len_v0*sizeof(struct dm_verity));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
              int _len_v__i0__fec0 = 1;
          v[_i0].fec = (struct TYPE_2__ *) malloc(_len_v__i0__fec0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_v__i0__fec0; _j0++) {
            v[_i0].fec->rsn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_fio0 = 65025;
          struct dm_verity_fec_io * fio = (struct dm_verity_fec_io *) malloc(_len_fio0*sizeof(struct dm_verity_fec_io));
          for(int _i0 = 0; _i0 < _len_fio0; _i0++) {
              int _len_fio__i0__bufs0 = 1;
          fio[_i0].bufs = (int **) malloc(_len_fio__i0__bufs0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_fio__i0__bufs0; _j0++) {
            int _len_fio__i0__bufs1 = 1;
            fio[_i0].bufs[_j0] = (int *) malloc(_len_fio__i0__bufs1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_fio__i0__bufs1; _j1++) {
              fio[_i0].bufs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int * benchRet = fec_buffer_rs_block(v,fio,i,j);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_v0; _aux++) {
          free(v[_aux].fec);
          }
          free(v);
          for(int _aux = 0; _aux < _len_fio0; _aux++) {
          free(*(fio[_aux].bufs));
        free(fio[_aux].bufs);
          }
          free(fio);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int i = 10;
          unsigned int j = 10;
          int _len_v0 = 100;
          struct dm_verity * v = (struct dm_verity *) malloc(_len_v0*sizeof(struct dm_verity));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
              int _len_v__i0__fec0 = 1;
          v[_i0].fec = (struct TYPE_2__ *) malloc(_len_v__i0__fec0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_v__i0__fec0; _j0++) {
            v[_i0].fec->rsn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_fio0 = 100;
          struct dm_verity_fec_io * fio = (struct dm_verity_fec_io *) malloc(_len_fio0*sizeof(struct dm_verity_fec_io));
          for(int _i0 = 0; _i0 < _len_fio0; _i0++) {
              int _len_fio__i0__bufs0 = 1;
          fio[_i0].bufs = (int **) malloc(_len_fio__i0__bufs0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_fio__i0__bufs0; _j0++) {
            int _len_fio__i0__bufs1 = 1;
            fio[_i0].bufs[_j0] = (int *) malloc(_len_fio__i0__bufs1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_fio__i0__bufs1; _j1++) {
              fio[_i0].bufs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int * benchRet = fec_buffer_rs_block(v,fio,i,j);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_v0; _aux++) {
          free(v[_aux].fec);
          }
          free(v);
          for(int _aux = 0; _aux < _len_fio0; _aux++) {
          free(*(fio[_aux].bufs));
        free(fio[_aux].bufs);
          }
          free(fio);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
