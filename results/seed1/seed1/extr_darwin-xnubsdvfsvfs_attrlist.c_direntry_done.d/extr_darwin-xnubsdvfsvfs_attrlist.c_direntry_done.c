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
struct fd_vn_data {scalar_t__ fv_buf; scalar_t__ fv_bufdone; scalar_t__ fv_bufsiz; } ;
struct direntry {scalar_t__ d_reclen; } ;

/* Variables and functions */

__attribute__((used)) static void
direntry_done(struct fd_vn_data *fvd)
{
	struct direntry *dp;

	dp = (struct direntry *)(fvd->fv_buf + fvd->fv_bufdone);
	if (dp->d_reclen) {
		fvd->fv_bufdone += dp->d_reclen;
		if (fvd->fv_bufdone > fvd->fv_bufsiz) {
			fvd->fv_bufdone = fvd->fv_bufsiz;
		}
	} else {
		fvd->fv_bufdone = fvd->fv_bufsiz;
	}

	/*
	 * If we're at the end the fd direntries cache, reset the
	 * cache trackers.
	 */
	if (fvd->fv_bufdone == fvd->fv_bufsiz) {
		fvd->fv_bufdone = 0;
		fvd->fv_bufsiz = 0;
	}
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
          int _len_fvd0 = 1;
          struct fd_vn_data * fvd = (struct fd_vn_data *) malloc(_len_fvd0*sizeof(struct fd_vn_data));
          for(int _i0 = 0; _i0 < _len_fvd0; _i0++) {
            fvd[_i0].fv_buf = ((-2 * (next_i()%2)) + 1) * next_i();
        fvd[_i0].fv_bufdone = ((-2 * (next_i()%2)) + 1) * next_i();
        fvd[_i0].fv_bufsiz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          direntry_done(fvd);
          free(fvd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fvd0 = 65025;
          struct fd_vn_data * fvd = (struct fd_vn_data *) malloc(_len_fvd0*sizeof(struct fd_vn_data));
          for(int _i0 = 0; _i0 < _len_fvd0; _i0++) {
            fvd[_i0].fv_buf = ((-2 * (next_i()%2)) + 1) * next_i();
        fvd[_i0].fv_bufdone = ((-2 * (next_i()%2)) + 1) * next_i();
        fvd[_i0].fv_bufsiz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          direntry_done(fvd);
          free(fvd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fvd0 = 100;
          struct fd_vn_data * fvd = (struct fd_vn_data *) malloc(_len_fvd0*sizeof(struct fd_vn_data));
          for(int _i0 = 0; _i0 < _len_fvd0; _i0++) {
            fvd[_i0].fv_buf = ((-2 * (next_i()%2)) + 1) * next_i();
        fvd[_i0].fv_bufdone = ((-2 * (next_i()%2)) + 1) * next_i();
        fvd[_i0].fv_bufsiz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          direntry_done(fvd);
          free(fvd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
