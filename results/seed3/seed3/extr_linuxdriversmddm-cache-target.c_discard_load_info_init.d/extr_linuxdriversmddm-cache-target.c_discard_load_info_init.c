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
struct discard_load_info {scalar_t__ discard_end; scalar_t__ discard_begin; struct cache* cache; } ;
struct cache {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void discard_load_info_init(struct cache *cache,
				   struct discard_load_info *li)
{
	li->cache = cache;
	li->discard_begin = li->discard_end = 0;
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
          int _len_cache0 = 1;
          struct cache * cache = (struct cache *) malloc(_len_cache0*sizeof(struct cache));
          for(int _i0 = 0; _i0 < _len_cache0; _i0++) {
            cache[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_li0 = 1;
          struct discard_load_info * li = (struct discard_load_info *) malloc(_len_li0*sizeof(struct discard_load_info));
          for(int _i0 = 0; _i0 < _len_li0; _i0++) {
            li[_i0].discard_end = ((-2 * (next_i()%2)) + 1) * next_i();
        li[_i0].discard_begin = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_li__i0__cache0 = 1;
          li[_i0].cache = (struct cache *) malloc(_len_li__i0__cache0*sizeof(struct cache));
          for(int _j0 = 0; _j0 < _len_li__i0__cache0; _j0++) {
            li[_i0].cache->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          discard_load_info_init(cache,li);
          free(cache);
          for(int _aux = 0; _aux < _len_li0; _aux++) {
          free(li[_aux].cache);
          }
          free(li);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cache0 = 65025;
          struct cache * cache = (struct cache *) malloc(_len_cache0*sizeof(struct cache));
          for(int _i0 = 0; _i0 < _len_cache0; _i0++) {
            cache[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_li0 = 65025;
          struct discard_load_info * li = (struct discard_load_info *) malloc(_len_li0*sizeof(struct discard_load_info));
          for(int _i0 = 0; _i0 < _len_li0; _i0++) {
            li[_i0].discard_end = ((-2 * (next_i()%2)) + 1) * next_i();
        li[_i0].discard_begin = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_li__i0__cache0 = 1;
          li[_i0].cache = (struct cache *) malloc(_len_li__i0__cache0*sizeof(struct cache));
          for(int _j0 = 0; _j0 < _len_li__i0__cache0; _j0++) {
            li[_i0].cache->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          discard_load_info_init(cache,li);
          free(cache);
          for(int _aux = 0; _aux < _len_li0; _aux++) {
          free(li[_aux].cache);
          }
          free(li);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cache0 = 100;
          struct cache * cache = (struct cache *) malloc(_len_cache0*sizeof(struct cache));
          for(int _i0 = 0; _i0 < _len_cache0; _i0++) {
            cache[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_li0 = 100;
          struct discard_load_info * li = (struct discard_load_info *) malloc(_len_li0*sizeof(struct discard_load_info));
          for(int _i0 = 0; _i0 < _len_li0; _i0++) {
            li[_i0].discard_end = ((-2 * (next_i()%2)) + 1) * next_i();
        li[_i0].discard_begin = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_li__i0__cache0 = 1;
          li[_i0].cache = (struct cache *) malloc(_len_li__i0__cache0*sizeof(struct cache));
          for(int _j0 = 0; _j0 < _len_li__i0__cache0; _j0++) {
            li[_i0].cache->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          discard_load_info_init(cache,li);
          free(cache);
          for(int _aux = 0; _aux < _len_li0; _aux++) {
          free(li[_aux].cache);
          }
          free(li);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
