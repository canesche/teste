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
typedef  size_t uint8_t ;
typedef  int /*<<< orphan*/  int16_t ;

/* Variables and functions */

__attribute__((used)) static void recombine_block(int16_t *dst, const uint8_t *scan,
                            int16_t **base, int16_t **ext)
{
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++)
            dst[scan[i * 8 + j]]     = (*base)[j];
        for (j = 0; j < 4; j++)
            dst[scan[i * 8 + j + 4]] = (*ext)[j];
        *base += 4;
        *ext  += 4;
    }
    for (; i < 8; i++) {
        for (j = 0; j < 8; j++)
            dst[scan[i * 8 + j]] = (*ext)[j];
        *ext  += 8;
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
          int _len_dst0 = 1;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_scan0 = 1;
          const unsigned long * scan = (const unsigned long *) malloc(_len_scan0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_scan0; _i0++) {
            scan[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_base0 = 1;
          int ** base = (int **) malloc(_len_base0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            int _len_base1 = 1;
            base[_i0] = (int *) malloc(_len_base1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_base1; _i1++) {
              base[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ext0 = 1;
          int ** ext = (int **) malloc(_len_ext0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_ext0; _i0++) {
            int _len_ext1 = 1;
            ext[_i0] = (int *) malloc(_len_ext1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_ext1; _i1++) {
              ext[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          recombine_block(dst,scan,base,ext);
          free(dst);
          free(scan);
          for(int i1 = 0; i1 < _len_base0; i1++) {
            int _len_base1 = 1;
              free(base[i1]);
          }
          free(base);
          for(int i1 = 0; i1 < _len_ext0; i1++) {
            int _len_ext1 = 1;
              free(ext[i1]);
          }
          free(ext);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dst0 = 65025;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_scan0 = 65025;
          const unsigned long * scan = (const unsigned long *) malloc(_len_scan0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_scan0; _i0++) {
            scan[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_base0 = 65025;
          int ** base = (int **) malloc(_len_base0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            int _len_base1 = 1;
            base[_i0] = (int *) malloc(_len_base1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_base1; _i1++) {
              base[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ext0 = 65025;
          int ** ext = (int **) malloc(_len_ext0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_ext0; _i0++) {
            int _len_ext1 = 1;
            ext[_i0] = (int *) malloc(_len_ext1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_ext1; _i1++) {
              ext[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          recombine_block(dst,scan,base,ext);
          free(dst);
          free(scan);
          for(int i1 = 0; i1 < _len_base0; i1++) {
            int _len_base1 = 1;
              free(base[i1]);
          }
          free(base);
          for(int i1 = 0; i1 < _len_ext0; i1++) {
            int _len_ext1 = 1;
              free(ext[i1]);
          }
          free(ext);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dst0 = 100;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_scan0 = 100;
          const unsigned long * scan = (const unsigned long *) malloc(_len_scan0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_scan0; _i0++) {
            scan[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_base0 = 100;
          int ** base = (int **) malloc(_len_base0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            int _len_base1 = 1;
            base[_i0] = (int *) malloc(_len_base1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_base1; _i1++) {
              base[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ext0 = 100;
          int ** ext = (int **) malloc(_len_ext0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_ext0; _i0++) {
            int _len_ext1 = 1;
            ext[_i0] = (int *) malloc(_len_ext1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_ext1; _i1++) {
              ext[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          recombine_block(dst,scan,base,ext);
          free(dst);
          free(scan);
          for(int i1 = 0; i1 < _len_base0; i1++) {
            int _len_base1 = 1;
              free(base[i1]);
          }
          free(base);
          for(int i1 = 0; i1 < _len_ext0; i1++) {
            int _len_ext1 = 1;
              free(ext[i1]);
          }
          free(ext);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
