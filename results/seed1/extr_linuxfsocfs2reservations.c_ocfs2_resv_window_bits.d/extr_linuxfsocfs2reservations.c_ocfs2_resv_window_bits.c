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
struct ocfs2_super {int osb_resv_level; int osb_dir_resv_level; } ;
struct ocfs2_reservation_map {struct ocfs2_super* m_osb; } ;
struct ocfs2_alloc_reservation {int r_flags; } ;

/* Variables and functions */
 int OCFS2_RESV_FLAG_DIR ; 

__attribute__((used)) static unsigned int ocfs2_resv_window_bits(struct ocfs2_reservation_map *resmap,
					   struct ocfs2_alloc_reservation *resv)
{
	struct ocfs2_super *osb = resmap->m_osb;
	unsigned int bits;

	if (!(resv->r_flags & OCFS2_RESV_FLAG_DIR)) {
		/* 8, 16, 32, 64, 128, 256, 512, 1024 */
		bits = 4 << osb->osb_resv_level;
	} else {
		bits = 4 << osb->osb_dir_resv_level;
	}
	return bits;
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
          int _len_resmap0 = 1;
          struct ocfs2_reservation_map * resmap = (struct ocfs2_reservation_map *) malloc(_len_resmap0*sizeof(struct ocfs2_reservation_map));
          for(int _i0 = 0; _i0 < _len_resmap0; _i0++) {
              int _len_resmap__i0__m_osb0 = 1;
          resmap[_i0].m_osb = (struct ocfs2_super *) malloc(_len_resmap__i0__m_osb0*sizeof(struct ocfs2_super));
          for(int _j0 = 0; _j0 < _len_resmap__i0__m_osb0; _j0++) {
            resmap[_i0].m_osb->osb_resv_level = ((-2 * (next_i()%2)) + 1) * next_i();
        resmap[_i0].m_osb->osb_dir_resv_level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_resv0 = 1;
          struct ocfs2_alloc_reservation * resv = (struct ocfs2_alloc_reservation *) malloc(_len_resv0*sizeof(struct ocfs2_alloc_reservation));
          for(int _i0 = 0; _i0 < _len_resv0; _i0++) {
            resv[_i0].r_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = ocfs2_resv_window_bits(resmap,resv);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_resmap0; _aux++) {
          free(resmap[_aux].m_osb);
          }
          free(resmap);
          free(resv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_resmap0 = 65025;
          struct ocfs2_reservation_map * resmap = (struct ocfs2_reservation_map *) malloc(_len_resmap0*sizeof(struct ocfs2_reservation_map));
          for(int _i0 = 0; _i0 < _len_resmap0; _i0++) {
              int _len_resmap__i0__m_osb0 = 1;
          resmap[_i0].m_osb = (struct ocfs2_super *) malloc(_len_resmap__i0__m_osb0*sizeof(struct ocfs2_super));
          for(int _j0 = 0; _j0 < _len_resmap__i0__m_osb0; _j0++) {
            resmap[_i0].m_osb->osb_resv_level = ((-2 * (next_i()%2)) + 1) * next_i();
        resmap[_i0].m_osb->osb_dir_resv_level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_resv0 = 65025;
          struct ocfs2_alloc_reservation * resv = (struct ocfs2_alloc_reservation *) malloc(_len_resv0*sizeof(struct ocfs2_alloc_reservation));
          for(int _i0 = 0; _i0 < _len_resv0; _i0++) {
            resv[_i0].r_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = ocfs2_resv_window_bits(resmap,resv);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_resmap0; _aux++) {
          free(resmap[_aux].m_osb);
          }
          free(resmap);
          free(resv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_resmap0 = 100;
          struct ocfs2_reservation_map * resmap = (struct ocfs2_reservation_map *) malloc(_len_resmap0*sizeof(struct ocfs2_reservation_map));
          for(int _i0 = 0; _i0 < _len_resmap0; _i0++) {
              int _len_resmap__i0__m_osb0 = 1;
          resmap[_i0].m_osb = (struct ocfs2_super *) malloc(_len_resmap__i0__m_osb0*sizeof(struct ocfs2_super));
          for(int _j0 = 0; _j0 < _len_resmap__i0__m_osb0; _j0++) {
            resmap[_i0].m_osb->osb_resv_level = ((-2 * (next_i()%2)) + 1) * next_i();
        resmap[_i0].m_osb->osb_dir_resv_level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_resv0 = 100;
          struct ocfs2_alloc_reservation * resv = (struct ocfs2_alloc_reservation *) malloc(_len_resv0*sizeof(struct ocfs2_alloc_reservation));
          for(int _i0 = 0; _i0 < _len_resv0; _i0++) {
            resv[_i0].r_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = ocfs2_resv_window_bits(resmap,resv);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_resmap0; _aux++) {
          free(resmap[_aux].m_osb);
          }
          free(resmap);
          free(resv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
