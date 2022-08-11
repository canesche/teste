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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  uint8_t ;
struct TYPE_9__ {int* i_data; int** coord; } ;
struct TYPE_8__ {int numXtiles; int numYtiles; int ncomponents; TYPE_1__* picture; scalar_t__ planar; TYPE_2__* tile; } ;
struct TYPE_7__ {TYPE_4__* comp; } ;
struct TYPE_6__ {int* linesize; int /*<<< orphan*/ ** data; } ;
typedef  TYPE_2__ Jpeg2000Tile ;
typedef  TYPE_3__ Jpeg2000EncoderContext ;
typedef  TYPE_4__ Jpeg2000Component ;

/* Variables and functions */

__attribute__((used)) static void copy_frame(Jpeg2000EncoderContext *s)
{
    int tileno, compno, i, y, x;
    uint8_t *line;
    for (tileno = 0; tileno < s->numXtiles * s->numYtiles; tileno++){
        Jpeg2000Tile *tile = s->tile + tileno;
        if (s->planar){
            for (compno = 0; compno < s->ncomponents; compno++){
                Jpeg2000Component *comp = tile->comp + compno;
                int *dst = comp->i_data;
                line = s->picture->data[compno]
                       + comp->coord[1][0] * s->picture->linesize[compno]
                       + comp->coord[0][0];
                for (y = comp->coord[1][0]; y < comp->coord[1][1]; y++){
                    uint8_t *ptr = line;
                    for (x = comp->coord[0][0]; x < comp->coord[0][1]; x++)
                        *dst++ = *ptr++ - (1 << 7);
                    line += s->picture->linesize[compno];
                }
            }
        } else{
            line = s->picture->data[0] + tile->comp[0].coord[1][0] * s->picture->linesize[0]
                   + tile->comp[0].coord[0][0] * s->ncomponents;

            i = 0;
            for (y = tile->comp[0].coord[1][0]; y < tile->comp[0].coord[1][1]; y++){
                uint8_t *ptr = line;
                for (x = tile->comp[0].coord[0][0]; x < tile->comp[0].coord[0][1]; x++, i++){
                    for (compno = 0; compno < s->ncomponents; compno++){
                        tile->comp[compno].i_data[i] = *ptr++  - (1 << 7);
                    }
                }
                line += s->picture->linesize[0];
            }
        }
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
          int _len_s0 = 1;
          struct TYPE_8__ * s = (struct TYPE_8__ *) malloc(_len_s0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].numXtiles = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].numYtiles = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].ncomponents = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__picture0 = 1;
          s[_i0].picture = (struct TYPE_6__ *) malloc(_len_s__i0__picture0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__picture0; _j0++) {
              int _len_s__i0__picture_linesize0 = 1;
          s[_i0].picture->linesize = (int *) malloc(_len_s__i0__picture_linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__picture_linesize0; _j0++) {
            s[_i0].picture->linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__picture_data0 = 1;
          s[_i0].picture->data = (int **) malloc(_len_s__i0__picture_data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__picture_data0; _j0++) {
            int _len_s__i0__picture_data1 = 1;
            s[_i0].picture->data[_j0] = (int *) malloc(_len_s__i0__picture_data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__picture_data1; _j1++) {
              s[_i0].picture->data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
        s[_i0].planar = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__tile0 = 1;
          s[_i0].tile = (struct TYPE_7__ *) malloc(_len_s__i0__tile0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__tile0; _j0++) {
              int _len_s__i0__tile_comp0 = 1;
          s[_i0].tile->comp = (struct TYPE_9__ *) malloc(_len_s__i0__tile_comp0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_s__i0__tile_comp0; _j0++) {
              int _len_s__i0__tile_comp_i_data0 = 1;
          s[_i0].tile->comp->i_data = (int *) malloc(_len_s__i0__tile_comp_i_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__tile_comp_i_data0; _j0++) {
            s[_i0].tile->comp->i_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__tile_comp_coord0 = 1;
          s[_i0].tile->comp->coord = (int **) malloc(_len_s__i0__tile_comp_coord0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__tile_comp_coord0; _j0++) {
            int _len_s__i0__tile_comp_coord1 = 1;
            s[_i0].tile->comp->coord[_j0] = (int *) malloc(_len_s__i0__tile_comp_coord1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__tile_comp_coord1; _j1++) {
              s[_i0].tile->comp->coord[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          }
          copy_frame(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].picture);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].tile);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct TYPE_8__ * s = (struct TYPE_8__ *) malloc(_len_s0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].numXtiles = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].numYtiles = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].ncomponents = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__picture0 = 1;
          s[_i0].picture = (struct TYPE_6__ *) malloc(_len_s__i0__picture0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__picture0; _j0++) {
              int _len_s__i0__picture_linesize0 = 1;
          s[_i0].picture->linesize = (int *) malloc(_len_s__i0__picture_linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__picture_linesize0; _j0++) {
            s[_i0].picture->linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__picture_data0 = 1;
          s[_i0].picture->data = (int **) malloc(_len_s__i0__picture_data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__picture_data0; _j0++) {
            int _len_s__i0__picture_data1 = 1;
            s[_i0].picture->data[_j0] = (int *) malloc(_len_s__i0__picture_data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__picture_data1; _j1++) {
              s[_i0].picture->data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
        s[_i0].planar = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__tile0 = 1;
          s[_i0].tile = (struct TYPE_7__ *) malloc(_len_s__i0__tile0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__tile0; _j0++) {
              int _len_s__i0__tile_comp0 = 1;
          s[_i0].tile->comp = (struct TYPE_9__ *) malloc(_len_s__i0__tile_comp0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_s__i0__tile_comp0; _j0++) {
              int _len_s__i0__tile_comp_i_data0 = 1;
          s[_i0].tile->comp->i_data = (int *) malloc(_len_s__i0__tile_comp_i_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__tile_comp_i_data0; _j0++) {
            s[_i0].tile->comp->i_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__tile_comp_coord0 = 1;
          s[_i0].tile->comp->coord = (int **) malloc(_len_s__i0__tile_comp_coord0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__tile_comp_coord0; _j0++) {
            int _len_s__i0__tile_comp_coord1 = 1;
            s[_i0].tile->comp->coord[_j0] = (int *) malloc(_len_s__i0__tile_comp_coord1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__tile_comp_coord1; _j1++) {
              s[_i0].tile->comp->coord[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          }
          copy_frame(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].picture);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].tile);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct TYPE_8__ * s = (struct TYPE_8__ *) malloc(_len_s0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].numXtiles = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].numYtiles = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].ncomponents = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__picture0 = 1;
          s[_i0].picture = (struct TYPE_6__ *) malloc(_len_s__i0__picture0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__picture0; _j0++) {
              int _len_s__i0__picture_linesize0 = 1;
          s[_i0].picture->linesize = (int *) malloc(_len_s__i0__picture_linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__picture_linesize0; _j0++) {
            s[_i0].picture->linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__picture_data0 = 1;
          s[_i0].picture->data = (int **) malloc(_len_s__i0__picture_data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__picture_data0; _j0++) {
            int _len_s__i0__picture_data1 = 1;
            s[_i0].picture->data[_j0] = (int *) malloc(_len_s__i0__picture_data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__picture_data1; _j1++) {
              s[_i0].picture->data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
        s[_i0].planar = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__tile0 = 1;
          s[_i0].tile = (struct TYPE_7__ *) malloc(_len_s__i0__tile0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__tile0; _j0++) {
              int _len_s__i0__tile_comp0 = 1;
          s[_i0].tile->comp = (struct TYPE_9__ *) malloc(_len_s__i0__tile_comp0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_s__i0__tile_comp0; _j0++) {
              int _len_s__i0__tile_comp_i_data0 = 1;
          s[_i0].tile->comp->i_data = (int *) malloc(_len_s__i0__tile_comp_i_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__tile_comp_i_data0; _j0++) {
            s[_i0].tile->comp->i_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__tile_comp_coord0 = 1;
          s[_i0].tile->comp->coord = (int **) malloc(_len_s__i0__tile_comp_coord0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__tile_comp_coord0; _j0++) {
            int _len_s__i0__tile_comp_coord1 = 1;
            s[_i0].tile->comp->coord[_j0] = (int *) malloc(_len_s__i0__tile_comp_coord1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__tile_comp_coord1; _j1++) {
              s[_i0].tile->comp->coord[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          }
          copy_frame(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].picture);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].tile);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
