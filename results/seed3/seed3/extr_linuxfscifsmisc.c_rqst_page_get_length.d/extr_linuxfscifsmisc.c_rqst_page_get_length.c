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
struct smb_rqst {unsigned int rq_pagesz; unsigned int rq_offset; int rq_npages; unsigned int rq_tailsz; } ;

/* Variables and functions */

void rqst_page_get_length(struct smb_rqst *rqst, unsigned int page,
				unsigned int *len, unsigned int *offset)
{
	*len = rqst->rq_pagesz;
	*offset = (page == 0) ? rqst->rq_offset : 0;

	if (rqst->rq_npages == 1 || page == rqst->rq_npages-1)
		*len = rqst->rq_tailsz;
	else if (page == 0)
		*len = rqst->rq_pagesz - rqst->rq_offset;
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
          unsigned int page = 100;
          int _len_rqst0 = 1;
          struct smb_rqst * rqst = (struct smb_rqst *) malloc(_len_rqst0*sizeof(struct smb_rqst));
          for(int _i0 = 0; _i0 < _len_rqst0; _i0++) {
            rqst[_i0].rq_pagesz = ((-2 * (next_i()%2)) + 1) * next_i();
        rqst[_i0].rq_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        rqst[_i0].rq_npages = ((-2 * (next_i()%2)) + 1) * next_i();
        rqst[_i0].rq_tailsz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_len0 = 1;
          unsigned int * len = (unsigned int *) malloc(_len_len0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_offset0 = 1;
          unsigned int * offset = (unsigned int *) malloc(_len_offset0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_offset0; _i0++) {
            offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rqst_page_get_length(rqst,page,len,offset);
          free(rqst);
          free(len);
          free(offset);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int page = 255;
          int _len_rqst0 = 65025;
          struct smb_rqst * rqst = (struct smb_rqst *) malloc(_len_rqst0*sizeof(struct smb_rqst));
          for(int _i0 = 0; _i0 < _len_rqst0; _i0++) {
            rqst[_i0].rq_pagesz = ((-2 * (next_i()%2)) + 1) * next_i();
        rqst[_i0].rq_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        rqst[_i0].rq_npages = ((-2 * (next_i()%2)) + 1) * next_i();
        rqst[_i0].rq_tailsz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_len0 = 65025;
          unsigned int * len = (unsigned int *) malloc(_len_len0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_offset0 = 65025;
          unsigned int * offset = (unsigned int *) malloc(_len_offset0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_offset0; _i0++) {
            offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rqst_page_get_length(rqst,page,len,offset);
          free(rqst);
          free(len);
          free(offset);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int page = 10;
          int _len_rqst0 = 100;
          struct smb_rqst * rqst = (struct smb_rqst *) malloc(_len_rqst0*sizeof(struct smb_rqst));
          for(int _i0 = 0; _i0 < _len_rqst0; _i0++) {
            rqst[_i0].rq_pagesz = ((-2 * (next_i()%2)) + 1) * next_i();
        rqst[_i0].rq_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        rqst[_i0].rq_npages = ((-2 * (next_i()%2)) + 1) * next_i();
        rqst[_i0].rq_tailsz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_len0 = 100;
          unsigned int * len = (unsigned int *) malloc(_len_len0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_offset0 = 100;
          unsigned int * offset = (unsigned int *) malloc(_len_offset0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_offset0; _i0++) {
            offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rqst_page_get_length(rqst,page,len,offset);
          free(rqst);
          free(len);
          free(offset);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
