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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int count; size_t* items; } ;
struct triangulation {scalar_t__ last_on_top; TYPE_1__ vertex_stack; } ;
struct point2d_index {int vertex; struct outline* outline; } ;
struct outline {int count; TYPE_3__* items; } ;
struct TYPE_5__ {struct point2d_index* items; } ;
struct glyphinfo {TYPE_2__ ordered_vertices; } ;
typedef  size_t WORD ;
struct TYPE_6__ {int /*<<< orphan*/  pos; } ;
typedef  int /*<<< orphan*/  D3DXVECTOR2 ;
typedef  scalar_t__ BOOL ;

/* Variables and functions */

__attribute__((used)) static D3DXVECTOR2 *triangulation_get_next_point(struct triangulation *t, struct glyphinfo *glyph, BOOL on_top)
{
    int i = t->last_on_top == on_top ? t->vertex_stack.count - 1 : 0;
    WORD idx = t->vertex_stack.items[i];
    struct point2d_index *pt_idx = &glyph->ordered_vertices.items[idx];
    struct outline *outline = pt_idx->outline;

    if (on_top)
        i = (pt_idx->vertex + outline->count - 1) % outline->count;
    else
        i = (pt_idx->vertex + 1) % outline->count;

    return &outline->items[i].pos;
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
          long on_top = 100;
          int _len_t0 = 1;
          struct triangulation * t = (struct triangulation *) malloc(_len_t0*sizeof(struct triangulation));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].last_on_top = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].vertex_stack.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_t__i0__vertex_stack_items0 = 1;
          t[_i0].vertex_stack.items = (unsigned long *) malloc(_len_t__i0__vertex_stack_items0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_t__i0__vertex_stack_items0; _j0++) {
            t[_i0].vertex_stack.items[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_glyph0 = 1;
          struct glyphinfo * glyph = (struct glyphinfo *) malloc(_len_glyph0*sizeof(struct glyphinfo));
          for(int _i0 = 0; _i0 < _len_glyph0; _i0++) {
              int _len_glyph__i0__ordered_vertices_items0 = 1;
          glyph[_i0].ordered_vertices.items = (struct point2d_index *) malloc(_len_glyph__i0__ordered_vertices_items0*sizeof(struct point2d_index));
          for(int _j0 = 0; _j0 < _len_glyph__i0__ordered_vertices_items0; _j0++) {
            glyph[_i0].ordered_vertices.items->vertex = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_glyph__i0__ordered_vertices_items_outline0 = 1;
          glyph[_i0].ordered_vertices.items->outline = (struct outline *) malloc(_len_glyph__i0__ordered_vertices_items_outline0*sizeof(struct outline));
          for(int _j0 = 0; _j0 < _len_glyph__i0__ordered_vertices_items_outline0; _j0++) {
            glyph[_i0].ordered_vertices.items->outline->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_glyph__i0__ordered_vertices_items_outline_items0 = 1;
          glyph[_i0].ordered_vertices.items->outline->items = (struct TYPE_6__ *) malloc(_len_glyph__i0__ordered_vertices_items_outline_items0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_glyph__i0__ordered_vertices_items_outline_items0; _j0++) {
            glyph[_i0].ordered_vertices.items->outline->items->pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int * benchRet = triangulation_get_next_point(t,glyph,on_top);
          printf("%d\n", (*benchRet)); 
          free(t);
          free(glyph);
        
        break;
    }
    // big-arr
    case 1:
    {
          long on_top = 255;
          int _len_t0 = 65025;
          struct triangulation * t = (struct triangulation *) malloc(_len_t0*sizeof(struct triangulation));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].last_on_top = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].vertex_stack.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_t__i0__vertex_stack_items0 = 1;
          t[_i0].vertex_stack.items = (unsigned long *) malloc(_len_t__i0__vertex_stack_items0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_t__i0__vertex_stack_items0; _j0++) {
            t[_i0].vertex_stack.items[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_glyph0 = 65025;
          struct glyphinfo * glyph = (struct glyphinfo *) malloc(_len_glyph0*sizeof(struct glyphinfo));
          for(int _i0 = 0; _i0 < _len_glyph0; _i0++) {
              int _len_glyph__i0__ordered_vertices_items0 = 1;
          glyph[_i0].ordered_vertices.items = (struct point2d_index *) malloc(_len_glyph__i0__ordered_vertices_items0*sizeof(struct point2d_index));
          for(int _j0 = 0; _j0 < _len_glyph__i0__ordered_vertices_items0; _j0++) {
            glyph[_i0].ordered_vertices.items->vertex = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_glyph__i0__ordered_vertices_items_outline0 = 1;
          glyph[_i0].ordered_vertices.items->outline = (struct outline *) malloc(_len_glyph__i0__ordered_vertices_items_outline0*sizeof(struct outline));
          for(int _j0 = 0; _j0 < _len_glyph__i0__ordered_vertices_items_outline0; _j0++) {
            glyph[_i0].ordered_vertices.items->outline->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_glyph__i0__ordered_vertices_items_outline_items0 = 1;
          glyph[_i0].ordered_vertices.items->outline->items = (struct TYPE_6__ *) malloc(_len_glyph__i0__ordered_vertices_items_outline_items0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_glyph__i0__ordered_vertices_items_outline_items0; _j0++) {
            glyph[_i0].ordered_vertices.items->outline->items->pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int * benchRet = triangulation_get_next_point(t,glyph,on_top);
          printf("%d\n", (*benchRet)); 
          free(t);
          free(glyph);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long on_top = 10;
          int _len_t0 = 100;
          struct triangulation * t = (struct triangulation *) malloc(_len_t0*sizeof(struct triangulation));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].last_on_top = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].vertex_stack.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_t__i0__vertex_stack_items0 = 1;
          t[_i0].vertex_stack.items = (unsigned long *) malloc(_len_t__i0__vertex_stack_items0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_t__i0__vertex_stack_items0; _j0++) {
            t[_i0].vertex_stack.items[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_glyph0 = 100;
          struct glyphinfo * glyph = (struct glyphinfo *) malloc(_len_glyph0*sizeof(struct glyphinfo));
          for(int _i0 = 0; _i0 < _len_glyph0; _i0++) {
              int _len_glyph__i0__ordered_vertices_items0 = 1;
          glyph[_i0].ordered_vertices.items = (struct point2d_index *) malloc(_len_glyph__i0__ordered_vertices_items0*sizeof(struct point2d_index));
          for(int _j0 = 0; _j0 < _len_glyph__i0__ordered_vertices_items0; _j0++) {
            glyph[_i0].ordered_vertices.items->vertex = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_glyph__i0__ordered_vertices_items_outline0 = 1;
          glyph[_i0].ordered_vertices.items->outline = (struct outline *) malloc(_len_glyph__i0__ordered_vertices_items_outline0*sizeof(struct outline));
          for(int _j0 = 0; _j0 < _len_glyph__i0__ordered_vertices_items_outline0; _j0++) {
            glyph[_i0].ordered_vertices.items->outline->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_glyph__i0__ordered_vertices_items_outline_items0 = 1;
          glyph[_i0].ordered_vertices.items->outline->items = (struct TYPE_6__ *) malloc(_len_glyph__i0__ordered_vertices_items_outline_items0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_glyph__i0__ordered_vertices_items_outline_items0; _j0++) {
            glyph[_i0].ordered_vertices.items->outline->items->pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int * benchRet = triangulation_get_next_point(t,glyph,on_top);
          printf("%d\n", (*benchRet)); 
          free(t);
          free(glyph);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
