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
struct cache_entry {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int cache_entry_cmp(const void *unused_cmp_data,
			   const void *entry,
			   const void *entry_or_key,
			   const void *remove)
{
	const struct cache_entry *ce1 = entry;
	const struct cache_entry *ce2 = entry_or_key;
	/*
	 * For remove_name_hash, find the exact entry (pointer equality); for
	 * index_file_exists, find all entries with matching hash code and
	 * decide whether the entry matches in same_name.
	 */
	return remove ? !(ce1 == ce2) : 0;
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
          int _len_unused_cmp_data0 = 1;
          const void * unused_cmp_data = (const void *) malloc(_len_unused_cmp_data0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_unused_cmp_data0; _i0++) {
            unused_cmp_data[_i0] = 0;
          }
          int _len_entry0 = 1;
          const void * entry = (const void *) malloc(_len_entry0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
            entry[_i0] = 0;
          }
          int _len_entry_or_key0 = 1;
          const void * entry_or_key = (const void *) malloc(_len_entry_or_key0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_entry_or_key0; _i0++) {
            entry_or_key[_i0] = 0;
          }
          int _len_remove0 = 1;
          const void * remove = (const void *) malloc(_len_remove0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_remove0; _i0++) {
            remove[_i0] = 0;
          }
          int benchRet = cache_entry_cmp(unused_cmp_data,entry,entry_or_key,remove);
          printf("%d\n", benchRet); 
          free(unused_cmp_data);
          free(entry);
          free(entry_or_key);
          free(remove);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_unused_cmp_data0 = 65025;
          const void * unused_cmp_data = (const void *) malloc(_len_unused_cmp_data0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_unused_cmp_data0; _i0++) {
            unused_cmp_data[_i0] = 0;
          }
          int _len_entry0 = 65025;
          const void * entry = (const void *) malloc(_len_entry0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
            entry[_i0] = 0;
          }
          int _len_entry_or_key0 = 65025;
          const void * entry_or_key = (const void *) malloc(_len_entry_or_key0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_entry_or_key0; _i0++) {
            entry_or_key[_i0] = 0;
          }
          int _len_remove0 = 65025;
          const void * remove = (const void *) malloc(_len_remove0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_remove0; _i0++) {
            remove[_i0] = 0;
          }
          int benchRet = cache_entry_cmp(unused_cmp_data,entry,entry_or_key,remove);
          printf("%d\n", benchRet); 
          free(unused_cmp_data);
          free(entry);
          free(entry_or_key);
          free(remove);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_unused_cmp_data0 = 100;
          const void * unused_cmp_data = (const void *) malloc(_len_unused_cmp_data0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_unused_cmp_data0; _i0++) {
            unused_cmp_data[_i0] = 0;
          }
          int _len_entry0 = 100;
          const void * entry = (const void *) malloc(_len_entry0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
            entry[_i0] = 0;
          }
          int _len_entry_or_key0 = 100;
          const void * entry_or_key = (const void *) malloc(_len_entry_or_key0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_entry_or_key0; _i0++) {
            entry_or_key[_i0] = 0;
          }
          int _len_remove0 = 100;
          const void * remove = (const void *) malloc(_len_remove0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_remove0; _i0++) {
            remove[_i0] = 0;
          }
          int benchRet = cache_entry_cmp(unused_cmp_data,entry,entry_or_key,remove);
          printf("%d\n", benchRet); 
          free(unused_cmp_data);
          free(entry);
          free(entry_or_key);
          free(remove);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
