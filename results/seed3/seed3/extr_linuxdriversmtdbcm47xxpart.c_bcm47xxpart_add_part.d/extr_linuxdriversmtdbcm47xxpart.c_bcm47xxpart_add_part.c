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
typedef  int /*<<< orphan*/  uint32_t ;
typedef  int /*<<< orphan*/  u64 ;
struct mtd_partition {char const* name; int /*<<< orphan*/  mask_flags; int /*<<< orphan*/  offset; } ;

/* Variables and functions */

__attribute__((used)) static void bcm47xxpart_add_part(struct mtd_partition *part, const char *name,
				 u64 offset, uint32_t mask_flags)
{
	part->name = name;
	part->offset = offset;
	part->mask_flags = mask_flags;
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
          int offset = 100;
          int mask_flags = 100;
          int _len_part0 = 1;
          struct mtd_partition * part = (struct mtd_partition *) malloc(_len_part0*sizeof(struct mtd_partition));
          for(int _i0 = 0; _i0 < _len_part0; _i0++) {
              int _len_part__i0__name0 = 1;
          part[_i0].name = (const char *) malloc(_len_part__i0__name0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_part__i0__name0; _j0++) {
            part[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        part[_i0].mask_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        part[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 1;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bcm47xxpart_add_part(part,name,offset,mask_flags);
          for(int _aux = 0; _aux < _len_part0; _aux++) {
          free(part[_aux].name);
          }
          free(part);
          free(name);
        
        break;
    }
    // big-arr
    case 1:
    {
          int offset = 255;
          int mask_flags = 255;
          int _len_part0 = 65025;
          struct mtd_partition * part = (struct mtd_partition *) malloc(_len_part0*sizeof(struct mtd_partition));
          for(int _i0 = 0; _i0 < _len_part0; _i0++) {
              int _len_part__i0__name0 = 1;
          part[_i0].name = (const char *) malloc(_len_part__i0__name0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_part__i0__name0; _j0++) {
            part[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        part[_i0].mask_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        part[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 65025;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bcm47xxpart_add_part(part,name,offset,mask_flags);
          for(int _aux = 0; _aux < _len_part0; _aux++) {
          free(part[_aux].name);
          }
          free(part);
          free(name);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int offset = 10;
          int mask_flags = 10;
          int _len_part0 = 100;
          struct mtd_partition * part = (struct mtd_partition *) malloc(_len_part0*sizeof(struct mtd_partition));
          for(int _i0 = 0; _i0 < _len_part0; _i0++) {
              int _len_part__i0__name0 = 1;
          part[_i0].name = (const char *) malloc(_len_part__i0__name0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_part__i0__name0; _j0++) {
            part[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        part[_i0].mask_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        part[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 100;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bcm47xxpart_add_part(part,name,offset,mask_flags);
          for(int _aux = 0; _aux < _len_part0; _aux++) {
          free(part[_aux].name);
          }
          free(part);
          free(name);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
