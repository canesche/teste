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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_3__* ext2_filsys ;
typedef  int /*<<< orphan*/  errcode_t ;
struct TYPE_7__ {TYPE_2__* icache; } ;
struct TYPE_6__ {unsigned int cache_size; scalar_t__ buffer_blk; TYPE_1__* cache; } ;
struct TYPE_5__ {scalar_t__ ino; } ;

/* Variables and functions */

errcode_t ext2fs_flush_icache(ext2_filsys fs)
{
	unsigned	i;

	if (!fs->icache)
		return 0;

	for (i=0; i < fs->icache->cache_size; i++)
		fs->icache->cache[i].ino = 0;

	fs->icache->buffer_blk = 0;
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
          int _len_fs0 = 1;
          struct TYPE_7__ * fs = (struct TYPE_7__ *) malloc(_len_fs0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_fs0; _i0++) {
              int _len_fs__i0__icache0 = 1;
          fs[_i0].icache = (struct TYPE_6__ *) malloc(_len_fs__i0__icache0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_fs__i0__icache0; _j0++) {
            fs[_i0].icache->cache_size = ((-2 * (next_i()%2)) + 1) * next_i();
        fs[_i0].icache->buffer_blk = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fs__i0__icache_cache0 = 1;
          fs[_i0].icache->cache = (struct TYPE_5__ *) malloc(_len_fs__i0__icache_cache0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_fs__i0__icache_cache0; _j0++) {
            fs[_i0].icache->cache->ino = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = ext2fs_flush_icache(fs);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fs0; _aux++) {
          free(fs[_aux].icache);
          }
          free(fs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fs0 = 65025;
          struct TYPE_7__ * fs = (struct TYPE_7__ *) malloc(_len_fs0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_fs0; _i0++) {
              int _len_fs__i0__icache0 = 1;
          fs[_i0].icache = (struct TYPE_6__ *) malloc(_len_fs__i0__icache0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_fs__i0__icache0; _j0++) {
            fs[_i0].icache->cache_size = ((-2 * (next_i()%2)) + 1) * next_i();
        fs[_i0].icache->buffer_blk = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fs__i0__icache_cache0 = 1;
          fs[_i0].icache->cache = (struct TYPE_5__ *) malloc(_len_fs__i0__icache_cache0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_fs__i0__icache_cache0; _j0++) {
            fs[_i0].icache->cache->ino = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = ext2fs_flush_icache(fs);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fs0; _aux++) {
          free(fs[_aux].icache);
          }
          free(fs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fs0 = 100;
          struct TYPE_7__ * fs = (struct TYPE_7__ *) malloc(_len_fs0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_fs0; _i0++) {
              int _len_fs__i0__icache0 = 1;
          fs[_i0].icache = (struct TYPE_6__ *) malloc(_len_fs__i0__icache0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_fs__i0__icache0; _j0++) {
            fs[_i0].icache->cache_size = ((-2 * (next_i()%2)) + 1) * next_i();
        fs[_i0].icache->buffer_blk = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fs__i0__icache_cache0 = 1;
          fs[_i0].icache->cache = (struct TYPE_5__ *) malloc(_len_fs__i0__icache_cache0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_fs__i0__icache_cache0; _j0++) {
            fs[_i0].icache->cache->ino = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = ext2fs_flush_icache(fs);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fs0; _aux++) {
          free(fs[_aux].icache);
          }
          free(fs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
