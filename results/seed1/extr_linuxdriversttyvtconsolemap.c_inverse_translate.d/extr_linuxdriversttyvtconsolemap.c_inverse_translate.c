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
struct vc_data {size_t vc_num; struct uni_pagedir** vc_uni_pagedir_loc; } ;
struct uni_pagedir {int* inverse_trans_unicode; int** inverse_translations; } ;

/* Variables and functions */
 int MAX_GLYPH ; 
 int* inv_translate ; 

u16 inverse_translate(struct vc_data *conp, int glyph, int use_unicode)
{
	struct uni_pagedir *p;
	int m;
	if (glyph < 0 || glyph >= MAX_GLYPH)
		return 0;
	else {
		p = *conp->vc_uni_pagedir_loc;
		if (!p)
			return glyph;
		else if (use_unicode) {
			if (!p->inverse_trans_unicode)
				return glyph;
			else
				return p->inverse_trans_unicode[glyph];
			} else {
			m = inv_translate[conp->vc_num];
			if (!p->inverse_translations[m])
				return glyph;
			else
				return p->inverse_translations[m][glyph];
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
          int glyph = 100;
          int use_unicode = 100;
          int _len_conp0 = 1;
          struct vc_data * conp = (struct vc_data *) malloc(_len_conp0*sizeof(struct vc_data));
          for(int _i0 = 0; _i0 < _len_conp0; _i0++) {
            conp[_i0].vc_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_conp__i0__vc_uni_pagedir_loc0 = 1;
          conp[_i0].vc_uni_pagedir_loc = (struct uni_pagedir **) malloc(_len_conp__i0__vc_uni_pagedir_loc0*sizeof(struct uni_pagedir *));
          for(int _j0 = 0; _j0 < _len_conp__i0__vc_uni_pagedir_loc0; _j0++) {
            int _len_conp__i0__vc_uni_pagedir_loc1 = 1;
            conp[_i0].vc_uni_pagedir_loc[_j0] = (struct uni_pagedir *) malloc(_len_conp__i0__vc_uni_pagedir_loc1*sizeof(struct uni_pagedir));
            for(int _j1 = 0; _j1 < _len_conp__i0__vc_uni_pagedir_loc1; _j1++) {
                int _len_conp__i0__vc_uni_pagedir_loc__j0__inverse_trans_unicode0 = 1;
          conp[_i0].vc_uni_pagedir_loc[_j0]->inverse_trans_unicode = (int *) malloc(_len_conp__i0__vc_uni_pagedir_loc__j0__inverse_trans_unicode0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_conp__i0__vc_uni_pagedir_loc__j0__inverse_trans_unicode0; _j0++) {
            conp[_i0].vc_uni_pagedir_loc[_j0]->inverse_trans_unicode[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_conp__i0__vc_uni_pagedir_loc__j0__inverse_translations0 = 1;
          conp[_i0].vc_uni_pagedir_loc[_j0]->inverse_translations = (int **) malloc(_len_conp__i0__vc_uni_pagedir_loc__j0__inverse_translations0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_conp__i0__vc_uni_pagedir_loc__j0__inverse_translations0; _j0++) {
            int _len_conp__i0__vc_uni_pagedir_loc__j0__inverse_translations1 = 1;
            conp[_i0].vc_uni_pagedir_loc[_j0]->inverse_translations[_j0] = (int *) malloc(_len_conp__i0__vc_uni_pagedir_loc__j0__inverse_translations1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_conp__i0__vc_uni_pagedir_loc__j0__inverse_translations1; _j1++) {
              conp[_i0].vc_uni_pagedir_loc[_j0]->inverse_translations[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
            }
          }
          }
          int benchRet = inverse_translate(conp,glyph,use_unicode);
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
          int glyph = 255;
          int use_unicode = 255;
          int _len_conp0 = 65025;
          struct vc_data * conp = (struct vc_data *) malloc(_len_conp0*sizeof(struct vc_data));
          for(int _i0 = 0; _i0 < _len_conp0; _i0++) {
            conp[_i0].vc_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_conp__i0__vc_uni_pagedir_loc0 = 1;
          conp[_i0].vc_uni_pagedir_loc = (struct uni_pagedir **) malloc(_len_conp__i0__vc_uni_pagedir_loc0*sizeof(struct uni_pagedir *));
          for(int _j0 = 0; _j0 < _len_conp__i0__vc_uni_pagedir_loc0; _j0++) {
            int _len_conp__i0__vc_uni_pagedir_loc1 = 1;
            conp[_i0].vc_uni_pagedir_loc[_j0] = (struct uni_pagedir *) malloc(_len_conp__i0__vc_uni_pagedir_loc1*sizeof(struct uni_pagedir));
            for(int _j1 = 0; _j1 < _len_conp__i0__vc_uni_pagedir_loc1; _j1++) {
                int _len_conp__i0__vc_uni_pagedir_loc__j0__inverse_trans_unicode0 = 1;
          conp[_i0].vc_uni_pagedir_loc[_j0]->inverse_trans_unicode = (int *) malloc(_len_conp__i0__vc_uni_pagedir_loc__j0__inverse_trans_unicode0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_conp__i0__vc_uni_pagedir_loc__j0__inverse_trans_unicode0; _j0++) {
            conp[_i0].vc_uni_pagedir_loc[_j0]->inverse_trans_unicode[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_conp__i0__vc_uni_pagedir_loc__j0__inverse_translations0 = 1;
          conp[_i0].vc_uni_pagedir_loc[_j0]->inverse_translations = (int **) malloc(_len_conp__i0__vc_uni_pagedir_loc__j0__inverse_translations0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_conp__i0__vc_uni_pagedir_loc__j0__inverse_translations0; _j0++) {
            int _len_conp__i0__vc_uni_pagedir_loc__j0__inverse_translations1 = 1;
            conp[_i0].vc_uni_pagedir_loc[_j0]->inverse_translations[_j0] = (int *) malloc(_len_conp__i0__vc_uni_pagedir_loc__j0__inverse_translations1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_conp__i0__vc_uni_pagedir_loc__j0__inverse_translations1; _j1++) {
              conp[_i0].vc_uni_pagedir_loc[_j0]->inverse_translations[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
            }
          }
          }
          int benchRet = inverse_translate(conp,glyph,use_unicode);
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
          int glyph = 10;
          int use_unicode = 10;
          int _len_conp0 = 100;
          struct vc_data * conp = (struct vc_data *) malloc(_len_conp0*sizeof(struct vc_data));
          for(int _i0 = 0; _i0 < _len_conp0; _i0++) {
            conp[_i0].vc_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_conp__i0__vc_uni_pagedir_loc0 = 1;
          conp[_i0].vc_uni_pagedir_loc = (struct uni_pagedir **) malloc(_len_conp__i0__vc_uni_pagedir_loc0*sizeof(struct uni_pagedir *));
          for(int _j0 = 0; _j0 < _len_conp__i0__vc_uni_pagedir_loc0; _j0++) {
            int _len_conp__i0__vc_uni_pagedir_loc1 = 1;
            conp[_i0].vc_uni_pagedir_loc[_j0] = (struct uni_pagedir *) malloc(_len_conp__i0__vc_uni_pagedir_loc1*sizeof(struct uni_pagedir));
            for(int _j1 = 0; _j1 < _len_conp__i0__vc_uni_pagedir_loc1; _j1++) {
                int _len_conp__i0__vc_uni_pagedir_loc__j0__inverse_trans_unicode0 = 1;
          conp[_i0].vc_uni_pagedir_loc[_j0]->inverse_trans_unicode = (int *) malloc(_len_conp__i0__vc_uni_pagedir_loc__j0__inverse_trans_unicode0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_conp__i0__vc_uni_pagedir_loc__j0__inverse_trans_unicode0; _j0++) {
            conp[_i0].vc_uni_pagedir_loc[_j0]->inverse_trans_unicode[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_conp__i0__vc_uni_pagedir_loc__j0__inverse_translations0 = 1;
          conp[_i0].vc_uni_pagedir_loc[_j0]->inverse_translations = (int **) malloc(_len_conp__i0__vc_uni_pagedir_loc__j0__inverse_translations0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_conp__i0__vc_uni_pagedir_loc__j0__inverse_translations0; _j0++) {
            int _len_conp__i0__vc_uni_pagedir_loc__j0__inverse_translations1 = 1;
            conp[_i0].vc_uni_pagedir_loc[_j0]->inverse_translations[_j0] = (int *) malloc(_len_conp__i0__vc_uni_pagedir_loc__j0__inverse_translations1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_conp__i0__vc_uni_pagedir_loc__j0__inverse_translations1; _j1++) {
              conp[_i0].vc_uni_pagedir_loc[_j0]->inverse_translations[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
            }
          }
          }
          int benchRet = inverse_translate(conp,glyph,use_unicode);
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
