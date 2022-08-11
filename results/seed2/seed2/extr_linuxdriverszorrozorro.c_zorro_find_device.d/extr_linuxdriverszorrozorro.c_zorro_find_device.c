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
typedef  scalar_t__ zorro_id ;
struct zorro_dev {scalar_t__ id; } ;

/* Variables and functions */
 scalar_t__ ZORRO_WILDCARD ; 
 struct zorro_dev* zorro_autocon ; 
 int zorro_num_autocon ; 

struct zorro_dev *zorro_find_device(zorro_id id, struct zorro_dev *from)
{
	struct zorro_dev *z;

	if (!zorro_num_autocon)
		return NULL;

	for (z = from ? from+1 : &zorro_autocon[0];
	     z < zorro_autocon+zorro_num_autocon;
	     z++)
		if (id == ZORRO_WILDCARD || id == z->id)
			return z;
	return NULL;
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
          long id = 100;
          int _len_from0 = 1;
          struct zorro_dev * from = (struct zorro_dev *) malloc(_len_from0*sizeof(struct zorro_dev));
          for(int _i0 = 0; _i0 < _len_from0; _i0++) {
            from[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct zorro_dev * benchRet = zorro_find_device(id,from);
          printf("%ld\n", (*benchRet).id);
          free(from);
        
        break;
    }
    // big-arr
    case 1:
    {
          long id = 255;
          int _len_from0 = 65025;
          struct zorro_dev * from = (struct zorro_dev *) malloc(_len_from0*sizeof(struct zorro_dev));
          for(int _i0 = 0; _i0 < _len_from0; _i0++) {
            from[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct zorro_dev * benchRet = zorro_find_device(id,from);
          printf("%ld\n", (*benchRet).id);
          free(from);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long id = 10;
          int _len_from0 = 100;
          struct zorro_dev * from = (struct zorro_dev *) malloc(_len_from0*sizeof(struct zorro_dev));
          for(int _i0 = 0; _i0 < _len_from0; _i0++) {
            from[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct zorro_dev * benchRet = zorro_find_device(id,from);
          printf("%ld\n", (*benchRet).id);
          free(from);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
