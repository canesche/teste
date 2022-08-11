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
typedef  int uint32_t ;
struct TYPE_5__ {int** run_model; int** op_model; int* range_model; int* count_model; int* fill_model; int** sxy_model; int** mv_model; TYPE_1__** pixel_model; } ;
struct TYPE_4__ {int total_freq; int* freq; int* lookup; } ;
typedef  TYPE_2__ SCPRContext ;

/* Variables and functions */

__attribute__((used)) static void reinit_tables(SCPRContext *s)
{
    int comp, i, j;

    for (comp = 0; comp < 3; comp++) {
        for (j = 0; j < 4096; j++) {
            if (s->pixel_model[comp][j].total_freq != 256) {
                for (i = 0; i < 256; i++)
                    s->pixel_model[comp][j].freq[i] = 1;
                for (i = 0; i < 16; i++)
                    s->pixel_model[comp][j].lookup[i] = 16;
                s->pixel_model[comp][j].total_freq = 256;
            }
        }
    }

    for (j = 0; j < 6; j++) {
        uint32_t *p = s->run_model[j];
        for (i = 0; i < 256; i++)
            p[i] = 1;
        p[256] = 256;
    }

    for (j = 0; j < 6; j++) {
        uint32_t *op = s->op_model[j];
        for (i = 0; i < 6; i++)
            op[i] = 1;
        op[6] = 6;
    }

    for (i = 0; i < 256; i++) {
        s->range_model[i] = 1;
        s->count_model[i] = 1;
    }
    s->range_model[256] = 256;
    s->count_model[256] = 256;

    for (i = 0; i < 5; i++) {
        s->fill_model[i] = 1;
    }
    s->fill_model[5] = 5;

    for (j = 0; j < 4; j++) {
        for (i = 0; i < 16; i++) {
            s->sxy_model[j][i] = 1;
        }
        s->sxy_model[j][16] = 16;
    }

    for (i = 0; i < 512; i++) {
        s->mv_model[0][i] = 1;
        s->mv_model[1][i] = 1;
    }
    s->mv_model[0][512] = 512;
    s->mv_model[1][512] = 512;
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
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__run_model0 = 1;
          s[_i0].run_model = (int **) malloc(_len_s__i0__run_model0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__run_model0; _j0++) {
            int _len_s__i0__run_model1 = 1;
            s[_i0].run_model[_j0] = (int *) malloc(_len_s__i0__run_model1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__run_model1; _j1++) {
              s[_i0].run_model[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__op_model0 = 1;
          s[_i0].op_model = (int **) malloc(_len_s__i0__op_model0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__op_model0; _j0++) {
            int _len_s__i0__op_model1 = 1;
            s[_i0].op_model[_j0] = (int *) malloc(_len_s__i0__op_model1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__op_model1; _j1++) {
              s[_i0].op_model[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__range_model0 = 1;
          s[_i0].range_model = (int *) malloc(_len_s__i0__range_model0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__range_model0; _j0++) {
            s[_i0].range_model[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__count_model0 = 1;
          s[_i0].count_model = (int *) malloc(_len_s__i0__count_model0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__count_model0; _j0++) {
            s[_i0].count_model[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__fill_model0 = 1;
          s[_i0].fill_model = (int *) malloc(_len_s__i0__fill_model0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__fill_model0; _j0++) {
            s[_i0].fill_model[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__sxy_model0 = 1;
          s[_i0].sxy_model = (int **) malloc(_len_s__i0__sxy_model0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__sxy_model0; _j0++) {
            int _len_s__i0__sxy_model1 = 1;
            s[_i0].sxy_model[_j0] = (int *) malloc(_len_s__i0__sxy_model1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__sxy_model1; _j1++) {
              s[_i0].sxy_model[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__mv_model0 = 1;
          s[_i0].mv_model = (int **) malloc(_len_s__i0__mv_model0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__mv_model0; _j0++) {
            int _len_s__i0__mv_model1 = 1;
            s[_i0].mv_model[_j0] = (int *) malloc(_len_s__i0__mv_model1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__mv_model1; _j1++) {
              s[_i0].mv_model[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__pixel_model0 = 1;
          s[_i0].pixel_model = (struct TYPE_4__ **) malloc(_len_s__i0__pixel_model0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__pixel_model0; _j0++) {
            int _len_s__i0__pixel_model1 = 1;
            s[_i0].pixel_model[_j0] = (struct TYPE_4__ *) malloc(_len_s__i0__pixel_model1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_s__i0__pixel_model1; _j1++) {
              s[_i0].pixel_model[_j0]->total_freq = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__pixel_model__j0__freq0 = 1;
          s[_i0].pixel_model[_j0]->freq = (int *) malloc(_len_s__i0__pixel_model__j0__freq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__pixel_model__j0__freq0; _j0++) {
            s[_i0].pixel_model[_j0]->freq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__pixel_model__j0__lookup0 = 1;
          s[_i0].pixel_model[_j0]->lookup = (int *) malloc(_len_s__i0__pixel_model__j0__lookup0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__pixel_model__j0__lookup0; _j0++) {
            s[_i0].pixel_model[_j0]->lookup[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          reinit_tables(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].run_model));
        free(s[_aux].run_model);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].op_model));
        free(s[_aux].op_model);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].range_model);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].count_model);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].fill_model);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].sxy_model));
        free(s[_aux].sxy_model);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].mv_model));
        free(s[_aux].mv_model);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].pixel_model));
        free(s[_aux].pixel_model);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__run_model0 = 1;
          s[_i0].run_model = (int **) malloc(_len_s__i0__run_model0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__run_model0; _j0++) {
            int _len_s__i0__run_model1 = 1;
            s[_i0].run_model[_j0] = (int *) malloc(_len_s__i0__run_model1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__run_model1; _j1++) {
              s[_i0].run_model[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__op_model0 = 1;
          s[_i0].op_model = (int **) malloc(_len_s__i0__op_model0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__op_model0; _j0++) {
            int _len_s__i0__op_model1 = 1;
            s[_i0].op_model[_j0] = (int *) malloc(_len_s__i0__op_model1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__op_model1; _j1++) {
              s[_i0].op_model[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__range_model0 = 1;
          s[_i0].range_model = (int *) malloc(_len_s__i0__range_model0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__range_model0; _j0++) {
            s[_i0].range_model[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__count_model0 = 1;
          s[_i0].count_model = (int *) malloc(_len_s__i0__count_model0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__count_model0; _j0++) {
            s[_i0].count_model[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__fill_model0 = 1;
          s[_i0].fill_model = (int *) malloc(_len_s__i0__fill_model0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__fill_model0; _j0++) {
            s[_i0].fill_model[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__sxy_model0 = 1;
          s[_i0].sxy_model = (int **) malloc(_len_s__i0__sxy_model0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__sxy_model0; _j0++) {
            int _len_s__i0__sxy_model1 = 1;
            s[_i0].sxy_model[_j0] = (int *) malloc(_len_s__i0__sxy_model1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__sxy_model1; _j1++) {
              s[_i0].sxy_model[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__mv_model0 = 1;
          s[_i0].mv_model = (int **) malloc(_len_s__i0__mv_model0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__mv_model0; _j0++) {
            int _len_s__i0__mv_model1 = 1;
            s[_i0].mv_model[_j0] = (int *) malloc(_len_s__i0__mv_model1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__mv_model1; _j1++) {
              s[_i0].mv_model[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__pixel_model0 = 1;
          s[_i0].pixel_model = (struct TYPE_4__ **) malloc(_len_s__i0__pixel_model0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__pixel_model0; _j0++) {
            int _len_s__i0__pixel_model1 = 1;
            s[_i0].pixel_model[_j0] = (struct TYPE_4__ *) malloc(_len_s__i0__pixel_model1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_s__i0__pixel_model1; _j1++) {
              s[_i0].pixel_model[_j0]->total_freq = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__pixel_model__j0__freq0 = 1;
          s[_i0].pixel_model[_j0]->freq = (int *) malloc(_len_s__i0__pixel_model__j0__freq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__pixel_model__j0__freq0; _j0++) {
            s[_i0].pixel_model[_j0]->freq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__pixel_model__j0__lookup0 = 1;
          s[_i0].pixel_model[_j0]->lookup = (int *) malloc(_len_s__i0__pixel_model__j0__lookup0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__pixel_model__j0__lookup0; _j0++) {
            s[_i0].pixel_model[_j0]->lookup[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          reinit_tables(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].run_model));
        free(s[_aux].run_model);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].op_model));
        free(s[_aux].op_model);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].range_model);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].count_model);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].fill_model);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].sxy_model));
        free(s[_aux].sxy_model);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].mv_model));
        free(s[_aux].mv_model);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].pixel_model));
        free(s[_aux].pixel_model);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__run_model0 = 1;
          s[_i0].run_model = (int **) malloc(_len_s__i0__run_model0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__run_model0; _j0++) {
            int _len_s__i0__run_model1 = 1;
            s[_i0].run_model[_j0] = (int *) malloc(_len_s__i0__run_model1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__run_model1; _j1++) {
              s[_i0].run_model[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__op_model0 = 1;
          s[_i0].op_model = (int **) malloc(_len_s__i0__op_model0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__op_model0; _j0++) {
            int _len_s__i0__op_model1 = 1;
            s[_i0].op_model[_j0] = (int *) malloc(_len_s__i0__op_model1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__op_model1; _j1++) {
              s[_i0].op_model[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__range_model0 = 1;
          s[_i0].range_model = (int *) malloc(_len_s__i0__range_model0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__range_model0; _j0++) {
            s[_i0].range_model[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__count_model0 = 1;
          s[_i0].count_model = (int *) malloc(_len_s__i0__count_model0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__count_model0; _j0++) {
            s[_i0].count_model[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__fill_model0 = 1;
          s[_i0].fill_model = (int *) malloc(_len_s__i0__fill_model0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__fill_model0; _j0++) {
            s[_i0].fill_model[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__sxy_model0 = 1;
          s[_i0].sxy_model = (int **) malloc(_len_s__i0__sxy_model0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__sxy_model0; _j0++) {
            int _len_s__i0__sxy_model1 = 1;
            s[_i0].sxy_model[_j0] = (int *) malloc(_len_s__i0__sxy_model1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__sxy_model1; _j1++) {
              s[_i0].sxy_model[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__mv_model0 = 1;
          s[_i0].mv_model = (int **) malloc(_len_s__i0__mv_model0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__mv_model0; _j0++) {
            int _len_s__i0__mv_model1 = 1;
            s[_i0].mv_model[_j0] = (int *) malloc(_len_s__i0__mv_model1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__mv_model1; _j1++) {
              s[_i0].mv_model[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__pixel_model0 = 1;
          s[_i0].pixel_model = (struct TYPE_4__ **) malloc(_len_s__i0__pixel_model0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__pixel_model0; _j0++) {
            int _len_s__i0__pixel_model1 = 1;
            s[_i0].pixel_model[_j0] = (struct TYPE_4__ *) malloc(_len_s__i0__pixel_model1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_s__i0__pixel_model1; _j1++) {
              s[_i0].pixel_model[_j0]->total_freq = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__pixel_model__j0__freq0 = 1;
          s[_i0].pixel_model[_j0]->freq = (int *) malloc(_len_s__i0__pixel_model__j0__freq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__pixel_model__j0__freq0; _j0++) {
            s[_i0].pixel_model[_j0]->freq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__pixel_model__j0__lookup0 = 1;
          s[_i0].pixel_model[_j0]->lookup = (int *) malloc(_len_s__i0__pixel_model__j0__lookup0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__pixel_model__j0__lookup0; _j0++) {
            s[_i0].pixel_model[_j0]->lookup[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          reinit_tables(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].run_model));
        free(s[_aux].run_model);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].op_model));
        free(s[_aux].op_model);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].range_model);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].count_model);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].fill_model);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].sxy_model));
        free(s[_aux].sxy_model);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].mv_model));
        free(s[_aux].mv_model);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].pixel_model));
        free(s[_aux].pixel_model);
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
