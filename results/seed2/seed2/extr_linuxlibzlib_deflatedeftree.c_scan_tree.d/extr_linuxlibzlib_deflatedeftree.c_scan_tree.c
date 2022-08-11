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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  int ush ;
struct TYPE_7__ {TYPE_1__* bl_tree; } ;
typedef  TYPE_2__ deflate_state ;
struct TYPE_8__ {int Len; } ;
typedef  TYPE_3__ ct_data ;
struct TYPE_6__ {scalar_t__ Freq; } ;

/* Variables and functions */
 size_t REPZ_11_138 ; 
 size_t REPZ_3_10 ; 
 size_t REP_3_6 ; 

__attribute__((used)) static void scan_tree(
	deflate_state *s,
	ct_data *tree,   /* the tree to be scanned */
	int max_code     /* and its largest code of non zero frequency */
)
{
    int n;                     /* iterates over all tree elements */
    int prevlen = -1;          /* last emitted length */
    int curlen;                /* length of current code */
    int nextlen = tree[0].Len; /* length of next code */
    int count = 0;             /* repeat count of the current code */
    int max_count = 7;         /* max repeat count */
    int min_count = 4;         /* min repeat count */

    if (nextlen == 0) max_count = 138, min_count = 3;
    tree[max_code+1].Len = (ush)0xffff; /* guard */

    for (n = 0; n <= max_code; n++) {
        curlen = nextlen; nextlen = tree[n+1].Len;
        if (++count < max_count && curlen == nextlen) {
            continue;
        } else if (count < min_count) {
            s->bl_tree[curlen].Freq += count;
        } else if (curlen != 0) {
            if (curlen != prevlen) s->bl_tree[curlen].Freq++;
            s->bl_tree[REP_3_6].Freq++;
        } else if (count <= 10) {
            s->bl_tree[REPZ_3_10].Freq++;
        } else {
            s->bl_tree[REPZ_11_138].Freq++;
        }
        count = 0; prevlen = curlen;
        if (nextlen == 0) {
            max_count = 138, min_count = 3;
        } else if (curlen == nextlen) {
            max_count = 6, min_count = 3;
        } else {
            max_count = 7, min_count = 4;
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
          int max_code = 100;
          int _len_s0 = 1;
          struct TYPE_7__ * s = (struct TYPE_7__ *) malloc(_len_s0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__bl_tree0 = 1;
          s[_i0].bl_tree = (struct TYPE_6__ *) malloc(_len_s__i0__bl_tree0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__bl_tree0; _j0++) {
            s[_i0].bl_tree->Freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tree0 = 1;
          struct TYPE_8__ * tree = (struct TYPE_8__ *) malloc(_len_tree0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_tree0; _i0++) {
            tree[_i0].Len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          scan_tree(s,tree,max_code);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].bl_tree);
          }
          free(s);
          free(tree);
        
        break;
    }
    // big-arr
    case 1:
    {
          int max_code = 255;
          int _len_s0 = 65025;
          struct TYPE_7__ * s = (struct TYPE_7__ *) malloc(_len_s0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__bl_tree0 = 1;
          s[_i0].bl_tree = (struct TYPE_6__ *) malloc(_len_s__i0__bl_tree0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__bl_tree0; _j0++) {
            s[_i0].bl_tree->Freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tree0 = 65025;
          struct TYPE_8__ * tree = (struct TYPE_8__ *) malloc(_len_tree0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_tree0; _i0++) {
            tree[_i0].Len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          scan_tree(s,tree,max_code);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].bl_tree);
          }
          free(s);
          free(tree);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int max_code = 10;
          int _len_s0 = 100;
          struct TYPE_7__ * s = (struct TYPE_7__ *) malloc(_len_s0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__bl_tree0 = 1;
          s[_i0].bl_tree = (struct TYPE_6__ *) malloc(_len_s__i0__bl_tree0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__bl_tree0; _j0++) {
            s[_i0].bl_tree->Freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tree0 = 100;
          struct TYPE_8__ * tree = (struct TYPE_8__ *) malloc(_len_tree0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_tree0; _i0++) {
            tree[_i0].Len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          scan_tree(s,tree,max_code);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].bl_tree);
          }
          free(s);
          free(tree);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
