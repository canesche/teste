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
struct encode_state {int* parent; int* rchild; int* lchild; } ;

/* Variables and functions */
 int NIL ; 

__attribute__((used)) static void delete_node(struct encode_state *sp, int p)
{
    int  q;
    
    if (sp->parent[p] == NIL)
        return;  /* not in tree */
    if (sp->rchild[p] == NIL)
        q = sp->lchild[p];
    else if (sp->lchild[p] == NIL)
        q = sp->rchild[p];
    else {
        q = sp->lchild[p];
        if (sp->rchild[q] != NIL) {
            do {
                q = sp->rchild[q];
            } while (sp->rchild[q] != NIL);
            sp->rchild[sp->parent[q]] = sp->lchild[q];
            sp->parent[sp->lchild[q]] = sp->parent[q];
            sp->lchild[q] = sp->lchild[p];
            sp->parent[sp->lchild[p]] = q;
        }
        sp->rchild[q] = sp->rchild[p];
        sp->parent[sp->rchild[p]] = q;
    }
    sp->parent[q] = sp->parent[p];
    if (sp->rchild[sp->parent[p]] == p)
        sp->rchild[sp->parent[p]] = q;
    else
        sp->lchild[sp->parent[p]] = q;
    sp->parent[p] = NIL;
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
          int p = 100;
          int _len_sp0 = 1;
          struct encode_state * sp = (struct encode_state *) malloc(_len_sp0*sizeof(struct encode_state));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
              int _len_sp__i0__parent0 = 1;
          sp[_i0].parent = (int *) malloc(_len_sp__i0__parent0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sp__i0__parent0; _j0++) {
            sp[_i0].parent[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sp__i0__rchild0 = 1;
          sp[_i0].rchild = (int *) malloc(_len_sp__i0__rchild0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sp__i0__rchild0; _j0++) {
            sp[_i0].rchild[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sp__i0__lchild0 = 1;
          sp[_i0].lchild = (int *) malloc(_len_sp__i0__lchild0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sp__i0__lchild0; _j0++) {
            sp[_i0].lchild[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          delete_node(sp,p);
          for(int _aux = 0; _aux < _len_sp0; _aux++) {
          free(sp[_aux].parent);
          }
          for(int _aux = 0; _aux < _len_sp0; _aux++) {
          free(sp[_aux].rchild);
          }
          for(int _aux = 0; _aux < _len_sp0; _aux++) {
          free(sp[_aux].lchild);
          }
          free(sp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int p = 255;
          int _len_sp0 = 65025;
          struct encode_state * sp = (struct encode_state *) malloc(_len_sp0*sizeof(struct encode_state));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
              int _len_sp__i0__parent0 = 1;
          sp[_i0].parent = (int *) malloc(_len_sp__i0__parent0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sp__i0__parent0; _j0++) {
            sp[_i0].parent[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sp__i0__rchild0 = 1;
          sp[_i0].rchild = (int *) malloc(_len_sp__i0__rchild0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sp__i0__rchild0; _j0++) {
            sp[_i0].rchild[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sp__i0__lchild0 = 1;
          sp[_i0].lchild = (int *) malloc(_len_sp__i0__lchild0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sp__i0__lchild0; _j0++) {
            sp[_i0].lchild[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          delete_node(sp,p);
          for(int _aux = 0; _aux < _len_sp0; _aux++) {
          free(sp[_aux].parent);
          }
          for(int _aux = 0; _aux < _len_sp0; _aux++) {
          free(sp[_aux].rchild);
          }
          for(int _aux = 0; _aux < _len_sp0; _aux++) {
          free(sp[_aux].lchild);
          }
          free(sp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int p = 10;
          int _len_sp0 = 100;
          struct encode_state * sp = (struct encode_state *) malloc(_len_sp0*sizeof(struct encode_state));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
              int _len_sp__i0__parent0 = 1;
          sp[_i0].parent = (int *) malloc(_len_sp__i0__parent0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sp__i0__parent0; _j0++) {
            sp[_i0].parent[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sp__i0__rchild0 = 1;
          sp[_i0].rchild = (int *) malloc(_len_sp__i0__rchild0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sp__i0__rchild0; _j0++) {
            sp[_i0].rchild[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sp__i0__lchild0 = 1;
          sp[_i0].lchild = (int *) malloc(_len_sp__i0__lchild0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sp__i0__lchild0; _j0++) {
            sp[_i0].lchild[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          delete_node(sp,p);
          for(int _aux = 0; _aux < _len_sp0; _aux++) {
          free(sp[_aux].parent);
          }
          for(int _aux = 0; _aux < _len_sp0; _aux++) {
          free(sp[_aux].rchild);
          }
          for(int _aux = 0; _aux < _len_sp0; _aux++) {
          free(sp[_aux].lchild);
          }
          free(sp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
