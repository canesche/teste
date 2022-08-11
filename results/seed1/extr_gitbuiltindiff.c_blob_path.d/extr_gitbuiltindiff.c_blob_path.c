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
struct object_array_entry {char const* path; char const* name; } ;

/* Variables and functions */

__attribute__((used)) static const char *blob_path(struct object_array_entry *entry)
{
	return entry->path ? entry->path : entry->name;
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
          int _len_entry0 = 1;
          struct object_array_entry * entry = (struct object_array_entry *) malloc(_len_entry0*sizeof(struct object_array_entry));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
              int _len_entry__i0__path0 = 1;
          entry[_i0].path = (const char *) malloc(_len_entry__i0__path0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_entry__i0__path0; _j0++) {
            entry[_i0].path[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_entry__i0__name0 = 1;
          entry[_i0].name = (const char *) malloc(_len_entry__i0__name0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_entry__i0__name0; _j0++) {
            entry[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          const char * benchRet = blob_path(entry);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_entry0; _aux++) {
          free(entry[_aux].path);
          }
          for(int _aux = 0; _aux < _len_entry0; _aux++) {
          free(entry[_aux].name);
          }
          free(entry);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_entry0 = 65025;
          struct object_array_entry * entry = (struct object_array_entry *) malloc(_len_entry0*sizeof(struct object_array_entry));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
              int _len_entry__i0__path0 = 1;
          entry[_i0].path = (const char *) malloc(_len_entry__i0__path0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_entry__i0__path0; _j0++) {
            entry[_i0].path[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_entry__i0__name0 = 1;
          entry[_i0].name = (const char *) malloc(_len_entry__i0__name0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_entry__i0__name0; _j0++) {
            entry[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          const char * benchRet = blob_path(entry);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_entry0; _aux++) {
          free(entry[_aux].path);
          }
          for(int _aux = 0; _aux < _len_entry0; _aux++) {
          free(entry[_aux].name);
          }
          free(entry);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_entry0 = 100;
          struct object_array_entry * entry = (struct object_array_entry *) malloc(_len_entry0*sizeof(struct object_array_entry));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
              int _len_entry__i0__path0 = 1;
          entry[_i0].path = (const char *) malloc(_len_entry__i0__path0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_entry__i0__path0; _j0++) {
            entry[_i0].path[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_entry__i0__name0 = 1;
          entry[_i0].name = (const char *) malloc(_len_entry__i0__name0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_entry__i0__name0; _j0++) {
            entry[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          const char * benchRet = blob_path(entry);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_entry0; _aux++) {
          free(entry[_aux].path);
          }
          for(int _aux = 0; _aux < _len_entry0; _aux++) {
          free(entry[_aux].name);
          }
          free(entry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
