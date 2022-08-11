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
struct SwsContext {int* srcColorspaceTable; int* dstColorspaceTable; int srcRange; int dstRange; int brightness; int contrast; int saturation; } ;

/* Variables and functions */

int sws_getColorspaceDetails(struct SwsContext *c, int **inv_table,
                             int *srcRange, int **table, int *dstRange,
                             int *brightness, int *contrast, int *saturation)
{
    if (!c )
        return -1;

    *inv_table  = c->srcColorspaceTable;
    *table      = c->dstColorspaceTable;
    *srcRange   = c->srcRange;
    *dstRange   = c->dstRange;
    *brightness = c->brightness;
    *contrast   = c->contrast;
    *saturation = c->saturation;

    return 0;
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
          int _len_c0 = 1;
          struct SwsContext * c = (struct SwsContext *) malloc(_len_c0*sizeof(struct SwsContext));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              int _len_c__i0__srcColorspaceTable0 = 1;
          c[_i0].srcColorspaceTable = (int *) malloc(_len_c__i0__srcColorspaceTable0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c__i0__srcColorspaceTable0; _j0++) {
            c[_i0].srcColorspaceTable[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c__i0__dstColorspaceTable0 = 1;
          c[_i0].dstColorspaceTable = (int *) malloc(_len_c__i0__dstColorspaceTable0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c__i0__dstColorspaceTable0; _j0++) {
            c[_i0].dstColorspaceTable[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        c[_i0].srcRange = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].dstRange = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].brightness = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].contrast = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].saturation = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inv_table0 = 1;
          int ** inv_table = (int **) malloc(_len_inv_table0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_inv_table0; _i0++) {
            int _len_inv_table1 = 1;
            inv_table[_i0] = (int *) malloc(_len_inv_table1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_inv_table1; _i1++) {
              inv_table[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_srcRange0 = 1;
          int * srcRange = (int *) malloc(_len_srcRange0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_srcRange0; _i0++) {
            srcRange[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_table0 = 1;
          int ** table = (int **) malloc(_len_table0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            int _len_table1 = 1;
            table[_i0] = (int *) malloc(_len_table1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_table1; _i1++) {
              table[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_dstRange0 = 1;
          int * dstRange = (int *) malloc(_len_dstRange0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dstRange0; _i0++) {
            dstRange[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_brightness0 = 1;
          int * brightness = (int *) malloc(_len_brightness0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_brightness0; _i0++) {
            brightness[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_contrast0 = 1;
          int * contrast = (int *) malloc(_len_contrast0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_contrast0; _i0++) {
            contrast[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_saturation0 = 1;
          int * saturation = (int *) malloc(_len_saturation0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_saturation0; _i0++) {
            saturation[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sws_getColorspaceDetails(c,inv_table,srcRange,table,dstRange,brightness,contrast,saturation);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].srcColorspaceTable);
          }
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].dstColorspaceTable);
          }
          free(c);
          for(int i1 = 0; i1 < _len_inv_table0; i1++) {
            int _len_inv_table1 = 1;
              free(inv_table[i1]);
          }
          free(inv_table);
          free(srcRange);
          for(int i1 = 0; i1 < _len_table0; i1++) {
            int _len_table1 = 1;
              free(table[i1]);
          }
          free(table);
          free(dstRange);
          free(brightness);
          free(contrast);
          free(saturation);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_c0 = 65025;
          struct SwsContext * c = (struct SwsContext *) malloc(_len_c0*sizeof(struct SwsContext));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              int _len_c__i0__srcColorspaceTable0 = 1;
          c[_i0].srcColorspaceTable = (int *) malloc(_len_c__i0__srcColorspaceTable0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c__i0__srcColorspaceTable0; _j0++) {
            c[_i0].srcColorspaceTable[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c__i0__dstColorspaceTable0 = 1;
          c[_i0].dstColorspaceTable = (int *) malloc(_len_c__i0__dstColorspaceTable0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c__i0__dstColorspaceTable0; _j0++) {
            c[_i0].dstColorspaceTable[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        c[_i0].srcRange = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].dstRange = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].brightness = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].contrast = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].saturation = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inv_table0 = 65025;
          int ** inv_table = (int **) malloc(_len_inv_table0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_inv_table0; _i0++) {
            int _len_inv_table1 = 1;
            inv_table[_i0] = (int *) malloc(_len_inv_table1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_inv_table1; _i1++) {
              inv_table[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_srcRange0 = 65025;
          int * srcRange = (int *) malloc(_len_srcRange0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_srcRange0; _i0++) {
            srcRange[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_table0 = 65025;
          int ** table = (int **) malloc(_len_table0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            int _len_table1 = 1;
            table[_i0] = (int *) malloc(_len_table1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_table1; _i1++) {
              table[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_dstRange0 = 65025;
          int * dstRange = (int *) malloc(_len_dstRange0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dstRange0; _i0++) {
            dstRange[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_brightness0 = 65025;
          int * brightness = (int *) malloc(_len_brightness0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_brightness0; _i0++) {
            brightness[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_contrast0 = 65025;
          int * contrast = (int *) malloc(_len_contrast0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_contrast0; _i0++) {
            contrast[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_saturation0 = 65025;
          int * saturation = (int *) malloc(_len_saturation0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_saturation0; _i0++) {
            saturation[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sws_getColorspaceDetails(c,inv_table,srcRange,table,dstRange,brightness,contrast,saturation);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].srcColorspaceTable);
          }
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].dstColorspaceTable);
          }
          free(c);
          for(int i1 = 0; i1 < _len_inv_table0; i1++) {
            int _len_inv_table1 = 1;
              free(inv_table[i1]);
          }
          free(inv_table);
          free(srcRange);
          for(int i1 = 0; i1 < _len_table0; i1++) {
            int _len_table1 = 1;
              free(table[i1]);
          }
          free(table);
          free(dstRange);
          free(brightness);
          free(contrast);
          free(saturation);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_c0 = 100;
          struct SwsContext * c = (struct SwsContext *) malloc(_len_c0*sizeof(struct SwsContext));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              int _len_c__i0__srcColorspaceTable0 = 1;
          c[_i0].srcColorspaceTable = (int *) malloc(_len_c__i0__srcColorspaceTable0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c__i0__srcColorspaceTable0; _j0++) {
            c[_i0].srcColorspaceTable[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c__i0__dstColorspaceTable0 = 1;
          c[_i0].dstColorspaceTable = (int *) malloc(_len_c__i0__dstColorspaceTable0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c__i0__dstColorspaceTable0; _j0++) {
            c[_i0].dstColorspaceTable[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        c[_i0].srcRange = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].dstRange = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].brightness = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].contrast = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].saturation = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inv_table0 = 100;
          int ** inv_table = (int **) malloc(_len_inv_table0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_inv_table0; _i0++) {
            int _len_inv_table1 = 1;
            inv_table[_i0] = (int *) malloc(_len_inv_table1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_inv_table1; _i1++) {
              inv_table[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_srcRange0 = 100;
          int * srcRange = (int *) malloc(_len_srcRange0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_srcRange0; _i0++) {
            srcRange[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_table0 = 100;
          int ** table = (int **) malloc(_len_table0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            int _len_table1 = 1;
            table[_i0] = (int *) malloc(_len_table1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_table1; _i1++) {
              table[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_dstRange0 = 100;
          int * dstRange = (int *) malloc(_len_dstRange0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dstRange0; _i0++) {
            dstRange[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_brightness0 = 100;
          int * brightness = (int *) malloc(_len_brightness0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_brightness0; _i0++) {
            brightness[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_contrast0 = 100;
          int * contrast = (int *) malloc(_len_contrast0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_contrast0; _i0++) {
            contrast[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_saturation0 = 100;
          int * saturation = (int *) malloc(_len_saturation0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_saturation0; _i0++) {
            saturation[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sws_getColorspaceDetails(c,inv_table,srcRange,table,dstRange,brightness,contrast,saturation);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].srcColorspaceTable);
          }
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].dstColorspaceTable);
          }
          free(c);
          for(int i1 = 0; i1 < _len_inv_table0; i1++) {
            int _len_inv_table1 = 1;
              free(inv_table[i1]);
          }
          free(inv_table);
          free(srcRange);
          for(int i1 = 0; i1 < _len_table0; i1++) {
            int _len_table1 = 1;
              free(table[i1]);
          }
          free(table);
          free(dstRange);
          free(brightness);
          free(contrast);
          free(saturation);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
