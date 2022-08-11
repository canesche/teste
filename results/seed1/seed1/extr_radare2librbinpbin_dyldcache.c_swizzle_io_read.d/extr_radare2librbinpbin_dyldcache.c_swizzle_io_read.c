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
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_10__ {int /*<<< orphan*/ * original_io_read; } ;
struct TYPE_9__ {TYPE_1__* desc; } ;
struct TYPE_8__ {int /*<<< orphan*/ * read; } ;
struct TYPE_7__ {TYPE_2__* plugin; } ;
typedef  TYPE_2__ RIOPlugin ;
typedef  TYPE_3__ RIO ;
typedef  TYPE_4__ RDyldCache ;

/* Variables and functions */
 int /*<<< orphan*/  dyldcache_io_read ; 

__attribute__((used)) static void swizzle_io_read(RDyldCache *cache, RIO *io) {
	if (!io || !io->desc || !io->desc->plugin) {
		return;
	}

	RIOPlugin *plugin = io->desc->plugin;
	cache->original_io_read = plugin->read;
	plugin->read = &dyldcache_io_read;
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
          struct TYPE_10__ * cache = (struct TYPE_10__ *) malloc(_len_cache0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_cache0; _i0++) {
              int _len_cache__i0__original_io_read0 = 1;
          cache[_i0].original_io_read = (int *) malloc(_len_cache__i0__original_io_read0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cache__i0__original_io_read0; _j0++) {
            cache[_i0].original_io_read[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_io0 = 1;
          struct TYPE_9__ * io = (struct TYPE_9__ *) malloc(_len_io0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_io0; _i0++) {
              int _len_io__i0__desc0 = 1;
          io[_i0].desc = (struct TYPE_7__ *) malloc(_len_io__i0__desc0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_io__i0__desc0; _j0++) {
              int _len_io__i0__desc_plugin0 = 1;
          io[_i0].desc->plugin = (struct TYPE_8__ *) malloc(_len_io__i0__desc_plugin0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_io__i0__desc_plugin0; _j0++) {
              int _len_io__i0__desc_plugin_read0 = 1;
          io[_i0].desc->plugin->read = (int *) malloc(_len_io__i0__desc_plugin_read0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_io__i0__desc_plugin_read0; _j0++) {
            io[_i0].desc->plugin->read[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          swizzle_io_read(cache,io);
          for(int _aux = 0; _aux < _len_cache0; _aux++) {
          free(cache[_aux].original_io_read);
          }
          free(cache);
          for(int _aux = 0; _aux < _len_io0; _aux++) {
          free(io[_aux].desc);
          }
          free(io);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cache0 = 65025;
          struct TYPE_10__ * cache = (struct TYPE_10__ *) malloc(_len_cache0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_cache0; _i0++) {
              int _len_cache__i0__original_io_read0 = 1;
          cache[_i0].original_io_read = (int *) malloc(_len_cache__i0__original_io_read0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cache__i0__original_io_read0; _j0++) {
            cache[_i0].original_io_read[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_io0 = 65025;
          struct TYPE_9__ * io = (struct TYPE_9__ *) malloc(_len_io0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_io0; _i0++) {
              int _len_io__i0__desc0 = 1;
          io[_i0].desc = (struct TYPE_7__ *) malloc(_len_io__i0__desc0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_io__i0__desc0; _j0++) {
              int _len_io__i0__desc_plugin0 = 1;
          io[_i0].desc->plugin = (struct TYPE_8__ *) malloc(_len_io__i0__desc_plugin0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_io__i0__desc_plugin0; _j0++) {
              int _len_io__i0__desc_plugin_read0 = 1;
          io[_i0].desc->plugin->read = (int *) malloc(_len_io__i0__desc_plugin_read0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_io__i0__desc_plugin_read0; _j0++) {
            io[_i0].desc->plugin->read[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          swizzle_io_read(cache,io);
          for(int _aux = 0; _aux < _len_cache0; _aux++) {
          free(cache[_aux].original_io_read);
          }
          free(cache);
          for(int _aux = 0; _aux < _len_io0; _aux++) {
          free(io[_aux].desc);
          }
          free(io);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cache0 = 100;
          struct TYPE_10__ * cache = (struct TYPE_10__ *) malloc(_len_cache0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_cache0; _i0++) {
              int _len_cache__i0__original_io_read0 = 1;
          cache[_i0].original_io_read = (int *) malloc(_len_cache__i0__original_io_read0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cache__i0__original_io_read0; _j0++) {
            cache[_i0].original_io_read[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_io0 = 100;
          struct TYPE_9__ * io = (struct TYPE_9__ *) malloc(_len_io0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_io0; _i0++) {
              int _len_io__i0__desc0 = 1;
          io[_i0].desc = (struct TYPE_7__ *) malloc(_len_io__i0__desc0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_io__i0__desc0; _j0++) {
              int _len_io__i0__desc_plugin0 = 1;
          io[_i0].desc->plugin = (struct TYPE_8__ *) malloc(_len_io__i0__desc_plugin0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_io__i0__desc_plugin0; _j0++) {
              int _len_io__i0__desc_plugin_read0 = 1;
          io[_i0].desc->plugin->read = (int *) malloc(_len_io__i0__desc_plugin_read0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_io__i0__desc_plugin_read0; _j0++) {
            io[_i0].desc->plugin->read[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          swizzle_io_read(cache,io);
          for(int _aux = 0; _aux < _len_cache0; _aux++) {
          free(cache[_aux].original_io_read);
          }
          free(cache);
          for(int _aux = 0; _aux < _len_io0; _aux++) {
          free(io[_aux].desc);
          }
          free(io);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
