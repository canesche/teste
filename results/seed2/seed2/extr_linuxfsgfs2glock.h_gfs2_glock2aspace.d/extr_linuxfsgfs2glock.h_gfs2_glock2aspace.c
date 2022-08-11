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
struct gfs2_glock {TYPE_1__* gl_ops; } ;
struct address_space {int dummy; } ;
struct TYPE_2__ {int go_flags; } ;

/* Variables and functions */
 int GLOF_ASPACE ; 

__attribute__((used)) static inline struct address_space *gfs2_glock2aspace(struct gfs2_glock *gl)
{
	if (gl->gl_ops->go_flags & GLOF_ASPACE)
		return (struct address_space *)(gl + 1);
	return NULL;
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
          int _len_gl0 = 1;
          struct gfs2_glock * gl = (struct gfs2_glock *) malloc(_len_gl0*sizeof(struct gfs2_glock));
          for(int _i0 = 0; _i0 < _len_gl0; _i0++) {
              int _len_gl__i0__gl_ops0 = 1;
          gl[_i0].gl_ops = (struct TYPE_2__ *) malloc(_len_gl__i0__gl_ops0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_gl__i0__gl_ops0; _j0++) {
            gl[_i0].gl_ops->go_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct address_space * benchRet = gfs2_glock2aspace(gl);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_gl0; _aux++) {
          free(gl[_aux].gl_ops);
          }
          free(gl);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_gl0 = 65025;
          struct gfs2_glock * gl = (struct gfs2_glock *) malloc(_len_gl0*sizeof(struct gfs2_glock));
          for(int _i0 = 0; _i0 < _len_gl0; _i0++) {
              int _len_gl__i0__gl_ops0 = 1;
          gl[_i0].gl_ops = (struct TYPE_2__ *) malloc(_len_gl__i0__gl_ops0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_gl__i0__gl_ops0; _j0++) {
            gl[_i0].gl_ops->go_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct address_space * benchRet = gfs2_glock2aspace(gl);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_gl0; _aux++) {
          free(gl[_aux].gl_ops);
          }
          free(gl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_gl0 = 100;
          struct gfs2_glock * gl = (struct gfs2_glock *) malloc(_len_gl0*sizeof(struct gfs2_glock));
          for(int _i0 = 0; _i0 < _len_gl0; _i0++) {
              int _len_gl__i0__gl_ops0 = 1;
          gl[_i0].gl_ops = (struct TYPE_2__ *) malloc(_len_gl__i0__gl_ops0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_gl__i0__gl_ops0; _j0++) {
            gl[_i0].gl_ops->go_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct address_space * benchRet = gfs2_glock2aspace(gl);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_gl0; _aux++) {
          free(gl[_aux].gl_ops);
          }
          free(gl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
