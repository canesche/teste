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
struct TYPE_3__ {int n; int* x; int* y; } ;
typedef  TYPE_1__ lookup ;

/* Variables and functions */

size_t lookup_load_old (lookup *l, char *metafile, int max_metafile_len, int n) {
  size_t size = 0;

#ifdef LOOKUP_CNT
    if (l->n == -2) {
      l->real_n += n;
    }
#endif

  l->n = n;

  size = sizeof (int) * l->n * 2;
//  assert (max_metafile_len >= (int)size);

  l->x = (int *)metafile;
  l->y = (int *)metafile + l->n;
  return size;
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
          int max_metafile_len = 100;
          int n = 100;
          int _len_l0 = 1;
          struct TYPE_3__ * l = (struct TYPE_3__ *) malloc(_len_l0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_l0; _i0++) {
            l[_i0].n = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_l__i0__x0 = 1;
          l[_i0].x = (int *) malloc(_len_l__i0__x0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_l__i0__x0; _j0++) {
            l[_i0].x[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_l__i0__y0 = 1;
          l[_i0].y = (int *) malloc(_len_l__i0__y0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_l__i0__y0; _j0++) {
            l[_i0].y[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_metafile0 = 1;
          char * metafile = (char *) malloc(_len_metafile0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_metafile0; _i0++) {
            metafile[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = lookup_load_old(l,metafile,max_metafile_len,n);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_l0; _aux++) {
          free(l[_aux].x);
          }
          for(int _aux = 0; _aux < _len_l0; _aux++) {
          free(l[_aux].y);
          }
          free(l);
          free(metafile);
        
        break;
    }
    // big-arr
    case 1:
    {
          int max_metafile_len = 255;
          int n = 255;
          int _len_l0 = 65025;
          struct TYPE_3__ * l = (struct TYPE_3__ *) malloc(_len_l0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_l0; _i0++) {
            l[_i0].n = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_l__i0__x0 = 1;
          l[_i0].x = (int *) malloc(_len_l__i0__x0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_l__i0__x0; _j0++) {
            l[_i0].x[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_l__i0__y0 = 1;
          l[_i0].y = (int *) malloc(_len_l__i0__y0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_l__i0__y0; _j0++) {
            l[_i0].y[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_metafile0 = 65025;
          char * metafile = (char *) malloc(_len_metafile0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_metafile0; _i0++) {
            metafile[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = lookup_load_old(l,metafile,max_metafile_len,n);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_l0; _aux++) {
          free(l[_aux].x);
          }
          for(int _aux = 0; _aux < _len_l0; _aux++) {
          free(l[_aux].y);
          }
          free(l);
          free(metafile);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int max_metafile_len = 10;
          int n = 10;
          int _len_l0 = 100;
          struct TYPE_3__ * l = (struct TYPE_3__ *) malloc(_len_l0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_l0; _i0++) {
            l[_i0].n = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_l__i0__x0 = 1;
          l[_i0].x = (int *) malloc(_len_l__i0__x0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_l__i0__x0; _j0++) {
            l[_i0].x[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_l__i0__y0 = 1;
          l[_i0].y = (int *) malloc(_len_l__i0__y0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_l__i0__y0; _j0++) {
            l[_i0].y[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_metafile0 = 100;
          char * metafile = (char *) malloc(_len_metafile0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_metafile0; _i0++) {
            metafile[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = lookup_load_old(l,metafile,max_metafile_len,n);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_l0; _aux++) {
          free(l[_aux].x);
          }
          for(int _aux = 0; _aux < _len_l0; _aux++) {
          free(l[_aux].y);
          }
          free(l);
          free(metafile);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
