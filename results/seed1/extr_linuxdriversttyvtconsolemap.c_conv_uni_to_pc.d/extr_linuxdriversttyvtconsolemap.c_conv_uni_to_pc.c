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
struct vc_data {struct uni_pagedir** vc_uni_pagedir_loc; } ;
struct uni_pagedir {int*** uni_pgdir; } ;

/* Variables and functions */
 int MAX_GLYPH ; 
 long UNI_DIRECT_BASE ; 
 long UNI_DIRECT_MASK ; 

int
conv_uni_to_pc(struct vc_data *conp, long ucs) 
{
	int h;
	u16 **p1, *p2;
	struct uni_pagedir *p;
  
	/* Only 16-bit codes supported at this time */
	if (ucs > 0xffff)
		return -4;		/* Not found */
	else if (ucs < 0x20)
		return -1;		/* Not a printable character */
	else if (ucs == 0xfeff || (ucs >= 0x200b && ucs <= 0x200f))
		return -2;			/* Zero-width space */
	/*
	 * UNI_DIRECT_BASE indicates the start of the region in the User Zone
	 * which always has a 1:1 mapping to the currently loaded font.  The
	 * UNI_DIRECT_MASK indicates the bit span of the region.
	 */
	else if ((ucs & ~UNI_DIRECT_MASK) == UNI_DIRECT_BASE)
		return ucs & UNI_DIRECT_MASK;
  
	if (!*conp->vc_uni_pagedir_loc)
		return -3;

	p = *conp->vc_uni_pagedir_loc;
	if ((p1 = p->uni_pgdir[ucs >> 11]) &&
	    (p2 = p1[(ucs >> 6) & 0x1f]) &&
	    (h = p2[ucs & 0x3f]) < MAX_GLYPH)
		return h;

	return -4;		/* not found */
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
          long ucs = 100;
          int _len_conp0 = 1;
          struct vc_data * conp = (struct vc_data *) malloc(_len_conp0*sizeof(struct vc_data));
          for(int _i0 = 0; _i0 < _len_conp0; _i0++) {
              int _len_conp__i0__vc_uni_pagedir_loc0 = 1;
          conp[_i0].vc_uni_pagedir_loc = (struct uni_pagedir **) malloc(_len_conp__i0__vc_uni_pagedir_loc0*sizeof(struct uni_pagedir *));
          for(int _j0 = 0; _j0 < _len_conp__i0__vc_uni_pagedir_loc0; _j0++) {
            int _len_conp__i0__vc_uni_pagedir_loc1 = 1;
            conp[_i0].vc_uni_pagedir_loc[_j0] = (struct uni_pagedir *) malloc(_len_conp__i0__vc_uni_pagedir_loc1*sizeof(struct uni_pagedir));
            for(int _j1 = 0; _j1 < _len_conp__i0__vc_uni_pagedir_loc1; _j1++) {
                int _len_conp__i0__vc_uni_pagedir_loc__j0__uni_pgdir0 = 1;
          conp[_i0].vc_uni_pagedir_loc[_j0]->uni_pgdir = (int ***) malloc(_len_conp__i0__vc_uni_pagedir_loc__j0__uni_pgdir0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_conp__i0__vc_uni_pagedir_loc__j0__uni_pgdir0; _j0++) {
            int _len_conp__i0__vc_uni_pagedir_loc__j0__uni_pgdir1 = 1;
            conp[_i0].vc_uni_pagedir_loc[_j0]->uni_pgdir[_j0] = (int **) malloc(_len_conp__i0__vc_uni_pagedir_loc__j0__uni_pgdir1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_conp__i0__vc_uni_pagedir_loc__j0__uni_pgdir1; _j1++) {
              int _len_conp__i0__vc_uni_pagedir_loc__j0__uni_pgdir2 = 1;
              conp[_i0].vc_uni_pagedir_loc[_j0]->uni_pgdir[_j0][_j1] = (int *) malloc(_len_conp__i0__vc_uni_pagedir_loc__j0__uni_pgdir2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_conp__i0__vc_uni_pagedir_loc__j0__uni_pgdir2; _j2++) {
                conp[_i0].vc_uni_pagedir_loc[_j0]->uni_pgdir[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
            }
          }
          }
          int benchRet = conv_uni_to_pc(conp,ucs);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_conp0; _aux++) {
          free(*(conp[_aux].vc_uni_pagedir_loc));
        free(conp[_aux].vc_uni_pagedir_loc);
          }
          free(conp);
        
        break;
    }
    // big-arr
    case 1:
    {
          long ucs = 255;
          int _len_conp0 = 65025;
          struct vc_data * conp = (struct vc_data *) malloc(_len_conp0*sizeof(struct vc_data));
          for(int _i0 = 0; _i0 < _len_conp0; _i0++) {
              int _len_conp__i0__vc_uni_pagedir_loc0 = 1;
          conp[_i0].vc_uni_pagedir_loc = (struct uni_pagedir **) malloc(_len_conp__i0__vc_uni_pagedir_loc0*sizeof(struct uni_pagedir *));
          for(int _j0 = 0; _j0 < _len_conp__i0__vc_uni_pagedir_loc0; _j0++) {
            int _len_conp__i0__vc_uni_pagedir_loc1 = 1;
            conp[_i0].vc_uni_pagedir_loc[_j0] = (struct uni_pagedir *) malloc(_len_conp__i0__vc_uni_pagedir_loc1*sizeof(struct uni_pagedir));
            for(int _j1 = 0; _j1 < _len_conp__i0__vc_uni_pagedir_loc1; _j1++) {
                int _len_conp__i0__vc_uni_pagedir_loc__j0__uni_pgdir0 = 1;
          conp[_i0].vc_uni_pagedir_loc[_j0]->uni_pgdir = (int ***) malloc(_len_conp__i0__vc_uni_pagedir_loc__j0__uni_pgdir0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_conp__i0__vc_uni_pagedir_loc__j0__uni_pgdir0; _j0++) {
            int _len_conp__i0__vc_uni_pagedir_loc__j0__uni_pgdir1 = 1;
            conp[_i0].vc_uni_pagedir_loc[_j0]->uni_pgdir[_j0] = (int **) malloc(_len_conp__i0__vc_uni_pagedir_loc__j0__uni_pgdir1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_conp__i0__vc_uni_pagedir_loc__j0__uni_pgdir1; _j1++) {
              int _len_conp__i0__vc_uni_pagedir_loc__j0__uni_pgdir2 = 1;
              conp[_i0].vc_uni_pagedir_loc[_j0]->uni_pgdir[_j0][_j1] = (int *) malloc(_len_conp__i0__vc_uni_pagedir_loc__j0__uni_pgdir2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_conp__i0__vc_uni_pagedir_loc__j0__uni_pgdir2; _j2++) {
                conp[_i0].vc_uni_pagedir_loc[_j0]->uni_pgdir[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
            }
          }
          }
          int benchRet = conv_uni_to_pc(conp,ucs);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_conp0; _aux++) {
          free(*(conp[_aux].vc_uni_pagedir_loc));
        free(conp[_aux].vc_uni_pagedir_loc);
          }
          free(conp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long ucs = 10;
          int _len_conp0 = 100;
          struct vc_data * conp = (struct vc_data *) malloc(_len_conp0*sizeof(struct vc_data));
          for(int _i0 = 0; _i0 < _len_conp0; _i0++) {
              int _len_conp__i0__vc_uni_pagedir_loc0 = 1;
          conp[_i0].vc_uni_pagedir_loc = (struct uni_pagedir **) malloc(_len_conp__i0__vc_uni_pagedir_loc0*sizeof(struct uni_pagedir *));
          for(int _j0 = 0; _j0 < _len_conp__i0__vc_uni_pagedir_loc0; _j0++) {
            int _len_conp__i0__vc_uni_pagedir_loc1 = 1;
            conp[_i0].vc_uni_pagedir_loc[_j0] = (struct uni_pagedir *) malloc(_len_conp__i0__vc_uni_pagedir_loc1*sizeof(struct uni_pagedir));
            for(int _j1 = 0; _j1 < _len_conp__i0__vc_uni_pagedir_loc1; _j1++) {
                int _len_conp__i0__vc_uni_pagedir_loc__j0__uni_pgdir0 = 1;
          conp[_i0].vc_uni_pagedir_loc[_j0]->uni_pgdir = (int ***) malloc(_len_conp__i0__vc_uni_pagedir_loc__j0__uni_pgdir0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_conp__i0__vc_uni_pagedir_loc__j0__uni_pgdir0; _j0++) {
            int _len_conp__i0__vc_uni_pagedir_loc__j0__uni_pgdir1 = 1;
            conp[_i0].vc_uni_pagedir_loc[_j0]->uni_pgdir[_j0] = (int **) malloc(_len_conp__i0__vc_uni_pagedir_loc__j0__uni_pgdir1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_conp__i0__vc_uni_pagedir_loc__j0__uni_pgdir1; _j1++) {
              int _len_conp__i0__vc_uni_pagedir_loc__j0__uni_pgdir2 = 1;
              conp[_i0].vc_uni_pagedir_loc[_j0]->uni_pgdir[_j0][_j1] = (int *) malloc(_len_conp__i0__vc_uni_pagedir_loc__j0__uni_pgdir2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_conp__i0__vc_uni_pagedir_loc__j0__uni_pgdir2; _j2++) {
                conp[_i0].vc_uni_pagedir_loc[_j0]->uni_pgdir[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
            }
          }
          }
          int benchRet = conv_uni_to_pc(conp,ucs);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_conp0; _aux++) {
          free(*(conp[_aux].vc_uni_pagedir_loc));
        free(conp[_aux].vc_uni_pagedir_loc);
          }
          free(conp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
