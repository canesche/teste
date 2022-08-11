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
struct status_msg {int dummy; } ;
struct st_hba {int status_tail; int sts_count; struct status_msg* status_buffer; } ;

/* Variables and functions */

__attribute__((used)) static struct status_msg *stex_get_status(struct st_hba *hba)
{
	struct status_msg *status = hba->status_buffer + hba->status_tail;

	++hba->status_tail;
	hba->status_tail %= hba->sts_count+1;

	return status;
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
          int _len_hba0 = 1;
          struct st_hba * hba = (struct st_hba *) malloc(_len_hba0*sizeof(struct st_hba));
          for(int _i0 = 0; _i0 < _len_hba0; _i0++) {
            hba[_i0].status_tail = ((-2 * (next_i()%2)) + 1) * next_i();
        hba[_i0].sts_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hba__i0__status_buffer0 = 1;
          hba[_i0].status_buffer = (struct status_msg *) malloc(_len_hba__i0__status_buffer0*sizeof(struct status_msg));
          for(int _j0 = 0; _j0 < _len_hba__i0__status_buffer0; _j0++) {
            hba[_i0].status_buffer->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct status_msg * benchRet = stex_get_status(hba);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_hba0; _aux++) {
          free(hba[_aux].status_buffer);
          }
          free(hba);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hba0 = 65025;
          struct st_hba * hba = (struct st_hba *) malloc(_len_hba0*sizeof(struct st_hba));
          for(int _i0 = 0; _i0 < _len_hba0; _i0++) {
            hba[_i0].status_tail = ((-2 * (next_i()%2)) + 1) * next_i();
        hba[_i0].sts_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hba__i0__status_buffer0 = 1;
          hba[_i0].status_buffer = (struct status_msg *) malloc(_len_hba__i0__status_buffer0*sizeof(struct status_msg));
          for(int _j0 = 0; _j0 < _len_hba__i0__status_buffer0; _j0++) {
            hba[_i0].status_buffer->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct status_msg * benchRet = stex_get_status(hba);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_hba0; _aux++) {
          free(hba[_aux].status_buffer);
          }
          free(hba);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hba0 = 100;
          struct st_hba * hba = (struct st_hba *) malloc(_len_hba0*sizeof(struct st_hba));
          for(int _i0 = 0; _i0 < _len_hba0; _i0++) {
            hba[_i0].status_tail = ((-2 * (next_i()%2)) + 1) * next_i();
        hba[_i0].sts_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hba__i0__status_buffer0 = 1;
          hba[_i0].status_buffer = (struct status_msg *) malloc(_len_hba__i0__status_buffer0*sizeof(struct status_msg));
          for(int _j0 = 0; _j0 < _len_hba__i0__status_buffer0; _j0++) {
            hba[_i0].status_buffer->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct status_msg * benchRet = stex_get_status(hba);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_hba0; _aux++) {
          free(hba[_aux].status_buffer);
          }
          free(hba);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
