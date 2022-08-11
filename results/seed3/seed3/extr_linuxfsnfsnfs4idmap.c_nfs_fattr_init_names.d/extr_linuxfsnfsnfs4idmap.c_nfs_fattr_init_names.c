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
struct nfs_fattr {struct nfs4_string* group_name; struct nfs4_string* owner_name; } ;
struct nfs4_string {int dummy; } ;

/* Variables and functions */

void nfs_fattr_init_names(struct nfs_fattr *fattr,
		struct nfs4_string *owner_name,
		struct nfs4_string *group_name)
{
	fattr->owner_name = owner_name;
	fattr->group_name = group_name;
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
          int _len_fattr0 = 1;
          struct nfs_fattr * fattr = (struct nfs_fattr *) malloc(_len_fattr0*sizeof(struct nfs_fattr));
          for(int _i0 = 0; _i0 < _len_fattr0; _i0++) {
              int _len_fattr__i0__group_name0 = 1;
          fattr[_i0].group_name = (struct nfs4_string *) malloc(_len_fattr__i0__group_name0*sizeof(struct nfs4_string));
          for(int _j0 = 0; _j0 < _len_fattr__i0__group_name0; _j0++) {
            fattr[_i0].group_name->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fattr__i0__owner_name0 = 1;
          fattr[_i0].owner_name = (struct nfs4_string *) malloc(_len_fattr__i0__owner_name0*sizeof(struct nfs4_string));
          for(int _j0 = 0; _j0 < _len_fattr__i0__owner_name0; _j0++) {
            fattr[_i0].owner_name->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_owner_name0 = 1;
          struct nfs4_string * owner_name = (struct nfs4_string *) malloc(_len_owner_name0*sizeof(struct nfs4_string));
          for(int _i0 = 0; _i0 < _len_owner_name0; _i0++) {
            owner_name[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_group_name0 = 1;
          struct nfs4_string * group_name = (struct nfs4_string *) malloc(_len_group_name0*sizeof(struct nfs4_string));
          for(int _i0 = 0; _i0 < _len_group_name0; _i0++) {
            group_name[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nfs_fattr_init_names(fattr,owner_name,group_name);
          for(int _aux = 0; _aux < _len_fattr0; _aux++) {
          free(fattr[_aux].group_name);
          }
          for(int _aux = 0; _aux < _len_fattr0; _aux++) {
          free(fattr[_aux].owner_name);
          }
          free(fattr);
          free(owner_name);
          free(group_name);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fattr0 = 65025;
          struct nfs_fattr * fattr = (struct nfs_fattr *) malloc(_len_fattr0*sizeof(struct nfs_fattr));
          for(int _i0 = 0; _i0 < _len_fattr0; _i0++) {
              int _len_fattr__i0__group_name0 = 1;
          fattr[_i0].group_name = (struct nfs4_string *) malloc(_len_fattr__i0__group_name0*sizeof(struct nfs4_string));
          for(int _j0 = 0; _j0 < _len_fattr__i0__group_name0; _j0++) {
            fattr[_i0].group_name->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fattr__i0__owner_name0 = 1;
          fattr[_i0].owner_name = (struct nfs4_string *) malloc(_len_fattr__i0__owner_name0*sizeof(struct nfs4_string));
          for(int _j0 = 0; _j0 < _len_fattr__i0__owner_name0; _j0++) {
            fattr[_i0].owner_name->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_owner_name0 = 65025;
          struct nfs4_string * owner_name = (struct nfs4_string *) malloc(_len_owner_name0*sizeof(struct nfs4_string));
          for(int _i0 = 0; _i0 < _len_owner_name0; _i0++) {
            owner_name[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_group_name0 = 65025;
          struct nfs4_string * group_name = (struct nfs4_string *) malloc(_len_group_name0*sizeof(struct nfs4_string));
          for(int _i0 = 0; _i0 < _len_group_name0; _i0++) {
            group_name[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nfs_fattr_init_names(fattr,owner_name,group_name);
          for(int _aux = 0; _aux < _len_fattr0; _aux++) {
          free(fattr[_aux].group_name);
          }
          for(int _aux = 0; _aux < _len_fattr0; _aux++) {
          free(fattr[_aux].owner_name);
          }
          free(fattr);
          free(owner_name);
          free(group_name);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fattr0 = 100;
          struct nfs_fattr * fattr = (struct nfs_fattr *) malloc(_len_fattr0*sizeof(struct nfs_fattr));
          for(int _i0 = 0; _i0 < _len_fattr0; _i0++) {
              int _len_fattr__i0__group_name0 = 1;
          fattr[_i0].group_name = (struct nfs4_string *) malloc(_len_fattr__i0__group_name0*sizeof(struct nfs4_string));
          for(int _j0 = 0; _j0 < _len_fattr__i0__group_name0; _j0++) {
            fattr[_i0].group_name->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fattr__i0__owner_name0 = 1;
          fattr[_i0].owner_name = (struct nfs4_string *) malloc(_len_fattr__i0__owner_name0*sizeof(struct nfs4_string));
          for(int _j0 = 0; _j0 < _len_fattr__i0__owner_name0; _j0++) {
            fattr[_i0].owner_name->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_owner_name0 = 100;
          struct nfs4_string * owner_name = (struct nfs4_string *) malloc(_len_owner_name0*sizeof(struct nfs4_string));
          for(int _i0 = 0; _i0 < _len_owner_name0; _i0++) {
            owner_name[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_group_name0 = 100;
          struct nfs4_string * group_name = (struct nfs4_string *) malloc(_len_group_name0*sizeof(struct nfs4_string));
          for(int _i0 = 0; _i0 < _len_group_name0; _i0++) {
            group_name[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nfs_fattr_init_names(fattr,owner_name,group_name);
          for(int _aux = 0; _aux < _len_fattr0; _aux++) {
          free(fattr[_aux].group_name);
          }
          for(int _aux = 0; _aux < _len_fattr0; _aux++) {
          free(fattr[_aux].owner_name);
          }
          free(fattr);
          free(owner_name);
          free(group_name);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
