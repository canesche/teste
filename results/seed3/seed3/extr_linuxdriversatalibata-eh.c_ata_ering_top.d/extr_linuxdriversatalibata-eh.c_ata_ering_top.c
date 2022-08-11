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
       3            linked\n\
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
struct ata_ering_entry {scalar_t__ err_mask; } ;
struct ata_ering {size_t cursor; struct ata_ering_entry* ring; } ;

/* Variables and functions */

__attribute__((used)) static struct ata_ering_entry *ata_ering_top(struct ata_ering *ering)
{
	struct ata_ering_entry *ent = &ering->ring[ering->cursor];

	if (ent->err_mask)
		return ent;
	return NULL;
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
          int _len_ering0 = 1;
          struct ata_ering * ering = (struct ata_ering *) malloc(_len_ering0*sizeof(struct ata_ering));
          for(int _i0 = 0; _i0 < _len_ering0; _i0++) {
            ering[_i0].cursor = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ering__i0__ring0 = 1;
          ering[_i0].ring = (struct ata_ering_entry *) malloc(_len_ering__i0__ring0*sizeof(struct ata_ering_entry));
          for(int _j0 = 0; _j0 < _len_ering__i0__ring0; _j0++) {
            ering[_i0].ring->err_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ata_ering_entry * benchRet = ata_ering_top(ering);
          printf("%ld\n", (*benchRet).err_mask);
          for(int _aux = 0; _aux < _len_ering0; _aux++) {
          free(ering[_aux].ring);
          }
          free(ering);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ering0 = 65025;
          struct ata_ering * ering = (struct ata_ering *) malloc(_len_ering0*sizeof(struct ata_ering));
          for(int _i0 = 0; _i0 < _len_ering0; _i0++) {
            ering[_i0].cursor = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ering__i0__ring0 = 1;
          ering[_i0].ring = (struct ata_ering_entry *) malloc(_len_ering__i0__ring0*sizeof(struct ata_ering_entry));
          for(int _j0 = 0; _j0 < _len_ering__i0__ring0; _j0++) {
            ering[_i0].ring->err_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ata_ering_entry * benchRet = ata_ering_top(ering);
          printf("%ld\n", (*benchRet).err_mask);
          for(int _aux = 0; _aux < _len_ering0; _aux++) {
          free(ering[_aux].ring);
          }
          free(ering);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ering0 = 100;
          struct ata_ering * ering = (struct ata_ering *) malloc(_len_ering0*sizeof(struct ata_ering));
          for(int _i0 = 0; _i0 < _len_ering0; _i0++) {
            ering[_i0].cursor = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ering__i0__ring0 = 1;
          ering[_i0].ring = (struct ata_ering_entry *) malloc(_len_ering__i0__ring0*sizeof(struct ata_ering_entry));
          for(int _j0 = 0; _j0 < _len_ering__i0__ring0; _j0++) {
            ering[_i0].ring->err_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ata_ering_entry * benchRet = ata_ering_top(ering);
          printf("%ld\n", (*benchRet).err_mask);
          for(int _aux = 0; _aux < _len_ering0; _aux++) {
          free(ering[_aux].ring);
          }
          free(ering);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_ering0 = 1;
          struct ata_ering * ering = (struct ata_ering *) malloc(_len_ering0*sizeof(struct ata_ering));
          for(int _i0 = 0; _i0 < _len_ering0; _i0++) {
            ering[_i0].cursor = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ering__i0__ring0 = 1;
          ering[_i0].ring = (struct ata_ering_entry *) malloc(_len_ering__i0__ring0*sizeof(struct ata_ering_entry));
          for(int _j0 = 0; _j0 < _len_ering__i0__ring0; _j0++) {
            ering[_i0].ring->err_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ata_ering_entry * benchRet = ata_ering_top(ering);
          printf("%ld\n", (*benchRet).err_mask);
          for(int _aux = 0; _aux < _len_ering0; _aux++) {
          free(ering[_aux].ring);
          }
          free(ering);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
