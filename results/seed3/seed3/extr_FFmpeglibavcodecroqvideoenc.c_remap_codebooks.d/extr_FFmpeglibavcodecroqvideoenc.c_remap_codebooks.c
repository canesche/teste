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
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_10__ {TYPE_1__* cb4x4; scalar_t__ quake3_compat; } ;
struct TYPE_8__ {scalar_t__* usedCB2; scalar_t__* usedCB4; } ;
struct TYPE_9__ {int* i2f4; int* f2i4; int numCB4; int* i2f2; int* f2i2; int numCB2; TYPE_2__ codebooks; } ;
struct TYPE_7__ {size_t* idx; } ;
typedef  TYPE_3__ RoqTempdata ;
typedef  TYPE_4__ RoqContext ;

/* Variables and functions */
 int MAX_CBS_2x2 ; 
 int MAX_CBS_4x4 ; 

__attribute__((used)) static void remap_codebooks(RoqContext *enc, RoqTempdata *tempData)
{
    int i, j, idx=0;

    /* Make remaps for the final codebook usage */
    for (i=0; i<(enc->quake3_compat ? MAX_CBS_4x4-1 : MAX_CBS_4x4); i++) {
        if (tempData->codebooks.usedCB4[i]) {
            tempData->i2f4[i] = idx;
            tempData->f2i4[idx] = i;
            for (j=0; j<4; j++)
                tempData->codebooks.usedCB2[enc->cb4x4[i].idx[j]]++;
            idx++;
        }
    }

    tempData->numCB4 = idx;

    idx = 0;
    for (i=0; i<MAX_CBS_2x2; i++) {
        if (tempData->codebooks.usedCB2[i]) {
            tempData->i2f2[i] = idx;
            tempData->f2i2[idx] = i;
            idx++;
        }
    }
    tempData->numCB2 = idx;

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
          int _len_enc0 = 1;
          struct TYPE_10__ * enc = (struct TYPE_10__ *) malloc(_len_enc0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_enc0; _i0++) {
              int _len_enc__i0__cb4x40 = 1;
          enc[_i0].cb4x4 = (struct TYPE_7__ *) malloc(_len_enc__i0__cb4x40*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_enc__i0__cb4x40; _j0++) {
              int _len_enc__i0__cb4x4_idx0 = 1;
          enc[_i0].cb4x4->idx = (unsigned long *) malloc(_len_enc__i0__cb4x4_idx0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_enc__i0__cb4x4_idx0; _j0++) {
            enc[_i0].cb4x4->idx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        enc[_i0].quake3_compat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tempData0 = 1;
          struct TYPE_9__ * tempData = (struct TYPE_9__ *) malloc(_len_tempData0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_tempData0; _i0++) {
              int _len_tempData__i0__i2f40 = 1;
          tempData[_i0].i2f4 = (int *) malloc(_len_tempData__i0__i2f40*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tempData__i0__i2f40; _j0++) {
            tempData[_i0].i2f4[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tempData__i0__f2i40 = 1;
          tempData[_i0].f2i4 = (int *) malloc(_len_tempData__i0__f2i40*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tempData__i0__f2i40; _j0++) {
            tempData[_i0].f2i4[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tempData[_i0].numCB4 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tempData__i0__i2f20 = 1;
          tempData[_i0].i2f2 = (int *) malloc(_len_tempData__i0__i2f20*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tempData__i0__i2f20; _j0++) {
            tempData[_i0].i2f2[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tempData__i0__f2i20 = 1;
          tempData[_i0].f2i2 = (int *) malloc(_len_tempData__i0__f2i20*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tempData__i0__f2i20; _j0++) {
            tempData[_i0].f2i2[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tempData[_i0].numCB2 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tempData__i0__codebooks_usedCB20 = 1;
          tempData[_i0].codebooks.usedCB2 = (long *) malloc(_len_tempData__i0__codebooks_usedCB20*sizeof(long));
          for(int _j0 = 0; _j0 < _len_tempData__i0__codebooks_usedCB20; _j0++) {
            tempData[_i0].codebooks.usedCB2[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tempData__i0__codebooks_usedCB40 = 1;
          tempData[_i0].codebooks.usedCB4 = (long *) malloc(_len_tempData__i0__codebooks_usedCB40*sizeof(long));
          for(int _j0 = 0; _j0 < _len_tempData__i0__codebooks_usedCB40; _j0++) {
            tempData[_i0].codebooks.usedCB4[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          remap_codebooks(enc,tempData);
          for(int _aux = 0; _aux < _len_enc0; _aux++) {
          free(enc[_aux].cb4x4);
          }
          free(enc);
          for(int _aux = 0; _aux < _len_tempData0; _aux++) {
          free(tempData[_aux].i2f4);
          }
          for(int _aux = 0; _aux < _len_tempData0; _aux++) {
          free(tempData[_aux].f2i4);
          }
          for(int _aux = 0; _aux < _len_tempData0; _aux++) {
          free(tempData[_aux].i2f2);
          }
          for(int _aux = 0; _aux < _len_tempData0; _aux++) {
          free(tempData[_aux].f2i2);
          }
          free(tempData);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_enc0 = 65025;
          struct TYPE_10__ * enc = (struct TYPE_10__ *) malloc(_len_enc0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_enc0; _i0++) {
              int _len_enc__i0__cb4x40 = 1;
          enc[_i0].cb4x4 = (struct TYPE_7__ *) malloc(_len_enc__i0__cb4x40*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_enc__i0__cb4x40; _j0++) {
              int _len_enc__i0__cb4x4_idx0 = 1;
          enc[_i0].cb4x4->idx = (unsigned long *) malloc(_len_enc__i0__cb4x4_idx0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_enc__i0__cb4x4_idx0; _j0++) {
            enc[_i0].cb4x4->idx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        enc[_i0].quake3_compat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tempData0 = 65025;
          struct TYPE_9__ * tempData = (struct TYPE_9__ *) malloc(_len_tempData0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_tempData0; _i0++) {
              int _len_tempData__i0__i2f40 = 1;
          tempData[_i0].i2f4 = (int *) malloc(_len_tempData__i0__i2f40*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tempData__i0__i2f40; _j0++) {
            tempData[_i0].i2f4[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tempData__i0__f2i40 = 1;
          tempData[_i0].f2i4 = (int *) malloc(_len_tempData__i0__f2i40*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tempData__i0__f2i40; _j0++) {
            tempData[_i0].f2i4[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tempData[_i0].numCB4 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tempData__i0__i2f20 = 1;
          tempData[_i0].i2f2 = (int *) malloc(_len_tempData__i0__i2f20*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tempData__i0__i2f20; _j0++) {
            tempData[_i0].i2f2[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tempData__i0__f2i20 = 1;
          tempData[_i0].f2i2 = (int *) malloc(_len_tempData__i0__f2i20*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tempData__i0__f2i20; _j0++) {
            tempData[_i0].f2i2[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tempData[_i0].numCB2 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tempData__i0__codebooks_usedCB20 = 1;
          tempData[_i0].codebooks.usedCB2 = (long *) malloc(_len_tempData__i0__codebooks_usedCB20*sizeof(long));
          for(int _j0 = 0; _j0 < _len_tempData__i0__codebooks_usedCB20; _j0++) {
            tempData[_i0].codebooks.usedCB2[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tempData__i0__codebooks_usedCB40 = 1;
          tempData[_i0].codebooks.usedCB4 = (long *) malloc(_len_tempData__i0__codebooks_usedCB40*sizeof(long));
          for(int _j0 = 0; _j0 < _len_tempData__i0__codebooks_usedCB40; _j0++) {
            tempData[_i0].codebooks.usedCB4[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          remap_codebooks(enc,tempData);
          for(int _aux = 0; _aux < _len_enc0; _aux++) {
          free(enc[_aux].cb4x4);
          }
          free(enc);
          for(int _aux = 0; _aux < _len_tempData0; _aux++) {
          free(tempData[_aux].i2f4);
          }
          for(int _aux = 0; _aux < _len_tempData0; _aux++) {
          free(tempData[_aux].f2i4);
          }
          for(int _aux = 0; _aux < _len_tempData0; _aux++) {
          free(tempData[_aux].i2f2);
          }
          for(int _aux = 0; _aux < _len_tempData0; _aux++) {
          free(tempData[_aux].f2i2);
          }
          free(tempData);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_enc0 = 100;
          struct TYPE_10__ * enc = (struct TYPE_10__ *) malloc(_len_enc0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_enc0; _i0++) {
              int _len_enc__i0__cb4x40 = 1;
          enc[_i0].cb4x4 = (struct TYPE_7__ *) malloc(_len_enc__i0__cb4x40*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_enc__i0__cb4x40; _j0++) {
              int _len_enc__i0__cb4x4_idx0 = 1;
          enc[_i0].cb4x4->idx = (unsigned long *) malloc(_len_enc__i0__cb4x4_idx0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_enc__i0__cb4x4_idx0; _j0++) {
            enc[_i0].cb4x4->idx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        enc[_i0].quake3_compat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tempData0 = 100;
          struct TYPE_9__ * tempData = (struct TYPE_9__ *) malloc(_len_tempData0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_tempData0; _i0++) {
              int _len_tempData__i0__i2f40 = 1;
          tempData[_i0].i2f4 = (int *) malloc(_len_tempData__i0__i2f40*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tempData__i0__i2f40; _j0++) {
            tempData[_i0].i2f4[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tempData__i0__f2i40 = 1;
          tempData[_i0].f2i4 = (int *) malloc(_len_tempData__i0__f2i40*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tempData__i0__f2i40; _j0++) {
            tempData[_i0].f2i4[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tempData[_i0].numCB4 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tempData__i0__i2f20 = 1;
          tempData[_i0].i2f2 = (int *) malloc(_len_tempData__i0__i2f20*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tempData__i0__i2f20; _j0++) {
            tempData[_i0].i2f2[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tempData__i0__f2i20 = 1;
          tempData[_i0].f2i2 = (int *) malloc(_len_tempData__i0__f2i20*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tempData__i0__f2i20; _j0++) {
            tempData[_i0].f2i2[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tempData[_i0].numCB2 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tempData__i0__codebooks_usedCB20 = 1;
          tempData[_i0].codebooks.usedCB2 = (long *) malloc(_len_tempData__i0__codebooks_usedCB20*sizeof(long));
          for(int _j0 = 0; _j0 < _len_tempData__i0__codebooks_usedCB20; _j0++) {
            tempData[_i0].codebooks.usedCB2[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tempData__i0__codebooks_usedCB40 = 1;
          tempData[_i0].codebooks.usedCB4 = (long *) malloc(_len_tempData__i0__codebooks_usedCB40*sizeof(long));
          for(int _j0 = 0; _j0 < _len_tempData__i0__codebooks_usedCB40; _j0++) {
            tempData[_i0].codebooks.usedCB4[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          remap_codebooks(enc,tempData);
          for(int _aux = 0; _aux < _len_enc0; _aux++) {
          free(enc[_aux].cb4x4);
          }
          free(enc);
          for(int _aux = 0; _aux < _len_tempData0; _aux++) {
          free(tempData[_aux].i2f4);
          }
          for(int _aux = 0; _aux < _len_tempData0; _aux++) {
          free(tempData[_aux].f2i4);
          }
          for(int _aux = 0; _aux < _len_tempData0; _aux++) {
          free(tempData[_aux].i2f2);
          }
          for(int _aux = 0; _aux < _len_tempData0; _aux++) {
          free(tempData[_aux].f2i2);
          }
          free(tempData);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
