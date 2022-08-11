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
struct TYPE_2__ {int /*<<< orphan*/ * lpVtbl; } ;
struct provideclassinfo {int /*<<< orphan*/  const* guid; int /*<<< orphan*/ * outer; TYPE_1__ IProvideClassInfo_iface; } ;
typedef  int /*<<< orphan*/  IUnknown ;
typedef  int /*<<< orphan*/  GUID ;

/* Variables and functions */
 int /*<<< orphan*/  provideclassinfovtbl ; 

void init_classinfo(const GUID *guid, IUnknown *outer, struct provideclassinfo *classinfo)
{
    classinfo->IProvideClassInfo_iface.lpVtbl = &provideclassinfovtbl;
    classinfo->outer = outer;
    classinfo->guid = guid;
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
          int _len_guid0 = 1;
          const int * guid = (const int *) malloc(_len_guid0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_guid0; _i0++) {
            guid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_outer0 = 1;
          int * outer = (int *) malloc(_len_outer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_outer0; _i0++) {
            outer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_classinfo0 = 1;
          struct provideclassinfo * classinfo = (struct provideclassinfo *) malloc(_len_classinfo0*sizeof(struct provideclassinfo));
          for(int _i0 = 0; _i0 < _len_classinfo0; _i0++) {
              int _len_classinfo__i0__guid0 = 1;
          classinfo[_i0].guid = (const int *) malloc(_len_classinfo__i0__guid0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_classinfo__i0__guid0; _j0++) {
            classinfo[_i0].guid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_classinfo__i0__outer0 = 1;
          classinfo[_i0].outer = (int *) malloc(_len_classinfo__i0__outer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_classinfo__i0__outer0; _j0++) {
            classinfo[_i0].outer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_classinfo__i0__IProvideClassInfo_iface_lpVtbl0 = 1;
          classinfo[_i0].IProvideClassInfo_iface.lpVtbl = (int *) malloc(_len_classinfo__i0__IProvideClassInfo_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_classinfo__i0__IProvideClassInfo_iface_lpVtbl0; _j0++) {
            classinfo[_i0].IProvideClassInfo_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          init_classinfo(guid,outer,classinfo);
          free(guid);
          free(outer);
          for(int _aux = 0; _aux < _len_classinfo0; _aux++) {
          free(classinfo[_aux].guid);
          }
          for(int _aux = 0; _aux < _len_classinfo0; _aux++) {
          free(classinfo[_aux].outer);
          }
          free(classinfo);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_guid0 = 65025;
          const int * guid = (const int *) malloc(_len_guid0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_guid0; _i0++) {
            guid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_outer0 = 65025;
          int * outer = (int *) malloc(_len_outer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_outer0; _i0++) {
            outer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_classinfo0 = 65025;
          struct provideclassinfo * classinfo = (struct provideclassinfo *) malloc(_len_classinfo0*sizeof(struct provideclassinfo));
          for(int _i0 = 0; _i0 < _len_classinfo0; _i0++) {
              int _len_classinfo__i0__guid0 = 1;
          classinfo[_i0].guid = (const int *) malloc(_len_classinfo__i0__guid0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_classinfo__i0__guid0; _j0++) {
            classinfo[_i0].guid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_classinfo__i0__outer0 = 1;
          classinfo[_i0].outer = (int *) malloc(_len_classinfo__i0__outer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_classinfo__i0__outer0; _j0++) {
            classinfo[_i0].outer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_classinfo__i0__IProvideClassInfo_iface_lpVtbl0 = 1;
          classinfo[_i0].IProvideClassInfo_iface.lpVtbl = (int *) malloc(_len_classinfo__i0__IProvideClassInfo_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_classinfo__i0__IProvideClassInfo_iface_lpVtbl0; _j0++) {
            classinfo[_i0].IProvideClassInfo_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          init_classinfo(guid,outer,classinfo);
          free(guid);
          free(outer);
          for(int _aux = 0; _aux < _len_classinfo0; _aux++) {
          free(classinfo[_aux].guid);
          }
          for(int _aux = 0; _aux < _len_classinfo0; _aux++) {
          free(classinfo[_aux].outer);
          }
          free(classinfo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_guid0 = 100;
          const int * guid = (const int *) malloc(_len_guid0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_guid0; _i0++) {
            guid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_outer0 = 100;
          int * outer = (int *) malloc(_len_outer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_outer0; _i0++) {
            outer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_classinfo0 = 100;
          struct provideclassinfo * classinfo = (struct provideclassinfo *) malloc(_len_classinfo0*sizeof(struct provideclassinfo));
          for(int _i0 = 0; _i0 < _len_classinfo0; _i0++) {
              int _len_classinfo__i0__guid0 = 1;
          classinfo[_i0].guid = (const int *) malloc(_len_classinfo__i0__guid0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_classinfo__i0__guid0; _j0++) {
            classinfo[_i0].guid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_classinfo__i0__outer0 = 1;
          classinfo[_i0].outer = (int *) malloc(_len_classinfo__i0__outer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_classinfo__i0__outer0; _j0++) {
            classinfo[_i0].outer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_classinfo__i0__IProvideClassInfo_iface_lpVtbl0 = 1;
          classinfo[_i0].IProvideClassInfo_iface.lpVtbl = (int *) malloc(_len_classinfo__i0__IProvideClassInfo_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_classinfo__i0__IProvideClassInfo_iface_lpVtbl0; _j0++) {
            classinfo[_i0].IProvideClassInfo_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          init_classinfo(guid,outer,classinfo);
          free(guid);
          free(outer);
          for(int _aux = 0; _aux < _len_classinfo0; _aux++) {
          free(classinfo[_aux].guid);
          }
          for(int _aux = 0; _aux < _len_classinfo0; _aux++) {
          free(classinfo[_aux].outer);
          }
          free(classinfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
