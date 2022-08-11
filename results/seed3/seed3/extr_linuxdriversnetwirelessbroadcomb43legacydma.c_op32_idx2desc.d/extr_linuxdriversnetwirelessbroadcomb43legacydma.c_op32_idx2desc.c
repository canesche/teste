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
struct b43legacy_dmaring {struct b43legacy_dmadesc32* descbase; struct b43legacy_dmadesc_meta* meta; } ;
struct b43legacy_dmadesc_meta {int dummy; } ;
struct b43legacy_dmadesc32 {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static
struct b43legacy_dmadesc32 *op32_idx2desc(struct b43legacy_dmaring *ring,
					  int slot,
					  struct b43legacy_dmadesc_meta **meta)
{
	struct b43legacy_dmadesc32 *desc;

	*meta = &(ring->meta[slot]);
	desc = ring->descbase;
	desc = &(desc[slot]);

	return desc;
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
          int slot = 100;
          int _len_ring0 = 1;
          struct b43legacy_dmaring * ring = (struct b43legacy_dmaring *) malloc(_len_ring0*sizeof(struct b43legacy_dmaring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
              int _len_ring__i0__descbase0 = 1;
          ring[_i0].descbase = (struct b43legacy_dmadesc32 *) malloc(_len_ring__i0__descbase0*sizeof(struct b43legacy_dmadesc32));
          for(int _j0 = 0; _j0 < _len_ring__i0__descbase0; _j0++) {
            ring[_i0].descbase->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ring__i0__meta0 = 1;
          ring[_i0].meta = (struct b43legacy_dmadesc_meta *) malloc(_len_ring__i0__meta0*sizeof(struct b43legacy_dmadesc_meta));
          for(int _j0 = 0; _j0 < _len_ring__i0__meta0; _j0++) {
            ring[_i0].meta->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_meta0 = 1;
          struct b43legacy_dmadesc_meta ** meta = (struct b43legacy_dmadesc_meta **) malloc(_len_meta0*sizeof(struct b43legacy_dmadesc_meta *));
          for(int _i0 = 0; _i0 < _len_meta0; _i0++) {
            int _len_meta1 = 1;
            meta[_i0] = (struct b43legacy_dmadesc_meta *) malloc(_len_meta1*sizeof(struct b43legacy_dmadesc_meta));
            for(int _i1 = 0; _i1 < _len_meta1; _i1++) {
              meta[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          struct b43legacy_dmadesc32 * benchRet = op32_idx2desc(ring,slot,meta);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].descbase);
          }
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].meta);
          }
          free(ring);
          for(int i1 = 0; i1 < _len_meta0; i1++) {
            int _len_meta1 = 1;
              free(meta[i1]);
          }
          free(meta);
        
        break;
    }
    // big-arr
    case 1:
    {
          int slot = 255;
          int _len_ring0 = 65025;
          struct b43legacy_dmaring * ring = (struct b43legacy_dmaring *) malloc(_len_ring0*sizeof(struct b43legacy_dmaring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
              int _len_ring__i0__descbase0 = 1;
          ring[_i0].descbase = (struct b43legacy_dmadesc32 *) malloc(_len_ring__i0__descbase0*sizeof(struct b43legacy_dmadesc32));
          for(int _j0 = 0; _j0 < _len_ring__i0__descbase0; _j0++) {
            ring[_i0].descbase->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ring__i0__meta0 = 1;
          ring[_i0].meta = (struct b43legacy_dmadesc_meta *) malloc(_len_ring__i0__meta0*sizeof(struct b43legacy_dmadesc_meta));
          for(int _j0 = 0; _j0 < _len_ring__i0__meta0; _j0++) {
            ring[_i0].meta->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_meta0 = 65025;
          struct b43legacy_dmadesc_meta ** meta = (struct b43legacy_dmadesc_meta **) malloc(_len_meta0*sizeof(struct b43legacy_dmadesc_meta *));
          for(int _i0 = 0; _i0 < _len_meta0; _i0++) {
            int _len_meta1 = 1;
            meta[_i0] = (struct b43legacy_dmadesc_meta *) malloc(_len_meta1*sizeof(struct b43legacy_dmadesc_meta));
            for(int _i1 = 0; _i1 < _len_meta1; _i1++) {
              meta[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          struct b43legacy_dmadesc32 * benchRet = op32_idx2desc(ring,slot,meta);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].descbase);
          }
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].meta);
          }
          free(ring);
          for(int i1 = 0; i1 < _len_meta0; i1++) {
            int _len_meta1 = 1;
              free(meta[i1]);
          }
          free(meta);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int slot = 10;
          int _len_ring0 = 100;
          struct b43legacy_dmaring * ring = (struct b43legacy_dmaring *) malloc(_len_ring0*sizeof(struct b43legacy_dmaring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
              int _len_ring__i0__descbase0 = 1;
          ring[_i0].descbase = (struct b43legacy_dmadesc32 *) malloc(_len_ring__i0__descbase0*sizeof(struct b43legacy_dmadesc32));
          for(int _j0 = 0; _j0 < _len_ring__i0__descbase0; _j0++) {
            ring[_i0].descbase->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ring__i0__meta0 = 1;
          ring[_i0].meta = (struct b43legacy_dmadesc_meta *) malloc(_len_ring__i0__meta0*sizeof(struct b43legacy_dmadesc_meta));
          for(int _j0 = 0; _j0 < _len_ring__i0__meta0; _j0++) {
            ring[_i0].meta->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_meta0 = 100;
          struct b43legacy_dmadesc_meta ** meta = (struct b43legacy_dmadesc_meta **) malloc(_len_meta0*sizeof(struct b43legacy_dmadesc_meta *));
          for(int _i0 = 0; _i0 < _len_meta0; _i0++) {
            int _len_meta1 = 1;
            meta[_i0] = (struct b43legacy_dmadesc_meta *) malloc(_len_meta1*sizeof(struct b43legacy_dmadesc_meta));
            for(int _i1 = 0; _i1 < _len_meta1; _i1++) {
              meta[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          struct b43legacy_dmadesc32 * benchRet = op32_idx2desc(ring,slot,meta);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].descbase);
          }
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].meta);
          }
          free(ring);
          for(int i1 = 0; i1 < _len_meta0; i1++) {
            int _len_meta1 = 1;
              free(meta[i1]);
          }
          free(meta);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
