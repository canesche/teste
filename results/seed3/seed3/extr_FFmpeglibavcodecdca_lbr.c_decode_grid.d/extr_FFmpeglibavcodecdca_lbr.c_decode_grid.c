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
typedef  int uint8_t ;
typedef  int int8_t ;
struct TYPE_3__ {int nsubbands; int*** grid_1_scf; int*** high_res_scf; int*** grid_3_scf; int** grid_3_avg; } ;
typedef  TYPE_1__ DCALbrDecoder ;

/* Variables and functions */
 int** ff_dca_grid_1_weights ; 
 int* ff_dca_scf_to_grid_1 ; 

__attribute__((used)) static void decode_grid(DCALbrDecoder *s, int ch1, int ch2)
{
    int i, ch, sb;

    for (ch = ch1; ch <= ch2; ch++) {
        for (sb = 0; sb < s->nsubbands; sb++) {
            int g1_sb = ff_dca_scf_to_grid_1[sb];

            uint8_t *g1_scf_a = s->grid_1_scf[ch][g1_sb    ];
            uint8_t *g1_scf_b = s->grid_1_scf[ch][g1_sb + 1];

            int w1 = ff_dca_grid_1_weights[g1_sb    ][sb];
            int w2 = ff_dca_grid_1_weights[g1_sb + 1][sb];

            uint8_t *hr_scf = s->high_res_scf[ch][sb];

            if (sb < 4) {
                for (i = 0; i < 8; i++) {
                    int scf = w1 * g1_scf_a[i] + w2 * g1_scf_b[i];
                    hr_scf[i] = scf >> 7;
                }
            } else {
                int8_t *g3_scf = s->grid_3_scf[ch][sb - 4];
                int g3_avg = s->grid_3_avg[ch][sb - 4];

                for (i = 0; i < 8; i++) {
                    int scf = w1 * g1_scf_a[i] + w2 * g1_scf_b[i];
                    hr_scf[i] = (scf >> 7) - g3_avg - g3_scf[i];
                }
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
          int ch1 = 100;
          int ch2 = 100;
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].nsubbands = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__grid_1_scf0 = 1;
          s[_i0].grid_1_scf = (int ***) malloc(_len_s__i0__grid_1_scf0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_s__i0__grid_1_scf0; _j0++) {
            int _len_s__i0__grid_1_scf1 = 1;
            s[_i0].grid_1_scf[_j0] = (int **) malloc(_len_s__i0__grid_1_scf1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_s__i0__grid_1_scf1; _j1++) {
              int _len_s__i0__grid_1_scf2 = 1;
              s[_i0].grid_1_scf[_j0][_j1] = (int *) malloc(_len_s__i0__grid_1_scf2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_s__i0__grid_1_scf2; _j2++) {
                s[_i0].grid_1_scf[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_s__i0__high_res_scf0 = 1;
          s[_i0].high_res_scf = (int ***) malloc(_len_s__i0__high_res_scf0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_s__i0__high_res_scf0; _j0++) {
            int _len_s__i0__high_res_scf1 = 1;
            s[_i0].high_res_scf[_j0] = (int **) malloc(_len_s__i0__high_res_scf1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_s__i0__high_res_scf1; _j1++) {
              int _len_s__i0__high_res_scf2 = 1;
              s[_i0].high_res_scf[_j0][_j1] = (int *) malloc(_len_s__i0__high_res_scf2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_s__i0__high_res_scf2; _j2++) {
                s[_i0].high_res_scf[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_s__i0__grid_3_scf0 = 1;
          s[_i0].grid_3_scf = (int ***) malloc(_len_s__i0__grid_3_scf0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_s__i0__grid_3_scf0; _j0++) {
            int _len_s__i0__grid_3_scf1 = 1;
            s[_i0].grid_3_scf[_j0] = (int **) malloc(_len_s__i0__grid_3_scf1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_s__i0__grid_3_scf1; _j1++) {
              int _len_s__i0__grid_3_scf2 = 1;
              s[_i0].grid_3_scf[_j0][_j1] = (int *) malloc(_len_s__i0__grid_3_scf2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_s__i0__grid_3_scf2; _j2++) {
                s[_i0].grid_3_scf[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_s__i0__grid_3_avg0 = 1;
          s[_i0].grid_3_avg = (int **) malloc(_len_s__i0__grid_3_avg0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__grid_3_avg0; _j0++) {
            int _len_s__i0__grid_3_avg1 = 1;
            s[_i0].grid_3_avg[_j0] = (int *) malloc(_len_s__i0__grid_3_avg1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__grid_3_avg1; _j1++) {
              s[_i0].grid_3_avg[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          decode_grid(s,ch1,ch2);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].grid_3_avg));
        free(s[_aux].grid_3_avg);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ch1 = 255;
          int ch2 = 255;
          int _len_s0 = 65025;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].nsubbands = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__grid_1_scf0 = 1;
          s[_i0].grid_1_scf = (int ***) malloc(_len_s__i0__grid_1_scf0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_s__i0__grid_1_scf0; _j0++) {
            int _len_s__i0__grid_1_scf1 = 1;
            s[_i0].grid_1_scf[_j0] = (int **) malloc(_len_s__i0__grid_1_scf1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_s__i0__grid_1_scf1; _j1++) {
              int _len_s__i0__grid_1_scf2 = 1;
              s[_i0].grid_1_scf[_j0][_j1] = (int *) malloc(_len_s__i0__grid_1_scf2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_s__i0__grid_1_scf2; _j2++) {
                s[_i0].grid_1_scf[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_s__i0__high_res_scf0 = 1;
          s[_i0].high_res_scf = (int ***) malloc(_len_s__i0__high_res_scf0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_s__i0__high_res_scf0; _j0++) {
            int _len_s__i0__high_res_scf1 = 1;
            s[_i0].high_res_scf[_j0] = (int **) malloc(_len_s__i0__high_res_scf1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_s__i0__high_res_scf1; _j1++) {
              int _len_s__i0__high_res_scf2 = 1;
              s[_i0].high_res_scf[_j0][_j1] = (int *) malloc(_len_s__i0__high_res_scf2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_s__i0__high_res_scf2; _j2++) {
                s[_i0].high_res_scf[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_s__i0__grid_3_scf0 = 1;
          s[_i0].grid_3_scf = (int ***) malloc(_len_s__i0__grid_3_scf0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_s__i0__grid_3_scf0; _j0++) {
            int _len_s__i0__grid_3_scf1 = 1;
            s[_i0].grid_3_scf[_j0] = (int **) malloc(_len_s__i0__grid_3_scf1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_s__i0__grid_3_scf1; _j1++) {
              int _len_s__i0__grid_3_scf2 = 1;
              s[_i0].grid_3_scf[_j0][_j1] = (int *) malloc(_len_s__i0__grid_3_scf2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_s__i0__grid_3_scf2; _j2++) {
                s[_i0].grid_3_scf[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_s__i0__grid_3_avg0 = 1;
          s[_i0].grid_3_avg = (int **) malloc(_len_s__i0__grid_3_avg0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__grid_3_avg0; _j0++) {
            int _len_s__i0__grid_3_avg1 = 1;
            s[_i0].grid_3_avg[_j0] = (int *) malloc(_len_s__i0__grid_3_avg1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__grid_3_avg1; _j1++) {
              s[_i0].grid_3_avg[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          decode_grid(s,ch1,ch2);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].grid_3_avg));
        free(s[_aux].grid_3_avg);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ch1 = 10;
          int ch2 = 10;
          int _len_s0 = 100;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].nsubbands = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__grid_1_scf0 = 1;
          s[_i0].grid_1_scf = (int ***) malloc(_len_s__i0__grid_1_scf0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_s__i0__grid_1_scf0; _j0++) {
            int _len_s__i0__grid_1_scf1 = 1;
            s[_i0].grid_1_scf[_j0] = (int **) malloc(_len_s__i0__grid_1_scf1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_s__i0__grid_1_scf1; _j1++) {
              int _len_s__i0__grid_1_scf2 = 1;
              s[_i0].grid_1_scf[_j0][_j1] = (int *) malloc(_len_s__i0__grid_1_scf2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_s__i0__grid_1_scf2; _j2++) {
                s[_i0].grid_1_scf[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_s__i0__high_res_scf0 = 1;
          s[_i0].high_res_scf = (int ***) malloc(_len_s__i0__high_res_scf0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_s__i0__high_res_scf0; _j0++) {
            int _len_s__i0__high_res_scf1 = 1;
            s[_i0].high_res_scf[_j0] = (int **) malloc(_len_s__i0__high_res_scf1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_s__i0__high_res_scf1; _j1++) {
              int _len_s__i0__high_res_scf2 = 1;
              s[_i0].high_res_scf[_j0][_j1] = (int *) malloc(_len_s__i0__high_res_scf2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_s__i0__high_res_scf2; _j2++) {
                s[_i0].high_res_scf[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_s__i0__grid_3_scf0 = 1;
          s[_i0].grid_3_scf = (int ***) malloc(_len_s__i0__grid_3_scf0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_s__i0__grid_3_scf0; _j0++) {
            int _len_s__i0__grid_3_scf1 = 1;
            s[_i0].grid_3_scf[_j0] = (int **) malloc(_len_s__i0__grid_3_scf1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_s__i0__grid_3_scf1; _j1++) {
              int _len_s__i0__grid_3_scf2 = 1;
              s[_i0].grid_3_scf[_j0][_j1] = (int *) malloc(_len_s__i0__grid_3_scf2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_s__i0__grid_3_scf2; _j2++) {
                s[_i0].grid_3_scf[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_s__i0__grid_3_avg0 = 1;
          s[_i0].grid_3_avg = (int **) malloc(_len_s__i0__grid_3_avg0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__grid_3_avg0; _j0++) {
            int _len_s__i0__grid_3_avg1 = 1;
            s[_i0].grid_3_avg[_j0] = (int *) malloc(_len_s__i0__grid_3_avg1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__grid_3_avg1; _j1++) {
              s[_i0].grid_3_avg[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          decode_grid(s,ch1,ch2);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].grid_3_avg));
        free(s[_aux].grid_3_avg);
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
