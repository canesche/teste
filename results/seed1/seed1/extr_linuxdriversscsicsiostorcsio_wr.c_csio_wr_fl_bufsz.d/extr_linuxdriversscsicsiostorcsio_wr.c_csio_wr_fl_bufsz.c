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
typedef  int /*<<< orphan*/  uint32_t ;
struct csio_sge {int /*<<< orphan*/ * sge_fl_buf_size; } ;
struct csio_dma_buf {int paddr; } ;

/* Variables and functions */

__attribute__((used)) static inline uint32_t
csio_wr_fl_bufsz(struct csio_sge *sge, struct csio_dma_buf *buf)
{
	return sge->sge_fl_buf_size[buf->paddr & 0xF];
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
          int _len_sge0 = 1;
          struct csio_sge * sge = (struct csio_sge *) malloc(_len_sge0*sizeof(struct csio_sge));
          for(int _i0 = 0; _i0 < _len_sge0; _i0++) {
              int _len_sge__i0__sge_fl_buf_size0 = 1;
          sge[_i0].sge_fl_buf_size = (int *) malloc(_len_sge__i0__sge_fl_buf_size0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sge__i0__sge_fl_buf_size0; _j0++) {
            sge[_i0].sge_fl_buf_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buf0 = 1;
          struct csio_dma_buf * buf = (struct csio_dma_buf *) malloc(_len_buf0*sizeof(struct csio_dma_buf));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].paddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = csio_wr_fl_bufsz(sge,buf);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sge0; _aux++) {
          free(sge[_aux].sge_fl_buf_size);
          }
          free(sge);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sge0 = 65025;
          struct csio_sge * sge = (struct csio_sge *) malloc(_len_sge0*sizeof(struct csio_sge));
          for(int _i0 = 0; _i0 < _len_sge0; _i0++) {
              int _len_sge__i0__sge_fl_buf_size0 = 1;
          sge[_i0].sge_fl_buf_size = (int *) malloc(_len_sge__i0__sge_fl_buf_size0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sge__i0__sge_fl_buf_size0; _j0++) {
            sge[_i0].sge_fl_buf_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buf0 = 65025;
          struct csio_dma_buf * buf = (struct csio_dma_buf *) malloc(_len_buf0*sizeof(struct csio_dma_buf));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].paddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = csio_wr_fl_bufsz(sge,buf);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sge0; _aux++) {
          free(sge[_aux].sge_fl_buf_size);
          }
          free(sge);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sge0 = 100;
          struct csio_sge * sge = (struct csio_sge *) malloc(_len_sge0*sizeof(struct csio_sge));
          for(int _i0 = 0; _i0 < _len_sge0; _i0++) {
              int _len_sge__i0__sge_fl_buf_size0 = 1;
          sge[_i0].sge_fl_buf_size = (int *) malloc(_len_sge__i0__sge_fl_buf_size0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sge__i0__sge_fl_buf_size0; _j0++) {
            sge[_i0].sge_fl_buf_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buf0 = 100;
          struct csio_dma_buf * buf = (struct csio_dma_buf *) malloc(_len_buf0*sizeof(struct csio_dma_buf));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].paddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = csio_wr_fl_bufsz(sge,buf);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sge0; _aux++) {
          free(sge[_aux].sge_fl_buf_size);
          }
          free(sge);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
