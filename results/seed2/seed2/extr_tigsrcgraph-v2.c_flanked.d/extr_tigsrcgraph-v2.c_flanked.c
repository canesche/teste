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
struct graph_row {int size; TYPE_1__* columns; } ;
struct TYPE_2__ {char const* id; } ;

/* Variables and functions */

__attribute__((used)) static bool
flanked(struct graph_row *row, int pos, int commit_pos, const char *commit_id)
{
	int i, start, end;

	if (pos < commit_pos) {
		start = 0;
		end = pos;
	} else {
		start = pos + 1;
		end = row->size;
	}

	for (i = start; i < end; i++) {
		if (row->columns[i].id == commit_id)
			return true;
	}

	return false;
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
          int pos = 100;
          int commit_pos = 100;
          int _len_row0 = 1;
          struct graph_row * row = (struct graph_row *) malloc(_len_row0*sizeof(struct graph_row));
          for(int _i0 = 0; _i0 < _len_row0; _i0++) {
            row[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_row__i0__columns0 = 1;
          row[_i0].columns = (struct TYPE_2__ *) malloc(_len_row__i0__columns0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_row__i0__columns0; _j0++) {
              int _len_row__i0__columns_id0 = 1;
          row[_i0].columns->id = (const char *) malloc(_len_row__i0__columns_id0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_row__i0__columns_id0; _j0++) {
            row[_i0].columns->id[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_commit_id0 = 1;
          const char * commit_id = (const char *) malloc(_len_commit_id0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_commit_id0; _i0++) {
            commit_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = flanked(row,pos,commit_pos,commit_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_row0; _aux++) {
          free(row[_aux].columns);
          }
          free(row);
          free(commit_id);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pos = 255;
          int commit_pos = 255;
          int _len_row0 = 65025;
          struct graph_row * row = (struct graph_row *) malloc(_len_row0*sizeof(struct graph_row));
          for(int _i0 = 0; _i0 < _len_row0; _i0++) {
            row[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_row__i0__columns0 = 1;
          row[_i0].columns = (struct TYPE_2__ *) malloc(_len_row__i0__columns0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_row__i0__columns0; _j0++) {
              int _len_row__i0__columns_id0 = 1;
          row[_i0].columns->id = (const char *) malloc(_len_row__i0__columns_id0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_row__i0__columns_id0; _j0++) {
            row[_i0].columns->id[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_commit_id0 = 65025;
          const char * commit_id = (const char *) malloc(_len_commit_id0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_commit_id0; _i0++) {
            commit_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = flanked(row,pos,commit_pos,commit_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_row0; _aux++) {
          free(row[_aux].columns);
          }
          free(row);
          free(commit_id);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pos = 10;
          int commit_pos = 10;
          int _len_row0 = 100;
          struct graph_row * row = (struct graph_row *) malloc(_len_row0*sizeof(struct graph_row));
          for(int _i0 = 0; _i0 < _len_row0; _i0++) {
            row[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_row__i0__columns0 = 1;
          row[_i0].columns = (struct TYPE_2__ *) malloc(_len_row__i0__columns0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_row__i0__columns0; _j0++) {
              int _len_row__i0__columns_id0 = 1;
          row[_i0].columns->id = (const char *) malloc(_len_row__i0__columns_id0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_row__i0__columns_id0; _j0++) {
            row[_i0].columns->id[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_commit_id0 = 100;
          const char * commit_id = (const char *) malloc(_len_commit_id0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_commit_id0; _i0++) {
            commit_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = flanked(row,pos,commit_pos,commit_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_row0; _aux++) {
          free(row[_aux].columns);
          }
          free(row);
          free(commit_id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
