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
struct packing_data {unsigned long* delta_size; struct object_entry const* objects; } ;
struct object_entry {unsigned long delta_size_; scalar_t__ delta_size_valid; } ;

/* Variables and functions */

__attribute__((used)) static inline unsigned long oe_delta_size(struct packing_data *pack,
					  const struct object_entry *e)
{
	if (e->delta_size_valid)
		return e->delta_size_;

	/*
	 * pack->delta_size[] can't be NULL because oe_set_delta_size()
	 * must have been called when a new delta is saved with
	 * oe_set_delta().
	 * If oe_delta() returns NULL (i.e. default state, which means
	 * delta_size_valid is also false), then the caller must never
	 * call oe_delta_size().
	 */
	return pack->delta_size[e - pack->objects];
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
          int _len_pack0 = 1;
          struct packing_data * pack = (struct packing_data *) malloc(_len_pack0*sizeof(struct packing_data));
          for(int _i0 = 0; _i0 < _len_pack0; _i0++) {
              int _len_pack__i0__delta_size0 = 1;
          pack[_i0].delta_size = (unsigned long *) malloc(_len_pack__i0__delta_size0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_pack__i0__delta_size0; _j0++) {
            pack[_i0].delta_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pack__i0__objects0 = 1;
          pack[_i0].objects = (const struct object_entry *) malloc(_len_pack__i0__objects0*sizeof(const struct object_entry));
          for(int _j0 = 0; _j0 < _len_pack__i0__objects0; _j0++) {
              }
          }
          int _len_e0 = 1;
          const struct object_entry * e = (const struct object_entry *) malloc(_len_e0*sizeof(const struct object_entry));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              }
          unsigned long benchRet = oe_delta_size(pack,e);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_pack0; _aux++) {
          free(pack[_aux].delta_size);
          }
          for(int _aux = 0; _aux < _len_pack0; _aux++) {
          free(pack[_aux].objects);
          }
          free(pack);
          free(e);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pack0 = 65025;
          struct packing_data * pack = (struct packing_data *) malloc(_len_pack0*sizeof(struct packing_data));
          for(int _i0 = 0; _i0 < _len_pack0; _i0++) {
              int _len_pack__i0__delta_size0 = 1;
          pack[_i0].delta_size = (unsigned long *) malloc(_len_pack__i0__delta_size0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_pack__i0__delta_size0; _j0++) {
            pack[_i0].delta_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pack__i0__objects0 = 1;
          pack[_i0].objects = (const struct object_entry *) malloc(_len_pack__i0__objects0*sizeof(const struct object_entry));
          for(int _j0 = 0; _j0 < _len_pack__i0__objects0; _j0++) {
              }
          }
          int _len_e0 = 65025;
          const struct object_entry * e = (const struct object_entry *) malloc(_len_e0*sizeof(const struct object_entry));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              }
          unsigned long benchRet = oe_delta_size(pack,e);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_pack0; _aux++) {
          free(pack[_aux].delta_size);
          }
          for(int _aux = 0; _aux < _len_pack0; _aux++) {
          free(pack[_aux].objects);
          }
          free(pack);
          free(e);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pack0 = 100;
          struct packing_data * pack = (struct packing_data *) malloc(_len_pack0*sizeof(struct packing_data));
          for(int _i0 = 0; _i0 < _len_pack0; _i0++) {
              int _len_pack__i0__delta_size0 = 1;
          pack[_i0].delta_size = (unsigned long *) malloc(_len_pack__i0__delta_size0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_pack__i0__delta_size0; _j0++) {
            pack[_i0].delta_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pack__i0__objects0 = 1;
          pack[_i0].objects = (const struct object_entry *) malloc(_len_pack__i0__objects0*sizeof(const struct object_entry));
          for(int _j0 = 0; _j0 < _len_pack__i0__objects0; _j0++) {
              }
          }
          int _len_e0 = 100;
          const struct object_entry * e = (const struct object_entry *) malloc(_len_e0*sizeof(const struct object_entry));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              }
          unsigned long benchRet = oe_delta_size(pack,e);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_pack0; _aux++) {
          free(pack[_aux].delta_size);
          }
          for(int _aux = 0; _aux < _len_pack0; _aux++) {
          free(pack[_aux].objects);
          }
          free(pack);
          free(e);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
