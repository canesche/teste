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
struct TYPE_6__ {scalar_t__ boffs; scalar_t__ eoffs; scalar_t__ len; int /*<<< orphan*/ * pos; } ;
typedef  TYPE_1__ qr_finder_line ;
struct TYPE_7__ {int /*<<< orphan*/ * pos; } ;
typedef  TYPE_2__ qr_finder_edge_pt ;
struct TYPE_8__ {int nlines; TYPE_1__** lines; } ;
typedef  TYPE_3__ qr_finder_cluster ;

/* Variables and functions */

__attribute__((used)) static int qr_finder_edge_pts_fill(qr_finder_edge_pt *_edge_pts,int _nedge_pts,
 qr_finder_cluster **_neighbors,int _nneighbors,int _v){
  int i;
  for(i=0;i<_nneighbors;i++){
    qr_finder_cluster *c;
    int                j;
    c=_neighbors[i];
    for(j=0;j<c->nlines;j++){
      qr_finder_line *l;
      l=c->lines[j];
      if(l->boffs>0){
        _edge_pts[_nedge_pts].pos[0]=l->pos[0];
        _edge_pts[_nedge_pts].pos[1]=l->pos[1];
        _edge_pts[_nedge_pts].pos[_v]-=l->boffs;
        _nedge_pts++;
      }
      if(l->eoffs>0){
        _edge_pts[_nedge_pts].pos[0]=l->pos[0];
        _edge_pts[_nedge_pts].pos[1]=l->pos[1];
        _edge_pts[_nedge_pts].pos[_v]+=l->len+l->eoffs;
        _nedge_pts++;
      }
    }
  }
  return _nedge_pts;
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
          int _nedge_pts = 100;
          int _nneighbors = 100;
          int _v = 100;
          int _len__edge_pts0 = 1;
          struct TYPE_7__ * _edge_pts = (struct TYPE_7__ *) malloc(_len__edge_pts0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len__edge_pts0; _i0++) {
              int _len__edge_pts__i0__pos0 = 1;
          _edge_pts[_i0].pos = (int *) malloc(_len__edge_pts__i0__pos0*sizeof(int));
          for(int _j0 = 0; _j0 < _len__edge_pts__i0__pos0; _j0++) {
            _edge_pts[_i0].pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len__neighbors0 = 1;
          struct TYPE_8__ ** _neighbors = (struct TYPE_8__ **) malloc(_len__neighbors0*sizeof(struct TYPE_8__ *));
          for(int _i0 = 0; _i0 < _len__neighbors0; _i0++) {
            int _len__neighbors1 = 1;
            _neighbors[_i0] = (struct TYPE_8__ *) malloc(_len__neighbors1*sizeof(struct TYPE_8__));
            for(int _i1 = 0; _i1 < _len__neighbors1; _i1++) {
              _neighbors[_i0][_i1].nlines = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len__neighbors__i0___i1__lines0 = 1;
          _neighbors[_i0][_i1].lines = (struct TYPE_6__ **) malloc(_len__neighbors__i0___i1__lines0*sizeof(struct TYPE_6__ *));
          for(int _j0 = 0; _j0 < _len__neighbors__i0___i1__lines0; _j0++) {
            int _len__neighbors__i0___i1__lines1 = 1;
            _neighbors[_i0][_i1].lines[_j0] = (struct TYPE_6__ *) malloc(_len__neighbors__i0___i1__lines1*sizeof(struct TYPE_6__));
            for(int _j1 = 0; _j1 < _len__neighbors__i0___i1__lines1; _j1++) {
              _neighbors[_i0][_i1].lines[_j0]->boffs = ((-2 * (next_i()%2)) + 1) * next_i();
        _neighbors[_i0][_i1].lines[_j0]->eoffs = ((-2 * (next_i()%2)) + 1) * next_i();
        _neighbors[_i0][_i1].lines[_j0]->len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len__neighbors__i0___i1__lines__j0__pos0 = 1;
          _neighbors[_i0][_i1].lines[_j0]->pos = (int *) malloc(_len__neighbors__i0___i1__lines__j0__pos0*sizeof(int));
          for(int _j0 = 0; _j0 < _len__neighbors__i0___i1__lines__j0__pos0; _j0++) {
            _neighbors[_i0][_i1].lines[_j0]->pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
            }
          }
          int benchRet = qr_finder_edge_pts_fill(_edge_pts,_nedge_pts,_neighbors,_nneighbors,_v);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len__edge_pts0; _aux++) {
          free(_edge_pts[_aux].pos);
          }
          free(_edge_pts);
          for(int i1 = 0; i1 < _len__neighbors0; i1++) {
            int _len__neighbors1 = 1;
              for(int _aux = 0; _aux < _len__neighbors1; _aux++) {
          free(*(_neighbors[_aux].lines));
        free(_neighbors[_aux].lines);
          }
          free(_neighbors[i1]);
          }
          free(_neighbors);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _nedge_pts = 255;
          int _nneighbors = 255;
          int _v = 255;
          int _len__edge_pts0 = 65025;
          struct TYPE_7__ * _edge_pts = (struct TYPE_7__ *) malloc(_len__edge_pts0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len__edge_pts0; _i0++) {
              int _len__edge_pts__i0__pos0 = 1;
          _edge_pts[_i0].pos = (int *) malloc(_len__edge_pts__i0__pos0*sizeof(int));
          for(int _j0 = 0; _j0 < _len__edge_pts__i0__pos0; _j0++) {
            _edge_pts[_i0].pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len__neighbors0 = 65025;
          struct TYPE_8__ ** _neighbors = (struct TYPE_8__ **) malloc(_len__neighbors0*sizeof(struct TYPE_8__ *));
          for(int _i0 = 0; _i0 < _len__neighbors0; _i0++) {
            int _len__neighbors1 = 1;
            _neighbors[_i0] = (struct TYPE_8__ *) malloc(_len__neighbors1*sizeof(struct TYPE_8__));
            for(int _i1 = 0; _i1 < _len__neighbors1; _i1++) {
              _neighbors[_i0][_i1].nlines = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len__neighbors__i0___i1__lines0 = 1;
          _neighbors[_i0][_i1].lines = (struct TYPE_6__ **) malloc(_len__neighbors__i0___i1__lines0*sizeof(struct TYPE_6__ *));
          for(int _j0 = 0; _j0 < _len__neighbors__i0___i1__lines0; _j0++) {
            int _len__neighbors__i0___i1__lines1 = 1;
            _neighbors[_i0][_i1].lines[_j0] = (struct TYPE_6__ *) malloc(_len__neighbors__i0___i1__lines1*sizeof(struct TYPE_6__));
            for(int _j1 = 0; _j1 < _len__neighbors__i0___i1__lines1; _j1++) {
              _neighbors[_i0][_i1].lines[_j0]->boffs = ((-2 * (next_i()%2)) + 1) * next_i();
        _neighbors[_i0][_i1].lines[_j0]->eoffs = ((-2 * (next_i()%2)) + 1) * next_i();
        _neighbors[_i0][_i1].lines[_j0]->len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len__neighbors__i0___i1__lines__j0__pos0 = 1;
          _neighbors[_i0][_i1].lines[_j0]->pos = (int *) malloc(_len__neighbors__i0___i1__lines__j0__pos0*sizeof(int));
          for(int _j0 = 0; _j0 < _len__neighbors__i0___i1__lines__j0__pos0; _j0++) {
            _neighbors[_i0][_i1].lines[_j0]->pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
            }
          }
          int benchRet = qr_finder_edge_pts_fill(_edge_pts,_nedge_pts,_neighbors,_nneighbors,_v);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len__edge_pts0; _aux++) {
          free(_edge_pts[_aux].pos);
          }
          free(_edge_pts);
          for(int i1 = 0; i1 < _len__neighbors0; i1++) {
            int _len__neighbors1 = 1;
              for(int _aux = 0; _aux < _len__neighbors1; _aux++) {
          free(*(_neighbors[_aux].lines));
        free(_neighbors[_aux].lines);
          }
          free(_neighbors[i1]);
          }
          free(_neighbors);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _nedge_pts = 10;
          int _nneighbors = 10;
          int _v = 10;
          int _len__edge_pts0 = 100;
          struct TYPE_7__ * _edge_pts = (struct TYPE_7__ *) malloc(_len__edge_pts0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len__edge_pts0; _i0++) {
              int _len__edge_pts__i0__pos0 = 1;
          _edge_pts[_i0].pos = (int *) malloc(_len__edge_pts__i0__pos0*sizeof(int));
          for(int _j0 = 0; _j0 < _len__edge_pts__i0__pos0; _j0++) {
            _edge_pts[_i0].pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len__neighbors0 = 100;
          struct TYPE_8__ ** _neighbors = (struct TYPE_8__ **) malloc(_len__neighbors0*sizeof(struct TYPE_8__ *));
          for(int _i0 = 0; _i0 < _len__neighbors0; _i0++) {
            int _len__neighbors1 = 1;
            _neighbors[_i0] = (struct TYPE_8__ *) malloc(_len__neighbors1*sizeof(struct TYPE_8__));
            for(int _i1 = 0; _i1 < _len__neighbors1; _i1++) {
              _neighbors[_i0][_i1].nlines = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len__neighbors__i0___i1__lines0 = 1;
          _neighbors[_i0][_i1].lines = (struct TYPE_6__ **) malloc(_len__neighbors__i0___i1__lines0*sizeof(struct TYPE_6__ *));
          for(int _j0 = 0; _j0 < _len__neighbors__i0___i1__lines0; _j0++) {
            int _len__neighbors__i0___i1__lines1 = 1;
            _neighbors[_i0][_i1].lines[_j0] = (struct TYPE_6__ *) malloc(_len__neighbors__i0___i1__lines1*sizeof(struct TYPE_6__));
            for(int _j1 = 0; _j1 < _len__neighbors__i0___i1__lines1; _j1++) {
              _neighbors[_i0][_i1].lines[_j0]->boffs = ((-2 * (next_i()%2)) + 1) * next_i();
        _neighbors[_i0][_i1].lines[_j0]->eoffs = ((-2 * (next_i()%2)) + 1) * next_i();
        _neighbors[_i0][_i1].lines[_j0]->len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len__neighbors__i0___i1__lines__j0__pos0 = 1;
          _neighbors[_i0][_i1].lines[_j0]->pos = (int *) malloc(_len__neighbors__i0___i1__lines__j0__pos0*sizeof(int));
          for(int _j0 = 0; _j0 < _len__neighbors__i0___i1__lines__j0__pos0; _j0++) {
            _neighbors[_i0][_i1].lines[_j0]->pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
            }
          }
          int benchRet = qr_finder_edge_pts_fill(_edge_pts,_nedge_pts,_neighbors,_nneighbors,_v);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len__edge_pts0; _aux++) {
          free(_edge_pts[_aux].pos);
          }
          free(_edge_pts);
          for(int i1 = 0; i1 < _len__neighbors0; i1++) {
            int _len__neighbors1 = 1;
              for(int _aux = 0; _aux < _len__neighbors1; _aux++) {
          free(*(_neighbors[_aux].lines));
        free(_neighbors[_aux].lines);
          }
          free(_neighbors[i1]);
          }
          free(_neighbors);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
