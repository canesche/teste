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
struct snic {int /*<<< orphan*/ * io_req_lock; } ;
typedef  int /*<<< orphan*/  spinlock_t ;

/* Variables and functions */
 int SNIC_IO_LOCKS ; 

__attribute__((used)) static inline spinlock_t *
snic_io_lock_tag(struct snic *snic, int tag)
{
	return &snic->io_req_lock[tag & (SNIC_IO_LOCKS - 1)];
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
          int tag = 100;
          int _len_snic0 = 1;
          struct snic * snic = (struct snic *) malloc(_len_snic0*sizeof(struct snic));
          for(int _i0 = 0; _i0 < _len_snic0; _i0++) {
              int _len_snic__i0__io_req_lock0 = 1;
          snic[_i0].io_req_lock = (int *) malloc(_len_snic__i0__io_req_lock0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_snic__i0__io_req_lock0; _j0++) {
            snic[_i0].io_req_lock[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = snic_io_lock_tag(snic,tag);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_snic0; _aux++) {
          free(snic[_aux].io_req_lock);
          }
          free(snic);
        
        break;
    }
    // big-arr
    case 1:
    {
          int tag = 255;
          int _len_snic0 = 65025;
          struct snic * snic = (struct snic *) malloc(_len_snic0*sizeof(struct snic));
          for(int _i0 = 0; _i0 < _len_snic0; _i0++) {
              int _len_snic__i0__io_req_lock0 = 1;
          snic[_i0].io_req_lock = (int *) malloc(_len_snic__i0__io_req_lock0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_snic__i0__io_req_lock0; _j0++) {
            snic[_i0].io_req_lock[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = snic_io_lock_tag(snic,tag);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_snic0; _aux++) {
          free(snic[_aux].io_req_lock);
          }
          free(snic);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int tag = 10;
          int _len_snic0 = 100;
          struct snic * snic = (struct snic *) malloc(_len_snic0*sizeof(struct snic));
          for(int _i0 = 0; _i0 < _len_snic0; _i0++) {
              int _len_snic__i0__io_req_lock0 = 1;
          snic[_i0].io_req_lock = (int *) malloc(_len_snic__i0__io_req_lock0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_snic__i0__io_req_lock0; _j0++) {
            snic[_i0].io_req_lock[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = snic_io_lock_tag(snic,tag);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_snic0; _aux++) {
          free(snic[_aux].io_req_lock);
          }
          free(snic);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
