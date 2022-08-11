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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {size_t x; size_t y; int dir; } ;
typedef  int /*<<< orphan*/  HWND ;

/* Variables and functions */
 int WALL_TOP ; 
 int end_dir ; 
 size_t end_x ; 
 size_t end_y ; 
 int** maze ; 
 TYPE_1__* path ; 
 size_t pathi ; 
 int start_dir ; 
 size_t start_x ; 
 size_t start_y ; 

__attribute__((used)) static void begin_solve_maze(HWND hWnd)                             /* solve it with graphical feedback */
{
    /* plug up the surrounding wall */
    maze[start_x][start_y] |= (WALL_TOP >> start_dir);
    maze[end_x][end_y] |= (WALL_TOP >> end_dir);

    /* initialize search path */
    pathi = 0;
    path[pathi].x = end_x;
    path[pathi].y = end_y;
    path[pathi].dir = -1;
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
          int hWnd = 100;
          begin_solve_maze(hWnd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int hWnd = 255;
          begin_solve_maze(hWnd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int hWnd = 10;
          begin_solve_maze(hWnd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
