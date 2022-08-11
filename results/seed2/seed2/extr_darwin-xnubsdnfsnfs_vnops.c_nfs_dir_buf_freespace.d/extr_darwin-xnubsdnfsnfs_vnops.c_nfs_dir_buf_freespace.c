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
typedef  scalar_t__ uint32_t ;
struct nfsbuf {scalar_t__ nb_bufsize; scalar_t__ nb_data; } ;
struct nfs_vattr {int dummy; } ;
struct nfs_dir_buf_header {int ndbh_count; scalar_t__ ndbh_entry_end; } ;

/* Variables and functions */

uint32_t
nfs_dir_buf_freespace(struct nfsbuf *bp, int rdirplus)
{
	struct nfs_dir_buf_header *ndbhp = (struct nfs_dir_buf_header*)bp->nb_data;
	uint32_t space;

	if (!ndbhp)
		return (0);
	space = bp->nb_bufsize - ndbhp->ndbh_entry_end;
	if (rdirplus)
		space -= ndbhp->ndbh_count * sizeof(struct nfs_vattr);
	return (space);
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
          int rdirplus = 100;
          int _len_bp0 = 1;
          struct nfsbuf * bp = (struct nfsbuf *) malloc(_len_bp0*sizeof(struct nfsbuf));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].nb_bufsize = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].nb_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = nfs_dir_buf_freespace(bp,rdirplus);
          printf("%ld\n", benchRet); 
          free(bp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int rdirplus = 255;
          int _len_bp0 = 65025;
          struct nfsbuf * bp = (struct nfsbuf *) malloc(_len_bp0*sizeof(struct nfsbuf));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].nb_bufsize = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].nb_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = nfs_dir_buf_freespace(bp,rdirplus);
          printf("%ld\n", benchRet); 
          free(bp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int rdirplus = 10;
          int _len_bp0 = 100;
          struct nfsbuf * bp = (struct nfsbuf *) malloc(_len_bp0*sizeof(struct nfsbuf));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].nb_bufsize = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].nb_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = nfs_dir_buf_freespace(bp,rdirplus);
          printf("%ld\n", benchRet); 
          free(bp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
