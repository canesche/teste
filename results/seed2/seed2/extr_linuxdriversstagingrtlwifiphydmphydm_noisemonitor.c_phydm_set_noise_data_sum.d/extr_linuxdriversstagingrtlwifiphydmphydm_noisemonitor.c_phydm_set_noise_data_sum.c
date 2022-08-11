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
typedef  size_t u8 ;
struct noise_level {int* valid_cnt; int* sum; } ;

/* Variables and functions */
 size_t ODM_RF_PATH_A ; 

__attribute__((used)) static inline void phydm_set_noise_data_sum(struct noise_level *noise_data,
					    u8 max_rf_path)
{
	u8 rf_path;

	for (rf_path = ODM_RF_PATH_A; rf_path < max_rf_path; rf_path++) {
		if (noise_data->valid_cnt[rf_path])
			noise_data->sum[rf_path] /=
				noise_data->valid_cnt[rf_path];
		else
			noise_data->sum[rf_path] = 0;
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
          unsigned long max_rf_path = 100;
          int _len_noise_data0 = 1;
          struct noise_level * noise_data = (struct noise_level *) malloc(_len_noise_data0*sizeof(struct noise_level));
          for(int _i0 = 0; _i0 < _len_noise_data0; _i0++) {
              int _len_noise_data__i0__valid_cnt0 = 1;
          noise_data[_i0].valid_cnt = (int *) malloc(_len_noise_data__i0__valid_cnt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_noise_data__i0__valid_cnt0; _j0++) {
            noise_data[_i0].valid_cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_noise_data__i0__sum0 = 1;
          noise_data[_i0].sum = (int *) malloc(_len_noise_data__i0__sum0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_noise_data__i0__sum0; _j0++) {
            noise_data[_i0].sum[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          phydm_set_noise_data_sum(noise_data,max_rf_path);
          for(int _aux = 0; _aux < _len_noise_data0; _aux++) {
          free(noise_data[_aux].valid_cnt);
          }
          for(int _aux = 0; _aux < _len_noise_data0; _aux++) {
          free(noise_data[_aux].sum);
          }
          free(noise_data);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long max_rf_path = 255;
          int _len_noise_data0 = 65025;
          struct noise_level * noise_data = (struct noise_level *) malloc(_len_noise_data0*sizeof(struct noise_level));
          for(int _i0 = 0; _i0 < _len_noise_data0; _i0++) {
              int _len_noise_data__i0__valid_cnt0 = 1;
          noise_data[_i0].valid_cnt = (int *) malloc(_len_noise_data__i0__valid_cnt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_noise_data__i0__valid_cnt0; _j0++) {
            noise_data[_i0].valid_cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_noise_data__i0__sum0 = 1;
          noise_data[_i0].sum = (int *) malloc(_len_noise_data__i0__sum0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_noise_data__i0__sum0; _j0++) {
            noise_data[_i0].sum[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          phydm_set_noise_data_sum(noise_data,max_rf_path);
          for(int _aux = 0; _aux < _len_noise_data0; _aux++) {
          free(noise_data[_aux].valid_cnt);
          }
          for(int _aux = 0; _aux < _len_noise_data0; _aux++) {
          free(noise_data[_aux].sum);
          }
          free(noise_data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long max_rf_path = 10;
          int _len_noise_data0 = 100;
          struct noise_level * noise_data = (struct noise_level *) malloc(_len_noise_data0*sizeof(struct noise_level));
          for(int _i0 = 0; _i0 < _len_noise_data0; _i0++) {
              int _len_noise_data__i0__valid_cnt0 = 1;
          noise_data[_i0].valid_cnt = (int *) malloc(_len_noise_data__i0__valid_cnt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_noise_data__i0__valid_cnt0; _j0++) {
            noise_data[_i0].valid_cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_noise_data__i0__sum0 = 1;
          noise_data[_i0].sum = (int *) malloc(_len_noise_data__i0__sum0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_noise_data__i0__sum0; _j0++) {
            noise_data[_i0].sum[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          phydm_set_noise_data_sum(noise_data,max_rf_path);
          for(int _aux = 0; _aux < _len_noise_data0; _aux++) {
          free(noise_data[_aux].valid_cnt);
          }
          for(int _aux = 0; _aux < _len_noise_data0; _aux++) {
          free(noise_data[_aux].sum);
          }
          free(noise_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
