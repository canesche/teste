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
struct TYPE_7__ {int /*<<< orphan*/  map_generation; int /*<<< orphan*/  score_map; int /*<<< orphan*/  map; int /*<<< orphan*/  temp; int /*<<< orphan*/  scratchpad; } ;
struct TYPE_6__ {int /*<<< orphan*/  obmc_scratchpad; int /*<<< orphan*/  b_scratchpad; int /*<<< orphan*/  rd_scratchpad; int /*<<< orphan*/  edge_emu_buffer; } ;
struct TYPE_8__ {int /*<<< orphan*/ * ac_val; int /*<<< orphan*/  ac_val_base; int /*<<< orphan*/ * dct_count; int /*<<< orphan*/  dct_error_sum; int /*<<< orphan*/  pb; TYPE_2__ me; int /*<<< orphan*/  end_mb_y; int /*<<< orphan*/  start_mb_y; int /*<<< orphan*/  dpcm_direction; int /*<<< orphan*/  dpcm_macroblock; int /*<<< orphan*/  block32; int /*<<< orphan*/  block; int /*<<< orphan*/  blocks; TYPE_1__ sc; } ;
typedef  TYPE_3__ MpegEncContext ;

/* Variables and functions */

__attribute__((used)) static void backup_duplicate_context(MpegEncContext *bak, MpegEncContext *src)
{
#define COPY(a) bak->a = src->a
    COPY(sc.edge_emu_buffer);
    COPY(me.scratchpad);
    COPY(me.temp);
    COPY(sc.rd_scratchpad);
    COPY(sc.b_scratchpad);
    COPY(sc.obmc_scratchpad);
    COPY(me.map);
    COPY(me.score_map);
    COPY(blocks);
    COPY(block);
    COPY(block32);
    COPY(dpcm_macroblock);
    COPY(dpcm_direction);
    COPY(start_mb_y);
    COPY(end_mb_y);
    COPY(me.map_generation);
    COPY(pb);
    COPY(dct_error_sum);
    COPY(dct_count[0]);
    COPY(dct_count[1]);
    COPY(ac_val_base);
    COPY(ac_val[0]);
    COPY(ac_val[1]);
    COPY(ac_val[2]);
#undef COPY
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
          int _len_bak0 = 1;
          struct TYPE_8__ * bak = (struct TYPE_8__ *) malloc(_len_bak0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_bak0; _i0++) {
              int _len_bak__i0__ac_val0 = 1;
          bak[_i0].ac_val = (int *) malloc(_len_bak__i0__ac_val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bak__i0__ac_val0; _j0++) {
            bak[_i0].ac_val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bak[_i0].ac_val_base = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bak__i0__dct_count0 = 1;
          bak[_i0].dct_count = (int *) malloc(_len_bak__i0__dct_count0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bak__i0__dct_count0; _j0++) {
            bak[_i0].dct_count[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bak[_i0].dct_error_sum = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].pb = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].me.map_generation = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].me.score_map = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].me.map = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].me.temp = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].me.scratchpad = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].end_mb_y = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].start_mb_y = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].dpcm_direction = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].dpcm_macroblock = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].block32 = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].block = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].blocks = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].sc.obmc_scratchpad = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].sc.b_scratchpad = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].sc.rd_scratchpad = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].sc.edge_emu_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          struct TYPE_8__ * src = (struct TYPE_8__ *) malloc(_len_src0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
              int _len_src__i0__ac_val0 = 1;
          src[_i0].ac_val = (int *) malloc(_len_src__i0__ac_val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_src__i0__ac_val0; _j0++) {
            src[_i0].ac_val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        src[_i0].ac_val_base = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_src__i0__dct_count0 = 1;
          src[_i0].dct_count = (int *) malloc(_len_src__i0__dct_count0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_src__i0__dct_count0; _j0++) {
            src[_i0].dct_count[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        src[_i0].dct_error_sum = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].pb = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].me.map_generation = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].me.score_map = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].me.map = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].me.temp = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].me.scratchpad = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].end_mb_y = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].start_mb_y = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].dpcm_direction = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].dpcm_macroblock = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].block32 = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].block = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].blocks = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].sc.obmc_scratchpad = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].sc.b_scratchpad = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].sc.rd_scratchpad = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].sc.edge_emu_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          backup_duplicate_context(bak,src);
          for(int _aux = 0; _aux < _len_bak0; _aux++) {
          free(bak[_aux].ac_val);
          }
          for(int _aux = 0; _aux < _len_bak0; _aux++) {
          free(bak[_aux].dct_count);
          }
          free(bak);
          for(int _aux = 0; _aux < _len_src0; _aux++) {
          free(src[_aux].ac_val);
          }
          for(int _aux = 0; _aux < _len_src0; _aux++) {
          free(src[_aux].dct_count);
          }
          free(src);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_bak0 = 65025;
          struct TYPE_8__ * bak = (struct TYPE_8__ *) malloc(_len_bak0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_bak0; _i0++) {
              int _len_bak__i0__ac_val0 = 1;
          bak[_i0].ac_val = (int *) malloc(_len_bak__i0__ac_val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bak__i0__ac_val0; _j0++) {
            bak[_i0].ac_val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bak[_i0].ac_val_base = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bak__i0__dct_count0 = 1;
          bak[_i0].dct_count = (int *) malloc(_len_bak__i0__dct_count0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bak__i0__dct_count0; _j0++) {
            bak[_i0].dct_count[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bak[_i0].dct_error_sum = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].pb = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].me.map_generation = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].me.score_map = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].me.map = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].me.temp = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].me.scratchpad = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].end_mb_y = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].start_mb_y = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].dpcm_direction = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].dpcm_macroblock = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].block32 = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].block = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].blocks = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].sc.obmc_scratchpad = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].sc.b_scratchpad = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].sc.rd_scratchpad = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].sc.edge_emu_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 65025;
          struct TYPE_8__ * src = (struct TYPE_8__ *) malloc(_len_src0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
              int _len_src__i0__ac_val0 = 1;
          src[_i0].ac_val = (int *) malloc(_len_src__i0__ac_val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_src__i0__ac_val0; _j0++) {
            src[_i0].ac_val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        src[_i0].ac_val_base = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_src__i0__dct_count0 = 1;
          src[_i0].dct_count = (int *) malloc(_len_src__i0__dct_count0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_src__i0__dct_count0; _j0++) {
            src[_i0].dct_count[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        src[_i0].dct_error_sum = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].pb = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].me.map_generation = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].me.score_map = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].me.map = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].me.temp = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].me.scratchpad = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].end_mb_y = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].start_mb_y = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].dpcm_direction = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].dpcm_macroblock = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].block32 = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].block = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].blocks = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].sc.obmc_scratchpad = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].sc.b_scratchpad = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].sc.rd_scratchpad = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].sc.edge_emu_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          backup_duplicate_context(bak,src);
          for(int _aux = 0; _aux < _len_bak0; _aux++) {
          free(bak[_aux].ac_val);
          }
          for(int _aux = 0; _aux < _len_bak0; _aux++) {
          free(bak[_aux].dct_count);
          }
          free(bak);
          for(int _aux = 0; _aux < _len_src0; _aux++) {
          free(src[_aux].ac_val);
          }
          for(int _aux = 0; _aux < _len_src0; _aux++) {
          free(src[_aux].dct_count);
          }
          free(src);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_bak0 = 100;
          struct TYPE_8__ * bak = (struct TYPE_8__ *) malloc(_len_bak0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_bak0; _i0++) {
              int _len_bak__i0__ac_val0 = 1;
          bak[_i0].ac_val = (int *) malloc(_len_bak__i0__ac_val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bak__i0__ac_val0; _j0++) {
            bak[_i0].ac_val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bak[_i0].ac_val_base = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bak__i0__dct_count0 = 1;
          bak[_i0].dct_count = (int *) malloc(_len_bak__i0__dct_count0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bak__i0__dct_count0; _j0++) {
            bak[_i0].dct_count[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bak[_i0].dct_error_sum = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].pb = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].me.map_generation = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].me.score_map = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].me.map = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].me.temp = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].me.scratchpad = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].end_mb_y = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].start_mb_y = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].dpcm_direction = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].dpcm_macroblock = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].block32 = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].block = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].blocks = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].sc.obmc_scratchpad = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].sc.b_scratchpad = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].sc.rd_scratchpad = ((-2 * (next_i()%2)) + 1) * next_i();
        bak[_i0].sc.edge_emu_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 100;
          struct TYPE_8__ * src = (struct TYPE_8__ *) malloc(_len_src0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
              int _len_src__i0__ac_val0 = 1;
          src[_i0].ac_val = (int *) malloc(_len_src__i0__ac_val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_src__i0__ac_val0; _j0++) {
            src[_i0].ac_val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        src[_i0].ac_val_base = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_src__i0__dct_count0 = 1;
          src[_i0].dct_count = (int *) malloc(_len_src__i0__dct_count0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_src__i0__dct_count0; _j0++) {
            src[_i0].dct_count[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        src[_i0].dct_error_sum = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].pb = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].me.map_generation = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].me.score_map = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].me.map = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].me.temp = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].me.scratchpad = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].end_mb_y = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].start_mb_y = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].dpcm_direction = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].dpcm_macroblock = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].block32 = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].block = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].blocks = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].sc.obmc_scratchpad = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].sc.b_scratchpad = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].sc.rd_scratchpad = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].sc.edge_emu_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          backup_duplicate_context(bak,src);
          for(int _aux = 0; _aux < _len_bak0; _aux++) {
          free(bak[_aux].ac_val);
          }
          for(int _aux = 0; _aux < _len_bak0; _aux++) {
          free(bak[_aux].dct_count);
          }
          free(bak);
          for(int _aux = 0; _aux < _len_src0; _aux++) {
          free(src[_aux].ac_val);
          }
          for(int _aux = 0; _aux < _len_src0; _aux++) {
          free(src[_aux].dct_count);
          }
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
