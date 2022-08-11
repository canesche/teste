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
       3            linked\n\
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
struct unw_table_entry {int start_offset; int end_offset; } ;
struct unw_table {char const* name; unsigned long gp; unsigned long start; unsigned long end; int length; struct unw_table_entry const* array; int /*<<< orphan*/  segment_base; } ;

/* Variables and functions */

__attribute__((used)) static void
init_unwind_table (struct unw_table *table, const char *name, unsigned long segment_base,
		   unsigned long gp, const void *table_start, const void *table_end)
{
	const struct unw_table_entry *start = table_start, *end = table_end;

	table->name = name;
	table->segment_base = segment_base;
	table->gp = gp;
	table->start = segment_base + start[0].start_offset;
	table->end = segment_base + end[-1].end_offset;
	table->array = start;
	table->length = end - start;
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
          unsigned long segment_base = 100;
          unsigned long gp = 100;
          int _len_table0 = 1;
          struct unw_table * table = (struct unw_table *) malloc(_len_table0*sizeof(struct unw_table));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
              int _len_table__i0__name0 = 1;
          table[_i0].name = (const char *) malloc(_len_table__i0__name0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_table__i0__name0; _j0++) {
            table[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        table[_i0].gp = ((-2 * (next_i()%2)) + 1) * next_i();
        table[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        table[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
        table[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_table__i0__array0 = 1;
          table[_i0].array = (const struct unw_table_entry *) malloc(_len_table__i0__array0*sizeof(const struct unw_table_entry));
          for(int _j0 = 0; _j0 < _len_table__i0__array0; _j0++) {
              }
        table[_i0].segment_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 1;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_table_start0 = 1;
          const void * table_start = (const void *) malloc(_len_table_start0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_table_start0; _i0++) {
            table_start[_i0] = 0;
          }
          int _len_table_end0 = 1;
          const void * table_end = (const void *) malloc(_len_table_end0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_table_end0; _i0++) {
            table_end[_i0] = 0;
          }
          init_unwind_table(table,name,segment_base,gp,table_start,table_end);
          for(int _aux = 0; _aux < _len_table0; _aux++) {
          free(table[_aux].name);
          }
          for(int _aux = 0; _aux < _len_table0; _aux++) {
          free(table[_aux].array);
          }
          free(table);
          free(name);
          free(table_start);
          free(table_end);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long segment_base = 255;
          unsigned long gp = 255;
          int _len_table0 = 65025;
          struct unw_table * table = (struct unw_table *) malloc(_len_table0*sizeof(struct unw_table));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
              int _len_table__i0__name0 = 1;
          table[_i0].name = (const char *) malloc(_len_table__i0__name0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_table__i0__name0; _j0++) {
            table[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        table[_i0].gp = ((-2 * (next_i()%2)) + 1) * next_i();
        table[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        table[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
        table[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_table__i0__array0 = 1;
          table[_i0].array = (const struct unw_table_entry *) malloc(_len_table__i0__array0*sizeof(const struct unw_table_entry));
          for(int _j0 = 0; _j0 < _len_table__i0__array0; _j0++) {
              }
        table[_i0].segment_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 65025;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_table_start0 = 65025;
          const void * table_start = (const void *) malloc(_len_table_start0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_table_start0; _i0++) {
            table_start[_i0] = 0;
          }
          int _len_table_end0 = 65025;
          const void * table_end = (const void *) malloc(_len_table_end0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_table_end0; _i0++) {
            table_end[_i0] = 0;
          }
          init_unwind_table(table,name,segment_base,gp,table_start,table_end);
          for(int _aux = 0; _aux < _len_table0; _aux++) {
          free(table[_aux].name);
          }
          for(int _aux = 0; _aux < _len_table0; _aux++) {
          free(table[_aux].array);
          }
          free(table);
          free(name);
          free(table_start);
          free(table_end);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long segment_base = 10;
          unsigned long gp = 10;
          int _len_table0 = 100;
          struct unw_table * table = (struct unw_table *) malloc(_len_table0*sizeof(struct unw_table));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
              int _len_table__i0__name0 = 1;
          table[_i0].name = (const char *) malloc(_len_table__i0__name0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_table__i0__name0; _j0++) {
            table[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        table[_i0].gp = ((-2 * (next_i()%2)) + 1) * next_i();
        table[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        table[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
        table[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_table__i0__array0 = 1;
          table[_i0].array = (const struct unw_table_entry *) malloc(_len_table__i0__array0*sizeof(const struct unw_table_entry));
          for(int _j0 = 0; _j0 < _len_table__i0__array0; _j0++) {
              }
        table[_i0].segment_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 100;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_table_start0 = 100;
          const void * table_start = (const void *) malloc(_len_table_start0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_table_start0; _i0++) {
            table_start[_i0] = 0;
          }
          int _len_table_end0 = 100;
          const void * table_end = (const void *) malloc(_len_table_end0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_table_end0; _i0++) {
            table_end[_i0] = 0;
          }
          init_unwind_table(table,name,segment_base,gp,table_start,table_end);
          for(int _aux = 0; _aux < _len_table0; _aux++) {
          free(table[_aux].name);
          }
          for(int _aux = 0; _aux < _len_table0; _aux++) {
          free(table[_aux].array);
          }
          free(table);
          free(name);
          free(table_start);
          free(table_end);
        
        break;
    }
    // linked
    case 3:
    {
          unsigned long segment_base = ((-2 * (next_i()%2)) + 1) * next_i();
          unsigned long gp = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_table0 = 1;
          struct unw_table * table = (struct unw_table *) malloc(_len_table0*sizeof(struct unw_table));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
              int _len_table__i0__name0 = 1;
          table[_i0].name = (const char *) malloc(_len_table__i0__name0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_table__i0__name0; _j0++) {
            table[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        table[_i0].gp = ((-2 * (next_i()%2)) + 1) * next_i();
        table[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        table[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
        table[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_table__i0__array0 = 1;
          table[_i0].array = (const struct unw_table_entry *) malloc(_len_table__i0__array0*sizeof(const struct unw_table_entry));
          for(int _j0 = 0; _j0 < _len_table__i0__array0; _j0++) {
              }
        table[_i0].segment_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 1;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_table_start0 = 1;
          const void * table_start = (const void *) malloc(_len_table_start0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_table_start0; _i0++) {
            table_start[_i0] = 0;
          }
          int _len_table_end0 = 1;
          const void * table_end = (const void *) malloc(_len_table_end0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_table_end0; _i0++) {
            table_end[_i0] = 0;
          }
          init_unwind_table(table,name,segment_base,gp,table_start,table_end);
          for(int _aux = 0; _aux < _len_table0; _aux++) {
          free(table[_aux].name);
          }
          for(int _aux = 0; _aux < _len_table0; _aux++) {
          free(table[_aux].array);
          }
          free(table);
          free(name);
          free(table_start);
          free(table_end);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
