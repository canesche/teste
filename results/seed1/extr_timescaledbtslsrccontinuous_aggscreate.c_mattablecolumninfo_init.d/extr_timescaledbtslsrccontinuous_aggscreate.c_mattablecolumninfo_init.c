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
struct TYPE_3__ {int matpartcolno; int /*<<< orphan*/ * matpartcolname; int /*<<< orphan*/  mat_groupcolname_list; int /*<<< orphan*/ * partial_grouplist; int /*<<< orphan*/ * partial_seltlist; int /*<<< orphan*/ * matcollist; } ;
typedef  TYPE_1__ MatTableColumnInfo ;
typedef  int /*<<< orphan*/  List ;

/* Variables and functions */
 int /*<<< orphan*/  NIL ; 

__attribute__((used)) static void
mattablecolumninfo_init(MatTableColumnInfo *matcolinfo, List *collist, List *tlist, List *grouplist)
{
	matcolinfo->matcollist = collist;
	matcolinfo->partial_seltlist = tlist;
	matcolinfo->partial_grouplist = grouplist;
	matcolinfo->mat_groupcolname_list = NIL;
	matcolinfo->matpartcolno = -1;
	matcolinfo->matpartcolname = NULL;
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
          int _len_matcolinfo0 = 1;
          struct TYPE_3__ * matcolinfo = (struct TYPE_3__ *) malloc(_len_matcolinfo0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_matcolinfo0; _i0++) {
            matcolinfo[_i0].matpartcolno = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_matcolinfo__i0__matpartcolname0 = 1;
          matcolinfo[_i0].matpartcolname = (int *) malloc(_len_matcolinfo__i0__matpartcolname0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_matcolinfo__i0__matpartcolname0; _j0++) {
            matcolinfo[_i0].matpartcolname[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        matcolinfo[_i0].mat_groupcolname_list = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_matcolinfo__i0__partial_grouplist0 = 1;
          matcolinfo[_i0].partial_grouplist = (int *) malloc(_len_matcolinfo__i0__partial_grouplist0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_matcolinfo__i0__partial_grouplist0; _j0++) {
            matcolinfo[_i0].partial_grouplist[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_matcolinfo__i0__partial_seltlist0 = 1;
          matcolinfo[_i0].partial_seltlist = (int *) malloc(_len_matcolinfo__i0__partial_seltlist0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_matcolinfo__i0__partial_seltlist0; _j0++) {
            matcolinfo[_i0].partial_seltlist[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_matcolinfo__i0__matcollist0 = 1;
          matcolinfo[_i0].matcollist = (int *) malloc(_len_matcolinfo__i0__matcollist0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_matcolinfo__i0__matcollist0; _j0++) {
            matcolinfo[_i0].matcollist[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_collist0 = 1;
          int * collist = (int *) malloc(_len_collist0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_collist0; _i0++) {
            collist[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tlist0 = 1;
          int * tlist = (int *) malloc(_len_tlist0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tlist0; _i0++) {
            tlist[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_grouplist0 = 1;
          int * grouplist = (int *) malloc(_len_grouplist0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_grouplist0; _i0++) {
            grouplist[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mattablecolumninfo_init(matcolinfo,collist,tlist,grouplist);
          for(int _aux = 0; _aux < _len_matcolinfo0; _aux++) {
          free(matcolinfo[_aux].matpartcolname);
          }
          for(int _aux = 0; _aux < _len_matcolinfo0; _aux++) {
          free(matcolinfo[_aux].partial_grouplist);
          }
          for(int _aux = 0; _aux < _len_matcolinfo0; _aux++) {
          free(matcolinfo[_aux].partial_seltlist);
          }
          for(int _aux = 0; _aux < _len_matcolinfo0; _aux++) {
          free(matcolinfo[_aux].matcollist);
          }
          free(matcolinfo);
          free(collist);
          free(tlist);
          free(grouplist);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_matcolinfo0 = 65025;
          struct TYPE_3__ * matcolinfo = (struct TYPE_3__ *) malloc(_len_matcolinfo0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_matcolinfo0; _i0++) {
            matcolinfo[_i0].matpartcolno = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_matcolinfo__i0__matpartcolname0 = 1;
          matcolinfo[_i0].matpartcolname = (int *) malloc(_len_matcolinfo__i0__matpartcolname0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_matcolinfo__i0__matpartcolname0; _j0++) {
            matcolinfo[_i0].matpartcolname[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        matcolinfo[_i0].mat_groupcolname_list = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_matcolinfo__i0__partial_grouplist0 = 1;
          matcolinfo[_i0].partial_grouplist = (int *) malloc(_len_matcolinfo__i0__partial_grouplist0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_matcolinfo__i0__partial_grouplist0; _j0++) {
            matcolinfo[_i0].partial_grouplist[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_matcolinfo__i0__partial_seltlist0 = 1;
          matcolinfo[_i0].partial_seltlist = (int *) malloc(_len_matcolinfo__i0__partial_seltlist0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_matcolinfo__i0__partial_seltlist0; _j0++) {
            matcolinfo[_i0].partial_seltlist[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_matcolinfo__i0__matcollist0 = 1;
          matcolinfo[_i0].matcollist = (int *) malloc(_len_matcolinfo__i0__matcollist0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_matcolinfo__i0__matcollist0; _j0++) {
            matcolinfo[_i0].matcollist[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_collist0 = 65025;
          int * collist = (int *) malloc(_len_collist0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_collist0; _i0++) {
            collist[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tlist0 = 65025;
          int * tlist = (int *) malloc(_len_tlist0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tlist0; _i0++) {
            tlist[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_grouplist0 = 65025;
          int * grouplist = (int *) malloc(_len_grouplist0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_grouplist0; _i0++) {
            grouplist[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mattablecolumninfo_init(matcolinfo,collist,tlist,grouplist);
          for(int _aux = 0; _aux < _len_matcolinfo0; _aux++) {
          free(matcolinfo[_aux].matpartcolname);
          }
          for(int _aux = 0; _aux < _len_matcolinfo0; _aux++) {
          free(matcolinfo[_aux].partial_grouplist);
          }
          for(int _aux = 0; _aux < _len_matcolinfo0; _aux++) {
          free(matcolinfo[_aux].partial_seltlist);
          }
          for(int _aux = 0; _aux < _len_matcolinfo0; _aux++) {
          free(matcolinfo[_aux].matcollist);
          }
          free(matcolinfo);
          free(collist);
          free(tlist);
          free(grouplist);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_matcolinfo0 = 100;
          struct TYPE_3__ * matcolinfo = (struct TYPE_3__ *) malloc(_len_matcolinfo0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_matcolinfo0; _i0++) {
            matcolinfo[_i0].matpartcolno = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_matcolinfo__i0__matpartcolname0 = 1;
          matcolinfo[_i0].matpartcolname = (int *) malloc(_len_matcolinfo__i0__matpartcolname0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_matcolinfo__i0__matpartcolname0; _j0++) {
            matcolinfo[_i0].matpartcolname[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        matcolinfo[_i0].mat_groupcolname_list = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_matcolinfo__i0__partial_grouplist0 = 1;
          matcolinfo[_i0].partial_grouplist = (int *) malloc(_len_matcolinfo__i0__partial_grouplist0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_matcolinfo__i0__partial_grouplist0; _j0++) {
            matcolinfo[_i0].partial_grouplist[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_matcolinfo__i0__partial_seltlist0 = 1;
          matcolinfo[_i0].partial_seltlist = (int *) malloc(_len_matcolinfo__i0__partial_seltlist0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_matcolinfo__i0__partial_seltlist0; _j0++) {
            matcolinfo[_i0].partial_seltlist[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_matcolinfo__i0__matcollist0 = 1;
          matcolinfo[_i0].matcollist = (int *) malloc(_len_matcolinfo__i0__matcollist0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_matcolinfo__i0__matcollist0; _j0++) {
            matcolinfo[_i0].matcollist[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_collist0 = 100;
          int * collist = (int *) malloc(_len_collist0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_collist0; _i0++) {
            collist[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tlist0 = 100;
          int * tlist = (int *) malloc(_len_tlist0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tlist0; _i0++) {
            tlist[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_grouplist0 = 100;
          int * grouplist = (int *) malloc(_len_grouplist0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_grouplist0; _i0++) {
            grouplist[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mattablecolumninfo_init(matcolinfo,collist,tlist,grouplist);
          for(int _aux = 0; _aux < _len_matcolinfo0; _aux++) {
          free(matcolinfo[_aux].matpartcolname);
          }
          for(int _aux = 0; _aux < _len_matcolinfo0; _aux++) {
          free(matcolinfo[_aux].partial_grouplist);
          }
          for(int _aux = 0; _aux < _len_matcolinfo0; _aux++) {
          free(matcolinfo[_aux].partial_seltlist);
          }
          for(int _aux = 0; _aux < _len_matcolinfo0; _aux++) {
          free(matcolinfo[_aux].matcollist);
          }
          free(matcolinfo);
          free(collist);
          free(tlist);
          free(grouplist);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
