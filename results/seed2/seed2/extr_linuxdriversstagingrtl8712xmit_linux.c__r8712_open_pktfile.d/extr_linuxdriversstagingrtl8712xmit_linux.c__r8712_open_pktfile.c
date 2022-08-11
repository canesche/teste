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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct pkt_file {int /*<<< orphan*/  buf_start; int /*<<< orphan*/  cur_buffer; int /*<<< orphan*/  buf_len; int /*<<< orphan*/  pkt_len; int /*<<< orphan*/  cur_addr; TYPE_1__* pkt; } ;
struct TYPE_3__ {int /*<<< orphan*/  len; int /*<<< orphan*/  data; } ;
typedef  TYPE_1__ _pkt ;

/* Variables and functions */

void _r8712_open_pktfile(_pkt *pktptr, struct pkt_file *pfile)
{
	pfile->pkt = pktptr;
	pfile->cur_addr = pfile->buf_start = pktptr->data;
	pfile->pkt_len = pfile->buf_len = pktptr->len;
	pfile->cur_buffer = pfile->buf_start;
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
          int _len_pktptr0 = 1;
          struct TYPE_3__ * pktptr = (struct TYPE_3__ *) malloc(_len_pktptr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pktptr0; _i0++) {
            pktptr[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        pktptr[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pfile0 = 1;
          struct pkt_file * pfile = (struct pkt_file *) malloc(_len_pfile0*sizeof(struct pkt_file));
          for(int _i0 = 0; _i0 < _len_pfile0; _i0++) {
            pfile[_i0].buf_start = ((-2 * (next_i()%2)) + 1) * next_i();
        pfile[_i0].cur_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        pfile[_i0].buf_len = ((-2 * (next_i()%2)) + 1) * next_i();
        pfile[_i0].pkt_len = ((-2 * (next_i()%2)) + 1) * next_i();
        pfile[_i0].cur_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pfile__i0__pkt0 = 1;
          pfile[_i0].pkt = (struct TYPE_3__ *) malloc(_len_pfile__i0__pkt0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_pfile__i0__pkt0; _j0++) {
            pfile[_i0].pkt->len = ((-2 * (next_i()%2)) + 1) * next_i();
        pfile[_i0].pkt->data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          _r8712_open_pktfile(pktptr,pfile);
          free(pktptr);
          for(int _aux = 0; _aux < _len_pfile0; _aux++) {
          free(pfile[_aux].pkt);
          }
          free(pfile);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pktptr0 = 65025;
          struct TYPE_3__ * pktptr = (struct TYPE_3__ *) malloc(_len_pktptr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pktptr0; _i0++) {
            pktptr[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        pktptr[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pfile0 = 65025;
          struct pkt_file * pfile = (struct pkt_file *) malloc(_len_pfile0*sizeof(struct pkt_file));
          for(int _i0 = 0; _i0 < _len_pfile0; _i0++) {
            pfile[_i0].buf_start = ((-2 * (next_i()%2)) + 1) * next_i();
        pfile[_i0].cur_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        pfile[_i0].buf_len = ((-2 * (next_i()%2)) + 1) * next_i();
        pfile[_i0].pkt_len = ((-2 * (next_i()%2)) + 1) * next_i();
        pfile[_i0].cur_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pfile__i0__pkt0 = 1;
          pfile[_i0].pkt = (struct TYPE_3__ *) malloc(_len_pfile__i0__pkt0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_pfile__i0__pkt0; _j0++) {
            pfile[_i0].pkt->len = ((-2 * (next_i()%2)) + 1) * next_i();
        pfile[_i0].pkt->data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          _r8712_open_pktfile(pktptr,pfile);
          free(pktptr);
          for(int _aux = 0; _aux < _len_pfile0; _aux++) {
          free(pfile[_aux].pkt);
          }
          free(pfile);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pktptr0 = 100;
          struct TYPE_3__ * pktptr = (struct TYPE_3__ *) malloc(_len_pktptr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pktptr0; _i0++) {
            pktptr[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        pktptr[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pfile0 = 100;
          struct pkt_file * pfile = (struct pkt_file *) malloc(_len_pfile0*sizeof(struct pkt_file));
          for(int _i0 = 0; _i0 < _len_pfile0; _i0++) {
            pfile[_i0].buf_start = ((-2 * (next_i()%2)) + 1) * next_i();
        pfile[_i0].cur_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        pfile[_i0].buf_len = ((-2 * (next_i()%2)) + 1) * next_i();
        pfile[_i0].pkt_len = ((-2 * (next_i()%2)) + 1) * next_i();
        pfile[_i0].cur_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pfile__i0__pkt0 = 1;
          pfile[_i0].pkt = (struct TYPE_3__ *) malloc(_len_pfile__i0__pkt0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_pfile__i0__pkt0; _j0++) {
            pfile[_i0].pkt->len = ((-2 * (next_i()%2)) + 1) * next_i();
        pfile[_i0].pkt->data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          _r8712_open_pktfile(pktptr,pfile);
          free(pktptr);
          for(int _aux = 0; _aux < _len_pfile0; _aux++) {
          free(pfile[_aux].pkt);
          }
          free(pfile);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
