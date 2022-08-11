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
struct uwb_rsv_row_info {int free_rows; int* avail; } ;
struct uwb_rsv_alloc_info {unsigned char* bm; struct uwb_rsv_row_info ri; } ;

/* Variables and functions */
 int UWB_MAS_PER_ZONE ; 
 int UWB_NUM_ZONES ; 
 unsigned char UWB_RSV_MAS_NOT_AVAIL ; 

__attribute__((used)) static void get_row_descriptors(struct uwb_rsv_alloc_info *ai)
{
	unsigned char *bm = ai->bm;
	struct uwb_rsv_row_info *ri = &ai->ri;
	int col, mas;
  
	ri->free_rows = 16;
	for (mas = 0; mas < UWB_MAS_PER_ZONE; mas ++) {
		ri->avail[mas] = 1;
		for (col = 1; col < UWB_NUM_ZONES; col++) {
			if (bm[col * UWB_NUM_ZONES + mas] == UWB_RSV_MAS_NOT_AVAIL) {
				ri->free_rows--;
				ri->avail[mas]=0;
				break;
			}
		}
	}
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
        ai[_i0].ri.free_rows = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ai__i0__ri_avail0 = 1;
          ai[_i0].ri.avail = (int *) malloc(_len_ai__i0__ri_avail0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ai__i0__ri_avail0; _j0++) {
            ai[_i0].ri.avail[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          get_row_descriptors(ai);
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
        ai[_i0].ri.free_rows = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ai__i0__ri_avail0 = 1;
          ai[_i0].ri.avail = (int *) malloc(_len_ai__i0__ri_avail0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ai__i0__ri_avail0; _j0++) {
            ai[_i0].ri.avail[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          get_row_descriptors(ai);
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
        ai[_i0].ri.free_rows = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ai__i0__ri_avail0 = 1;
          ai[_i0].ri.avail = (int *) malloc(_len_ai__i0__ri_avail0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ai__i0__ri_avail0; _j0++) {
            ai[_i0].ri.avail[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          get_row_descriptors(ai);
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
