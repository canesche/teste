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
struct uwb_rsv_row_info {int* avail; int used_rows; } ;
struct uwb_rsv_alloc_info {unsigned char* bm; scalar_t__ unsafe_allocated_mases; scalar_t__ safe_allocated_mases; scalar_t__ total_allocated_mases; struct uwb_rsv_row_info ri; } ;

/* Variables and functions */
 int UWB_MAS_PER_ZONE ; 
 int UWB_NUM_ZONES ; 
 unsigned char UWB_RSV_MAS_NOT_AVAIL ; 
 unsigned char UWB_RSV_MAS_SAFE ; 
 unsigned char UWB_RSV_MAS_UNSAFE ; 

__attribute__((used)) static void uwb_rsv_fill_row_alloc(struct uwb_rsv_alloc_info *ai)
{
	int mas, col, rows;
	unsigned char *bm = ai->bm;
	struct uwb_rsv_row_info *ri = &ai->ri;
	unsigned char c;

	rows = 1;
	c = UWB_RSV_MAS_SAFE;
	for (mas = UWB_MAS_PER_ZONE - 1; mas >= 0; mas--) {
		if (ri->avail[mas] == 1) {
      
			if (rows > ri->used_rows) {
				break;
			} else if (rows > 7) {
				c = UWB_RSV_MAS_UNSAFE;
			}

			for (col = 0; col < UWB_NUM_ZONES; col++) {
				if (bm[col * UWB_NUM_ZONES + mas] != UWB_RSV_MAS_NOT_AVAIL) {
					bm[col * UWB_NUM_ZONES + mas] = c;
					if(c == UWB_RSV_MAS_SAFE)
						ai->safe_allocated_mases++;
					else
						ai->unsafe_allocated_mases++;
				}
			}
			rows++;
		}
	}
	ai->total_allocated_mases = ai->safe_allocated_mases + ai->unsafe_allocated_mases;
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
          int _len_ai0 = 1;
          struct uwb_rsv_alloc_info * ai = (struct uwb_rsv_alloc_info *) malloc(_len_ai0*sizeof(struct uwb_rsv_alloc_info));
          for(int _i0 = 0; _i0 < _len_ai0; _i0++) {
              int _len_ai__i0__bm0 = 1;
          ai[_i0].bm = (unsigned char *) malloc(_len_ai__i0__bm0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_ai__i0__bm0; _j0++) {
            ai[_i0].bm[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ai[_i0].unsafe_allocated_mases = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].safe_allocated_mases = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].total_allocated_mases = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ai__i0__ri_avail0 = 1;
          ai[_i0].ri.avail = (int *) malloc(_len_ai__i0__ri_avail0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ai__i0__ri_avail0; _j0++) {
            ai[_i0].ri.avail[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ai[_i0].ri.used_rows = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          uwb_rsv_fill_row_alloc(ai);
          for(int _aux = 0; _aux < _len_ai0; _aux++) {
          free(ai[_aux].bm);
          }
          free(ai);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ai0 = 65025;
          struct uwb_rsv_alloc_info * ai = (struct uwb_rsv_alloc_info *) malloc(_len_ai0*sizeof(struct uwb_rsv_alloc_info));
          for(int _i0 = 0; _i0 < _len_ai0; _i0++) {
              int _len_ai__i0__bm0 = 1;
          ai[_i0].bm = (unsigned char *) malloc(_len_ai__i0__bm0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_ai__i0__bm0; _j0++) {
            ai[_i0].bm[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ai[_i0].unsafe_allocated_mases = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].safe_allocated_mases = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].total_allocated_mases = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ai__i0__ri_avail0 = 1;
          ai[_i0].ri.avail = (int *) malloc(_len_ai__i0__ri_avail0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ai__i0__ri_avail0; _j0++) {
            ai[_i0].ri.avail[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ai[_i0].ri.used_rows = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          uwb_rsv_fill_row_alloc(ai);
          for(int _aux = 0; _aux < _len_ai0; _aux++) {
          free(ai[_aux].bm);
          }
          free(ai);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ai0 = 100;
          struct uwb_rsv_alloc_info * ai = (struct uwb_rsv_alloc_info *) malloc(_len_ai0*sizeof(struct uwb_rsv_alloc_info));
          for(int _i0 = 0; _i0 < _len_ai0; _i0++) {
              int _len_ai__i0__bm0 = 1;
          ai[_i0].bm = (unsigned char *) malloc(_len_ai__i0__bm0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_ai__i0__bm0; _j0++) {
            ai[_i0].bm[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ai[_i0].unsafe_allocated_mases = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].safe_allocated_mases = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].total_allocated_mases = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ai__i0__ri_avail0 = 1;
          ai[_i0].ri.avail = (int *) malloc(_len_ai__i0__ri_avail0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ai__i0__ri_avail0; _j0++) {
            ai[_i0].ri.avail[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ai[_i0].ri.used_rows = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          uwb_rsv_fill_row_alloc(ai);
          for(int _aux = 0; _aux < _len_ai0; _aux++) {
          free(ai[_aux].bm);
          }
          free(ai);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
