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
struct nct6775_data {int auto_pwm_num; scalar_t__** auto_temp; scalar_t__** auto_pwm; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int check_trip_points(struct nct6775_data *data, int nr)
{
	int i;

	for (i = 0; i < data->auto_pwm_num - 1; i++) {
		if (data->auto_temp[nr][i] > data->auto_temp[nr][i + 1])
			return -EINVAL;
	}
	for (i = 0; i < data->auto_pwm_num - 1; i++) {
		if (data->auto_pwm[nr][i] > data->auto_pwm[nr][i + 1])
			return -EINVAL;
	}
	/* validate critical temperature and pwm if enabled (pwm > 0) */
	if (data->auto_pwm[nr][data->auto_pwm_num]) {
		if (data->auto_temp[nr][data->auto_pwm_num - 1] >
				data->auto_temp[nr][data->auto_pwm_num] ||
		    data->auto_pwm[nr][data->auto_pwm_num - 1] >
				data->auto_pwm[nr][data->auto_pwm_num])
			return -EINVAL;
	}
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
          int nr = 100;
          int _len_data0 = 1;
          struct nct6775_data * data = (struct nct6775_data *) malloc(_len_data0*sizeof(struct nct6775_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].auto_pwm_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__auto_temp0 = 1;
          data[_i0].auto_temp = (long **) malloc(_len_data__i0__auto_temp0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_data__i0__auto_temp0; _j0++) {
            int _len_data__i0__auto_temp1 = 1;
            data[_i0].auto_temp[_j0] = (long *) malloc(_len_data__i0__auto_temp1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_data__i0__auto_temp1; _j1++) {
              data[_i0].auto_temp[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_data__i0__auto_pwm0 = 1;
          data[_i0].auto_pwm = (long **) malloc(_len_data__i0__auto_pwm0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_data__i0__auto_pwm0; _j0++) {
            int _len_data__i0__auto_pwm1 = 1;
            data[_i0].auto_pwm[_j0] = (long *) malloc(_len_data__i0__auto_pwm1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_data__i0__auto_pwm1; _j1++) {
              data[_i0].auto_pwm[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = check_trip_points(data,nr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(*(data[_aux].auto_temp));
        free(data[_aux].auto_temp);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(*(data[_aux].auto_pwm));
        free(data[_aux].auto_pwm);
          }
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int nr = 255;
          int _len_data0 = 65025;
          struct nct6775_data * data = (struct nct6775_data *) malloc(_len_data0*sizeof(struct nct6775_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].auto_pwm_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__auto_temp0 = 1;
          data[_i0].auto_temp = (long **) malloc(_len_data__i0__auto_temp0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_data__i0__auto_temp0; _j0++) {
            int _len_data__i0__auto_temp1 = 1;
            data[_i0].auto_temp[_j0] = (long *) malloc(_len_data__i0__auto_temp1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_data__i0__auto_temp1; _j1++) {
              data[_i0].auto_temp[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_data__i0__auto_pwm0 = 1;
          data[_i0].auto_pwm = (long **) malloc(_len_data__i0__auto_pwm0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_data__i0__auto_pwm0; _j0++) {
            int _len_data__i0__auto_pwm1 = 1;
            data[_i0].auto_pwm[_j0] = (long *) malloc(_len_data__i0__auto_pwm1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_data__i0__auto_pwm1; _j1++) {
              data[_i0].auto_pwm[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = check_trip_points(data,nr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(*(data[_aux].auto_temp));
        free(data[_aux].auto_temp);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(*(data[_aux].auto_pwm));
        free(data[_aux].auto_pwm);
          }
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int nr = 10;
          int _len_data0 = 100;
          struct nct6775_data * data = (struct nct6775_data *) malloc(_len_data0*sizeof(struct nct6775_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].auto_pwm_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__auto_temp0 = 1;
          data[_i0].auto_temp = (long **) malloc(_len_data__i0__auto_temp0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_data__i0__auto_temp0; _j0++) {
            int _len_data__i0__auto_temp1 = 1;
            data[_i0].auto_temp[_j0] = (long *) malloc(_len_data__i0__auto_temp1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_data__i0__auto_temp1; _j1++) {
              data[_i0].auto_temp[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_data__i0__auto_pwm0 = 1;
          data[_i0].auto_pwm = (long **) malloc(_len_data__i0__auto_pwm0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_data__i0__auto_pwm0; _j0++) {
            int _len_data__i0__auto_pwm1 = 1;
            data[_i0].auto_pwm[_j0] = (long *) malloc(_len_data__i0__auto_pwm1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_data__i0__auto_pwm1; _j1++) {
              data[_i0].auto_pwm[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = check_trip_points(data,nr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(*(data[_aux].auto_temp));
        free(data[_aux].auto_temp);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(*(data[_aux].auto_pwm));
        free(data[_aux].auto_pwm);
          }
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
