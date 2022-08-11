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
typedef  int /*<<< orphan*/  u32 ;
struct TYPE_2__ {unsigned int offset; struct host1x_bo* bo; } ;
struct host1x_reloc {scalar_t__ shift; TYPE_1__ cmdbuf; } ;
struct host1x_bo {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static bool check_reloc(struct host1x_reloc *reloc, struct host1x_bo *cmdbuf,
			unsigned int offset)
{
	offset *= sizeof(u32);

	if (reloc->cmdbuf.bo != cmdbuf || reloc->cmdbuf.offset != offset)
		return false;

	/* relocation shift value validation isn't implemented yet */
	if (reloc->shift)
		return false;

	return true;
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
          unsigned int offset = 100;
          int _len_reloc0 = 1;
          struct host1x_reloc * reloc = (struct host1x_reloc *) malloc(_len_reloc0*sizeof(struct host1x_reloc));
          for(int _i0 = 0; _i0 < _len_reloc0; _i0++) {
            reloc[_i0].shift = ((-2 * (next_i()%2)) + 1) * next_i();
        reloc[_i0].cmdbuf.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_reloc__i0__cmdbuf_bo0 = 1;
          reloc[_i0].cmdbuf.bo = (struct host1x_bo *) malloc(_len_reloc__i0__cmdbuf_bo0*sizeof(struct host1x_bo));
          for(int _j0 = 0; _j0 < _len_reloc__i0__cmdbuf_bo0; _j0++) {
            reloc[_i0].cmdbuf.bo->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cmdbuf0 = 1;
          struct host1x_bo * cmdbuf = (struct host1x_bo *) malloc(_len_cmdbuf0*sizeof(struct host1x_bo));
          for(int _i0 = 0; _i0 < _len_cmdbuf0; _i0++) {
            cmdbuf[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_reloc(reloc,cmdbuf,offset);
          printf("%d\n", benchRet); 
          free(reloc);
          free(cmdbuf);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int offset = 255;
          int _len_reloc0 = 65025;
          struct host1x_reloc * reloc = (struct host1x_reloc *) malloc(_len_reloc0*sizeof(struct host1x_reloc));
          for(int _i0 = 0; _i0 < _len_reloc0; _i0++) {
            reloc[_i0].shift = ((-2 * (next_i()%2)) + 1) * next_i();
        reloc[_i0].cmdbuf.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_reloc__i0__cmdbuf_bo0 = 1;
          reloc[_i0].cmdbuf.bo = (struct host1x_bo *) malloc(_len_reloc__i0__cmdbuf_bo0*sizeof(struct host1x_bo));
          for(int _j0 = 0; _j0 < _len_reloc__i0__cmdbuf_bo0; _j0++) {
            reloc[_i0].cmdbuf.bo->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cmdbuf0 = 65025;
          struct host1x_bo * cmdbuf = (struct host1x_bo *) malloc(_len_cmdbuf0*sizeof(struct host1x_bo));
          for(int _i0 = 0; _i0 < _len_cmdbuf0; _i0++) {
            cmdbuf[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_reloc(reloc,cmdbuf,offset);
          printf("%d\n", benchRet); 
          free(reloc);
          free(cmdbuf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int offset = 10;
          int _len_reloc0 = 100;
          struct host1x_reloc * reloc = (struct host1x_reloc *) malloc(_len_reloc0*sizeof(struct host1x_reloc));
          for(int _i0 = 0; _i0 < _len_reloc0; _i0++) {
            reloc[_i0].shift = ((-2 * (next_i()%2)) + 1) * next_i();
        reloc[_i0].cmdbuf.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_reloc__i0__cmdbuf_bo0 = 1;
          reloc[_i0].cmdbuf.bo = (struct host1x_bo *) malloc(_len_reloc__i0__cmdbuf_bo0*sizeof(struct host1x_bo));
          for(int _j0 = 0; _j0 < _len_reloc__i0__cmdbuf_bo0; _j0++) {
            reloc[_i0].cmdbuf.bo->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cmdbuf0 = 100;
          struct host1x_bo * cmdbuf = (struct host1x_bo *) malloc(_len_cmdbuf0*sizeof(struct host1x_bo));
          for(int _i0 = 0; _i0 < _len_cmdbuf0; _i0++) {
            cmdbuf[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_reloc(reloc,cmdbuf,offset);
          printf("%d\n", benchRet); 
          free(reloc);
          free(cmdbuf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
