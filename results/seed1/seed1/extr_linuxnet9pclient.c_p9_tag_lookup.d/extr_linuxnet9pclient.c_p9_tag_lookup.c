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
typedef  int u16 ;
struct p9_req_t {int dummy; } ;
struct p9_client {int max_tag; struct p9_req_t** reqs; } ;

/* Variables and functions */
 int P9_ROW_MAXTAG ; 

struct p9_req_t *p9_tag_lookup(struct p9_client *c, u16 tag)
{
	int row, col;

	/* This looks up the original request by tag so we know which
	 * buffer to read the data into */
	tag++;

	if (tag >= c->max_tag)
		return NULL;

	row = tag / P9_ROW_MAXTAG;
	col = tag % P9_ROW_MAXTAG;

	return &c->reqs[row][col];
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
          int tag = 100;
          int _len_c0 = 1;
          struct p9_client * c = (struct p9_client *) malloc(_len_c0*sizeof(struct p9_client));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].max_tag = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__reqs0 = 1;
          c[_i0].reqs = (struct p9_req_t **) malloc(_len_c__i0__reqs0*sizeof(struct p9_req_t *));
          for(int _j0 = 0; _j0 < _len_c__i0__reqs0; _j0++) {
            int _len_c__i0__reqs1 = 1;
            c[_i0].reqs[_j0] = (struct p9_req_t *) malloc(_len_c__i0__reqs1*sizeof(struct p9_req_t));
            for(int _j1 = 0; _j1 < _len_c__i0__reqs1; _j1++) {
              c[_i0].reqs[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct p9_req_t * benchRet = p9_tag_lookup(c,tag);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(*(c[_aux].reqs));
        free(c[_aux].reqs);
          }
          free(c);
        
        break;
    }
    // big-arr
    case 1:
    {
          int tag = 255;
          int _len_c0 = 65025;
          struct p9_client * c = (struct p9_client *) malloc(_len_c0*sizeof(struct p9_client));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].max_tag = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__reqs0 = 1;
          c[_i0].reqs = (struct p9_req_t **) malloc(_len_c__i0__reqs0*sizeof(struct p9_req_t *));
          for(int _j0 = 0; _j0 < _len_c__i0__reqs0; _j0++) {
            int _len_c__i0__reqs1 = 1;
            c[_i0].reqs[_j0] = (struct p9_req_t *) malloc(_len_c__i0__reqs1*sizeof(struct p9_req_t));
            for(int _j1 = 0; _j1 < _len_c__i0__reqs1; _j1++) {
              c[_i0].reqs[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct p9_req_t * benchRet = p9_tag_lookup(c,tag);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(*(c[_aux].reqs));
        free(c[_aux].reqs);
          }
          free(c);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int tag = 10;
          int _len_c0 = 100;
          struct p9_client * c = (struct p9_client *) malloc(_len_c0*sizeof(struct p9_client));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].max_tag = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__reqs0 = 1;
          c[_i0].reqs = (struct p9_req_t **) malloc(_len_c__i0__reqs0*sizeof(struct p9_req_t *));
          for(int _j0 = 0; _j0 < _len_c__i0__reqs0; _j0++) {
            int _len_c__i0__reqs1 = 1;
            c[_i0].reqs[_j0] = (struct p9_req_t *) malloc(_len_c__i0__reqs1*sizeof(struct p9_req_t));
            for(int _j1 = 0; _j1 < _len_c__i0__reqs1; _j1++) {
              c[_i0].reqs[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct p9_req_t * benchRet = p9_tag_lookup(c,tag);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(*(c[_aux].reqs));
        free(c[_aux].reqs);
          }
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
