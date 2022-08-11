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
typedef  int /*<<< orphan*/  u8 ;
struct ata_taskfile {int /*<<< orphan*/  hob_nsect; int /*<<< orphan*/  nsect; int /*<<< orphan*/  hob_lbah; int /*<<< orphan*/  hob_lbam; int /*<<< orphan*/  hob_lbal; int /*<<< orphan*/  device; int /*<<< orphan*/  lbah; int /*<<< orphan*/  lbam; int /*<<< orphan*/  lbal; int /*<<< orphan*/  feature; int /*<<< orphan*/  command; } ;

/* Variables and functions */

void ata_tf_from_fis(const u8 *fis, struct ata_taskfile *tf)
{
	tf->command	= fis[2];	/* status */
	tf->feature	= fis[3];	/* error */

	tf->lbal	= fis[4];
	tf->lbam	= fis[5];
	tf->lbah	= fis[6];
	tf->device	= fis[7];

	tf->hob_lbal	= fis[8];
	tf->hob_lbam	= fis[9];
	tf->hob_lbah	= fis[10];

	tf->nsect	= fis[12];
	tf->hob_nsect	= fis[13];
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
          int _len_fis0 = 1;
          const int * fis = (const int *) malloc(_len_fis0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_fis0; _i0++) {
            fis[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tf0 = 1;
          struct ata_taskfile * tf = (struct ata_taskfile *) malloc(_len_tf0*sizeof(struct ata_taskfile));
          for(int _i0 = 0; _i0 < _len_tf0; _i0++) {
            tf[_i0].hob_nsect = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].nsect = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].hob_lbah = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].hob_lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].hob_lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].device = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].lbah = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].feature = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].command = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ata_tf_from_fis(fis,tf);
          free(fis);
          free(tf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fis0 = 65025;
          const int * fis = (const int *) malloc(_len_fis0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_fis0; _i0++) {
            fis[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tf0 = 65025;
          struct ata_taskfile * tf = (struct ata_taskfile *) malloc(_len_tf0*sizeof(struct ata_taskfile));
          for(int _i0 = 0; _i0 < _len_tf0; _i0++) {
            tf[_i0].hob_nsect = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].nsect = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].hob_lbah = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].hob_lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].hob_lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].device = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].lbah = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].feature = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].command = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ata_tf_from_fis(fis,tf);
          free(fis);
          free(tf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fis0 = 100;
          const int * fis = (const int *) malloc(_len_fis0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_fis0; _i0++) {
            fis[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tf0 = 100;
          struct ata_taskfile * tf = (struct ata_taskfile *) malloc(_len_tf0*sizeof(struct ata_taskfile));
          for(int _i0 = 0; _i0 < _len_tf0; _i0++) {
            tf[_i0].hob_nsect = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].nsect = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].hob_lbah = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].hob_lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].hob_lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].device = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].lbah = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].feature = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].command = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ata_tf_from_fis(fis,tf);
          free(fis);
          free(tf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
