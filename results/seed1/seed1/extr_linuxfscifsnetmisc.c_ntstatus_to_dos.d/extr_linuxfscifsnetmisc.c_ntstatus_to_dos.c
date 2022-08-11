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
typedef  int /*<<< orphan*/  __u8 ;
typedef  scalar_t__ __u32 ;
typedef  int /*<<< orphan*/  __u16 ;
struct TYPE_2__ {scalar_t__ ntstatus; int /*<<< orphan*/  dos_code; int /*<<< orphan*/  dos_class; } ;

/* Variables and functions */
 int /*<<< orphan*/  ERRHRD ; 
 int /*<<< orphan*/  ERRgeneral ; 
 TYPE_1__* ntstatus_to_dos_map ; 

__attribute__((used)) static void
ntstatus_to_dos(__u32 ntstatus, __u8 *eclass, __u16 *ecode)
{
	int i;
	if (ntstatus == 0) {
		*eclass = 0;
		*ecode = 0;
		return;
	}
	for (i = 0; ntstatus_to_dos_map[i].ntstatus; i++) {
		if (ntstatus == ntstatus_to_dos_map[i].ntstatus) {
			*eclass = ntstatus_to_dos_map[i].dos_class;
			*ecode = ntstatus_to_dos_map[i].dos_code;
			return;
		}
	}
	*eclass = ERRHRD;
	*ecode = ERRgeneral;
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
          long ntstatus = 100;
          int _len_eclass0 = 1;
          int * eclass = (int *) malloc(_len_eclass0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_eclass0; _i0++) {
            eclass[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ecode0 = 1;
          int * ecode = (int *) malloc(_len_ecode0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ecode0; _i0++) {
            ecode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ntstatus_to_dos(ntstatus,eclass,ecode);
          free(eclass);
          free(ecode);
        
        break;
    }
    // big-arr
    case 1:
    {
          long ntstatus = 255;
          int _len_eclass0 = 65025;
          int * eclass = (int *) malloc(_len_eclass0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_eclass0; _i0++) {
            eclass[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ecode0 = 65025;
          int * ecode = (int *) malloc(_len_ecode0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ecode0; _i0++) {
            ecode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ntstatus_to_dos(ntstatus,eclass,ecode);
          free(eclass);
          free(ecode);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long ntstatus = 10;
          int _len_eclass0 = 100;
          int * eclass = (int *) malloc(_len_eclass0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_eclass0; _i0++) {
            eclass[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ecode0 = 100;
          int * ecode = (int *) malloc(_len_ecode0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ecode0; _i0++) {
            ecode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ntstatus_to_dos(ntstatus,eclass,ecode);
          free(eclass);
          free(ecode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
