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
struct TYPE_3__ {char* xtr_type; int /*<<< orphan*/ * libname; int /*<<< orphan*/ * type; int /*<<< orphan*/ * machine; scalar_t__ bits; int /*<<< orphan*/ * arch; } ;
typedef  TYPE_1__ RBinXtrMetadata ;

/* Variables and functions */

__attribute__((used)) static void fill_metadata_info_from_hdr(RBinXtrMetadata *meta, void *foo) {// struct Pe_32_r_bin_pemixed_obj_t* pe_bin){
	meta->arch = NULL;
	meta->bits = 0;
	meta->machine = NULL;
	meta->type = NULL;
	meta->libname = NULL;
	meta->xtr_type = "net";
	//strcpy (meta->xtr_type, "net");
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
          int _len_meta0 = 1;
          struct TYPE_3__ * meta = (struct TYPE_3__ *) malloc(_len_meta0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_meta0; _i0++) {
              int _len_meta__i0__xtr_type0 = 1;
          meta[_i0].xtr_type = (char *) malloc(_len_meta__i0__xtr_type0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_meta__i0__xtr_type0; _j0++) {
            meta[_i0].xtr_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_meta__i0__libname0 = 1;
          meta[_i0].libname = (int *) malloc(_len_meta__i0__libname0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_meta__i0__libname0; _j0++) {
            meta[_i0].libname[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_meta__i0__type0 = 1;
          meta[_i0].type = (int *) malloc(_len_meta__i0__type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_meta__i0__type0; _j0++) {
            meta[_i0].type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_meta__i0__machine0 = 1;
          meta[_i0].machine = (int *) malloc(_len_meta__i0__machine0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_meta__i0__machine0; _j0++) {
            meta[_i0].machine[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        meta[_i0].bits = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_meta__i0__arch0 = 1;
          meta[_i0].arch = (int *) malloc(_len_meta__i0__arch0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_meta__i0__arch0; _j0++) {
            meta[_i0].arch[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * foo;
          fill_metadata_info_from_hdr(meta,foo);
          for(int _aux = 0; _aux < _len_meta0; _aux++) {
          free(meta[_aux].xtr_type);
          }
          for(int _aux = 0; _aux < _len_meta0; _aux++) {
          free(meta[_aux].libname);
          }
          for(int _aux = 0; _aux < _len_meta0; _aux++) {
          free(meta[_aux].type);
          }
          for(int _aux = 0; _aux < _len_meta0; _aux++) {
          free(meta[_aux].machine);
          }
          for(int _aux = 0; _aux < _len_meta0; _aux++) {
          free(meta[_aux].arch);
          }
          free(meta);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_meta0 = 65025;
          struct TYPE_3__ * meta = (struct TYPE_3__ *) malloc(_len_meta0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_meta0; _i0++) {
              int _len_meta__i0__xtr_type0 = 1;
          meta[_i0].xtr_type = (char *) malloc(_len_meta__i0__xtr_type0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_meta__i0__xtr_type0; _j0++) {
            meta[_i0].xtr_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_meta__i0__libname0 = 1;
          meta[_i0].libname = (int *) malloc(_len_meta__i0__libname0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_meta__i0__libname0; _j0++) {
            meta[_i0].libname[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_meta__i0__type0 = 1;
          meta[_i0].type = (int *) malloc(_len_meta__i0__type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_meta__i0__type0; _j0++) {
            meta[_i0].type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_meta__i0__machine0 = 1;
          meta[_i0].machine = (int *) malloc(_len_meta__i0__machine0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_meta__i0__machine0; _j0++) {
            meta[_i0].machine[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        meta[_i0].bits = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_meta__i0__arch0 = 1;
          meta[_i0].arch = (int *) malloc(_len_meta__i0__arch0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_meta__i0__arch0; _j0++) {
            meta[_i0].arch[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * foo;
          fill_metadata_info_from_hdr(meta,foo);
          for(int _aux = 0; _aux < _len_meta0; _aux++) {
          free(meta[_aux].xtr_type);
          }
          for(int _aux = 0; _aux < _len_meta0; _aux++) {
          free(meta[_aux].libname);
          }
          for(int _aux = 0; _aux < _len_meta0; _aux++) {
          free(meta[_aux].type);
          }
          for(int _aux = 0; _aux < _len_meta0; _aux++) {
          free(meta[_aux].machine);
          }
          for(int _aux = 0; _aux < _len_meta0; _aux++) {
          free(meta[_aux].arch);
          }
          free(meta);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_meta0 = 100;
          struct TYPE_3__ * meta = (struct TYPE_3__ *) malloc(_len_meta0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_meta0; _i0++) {
              int _len_meta__i0__xtr_type0 = 1;
          meta[_i0].xtr_type = (char *) malloc(_len_meta__i0__xtr_type0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_meta__i0__xtr_type0; _j0++) {
            meta[_i0].xtr_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_meta__i0__libname0 = 1;
          meta[_i0].libname = (int *) malloc(_len_meta__i0__libname0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_meta__i0__libname0; _j0++) {
            meta[_i0].libname[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_meta__i0__type0 = 1;
          meta[_i0].type = (int *) malloc(_len_meta__i0__type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_meta__i0__type0; _j0++) {
            meta[_i0].type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_meta__i0__machine0 = 1;
          meta[_i0].machine = (int *) malloc(_len_meta__i0__machine0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_meta__i0__machine0; _j0++) {
            meta[_i0].machine[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        meta[_i0].bits = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_meta__i0__arch0 = 1;
          meta[_i0].arch = (int *) malloc(_len_meta__i0__arch0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_meta__i0__arch0; _j0++) {
            meta[_i0].arch[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * foo;
          fill_metadata_info_from_hdr(meta,foo);
          for(int _aux = 0; _aux < _len_meta0; _aux++) {
          free(meta[_aux].xtr_type);
          }
          for(int _aux = 0; _aux < _len_meta0; _aux++) {
          free(meta[_aux].libname);
          }
          for(int _aux = 0; _aux < _len_meta0; _aux++) {
          free(meta[_aux].type);
          }
          for(int _aux = 0; _aux < _len_meta0; _aux++) {
          free(meta[_aux].machine);
          }
          for(int _aux = 0; _aux < _len_meta0; _aux++) {
          free(meta[_aux].arch);
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
