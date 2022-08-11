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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {TYPE_1__** append_rel_array; } ;
struct TYPE_4__ {int /*<<< orphan*/  parent_reloid; } ;
typedef  TYPE_2__ PlannerInfo ;
typedef  int /*<<< orphan*/  Oid ;
typedef  size_t Index ;

/* Variables and functions */

__attribute__((used)) static Oid
get_parentoid(PlannerInfo *root, Index rti)
{
#if PG96 || PG10
	ListCell *lc;
	foreach (lc, root->append_rel_list)
	{
		AppendRelInfo *appinfo = lfirst(lc);
		if (appinfo->child_relid == rti)
			return appinfo->parent_reloid;
	}
#else
	if (root->append_rel_array[rti])
		return root->append_rel_array[rti]->parent_reloid;
#endif
	return 0;
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
          unsigned long rti = 100;
          int _len_root0 = 1;
          struct TYPE_5__ * root = (struct TYPE_5__ *) malloc(_len_root0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_root0; _i0++) {
              int _len_root__i0__append_rel_array0 = 1;
          root[_i0].append_rel_array = (struct TYPE_4__ **) malloc(_len_root__i0__append_rel_array0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_root__i0__append_rel_array0; _j0++) {
            int _len_root__i0__append_rel_array1 = 1;
            root[_i0].append_rel_array[_j0] = (struct TYPE_4__ *) malloc(_len_root__i0__append_rel_array1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_root__i0__append_rel_array1; _j1++) {
              root[_i0].append_rel_array[_j0]->parent_reloid = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = get_parentoid(root,rti);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_root0; _aux++) {
          free(*(root[_aux].append_rel_array));
        free(root[_aux].append_rel_array);
          }
          free(root);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long rti = 255;
          int _len_root0 = 65025;
          struct TYPE_5__ * root = (struct TYPE_5__ *) malloc(_len_root0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_root0; _i0++) {
              int _len_root__i0__append_rel_array0 = 1;
          root[_i0].append_rel_array = (struct TYPE_4__ **) malloc(_len_root__i0__append_rel_array0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_root__i0__append_rel_array0; _j0++) {
            int _len_root__i0__append_rel_array1 = 1;
            root[_i0].append_rel_array[_j0] = (struct TYPE_4__ *) malloc(_len_root__i0__append_rel_array1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_root__i0__append_rel_array1; _j1++) {
              root[_i0].append_rel_array[_j0]->parent_reloid = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = get_parentoid(root,rti);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_root0; _aux++) {
          free(*(root[_aux].append_rel_array));
        free(root[_aux].append_rel_array);
          }
          free(root);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long rti = 10;
          int _len_root0 = 100;
          struct TYPE_5__ * root = (struct TYPE_5__ *) malloc(_len_root0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_root0; _i0++) {
              int _len_root__i0__append_rel_array0 = 1;
          root[_i0].append_rel_array = (struct TYPE_4__ **) malloc(_len_root__i0__append_rel_array0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_root__i0__append_rel_array0; _j0++) {
            int _len_root__i0__append_rel_array1 = 1;
            root[_i0].append_rel_array[_j0] = (struct TYPE_4__ *) malloc(_len_root__i0__append_rel_array1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_root__i0__append_rel_array1; _j1++) {
              root[_i0].append_rel_array[_j0]->parent_reloid = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = get_parentoid(root,rti);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_root0; _aux++) {
          free(*(root[_aux].append_rel_array));
        free(root[_aux].append_rel_array);
          }
          free(root);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
