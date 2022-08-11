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
struct perf_mmap {int cpu; } ;
struct perf_evlist {int nr_mmaps; struct perf_mmap* mmap; } ;

/* Variables and functions */

__attribute__((used)) static struct perf_mmap *get_md(struct perf_evlist *evlist, int cpu)
{
	int i;

	for (i = 0; i < evlist->nr_mmaps; i++) {
		struct perf_mmap *md = &evlist->mmap[i];

		if (md->cpu == cpu)
			return md;
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
          int cpu = 100;
          int _len_evlist0 = 1;
          struct perf_evlist * evlist = (struct perf_evlist *) malloc(_len_evlist0*sizeof(struct perf_evlist));
          for(int _i0 = 0; _i0 < _len_evlist0; _i0++) {
            evlist[_i0].nr_mmaps = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_evlist__i0__mmap0 = 1;
          evlist[_i0].mmap = (struct perf_mmap *) malloc(_len_evlist__i0__mmap0*sizeof(struct perf_mmap));
          for(int _j0 = 0; _j0 < _len_evlist__i0__mmap0; _j0++) {
            evlist[_i0].mmap->cpu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct perf_mmap * benchRet = get_md(evlist,cpu);
          printf("%d\n", (*benchRet).cpu);
          for(int _aux = 0; _aux < _len_evlist0; _aux++) {
          free(evlist[_aux].mmap);
          }
          free(evlist);
        
        break;
    }
    // big-arr
    case 1:
    {
          int cpu = 255;
          int _len_evlist0 = 65025;
          struct perf_evlist * evlist = (struct perf_evlist *) malloc(_len_evlist0*sizeof(struct perf_evlist));
          for(int _i0 = 0; _i0 < _len_evlist0; _i0++) {
            evlist[_i0].nr_mmaps = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_evlist__i0__mmap0 = 1;
          evlist[_i0].mmap = (struct perf_mmap *) malloc(_len_evlist__i0__mmap0*sizeof(struct perf_mmap));
          for(int _j0 = 0; _j0 < _len_evlist__i0__mmap0; _j0++) {
            evlist[_i0].mmap->cpu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct perf_mmap * benchRet = get_md(evlist,cpu);
          printf("%d\n", (*benchRet).cpu);
          for(int _aux = 0; _aux < _len_evlist0; _aux++) {
          free(evlist[_aux].mmap);
          }
          free(evlist);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cpu = 10;
          int _len_evlist0 = 100;
          struct perf_evlist * evlist = (struct perf_evlist *) malloc(_len_evlist0*sizeof(struct perf_evlist));
          for(int _i0 = 0; _i0 < _len_evlist0; _i0++) {
            evlist[_i0].nr_mmaps = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_evlist__i0__mmap0 = 1;
          evlist[_i0].mmap = (struct perf_mmap *) malloc(_len_evlist__i0__mmap0*sizeof(struct perf_mmap));
          for(int _j0 = 0; _j0 < _len_evlist__i0__mmap0; _j0++) {
            evlist[_i0].mmap->cpu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct perf_mmap * benchRet = get_md(evlist,cpu);
          printf("%d\n", (*benchRet).cpu);
          for(int _aux = 0; _aux < _len_evlist0; _aux++) {
          free(evlist[_aux].mmap);
          }
          free(evlist);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
