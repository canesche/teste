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
typedef  int u8 ;
struct dm_iqk_info {int* iqk_channel; int** lok_idac; int** rxiqk_agc; int** bypass_iqk; int*** iqk_fail_report; int**** iqk_cfir_real; int**** iqk_cfir_imag; int*** retry_count; } ;

/* Variables and functions */
 int SS_8822B ; 

__attribute__((used)) static inline void phydm_init_iqk_information(struct dm_iqk_info *iqk_info)
{
	u8 i, j, k, m;

	for (i = 0; i < 2; i++) {
		iqk_info->iqk_channel[i] = 0x0;

		for (j = 0; j < SS_8822B; j++) {
			iqk_info->lok_idac[i][j] = 0x0;
			iqk_info->rxiqk_agc[i][j] = 0x0;
			iqk_info->bypass_iqk[i][j] = 0x0;

			for (k = 0; k < 2; k++) {
				iqk_info->iqk_fail_report[i][j][k] = true;
				for (m = 0; m < 8; m++) {
					iqk_info->iqk_cfir_real[i][j][k][m] =
						0x0;
					iqk_info->iqk_cfir_imag[i][j][k][m] =
						0x0;
				}
			}

			for (k = 0; k < 3; k++)
				iqk_info->retry_count[i][j][k] = 0x0;
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
          int _len_iqk_info0 = 1;
          struct dm_iqk_info * iqk_info = (struct dm_iqk_info *) malloc(_len_iqk_info0*sizeof(struct dm_iqk_info));
          for(int _i0 = 0; _i0 < _len_iqk_info0; _i0++) {
              int _len_iqk_info__i0__iqk_channel0 = 1;
          iqk_info[_i0].iqk_channel = (int *) malloc(_len_iqk_info__i0__iqk_channel0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_iqk_info__i0__iqk_channel0; _j0++) {
            iqk_info[_i0].iqk_channel[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iqk_info__i0__lok_idac0 = 1;
          iqk_info[_i0].lok_idac = (int **) malloc(_len_iqk_info__i0__lok_idac0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_iqk_info__i0__lok_idac0; _j0++) {
            int _len_iqk_info__i0__lok_idac1 = 1;
            iqk_info[_i0].lok_idac[_j0] = (int *) malloc(_len_iqk_info__i0__lok_idac1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_iqk_info__i0__lok_idac1; _j1++) {
              iqk_info[_i0].lok_idac[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_iqk_info__i0__rxiqk_agc0 = 1;
          iqk_info[_i0].rxiqk_agc = (int **) malloc(_len_iqk_info__i0__rxiqk_agc0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_iqk_info__i0__rxiqk_agc0; _j0++) {
            int _len_iqk_info__i0__rxiqk_agc1 = 1;
            iqk_info[_i0].rxiqk_agc[_j0] = (int *) malloc(_len_iqk_info__i0__rxiqk_agc1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_iqk_info__i0__rxiqk_agc1; _j1++) {
              iqk_info[_i0].rxiqk_agc[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_iqk_info__i0__bypass_iqk0 = 1;
          iqk_info[_i0].bypass_iqk = (int **) malloc(_len_iqk_info__i0__bypass_iqk0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_iqk_info__i0__bypass_iqk0; _j0++) {
            int _len_iqk_info__i0__bypass_iqk1 = 1;
            iqk_info[_i0].bypass_iqk[_j0] = (int *) malloc(_len_iqk_info__i0__bypass_iqk1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_iqk_info__i0__bypass_iqk1; _j1++) {
              iqk_info[_i0].bypass_iqk[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_iqk_info__i0__iqk_fail_report0 = 1;
          iqk_info[_i0].iqk_fail_report = (int ***) malloc(_len_iqk_info__i0__iqk_fail_report0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_iqk_info__i0__iqk_fail_report0; _j0++) {
            int _len_iqk_info__i0__iqk_fail_report1 = 1;
            iqk_info[_i0].iqk_fail_report[_j0] = (int **) malloc(_len_iqk_info__i0__iqk_fail_report1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_iqk_info__i0__iqk_fail_report1; _j1++) {
              int _len_iqk_info__i0__iqk_fail_report2 = 1;
              iqk_info[_i0].iqk_fail_report[_j0][_j1] = (int *) malloc(_len_iqk_info__i0__iqk_fail_report2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_iqk_info__i0__iqk_fail_report2; _j2++) {
                iqk_info[_i0].iqk_fail_report[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_iqk_info__i0__iqk_cfir_real0 = 1;
          iqk_info[_i0].iqk_cfir_real = (int ****) malloc(_len_iqk_info__i0__iqk_cfir_real0*sizeof(int ***));
          for(int _j0 = 0; _j0 < _len_iqk_info__i0__iqk_cfir_real0; _j0++) {
            int _len_iqk_info__i0__iqk_cfir_real1 = 1;
            iqk_info[_i0].iqk_cfir_real[_j0] = (int ***) malloc(_len_iqk_info__i0__iqk_cfir_real1*sizeof(int **));
            for(int _j1 = 0; _j1 < _len_iqk_info__i0__iqk_cfir_real1; _j1++) {
              int _len_iqk_info__i0__iqk_cfir_real2 = 1;
              iqk_info[_i0].iqk_cfir_real[_j0][_j1] = (int **) malloc(_len_iqk_info__i0__iqk_cfir_real2*sizeof(int *));
              for(int _j2 = 0; _j2 < _len_iqk_info__i0__iqk_cfir_real2; _j2++) {
                int _len_iqk_info__i0__iqk_cfir_real3 = 1;
                iqk_info[_i0].iqk_cfir_real[_j0][_j1][_j2] = (int *) malloc(_len_iqk_info__i0__iqk_cfir_real3*sizeof(int));
                for(int _j3 = 0; _j3 < _len_iqk_info__i0__iqk_cfir_real3; _j3++) {
                  iqk_info[_i0].iqk_cfir_real[_j0][_j1][_j2][_j3] = ((-2 * (next_i()%2)) + 1) * next_i();
                }
              }
            }
          }
          int _len_iqk_info__i0__iqk_cfir_imag0 = 1;
          iqk_info[_i0].iqk_cfir_imag = (int ****) malloc(_len_iqk_info__i0__iqk_cfir_imag0*sizeof(int ***));
          for(int _j0 = 0; _j0 < _len_iqk_info__i0__iqk_cfir_imag0; _j0++) {
            int _len_iqk_info__i0__iqk_cfir_imag1 = 1;
            iqk_info[_i0].iqk_cfir_imag[_j0] = (int ***) malloc(_len_iqk_info__i0__iqk_cfir_imag1*sizeof(int **));
            for(int _j1 = 0; _j1 < _len_iqk_info__i0__iqk_cfir_imag1; _j1++) {
              int _len_iqk_info__i0__iqk_cfir_imag2 = 1;
              iqk_info[_i0].iqk_cfir_imag[_j0][_j1] = (int **) malloc(_len_iqk_info__i0__iqk_cfir_imag2*sizeof(int *));
              for(int _j2 = 0; _j2 < _len_iqk_info__i0__iqk_cfir_imag2; _j2++) {
                int _len_iqk_info__i0__iqk_cfir_imag3 = 1;
                iqk_info[_i0].iqk_cfir_imag[_j0][_j1][_j2] = (int *) malloc(_len_iqk_info__i0__iqk_cfir_imag3*sizeof(int));
                for(int _j3 = 0; _j3 < _len_iqk_info__i0__iqk_cfir_imag3; _j3++) {
                  iqk_info[_i0].iqk_cfir_imag[_j0][_j1][_j2][_j3] = ((-2 * (next_i()%2)) + 1) * next_i();
                }
              }
            }
          }
          int _len_iqk_info__i0__retry_count0 = 1;
          iqk_info[_i0].retry_count = (int ***) malloc(_len_iqk_info__i0__retry_count0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_iqk_info__i0__retry_count0; _j0++) {
            int _len_iqk_info__i0__retry_count1 = 1;
            iqk_info[_i0].retry_count[_j0] = (int **) malloc(_len_iqk_info__i0__retry_count1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_iqk_info__i0__retry_count1; _j1++) {
              int _len_iqk_info__i0__retry_count2 = 1;
              iqk_info[_i0].retry_count[_j0][_j1] = (int *) malloc(_len_iqk_info__i0__retry_count2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_iqk_info__i0__retry_count2; _j2++) {
                iqk_info[_i0].retry_count[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          phydm_init_iqk_information(iqk_info);
          for(int _aux = 0; _aux < _len_iqk_info0; _aux++) {
          free(iqk_info[_aux].iqk_channel);
          }
          for(int _aux = 0; _aux < _len_iqk_info0; _aux++) {
          free(*(iqk_info[_aux].lok_idac));
        free(iqk_info[_aux].lok_idac);
          }
          for(int _aux = 0; _aux < _len_iqk_info0; _aux++) {
          free(*(iqk_info[_aux].rxiqk_agc));
        free(iqk_info[_aux].rxiqk_agc);
          }
          for(int _aux = 0; _aux < _len_iqk_info0; _aux++) {
          free(*(iqk_info[_aux].bypass_iqk));
        free(iqk_info[_aux].bypass_iqk);
          }
          for(int _aux = 0; _aux < _len_iqk_info0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_iqk_info0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_iqk_info0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_iqk_info0; _aux++) {
          }
          free(iqk_info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_iqk_info0 = 65025;
          struct dm_iqk_info * iqk_info = (struct dm_iqk_info *) malloc(_len_iqk_info0*sizeof(struct dm_iqk_info));
          for(int _i0 = 0; _i0 < _len_iqk_info0; _i0++) {
              int _len_iqk_info__i0__iqk_channel0 = 1;
          iqk_info[_i0].iqk_channel = (int *) malloc(_len_iqk_info__i0__iqk_channel0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_iqk_info__i0__iqk_channel0; _j0++) {
            iqk_info[_i0].iqk_channel[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iqk_info__i0__lok_idac0 = 1;
          iqk_info[_i0].lok_idac = (int **) malloc(_len_iqk_info__i0__lok_idac0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_iqk_info__i0__lok_idac0; _j0++) {
            int _len_iqk_info__i0__lok_idac1 = 1;
            iqk_info[_i0].lok_idac[_j0] = (int *) malloc(_len_iqk_info__i0__lok_idac1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_iqk_info__i0__lok_idac1; _j1++) {
              iqk_info[_i0].lok_idac[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_iqk_info__i0__rxiqk_agc0 = 1;
          iqk_info[_i0].rxiqk_agc = (int **) malloc(_len_iqk_info__i0__rxiqk_agc0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_iqk_info__i0__rxiqk_agc0; _j0++) {
            int _len_iqk_info__i0__rxiqk_agc1 = 1;
            iqk_info[_i0].rxiqk_agc[_j0] = (int *) malloc(_len_iqk_info__i0__rxiqk_agc1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_iqk_info__i0__rxiqk_agc1; _j1++) {
              iqk_info[_i0].rxiqk_agc[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_iqk_info__i0__bypass_iqk0 = 1;
          iqk_info[_i0].bypass_iqk = (int **) malloc(_len_iqk_info__i0__bypass_iqk0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_iqk_info__i0__bypass_iqk0; _j0++) {
            int _len_iqk_info__i0__bypass_iqk1 = 1;
            iqk_info[_i0].bypass_iqk[_j0] = (int *) malloc(_len_iqk_info__i0__bypass_iqk1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_iqk_info__i0__bypass_iqk1; _j1++) {
              iqk_info[_i0].bypass_iqk[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_iqk_info__i0__iqk_fail_report0 = 1;
          iqk_info[_i0].iqk_fail_report = (int ***) malloc(_len_iqk_info__i0__iqk_fail_report0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_iqk_info__i0__iqk_fail_report0; _j0++) {
            int _len_iqk_info__i0__iqk_fail_report1 = 1;
            iqk_info[_i0].iqk_fail_report[_j0] = (int **) malloc(_len_iqk_info__i0__iqk_fail_report1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_iqk_info__i0__iqk_fail_report1; _j1++) {
              int _len_iqk_info__i0__iqk_fail_report2 = 1;
              iqk_info[_i0].iqk_fail_report[_j0][_j1] = (int *) malloc(_len_iqk_info__i0__iqk_fail_report2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_iqk_info__i0__iqk_fail_report2; _j2++) {
                iqk_info[_i0].iqk_fail_report[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_iqk_info__i0__iqk_cfir_real0 = 1;
          iqk_info[_i0].iqk_cfir_real = (int ****) malloc(_len_iqk_info__i0__iqk_cfir_real0*sizeof(int ***));
          for(int _j0 = 0; _j0 < _len_iqk_info__i0__iqk_cfir_real0; _j0++) {
            int _len_iqk_info__i0__iqk_cfir_real1 = 1;
            iqk_info[_i0].iqk_cfir_real[_j0] = (int ***) malloc(_len_iqk_info__i0__iqk_cfir_real1*sizeof(int **));
            for(int _j1 = 0; _j1 < _len_iqk_info__i0__iqk_cfir_real1; _j1++) {
              int _len_iqk_info__i0__iqk_cfir_real2 = 1;
              iqk_info[_i0].iqk_cfir_real[_j0][_j1] = (int **) malloc(_len_iqk_info__i0__iqk_cfir_real2*sizeof(int *));
              for(int _j2 = 0; _j2 < _len_iqk_info__i0__iqk_cfir_real2; _j2++) {
                int _len_iqk_info__i0__iqk_cfir_real3 = 1;
                iqk_info[_i0].iqk_cfir_real[_j0][_j1][_j2] = (int *) malloc(_len_iqk_info__i0__iqk_cfir_real3*sizeof(int));
                for(int _j3 = 0; _j3 < _len_iqk_info__i0__iqk_cfir_real3; _j3++) {
                  iqk_info[_i0].iqk_cfir_real[_j0][_j1][_j2][_j3] = ((-2 * (next_i()%2)) + 1) * next_i();
                }
              }
            }
          }
          int _len_iqk_info__i0__iqk_cfir_imag0 = 1;
          iqk_info[_i0].iqk_cfir_imag = (int ****) malloc(_len_iqk_info__i0__iqk_cfir_imag0*sizeof(int ***));
          for(int _j0 = 0; _j0 < _len_iqk_info__i0__iqk_cfir_imag0; _j0++) {
            int _len_iqk_info__i0__iqk_cfir_imag1 = 1;
            iqk_info[_i0].iqk_cfir_imag[_j0] = (int ***) malloc(_len_iqk_info__i0__iqk_cfir_imag1*sizeof(int **));
            for(int _j1 = 0; _j1 < _len_iqk_info__i0__iqk_cfir_imag1; _j1++) {
              int _len_iqk_info__i0__iqk_cfir_imag2 = 1;
              iqk_info[_i0].iqk_cfir_imag[_j0][_j1] = (int **) malloc(_len_iqk_info__i0__iqk_cfir_imag2*sizeof(int *));
              for(int _j2 = 0; _j2 < _len_iqk_info__i0__iqk_cfir_imag2; _j2++) {
                int _len_iqk_info__i0__iqk_cfir_imag3 = 1;
                iqk_info[_i0].iqk_cfir_imag[_j0][_j1][_j2] = (int *) malloc(_len_iqk_info__i0__iqk_cfir_imag3*sizeof(int));
                for(int _j3 = 0; _j3 < _len_iqk_info__i0__iqk_cfir_imag3; _j3++) {
                  iqk_info[_i0].iqk_cfir_imag[_j0][_j1][_j2][_j3] = ((-2 * (next_i()%2)) + 1) * next_i();
                }
              }
            }
          }
          int _len_iqk_info__i0__retry_count0 = 1;
          iqk_info[_i0].retry_count = (int ***) malloc(_len_iqk_info__i0__retry_count0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_iqk_info__i0__retry_count0; _j0++) {
            int _len_iqk_info__i0__retry_count1 = 1;
            iqk_info[_i0].retry_count[_j0] = (int **) malloc(_len_iqk_info__i0__retry_count1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_iqk_info__i0__retry_count1; _j1++) {
              int _len_iqk_info__i0__retry_count2 = 1;
              iqk_info[_i0].retry_count[_j0][_j1] = (int *) malloc(_len_iqk_info__i0__retry_count2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_iqk_info__i0__retry_count2; _j2++) {
                iqk_info[_i0].retry_count[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          phydm_init_iqk_information(iqk_info);
          for(int _aux = 0; _aux < _len_iqk_info0; _aux++) {
          free(iqk_info[_aux].iqk_channel);
          }
          for(int _aux = 0; _aux < _len_iqk_info0; _aux++) {
          free(*(iqk_info[_aux].lok_idac));
        free(iqk_info[_aux].lok_idac);
          }
          for(int _aux = 0; _aux < _len_iqk_info0; _aux++) {
          free(*(iqk_info[_aux].rxiqk_agc));
        free(iqk_info[_aux].rxiqk_agc);
          }
          for(int _aux = 0; _aux < _len_iqk_info0; _aux++) {
          free(*(iqk_info[_aux].bypass_iqk));
        free(iqk_info[_aux].bypass_iqk);
          }
          for(int _aux = 0; _aux < _len_iqk_info0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_iqk_info0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_iqk_info0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_iqk_info0; _aux++) {
          }
          free(iqk_info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_iqk_info0 = 100;
          struct dm_iqk_info * iqk_info = (struct dm_iqk_info *) malloc(_len_iqk_info0*sizeof(struct dm_iqk_info));
          for(int _i0 = 0; _i0 < _len_iqk_info0; _i0++) {
              int _len_iqk_info__i0__iqk_channel0 = 1;
          iqk_info[_i0].iqk_channel = (int *) malloc(_len_iqk_info__i0__iqk_channel0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_iqk_info__i0__iqk_channel0; _j0++) {
            iqk_info[_i0].iqk_channel[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iqk_info__i0__lok_idac0 = 1;
          iqk_info[_i0].lok_idac = (int **) malloc(_len_iqk_info__i0__lok_idac0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_iqk_info__i0__lok_idac0; _j0++) {
            int _len_iqk_info__i0__lok_idac1 = 1;
            iqk_info[_i0].lok_idac[_j0] = (int *) malloc(_len_iqk_info__i0__lok_idac1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_iqk_info__i0__lok_idac1; _j1++) {
              iqk_info[_i0].lok_idac[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_iqk_info__i0__rxiqk_agc0 = 1;
          iqk_info[_i0].rxiqk_agc = (int **) malloc(_len_iqk_info__i0__rxiqk_agc0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_iqk_info__i0__rxiqk_agc0; _j0++) {
            int _len_iqk_info__i0__rxiqk_agc1 = 1;
            iqk_info[_i0].rxiqk_agc[_j0] = (int *) malloc(_len_iqk_info__i0__rxiqk_agc1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_iqk_info__i0__rxiqk_agc1; _j1++) {
              iqk_info[_i0].rxiqk_agc[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_iqk_info__i0__bypass_iqk0 = 1;
          iqk_info[_i0].bypass_iqk = (int **) malloc(_len_iqk_info__i0__bypass_iqk0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_iqk_info__i0__bypass_iqk0; _j0++) {
            int _len_iqk_info__i0__bypass_iqk1 = 1;
            iqk_info[_i0].bypass_iqk[_j0] = (int *) malloc(_len_iqk_info__i0__bypass_iqk1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_iqk_info__i0__bypass_iqk1; _j1++) {
              iqk_info[_i0].bypass_iqk[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_iqk_info__i0__iqk_fail_report0 = 1;
          iqk_info[_i0].iqk_fail_report = (int ***) malloc(_len_iqk_info__i0__iqk_fail_report0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_iqk_info__i0__iqk_fail_report0; _j0++) {
            int _len_iqk_info__i0__iqk_fail_report1 = 1;
            iqk_info[_i0].iqk_fail_report[_j0] = (int **) malloc(_len_iqk_info__i0__iqk_fail_report1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_iqk_info__i0__iqk_fail_report1; _j1++) {
              int _len_iqk_info__i0__iqk_fail_report2 = 1;
              iqk_info[_i0].iqk_fail_report[_j0][_j1] = (int *) malloc(_len_iqk_info__i0__iqk_fail_report2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_iqk_info__i0__iqk_fail_report2; _j2++) {
                iqk_info[_i0].iqk_fail_report[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_iqk_info__i0__iqk_cfir_real0 = 1;
          iqk_info[_i0].iqk_cfir_real = (int ****) malloc(_len_iqk_info__i0__iqk_cfir_real0*sizeof(int ***));
          for(int _j0 = 0; _j0 < _len_iqk_info__i0__iqk_cfir_real0; _j0++) {
            int _len_iqk_info__i0__iqk_cfir_real1 = 1;
            iqk_info[_i0].iqk_cfir_real[_j0] = (int ***) malloc(_len_iqk_info__i0__iqk_cfir_real1*sizeof(int **));
            for(int _j1 = 0; _j1 < _len_iqk_info__i0__iqk_cfir_real1; _j1++) {
              int _len_iqk_info__i0__iqk_cfir_real2 = 1;
              iqk_info[_i0].iqk_cfir_real[_j0][_j1] = (int **) malloc(_len_iqk_info__i0__iqk_cfir_real2*sizeof(int *));
              for(int _j2 = 0; _j2 < _len_iqk_info__i0__iqk_cfir_real2; _j2++) {
                int _len_iqk_info__i0__iqk_cfir_real3 = 1;
                iqk_info[_i0].iqk_cfir_real[_j0][_j1][_j2] = (int *) malloc(_len_iqk_info__i0__iqk_cfir_real3*sizeof(int));
                for(int _j3 = 0; _j3 < _len_iqk_info__i0__iqk_cfir_real3; _j3++) {
                  iqk_info[_i0].iqk_cfir_real[_j0][_j1][_j2][_j3] = ((-2 * (next_i()%2)) + 1) * next_i();
                }
              }
            }
          }
          int _len_iqk_info__i0__iqk_cfir_imag0 = 1;
          iqk_info[_i0].iqk_cfir_imag = (int ****) malloc(_len_iqk_info__i0__iqk_cfir_imag0*sizeof(int ***));
          for(int _j0 = 0; _j0 < _len_iqk_info__i0__iqk_cfir_imag0; _j0++) {
            int _len_iqk_info__i0__iqk_cfir_imag1 = 1;
            iqk_info[_i0].iqk_cfir_imag[_j0] = (int ***) malloc(_len_iqk_info__i0__iqk_cfir_imag1*sizeof(int **));
            for(int _j1 = 0; _j1 < _len_iqk_info__i0__iqk_cfir_imag1; _j1++) {
              int _len_iqk_info__i0__iqk_cfir_imag2 = 1;
              iqk_info[_i0].iqk_cfir_imag[_j0][_j1] = (int **) malloc(_len_iqk_info__i0__iqk_cfir_imag2*sizeof(int *));
              for(int _j2 = 0; _j2 < _len_iqk_info__i0__iqk_cfir_imag2; _j2++) {
                int _len_iqk_info__i0__iqk_cfir_imag3 = 1;
                iqk_info[_i0].iqk_cfir_imag[_j0][_j1][_j2] = (int *) malloc(_len_iqk_info__i0__iqk_cfir_imag3*sizeof(int));
                for(int _j3 = 0; _j3 < _len_iqk_info__i0__iqk_cfir_imag3; _j3++) {
                  iqk_info[_i0].iqk_cfir_imag[_j0][_j1][_j2][_j3] = ((-2 * (next_i()%2)) + 1) * next_i();
                }
              }
            }
          }
          int _len_iqk_info__i0__retry_count0 = 1;
          iqk_info[_i0].retry_count = (int ***) malloc(_len_iqk_info__i0__retry_count0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_iqk_info__i0__retry_count0; _j0++) {
            int _len_iqk_info__i0__retry_count1 = 1;
            iqk_info[_i0].retry_count[_j0] = (int **) malloc(_len_iqk_info__i0__retry_count1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_iqk_info__i0__retry_count1; _j1++) {
              int _len_iqk_info__i0__retry_count2 = 1;
              iqk_info[_i0].retry_count[_j0][_j1] = (int *) malloc(_len_iqk_info__i0__retry_count2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_iqk_info__i0__retry_count2; _j2++) {
                iqk_info[_i0].retry_count[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          phydm_init_iqk_information(iqk_info);
          for(int _aux = 0; _aux < _len_iqk_info0; _aux++) {
          free(iqk_info[_aux].iqk_channel);
          }
          for(int _aux = 0; _aux < _len_iqk_info0; _aux++) {
          free(*(iqk_info[_aux].lok_idac));
        free(iqk_info[_aux].lok_idac);
          }
          for(int _aux = 0; _aux < _len_iqk_info0; _aux++) {
          free(*(iqk_info[_aux].rxiqk_agc));
        free(iqk_info[_aux].rxiqk_agc);
          }
          for(int _aux = 0; _aux < _len_iqk_info0; _aux++) {
          free(*(iqk_info[_aux].bypass_iqk));
        free(iqk_info[_aux].bypass_iqk);
          }
          for(int _aux = 0; _aux < _len_iqk_info0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_iqk_info0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_iqk_info0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_iqk_info0; _aux++) {
          }
          free(iqk_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
