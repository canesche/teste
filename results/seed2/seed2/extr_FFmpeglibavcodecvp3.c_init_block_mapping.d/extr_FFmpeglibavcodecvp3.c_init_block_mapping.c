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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int c_superblock_width; int y_superblock_width; int c_superblock_height; int y_superblock_height; int* fragment_width; int* fragment_height; int* superblock_fragments; int* fragment_start; } ;
typedef  TYPE_1__ Vp3DecodeContext ;

/* Variables and functions */
 int** hilbert_offset ; 

__attribute__((used)) static int init_block_mapping(Vp3DecodeContext *s)
{
    int sb_x, sb_y, plane;
    int x, y, i, j = 0;

    for (plane = 0; plane < 3; plane++) {
        int sb_width    = plane ? s->c_superblock_width
                                : s->y_superblock_width;
        int sb_height   = plane ? s->c_superblock_height
                                : s->y_superblock_height;
        int frag_width  = s->fragment_width[!!plane];
        int frag_height = s->fragment_height[!!plane];

        for (sb_y = 0; sb_y < sb_height; sb_y++)
            for (sb_x = 0; sb_x < sb_width; sb_x++)
                for (i = 0; i < 16; i++) {
                    x = 4 * sb_x + hilbert_offset[i][0];
                    y = 4 * sb_y + hilbert_offset[i][1];

                    if (x < frag_width && y < frag_height)
                        s->superblock_fragments[j++] = s->fragment_start[plane] +
                                                       y * frag_width + x;
                    else
                        s->superblock_fragments[j++] = -1;
                }
    }

    return 0;  /* successful path out */
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
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].c_superblock_width = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].y_superblock_width = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].c_superblock_height = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].y_superblock_height = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__fragment_width0 = 1;
          s[_i0].fragment_width = (int *) malloc(_len_s__i0__fragment_width0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__fragment_width0; _j0++) {
            s[_i0].fragment_width[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__fragment_height0 = 1;
          s[_i0].fragment_height = (int *) malloc(_len_s__i0__fragment_height0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__fragment_height0; _j0++) {
            s[_i0].fragment_height[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__superblock_fragments0 = 1;
          s[_i0].superblock_fragments = (int *) malloc(_len_s__i0__superblock_fragments0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__superblock_fragments0; _j0++) {
            s[_i0].superblock_fragments[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__fragment_start0 = 1;
          s[_i0].fragment_start = (int *) malloc(_len_s__i0__fragment_start0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__fragment_start0; _j0++) {
            s[_i0].fragment_start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = init_block_mapping(s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].fragment_width);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].fragment_height);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].superblock_fragments);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].fragment_start);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].c_superblock_width = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].y_superblock_width = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].c_superblock_height = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].y_superblock_height = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__fragment_width0 = 1;
          s[_i0].fragment_width = (int *) malloc(_len_s__i0__fragment_width0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__fragment_width0; _j0++) {
            s[_i0].fragment_width[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__fragment_height0 = 1;
          s[_i0].fragment_height = (int *) malloc(_len_s__i0__fragment_height0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__fragment_height0; _j0++) {
            s[_i0].fragment_height[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__superblock_fragments0 = 1;
          s[_i0].superblock_fragments = (int *) malloc(_len_s__i0__superblock_fragments0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__superblock_fragments0; _j0++) {
            s[_i0].superblock_fragments[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__fragment_start0 = 1;
          s[_i0].fragment_start = (int *) malloc(_len_s__i0__fragment_start0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__fragment_start0; _j0++) {
            s[_i0].fragment_start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = init_block_mapping(s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].fragment_width);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].fragment_height);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].superblock_fragments);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].fragment_start);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].c_superblock_width = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].y_superblock_width = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].c_superblock_height = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].y_superblock_height = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__fragment_width0 = 1;
          s[_i0].fragment_width = (int *) malloc(_len_s__i0__fragment_width0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__fragment_width0; _j0++) {
            s[_i0].fragment_width[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__fragment_height0 = 1;
          s[_i0].fragment_height = (int *) malloc(_len_s__i0__fragment_height0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__fragment_height0; _j0++) {
            s[_i0].fragment_height[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__superblock_fragments0 = 1;
          s[_i0].superblock_fragments = (int *) malloc(_len_s__i0__superblock_fragments0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__superblock_fragments0; _j0++) {
            s[_i0].superblock_fragments[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__fragment_start0 = 1;
          s[_i0].fragment_start = (int *) malloc(_len_s__i0__fragment_start0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__fragment_start0; _j0++) {
            s[_i0].fragment_start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = init_block_mapping(s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].fragment_width);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].fragment_height);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].superblock_fragments);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].fragment_start);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
