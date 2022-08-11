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
typedef  scalar_t__ uid_t ;
typedef  TYPE_1__* nfsnode_t ;
struct TYPE_3__ {scalar_t__* n_accessuid; int* n_access; } ;

/* Variables and functions */
 int NFS_ACCESS_CACHE_SIZE ; 

int
nfs_node_access_slot(nfsnode_t np, uid_t uid, int add)
{
	int slot;

	for (slot=0; slot < NFS_ACCESS_CACHE_SIZE; slot++)
		if (np->n_accessuid[slot] == uid)
			break;
	if (slot == NFS_ACCESS_CACHE_SIZE) {
		if (!add)
			return (-1);
		slot = np->n_access[NFS_ACCESS_CACHE_SIZE];
		np->n_access[NFS_ACCESS_CACHE_SIZE] = (slot + 1) % NFS_ACCESS_CACHE_SIZE;
	}
	return (slot);
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
          long uid = 100;
          int add = 100;
          int _len_np0 = 1;
          struct TYPE_3__ * np = (struct TYPE_3__ *) malloc(_len_np0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
              int _len_np__i0__n_accessuid0 = 1;
          np[_i0].n_accessuid = (long *) malloc(_len_np__i0__n_accessuid0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_np__i0__n_accessuid0; _j0++) {
            np[_i0].n_accessuid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_np__i0__n_access0 = 1;
          np[_i0].n_access = (int *) malloc(_len_np__i0__n_access0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_np__i0__n_access0; _j0++) {
            np[_i0].n_access[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = nfs_node_access_slot(np,uid,add);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_np0; _aux++) {
          free(np[_aux].n_accessuid);
          }
          for(int _aux = 0; _aux < _len_np0; _aux++) {
          free(np[_aux].n_access);
          }
          free(np);
        
        break;
    }
    // big-arr
    case 1:
    {
          long uid = 255;
          int add = 255;
          int _len_np0 = 65025;
          struct TYPE_3__ * np = (struct TYPE_3__ *) malloc(_len_np0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
              int _len_np__i0__n_accessuid0 = 1;
          np[_i0].n_accessuid = (long *) malloc(_len_np__i0__n_accessuid0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_np__i0__n_accessuid0; _j0++) {
            np[_i0].n_accessuid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_np__i0__n_access0 = 1;
          np[_i0].n_access = (int *) malloc(_len_np__i0__n_access0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_np__i0__n_access0; _j0++) {
            np[_i0].n_access[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = nfs_node_access_slot(np,uid,add);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_np0; _aux++) {
          free(np[_aux].n_accessuid);
          }
          for(int _aux = 0; _aux < _len_np0; _aux++) {
          free(np[_aux].n_access);
          }
          free(np);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long uid = 10;
          int add = 10;
          int _len_np0 = 100;
          struct TYPE_3__ * np = (struct TYPE_3__ *) malloc(_len_np0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
              int _len_np__i0__n_accessuid0 = 1;
          np[_i0].n_accessuid = (long *) malloc(_len_np__i0__n_accessuid0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_np__i0__n_accessuid0; _j0++) {
            np[_i0].n_accessuid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_np__i0__n_access0 = 1;
          np[_i0].n_access = (int *) malloc(_len_np__i0__n_access0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_np__i0__n_access0; _j0++) {
            np[_i0].n_access[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = nfs_node_access_slot(np,uid,add);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_np0; _aux++) {
          free(np[_aux].n_accessuid);
          }
          for(int _aux = 0; _aux < _len_np0; _aux++) {
          free(np[_aux].n_access);
          }
          free(np);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
