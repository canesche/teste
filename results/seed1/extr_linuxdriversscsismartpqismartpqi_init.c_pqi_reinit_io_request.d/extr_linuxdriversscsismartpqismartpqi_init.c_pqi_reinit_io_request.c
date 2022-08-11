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
struct pqi_io_request {int raid_bypass; int /*<<< orphan*/ * error_info; scalar_t__ status; int /*<<< orphan*/ * scmd; } ;

/* Variables and functions */

__attribute__((used)) static inline void pqi_reinit_io_request(struct pqi_io_request *io_request)
{
	io_request->scmd = NULL;
	io_request->status = 0;
	io_request->error_info = NULL;
	io_request->raid_bypass = false;
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
          int _len_io_request0 = 1;
          struct pqi_io_request * io_request = (struct pqi_io_request *) malloc(_len_io_request0*sizeof(struct pqi_io_request));
          for(int _i0 = 0; _i0 < _len_io_request0; _i0++) {
            io_request[_i0].raid_bypass = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_io_request__i0__error_info0 = 1;
          io_request[_i0].error_info = (int *) malloc(_len_io_request__i0__error_info0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_io_request__i0__error_info0; _j0++) {
            io_request[_i0].error_info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        io_request[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_io_request__i0__scmd0 = 1;
          io_request[_i0].scmd = (int *) malloc(_len_io_request__i0__scmd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_io_request__i0__scmd0; _j0++) {
            io_request[_i0].scmd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          pqi_reinit_io_request(io_request);
          for(int _aux = 0; _aux < _len_io_request0; _aux++) {
          free(io_request[_aux].error_info);
          }
          for(int _aux = 0; _aux < _len_io_request0; _aux++) {
          free(io_request[_aux].scmd);
          }
          free(io_request);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_io_request0 = 65025;
          struct pqi_io_request * io_request = (struct pqi_io_request *) malloc(_len_io_request0*sizeof(struct pqi_io_request));
          for(int _i0 = 0; _i0 < _len_io_request0; _i0++) {
            io_request[_i0].raid_bypass = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_io_request__i0__error_info0 = 1;
          io_request[_i0].error_info = (int *) malloc(_len_io_request__i0__error_info0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_io_request__i0__error_info0; _j0++) {
            io_request[_i0].error_info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        io_request[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_io_request__i0__scmd0 = 1;
          io_request[_i0].scmd = (int *) malloc(_len_io_request__i0__scmd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_io_request__i0__scmd0; _j0++) {
            io_request[_i0].scmd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          pqi_reinit_io_request(io_request);
          for(int _aux = 0; _aux < _len_io_request0; _aux++) {
          free(io_request[_aux].error_info);
          }
          for(int _aux = 0; _aux < _len_io_request0; _aux++) {
          free(io_request[_aux].scmd);
          }
          free(io_request);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_io_request0 = 100;
          struct pqi_io_request * io_request = (struct pqi_io_request *) malloc(_len_io_request0*sizeof(struct pqi_io_request));
          for(int _i0 = 0; _i0 < _len_io_request0; _i0++) {
            io_request[_i0].raid_bypass = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_io_request__i0__error_info0 = 1;
          io_request[_i0].error_info = (int *) malloc(_len_io_request__i0__error_info0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_io_request__i0__error_info0; _j0++) {
            io_request[_i0].error_info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        io_request[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_io_request__i0__scmd0 = 1;
          io_request[_i0].scmd = (int *) malloc(_len_io_request__i0__scmd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_io_request__i0__scmd0; _j0++) {
            io_request[_i0].scmd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          pqi_reinit_io_request(io_request);
          for(int _aux = 0; _aux < _len_io_request0; _aux++) {
          free(io_request[_aux].error_info);
          }
          for(int _aux = 0; _aux < _len_io_request0; _aux++) {
          free(io_request[_aux].scmd);
          }
          free(io_request);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
