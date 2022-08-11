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
struct unpack_trees_options {int cache_bottom; struct index_state* src_index; } ;
struct index_state {int cache_nr; struct cache_entry** cache; } ;
struct cache_entry {int ce_flags; } ;

/* Variables and functions */
 int CE_UNPACKED ; 

__attribute__((used)) static struct cache_entry *next_cache_entry(struct unpack_trees_options *o)
{
	const struct index_state *index = o->src_index;
	int pos = o->cache_bottom;

	while (pos < index->cache_nr) {
		struct cache_entry *ce = index->cache[pos];
		if (!(ce->ce_flags & CE_UNPACKED))
			return ce;
		pos++;
	}
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
          int _len_o0 = 1;
          struct unpack_trees_options * o = (struct unpack_trees_options *) malloc(_len_o0*sizeof(struct unpack_trees_options));
          for(int _i0 = 0; _i0 < _len_o0; _i0++) {
            o[_i0].cache_bottom = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_o__i0__src_index0 = 1;
          o[_i0].src_index = (struct index_state *) malloc(_len_o__i0__src_index0*sizeof(struct index_state));
          for(int _j0 = 0; _j0 < _len_o__i0__src_index0; _j0++) {
            o[_i0].src_index->cache_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_o__i0__src_index_cache0 = 1;
          o[_i0].src_index->cache = (struct cache_entry **) malloc(_len_o__i0__src_index_cache0*sizeof(struct cache_entry *));
          for(int _j0 = 0; _j0 < _len_o__i0__src_index_cache0; _j0++) {
            int _len_o__i0__src_index_cache1 = 1;
            o[_i0].src_index->cache[_j0] = (struct cache_entry *) malloc(_len_o__i0__src_index_cache1*sizeof(struct cache_entry));
            for(int _j1 = 0; _j1 < _len_o__i0__src_index_cache1; _j1++) {
              o[_i0].src_index->cache[_j0]->ce_flags = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct cache_entry * benchRet = next_cache_entry(o);
          printf("%d\n", (*benchRet).ce_flags);
          for(int _aux = 0; _aux < _len_o0; _aux++) {
          free(o[_aux].src_index);
          }
          free(o);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_o0 = 65025;
          struct unpack_trees_options * o = (struct unpack_trees_options *) malloc(_len_o0*sizeof(struct unpack_trees_options));
          for(int _i0 = 0; _i0 < _len_o0; _i0++) {
            o[_i0].cache_bottom = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_o__i0__src_index0 = 1;
          o[_i0].src_index = (struct index_state *) malloc(_len_o__i0__src_index0*sizeof(struct index_state));
          for(int _j0 = 0; _j0 < _len_o__i0__src_index0; _j0++) {
            o[_i0].src_index->cache_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_o__i0__src_index_cache0 = 1;
          o[_i0].src_index->cache = (struct cache_entry **) malloc(_len_o__i0__src_index_cache0*sizeof(struct cache_entry *));
          for(int _j0 = 0; _j0 < _len_o__i0__src_index_cache0; _j0++) {
            int _len_o__i0__src_index_cache1 = 1;
            o[_i0].src_index->cache[_j0] = (struct cache_entry *) malloc(_len_o__i0__src_index_cache1*sizeof(struct cache_entry));
            for(int _j1 = 0; _j1 < _len_o__i0__src_index_cache1; _j1++) {
              o[_i0].src_index->cache[_j0]->ce_flags = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct cache_entry * benchRet = next_cache_entry(o);
          printf("%d\n", (*benchRet).ce_flags);
          for(int _aux = 0; _aux < _len_o0; _aux++) {
          free(o[_aux].src_index);
          }
          free(o);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_o0 = 100;
          struct unpack_trees_options * o = (struct unpack_trees_options *) malloc(_len_o0*sizeof(struct unpack_trees_options));
          for(int _i0 = 0; _i0 < _len_o0; _i0++) {
            o[_i0].cache_bottom = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_o__i0__src_index0 = 1;
          o[_i0].src_index = (struct index_state *) malloc(_len_o__i0__src_index0*sizeof(struct index_state));
          for(int _j0 = 0; _j0 < _len_o__i0__src_index0; _j0++) {
            o[_i0].src_index->cache_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_o__i0__src_index_cache0 = 1;
          o[_i0].src_index->cache = (struct cache_entry **) malloc(_len_o__i0__src_index_cache0*sizeof(struct cache_entry *));
          for(int _j0 = 0; _j0 < _len_o__i0__src_index_cache0; _j0++) {
            int _len_o__i0__src_index_cache1 = 1;
            o[_i0].src_index->cache[_j0] = (struct cache_entry *) malloc(_len_o__i0__src_index_cache1*sizeof(struct cache_entry));
            for(int _j1 = 0; _j1 < _len_o__i0__src_index_cache1; _j1++) {
              o[_i0].src_index->cache[_j0]->ce_flags = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct cache_entry * benchRet = next_cache_entry(o);
          printf("%d\n", (*benchRet).ce_flags);
          for(int _aux = 0; _aux < _len_o0; _aux++) {
          free(o[_aux].src_index);
          }
          free(o);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
