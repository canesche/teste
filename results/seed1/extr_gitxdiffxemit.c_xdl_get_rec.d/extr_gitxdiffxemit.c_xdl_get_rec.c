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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {TYPE_1__** recs; } ;
typedef  TYPE_2__ xdfile_t ;
struct TYPE_4__ {char* ptr; long size; } ;

/* Variables and functions */

__attribute__((used)) static long xdl_get_rec(xdfile_t *xdf, long ri, char const **rec) {

	*rec = xdf->recs[ri]->ptr;

	return xdf->recs[ri]->size;
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
          long ri = 100;
          int _len_xdf0 = 1;
          struct TYPE_5__ * xdf = (struct TYPE_5__ *) malloc(_len_xdf0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_xdf0; _i0++) {
              int _len_xdf__i0__recs0 = 1;
          xdf[_i0].recs = (struct TYPE_4__ **) malloc(_len_xdf__i0__recs0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_xdf__i0__recs0; _j0++) {
            int _len_xdf__i0__recs1 = 1;
            xdf[_i0].recs[_j0] = (struct TYPE_4__ *) malloc(_len_xdf__i0__recs1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_xdf__i0__recs1; _j1++) {
                int _len_xdf__i0__recs__j0__ptr0 = 1;
          xdf[_i0].recs[_j0]->ptr = (char *) malloc(_len_xdf__i0__recs__j0__ptr0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_xdf__i0__recs__j0__ptr0; _j0++) {
            xdf[_i0].recs[_j0]->ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        xdf[_i0].recs[_j0]->size = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_rec0 = 1;
          const char ** rec = (const char **) malloc(_len_rec0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_rec0; _i0++) {
            int _len_rec1 = 1;
            rec[_i0] = (const char *) malloc(_len_rec1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_rec1; _i1++) {
              rec[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          long benchRet = xdl_get_rec(xdf,ri,rec);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_xdf0; _aux++) {
          free(*(xdf[_aux].recs));
        free(xdf[_aux].recs);
          }
          free(xdf);
          for(int i1 = 0; i1 < _len_rec0; i1++) {
            int _len_rec1 = 1;
              free(rec[i1]);
          }
          free(rec);
        
        break;
    }
    // big-arr
    case 1:
    {
          long ri = 255;
          int _len_xdf0 = 65025;
          struct TYPE_5__ * xdf = (struct TYPE_5__ *) malloc(_len_xdf0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_xdf0; _i0++) {
              int _len_xdf__i0__recs0 = 1;
          xdf[_i0].recs = (struct TYPE_4__ **) malloc(_len_xdf__i0__recs0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_xdf__i0__recs0; _j0++) {
            int _len_xdf__i0__recs1 = 1;
            xdf[_i0].recs[_j0] = (struct TYPE_4__ *) malloc(_len_xdf__i0__recs1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_xdf__i0__recs1; _j1++) {
                int _len_xdf__i0__recs__j0__ptr0 = 1;
          xdf[_i0].recs[_j0]->ptr = (char *) malloc(_len_xdf__i0__recs__j0__ptr0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_xdf__i0__recs__j0__ptr0; _j0++) {
            xdf[_i0].recs[_j0]->ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        xdf[_i0].recs[_j0]->size = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_rec0 = 65025;
          const char ** rec = (const char **) malloc(_len_rec0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_rec0; _i0++) {
            int _len_rec1 = 1;
            rec[_i0] = (const char *) malloc(_len_rec1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_rec1; _i1++) {
              rec[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          long benchRet = xdl_get_rec(xdf,ri,rec);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_xdf0; _aux++) {
          free(*(xdf[_aux].recs));
        free(xdf[_aux].recs);
          }
          free(xdf);
          for(int i1 = 0; i1 < _len_rec0; i1++) {
            int _len_rec1 = 1;
              free(rec[i1]);
          }
          free(rec);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long ri = 10;
          int _len_xdf0 = 100;
          struct TYPE_5__ * xdf = (struct TYPE_5__ *) malloc(_len_xdf0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_xdf0; _i0++) {
              int _len_xdf__i0__recs0 = 1;
          xdf[_i0].recs = (struct TYPE_4__ **) malloc(_len_xdf__i0__recs0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_xdf__i0__recs0; _j0++) {
            int _len_xdf__i0__recs1 = 1;
            xdf[_i0].recs[_j0] = (struct TYPE_4__ *) malloc(_len_xdf__i0__recs1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_xdf__i0__recs1; _j1++) {
                int _len_xdf__i0__recs__j0__ptr0 = 1;
          xdf[_i0].recs[_j0]->ptr = (char *) malloc(_len_xdf__i0__recs__j0__ptr0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_xdf__i0__recs__j0__ptr0; _j0++) {
            xdf[_i0].recs[_j0]->ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        xdf[_i0].recs[_j0]->size = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_rec0 = 100;
          const char ** rec = (const char **) malloc(_len_rec0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_rec0; _i0++) {
            int _len_rec1 = 1;
            rec[_i0] = (const char *) malloc(_len_rec1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_rec1; _i1++) {
              rec[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          long benchRet = xdl_get_rec(xdf,ri,rec);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_xdf0; _aux++) {
          free(*(xdf[_aux].recs));
        free(xdf[_aux].recs);
          }
          free(xdf);
          for(int i1 = 0; i1 < _len_rec0; i1++) {
            int _len_rec1 = 1;
              free(rec[i1]);
          }
          free(rec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
