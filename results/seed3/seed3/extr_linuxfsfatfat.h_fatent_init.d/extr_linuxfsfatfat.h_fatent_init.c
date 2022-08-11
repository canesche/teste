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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int /*<<< orphan*/ * ent32_p; } ;
struct fat_entry {int /*<<< orphan*/ * fat_inode; int /*<<< orphan*/ ** bhs; TYPE_1__ u; scalar_t__ entry; scalar_t__ nr_bhs; } ;

/* Variables and functions */

__attribute__((used)) static inline void fatent_init(struct fat_entry *fatent)
{
	fatent->nr_bhs = 0;
	fatent->entry = 0;
	fatent->u.ent32_p = NULL;
	fatent->bhs[0] = fatent->bhs[1] = NULL;
	fatent->fat_inode = NULL;
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
          int _len_fatent0 = 1;
          struct fat_entry * fatent = (struct fat_entry *) malloc(_len_fatent0*sizeof(struct fat_entry));
          for(int _i0 = 0; _i0 < _len_fatent0; _i0++) {
              int _len_fatent__i0__fat_inode0 = 1;
          fatent[_i0].fat_inode = (int *) malloc(_len_fatent__i0__fat_inode0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fatent__i0__fat_inode0; _j0++) {
            fatent[_i0].fat_inode[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fatent__i0__bhs0 = 1;
          fatent[_i0].bhs = (int **) malloc(_len_fatent__i0__bhs0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_fatent__i0__bhs0; _j0++) {
            int _len_fatent__i0__bhs1 = 1;
            fatent[_i0].bhs[_j0] = (int *) malloc(_len_fatent__i0__bhs1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_fatent__i0__bhs1; _j1++) {
              fatent[_i0].bhs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_fatent__i0__u_ent32_p0 = 1;
          fatent[_i0].u.ent32_p = (int *) malloc(_len_fatent__i0__u_ent32_p0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fatent__i0__u_ent32_p0; _j0++) {
            fatent[_i0].u.ent32_p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fatent[_i0].entry = ((-2 * (next_i()%2)) + 1) * next_i();
        fatent[_i0].nr_bhs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fatent_init(fatent);
          for(int _aux = 0; _aux < _len_fatent0; _aux++) {
          free(fatent[_aux].fat_inode);
          }
          for(int _aux = 0; _aux < _len_fatent0; _aux++) {
          free(*(fatent[_aux].bhs));
        free(fatent[_aux].bhs);
          }
          free(fatent);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fatent0 = 65025;
          struct fat_entry * fatent = (struct fat_entry *) malloc(_len_fatent0*sizeof(struct fat_entry));
          for(int _i0 = 0; _i0 < _len_fatent0; _i0++) {
              int _len_fatent__i0__fat_inode0 = 1;
          fatent[_i0].fat_inode = (int *) malloc(_len_fatent__i0__fat_inode0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fatent__i0__fat_inode0; _j0++) {
            fatent[_i0].fat_inode[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fatent__i0__bhs0 = 1;
          fatent[_i0].bhs = (int **) malloc(_len_fatent__i0__bhs0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_fatent__i0__bhs0; _j0++) {
            int _len_fatent__i0__bhs1 = 1;
            fatent[_i0].bhs[_j0] = (int *) malloc(_len_fatent__i0__bhs1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_fatent__i0__bhs1; _j1++) {
              fatent[_i0].bhs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_fatent__i0__u_ent32_p0 = 1;
          fatent[_i0].u.ent32_p = (int *) malloc(_len_fatent__i0__u_ent32_p0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fatent__i0__u_ent32_p0; _j0++) {
            fatent[_i0].u.ent32_p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fatent[_i0].entry = ((-2 * (next_i()%2)) + 1) * next_i();
        fatent[_i0].nr_bhs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fatent_init(fatent);
          for(int _aux = 0; _aux < _len_fatent0; _aux++) {
          free(fatent[_aux].fat_inode);
          }
          for(int _aux = 0; _aux < _len_fatent0; _aux++) {
          free(*(fatent[_aux].bhs));
        free(fatent[_aux].bhs);
          }
          free(fatent);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fatent0 = 100;
          struct fat_entry * fatent = (struct fat_entry *) malloc(_len_fatent0*sizeof(struct fat_entry));
          for(int _i0 = 0; _i0 < _len_fatent0; _i0++) {
              int _len_fatent__i0__fat_inode0 = 1;
          fatent[_i0].fat_inode = (int *) malloc(_len_fatent__i0__fat_inode0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fatent__i0__fat_inode0; _j0++) {
            fatent[_i0].fat_inode[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fatent__i0__bhs0 = 1;
          fatent[_i0].bhs = (int **) malloc(_len_fatent__i0__bhs0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_fatent__i0__bhs0; _j0++) {
            int _len_fatent__i0__bhs1 = 1;
            fatent[_i0].bhs[_j0] = (int *) malloc(_len_fatent__i0__bhs1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_fatent__i0__bhs1; _j1++) {
              fatent[_i0].bhs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_fatent__i0__u_ent32_p0 = 1;
          fatent[_i0].u.ent32_p = (int *) malloc(_len_fatent__i0__u_ent32_p0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fatent__i0__u_ent32_p0; _j0++) {
            fatent[_i0].u.ent32_p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fatent[_i0].entry = ((-2 * (next_i()%2)) + 1) * next_i();
        fatent[_i0].nr_bhs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fatent_init(fatent);
          for(int _aux = 0; _aux < _len_fatent0; _aux++) {
          free(fatent[_aux].fat_inode);
          }
          for(int _aux = 0; _aux < _len_fatent0; _aux++) {
          free(*(fatent[_aux].bhs));
        free(fatent[_aux].bhs);
          }
          free(fatent);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
