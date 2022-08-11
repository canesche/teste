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
struct pfr_table {char* pfrt_anchor; char* pfrt_name; } ;

/* Variables and functions */

void
pfr_table_copyin_cleanup(struct pfr_table *tbl)
{
	tbl->pfrt_anchor[sizeof (tbl->pfrt_anchor) - 1] = '\0';
	tbl->pfrt_name[sizeof (tbl->pfrt_name) - 1] = '\0';
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
          int _len_tbl0 = 1;
          struct pfr_table * tbl = (struct pfr_table *) malloc(_len_tbl0*sizeof(struct pfr_table));
          for(int _i0 = 0; _i0 < _len_tbl0; _i0++) {
              int _len_tbl__i0__pfrt_anchor0 = 1;
          tbl[_i0].pfrt_anchor = (char *) malloc(_len_tbl__i0__pfrt_anchor0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_tbl__i0__pfrt_anchor0; _j0++) {
            tbl[_i0].pfrt_anchor[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tbl__i0__pfrt_name0 = 1;
          tbl[_i0].pfrt_name = (char *) malloc(_len_tbl__i0__pfrt_name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_tbl__i0__pfrt_name0; _j0++) {
            tbl[_i0].pfrt_name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          pfr_table_copyin_cleanup(tbl);
          for(int _aux = 0; _aux < _len_tbl0; _aux++) {
          free(tbl[_aux].pfrt_anchor);
          }
          for(int _aux = 0; _aux < _len_tbl0; _aux++) {
          free(tbl[_aux].pfrt_name);
          }
          free(tbl);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tbl0 = 65025;
          struct pfr_table * tbl = (struct pfr_table *) malloc(_len_tbl0*sizeof(struct pfr_table));
          for(int _i0 = 0; _i0 < _len_tbl0; _i0++) {
              int _len_tbl__i0__pfrt_anchor0 = 1;
          tbl[_i0].pfrt_anchor = (char *) malloc(_len_tbl__i0__pfrt_anchor0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_tbl__i0__pfrt_anchor0; _j0++) {
            tbl[_i0].pfrt_anchor[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tbl__i0__pfrt_name0 = 1;
          tbl[_i0].pfrt_name = (char *) malloc(_len_tbl__i0__pfrt_name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_tbl__i0__pfrt_name0; _j0++) {
            tbl[_i0].pfrt_name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          pfr_table_copyin_cleanup(tbl);
          for(int _aux = 0; _aux < _len_tbl0; _aux++) {
          free(tbl[_aux].pfrt_anchor);
          }
          for(int _aux = 0; _aux < _len_tbl0; _aux++) {
          free(tbl[_aux].pfrt_name);
          }
          free(tbl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tbl0 = 100;
          struct pfr_table * tbl = (struct pfr_table *) malloc(_len_tbl0*sizeof(struct pfr_table));
          for(int _i0 = 0; _i0 < _len_tbl0; _i0++) {
              int _len_tbl__i0__pfrt_anchor0 = 1;
          tbl[_i0].pfrt_anchor = (char *) malloc(_len_tbl__i0__pfrt_anchor0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_tbl__i0__pfrt_anchor0; _j0++) {
            tbl[_i0].pfrt_anchor[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tbl__i0__pfrt_name0 = 1;
          tbl[_i0].pfrt_name = (char *) malloc(_len_tbl__i0__pfrt_name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_tbl__i0__pfrt_name0; _j0++) {
            tbl[_i0].pfrt_name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          pfr_table_copyin_cleanup(tbl);
          for(int _aux = 0; _aux < _len_tbl0; _aux++) {
          free(tbl[_aux].pfrt_anchor);
          }
          for(int _aux = 0; _aux < _len_tbl0; _aux++) {
          free(tbl[_aux].pfrt_name);
          }
          free(tbl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
