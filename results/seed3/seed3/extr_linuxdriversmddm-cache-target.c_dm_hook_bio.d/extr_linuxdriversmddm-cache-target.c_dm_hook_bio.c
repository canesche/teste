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
struct dm_hook_info {int /*<<< orphan*/ * bi_end_io; } ;
struct bio {void* bi_private; int /*<<< orphan*/ * bi_end_io; } ;
typedef  int /*<<< orphan*/  bio_end_io_t ;

/* Variables and functions */

__attribute__((used)) static void dm_hook_bio(struct dm_hook_info *h, struct bio *bio,
			bio_end_io_t *bi_end_io, void *bi_private)
{
	h->bi_end_io = bio->bi_end_io;

	bio->bi_end_io = bi_end_io;
	bio->bi_private = bi_private;
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
          int _len_h0 = 1;
          struct dm_hook_info * h = (struct dm_hook_info *) malloc(_len_h0*sizeof(struct dm_hook_info));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
              int _len_h__i0__bi_end_io0 = 1;
          h[_i0].bi_end_io = (int *) malloc(_len_h__i0__bi_end_io0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__bi_end_io0; _j0++) {
            h[_i0].bi_end_io[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_bio0 = 1;
          struct bio * bio = (struct bio *) malloc(_len_bio0*sizeof(struct bio));
          for(int _i0 = 0; _i0 < _len_bio0; _i0++) {
              int _len_bio__i0__bi_end_io0 = 1;
          bio[_i0].bi_end_io = (int *) malloc(_len_bio__i0__bi_end_io0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bio__i0__bi_end_io0; _j0++) {
            bio[_i0].bi_end_io[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_bi_end_io0 = 1;
          int * bi_end_io = (int *) malloc(_len_bi_end_io0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bi_end_io0; _i0++) {
            bi_end_io[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * bi_private;
          dm_hook_bio(h,bio,bi_end_io,bi_private);
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].bi_end_io);
          }
          free(h);
          for(int _aux = 0; _aux < _len_bio0; _aux++) {
          free(bio[_aux].bi_end_io);
          }
          free(bio);
          free(bi_end_io);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_h0 = 65025;
          struct dm_hook_info * h = (struct dm_hook_info *) malloc(_len_h0*sizeof(struct dm_hook_info));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
              int _len_h__i0__bi_end_io0 = 1;
          h[_i0].bi_end_io = (int *) malloc(_len_h__i0__bi_end_io0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__bi_end_io0; _j0++) {
            h[_i0].bi_end_io[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_bio0 = 65025;
          struct bio * bio = (struct bio *) malloc(_len_bio0*sizeof(struct bio));
          for(int _i0 = 0; _i0 < _len_bio0; _i0++) {
              int _len_bio__i0__bi_end_io0 = 1;
          bio[_i0].bi_end_io = (int *) malloc(_len_bio__i0__bi_end_io0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bio__i0__bi_end_io0; _j0++) {
            bio[_i0].bi_end_io[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_bi_end_io0 = 65025;
          int * bi_end_io = (int *) malloc(_len_bi_end_io0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bi_end_io0; _i0++) {
            bi_end_io[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * bi_private;
          dm_hook_bio(h,bio,bi_end_io,bi_private);
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].bi_end_io);
          }
          free(h);
          for(int _aux = 0; _aux < _len_bio0; _aux++) {
          free(bio[_aux].bi_end_io);
          }
          free(bio);
          free(bi_end_io);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_h0 = 100;
          struct dm_hook_info * h = (struct dm_hook_info *) malloc(_len_h0*sizeof(struct dm_hook_info));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
              int _len_h__i0__bi_end_io0 = 1;
          h[_i0].bi_end_io = (int *) malloc(_len_h__i0__bi_end_io0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__bi_end_io0; _j0++) {
            h[_i0].bi_end_io[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_bio0 = 100;
          struct bio * bio = (struct bio *) malloc(_len_bio0*sizeof(struct bio));
          for(int _i0 = 0; _i0 < _len_bio0; _i0++) {
              int _len_bio__i0__bi_end_io0 = 1;
          bio[_i0].bi_end_io = (int *) malloc(_len_bio__i0__bi_end_io0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bio__i0__bi_end_io0; _j0++) {
            bio[_i0].bi_end_io[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_bi_end_io0 = 100;
          int * bi_end_io = (int *) malloc(_len_bi_end_io0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bi_end_io0; _i0++) {
            bi_end_io[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * bi_private;
          dm_hook_bio(h,bio,bi_end_io,bi_private);
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].bi_end_io);
          }
          free(h);
          for(int _aux = 0; _aux < _len_bio0; _aux++) {
          free(bio[_aux].bi_end_io);
          }
          free(bio);
          free(bi_end_io);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
