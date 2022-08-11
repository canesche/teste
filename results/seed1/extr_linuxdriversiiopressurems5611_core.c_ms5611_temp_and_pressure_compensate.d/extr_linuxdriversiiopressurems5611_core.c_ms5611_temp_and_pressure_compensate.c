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
struct ms5611_chip_info {int* prom; } ;
typedef  int s64 ;
typedef  int s32 ;

/* Variables and functions */

__attribute__((used)) static int ms5611_temp_and_pressure_compensate(struct ms5611_chip_info *chip_info,
					       s32 *temp, s32 *pressure)
{
	s32 t = *temp, p = *pressure;
	s64 off, sens, dt;

	dt = t - (chip_info->prom[5] << 8);
	off = ((s64)chip_info->prom[2] << 16) + ((chip_info->prom[4] * dt) >> 7);
	sens = ((s64)chip_info->prom[1] << 15) + ((chip_info->prom[3] * dt) >> 8);

	t = 2000 + ((chip_info->prom[6] * dt) >> 23);
	if (t < 2000) {
		s64 off2, sens2, t2;

		t2 = (dt * dt) >> 31;
		off2 = (5 * (t - 2000) * (t - 2000)) >> 1;
		sens2 = off2 >> 1;

		if (t < -1500) {
			s64 tmp = (t + 1500) * (t + 1500);

			off2 += 7 * tmp;
			sens2 += (11 * tmp) >> 1;
		}

		t -= t2;
		off -= off2;
		sens -= sens2;
	}

	*temp = t;
	*pressure = (((p * sens) >> 21) - off) >> 15;

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
          int _len_chip_info0 = 1;
          struct ms5611_chip_info * chip_info = (struct ms5611_chip_info *) malloc(_len_chip_info0*sizeof(struct ms5611_chip_info));
          for(int _i0 = 0; _i0 < _len_chip_info0; _i0++) {
              int _len_chip_info__i0__prom0 = 1;
          chip_info[_i0].prom = (int *) malloc(_len_chip_info__i0__prom0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chip_info__i0__prom0; _j0++) {
            chip_info[_i0].prom[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_temp0 = 1;
          int * temp = (int *) malloc(_len_temp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_temp0; _i0++) {
            temp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pressure0 = 1;
          int * pressure = (int *) malloc(_len_pressure0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pressure0; _i0++) {
            pressure[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ms5611_temp_and_pressure_compensate(chip_info,temp,pressure);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_chip_info0; _aux++) {
          free(chip_info[_aux].prom);
          }
          free(chip_info);
          free(temp);
          free(pressure);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_chip_info0 = 65025;
          struct ms5611_chip_info * chip_info = (struct ms5611_chip_info *) malloc(_len_chip_info0*sizeof(struct ms5611_chip_info));
          for(int _i0 = 0; _i0 < _len_chip_info0; _i0++) {
              int _len_chip_info__i0__prom0 = 1;
          chip_info[_i0].prom = (int *) malloc(_len_chip_info__i0__prom0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chip_info__i0__prom0; _j0++) {
            chip_info[_i0].prom[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_temp0 = 65025;
          int * temp = (int *) malloc(_len_temp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_temp0; _i0++) {
            temp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pressure0 = 65025;
          int * pressure = (int *) malloc(_len_pressure0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pressure0; _i0++) {
            pressure[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ms5611_temp_and_pressure_compensate(chip_info,temp,pressure);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_chip_info0; _aux++) {
          free(chip_info[_aux].prom);
          }
          free(chip_info);
          free(temp);
          free(pressure);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_chip_info0 = 100;
          struct ms5611_chip_info * chip_info = (struct ms5611_chip_info *) malloc(_len_chip_info0*sizeof(struct ms5611_chip_info));
          for(int _i0 = 0; _i0 < _len_chip_info0; _i0++) {
              int _len_chip_info__i0__prom0 = 1;
          chip_info[_i0].prom = (int *) malloc(_len_chip_info__i0__prom0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chip_info__i0__prom0; _j0++) {
            chip_info[_i0].prom[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_temp0 = 100;
          int * temp = (int *) malloc(_len_temp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_temp0; _i0++) {
            temp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pressure0 = 100;
          int * pressure = (int *) malloc(_len_pressure0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pressure0; _i0++) {
            pressure[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ms5611_temp_and_pressure_compensate(chip_info,temp,pressure);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_chip_info0; _aux++) {
          free(chip_info[_aux].prom);
          }
          free(chip_info);
          free(temp);
          free(pressure);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
