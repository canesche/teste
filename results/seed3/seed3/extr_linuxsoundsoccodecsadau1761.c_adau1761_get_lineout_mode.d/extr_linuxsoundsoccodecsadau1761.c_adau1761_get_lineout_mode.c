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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct snd_soc_component {TYPE_1__* dev; } ;
struct adau1761_platform_data {int lineout_mode; } ;
typedef  enum adau1761_output_mode { ____Placeholder_adau1761_output_mode } adau1761_output_mode ;
struct TYPE_2__ {struct adau1761_platform_data* platform_data; } ;

/* Variables and functions */
 int ADAU1761_OUTPUT_MODE_LINE ; 

__attribute__((used)) static enum adau1761_output_mode adau1761_get_lineout_mode(
	struct snd_soc_component *component)
{
	struct adau1761_platform_data *pdata = component->dev->platform_data;

	if (pdata)
		return pdata->lineout_mode;

	return ADAU1761_OUTPUT_MODE_LINE;
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
          int _len_component0 = 1;
          struct snd_soc_component * component = (struct snd_soc_component *) malloc(_len_component0*sizeof(struct snd_soc_component));
          for(int _i0 = 0; _i0 < _len_component0; _i0++) {
              int _len_component__i0__dev0 = 1;
          component[_i0].dev = (struct TYPE_2__ *) malloc(_len_component__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_component__i0__dev0; _j0++) {
              int _len_component__i0__dev_platform_data0 = 1;
          component[_i0].dev->platform_data = (struct adau1761_platform_data *) malloc(_len_component__i0__dev_platform_data0*sizeof(struct adau1761_platform_data));
          for(int _j0 = 0; _j0 < _len_component__i0__dev_platform_data0; _j0++) {
            component[_i0].dev->platform_data->lineout_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          enum adau1761_output_mode benchRet = adau1761_get_lineout_mode(component);
          for(int _aux = 0; _aux < _len_component0; _aux++) {
          free(component[_aux].dev);
          }
          free(component);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_component0 = 65025;
          struct snd_soc_component * component = (struct snd_soc_component *) malloc(_len_component0*sizeof(struct snd_soc_component));
          for(int _i0 = 0; _i0 < _len_component0; _i0++) {
              int _len_component__i0__dev0 = 1;
          component[_i0].dev = (struct TYPE_2__ *) malloc(_len_component__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_component__i0__dev0; _j0++) {
              int _len_component__i0__dev_platform_data0 = 1;
          component[_i0].dev->platform_data = (struct adau1761_platform_data *) malloc(_len_component__i0__dev_platform_data0*sizeof(struct adau1761_platform_data));
          for(int _j0 = 0; _j0 < _len_component__i0__dev_platform_data0; _j0++) {
            component[_i0].dev->platform_data->lineout_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          enum adau1761_output_mode benchRet = adau1761_get_lineout_mode(component);
          for(int _aux = 0; _aux < _len_component0; _aux++) {
          free(component[_aux].dev);
          }
          free(component);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_component0 = 100;
          struct snd_soc_component * component = (struct snd_soc_component *) malloc(_len_component0*sizeof(struct snd_soc_component));
          for(int _i0 = 0; _i0 < _len_component0; _i0++) {
              int _len_component__i0__dev0 = 1;
          component[_i0].dev = (struct TYPE_2__ *) malloc(_len_component__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_component__i0__dev0; _j0++) {
              int _len_component__i0__dev_platform_data0 = 1;
          component[_i0].dev->platform_data = (struct adau1761_platform_data *) malloc(_len_component__i0__dev_platform_data0*sizeof(struct adau1761_platform_data));
          for(int _j0 = 0; _j0 < _len_component__i0__dev_platform_data0; _j0++) {
            component[_i0].dev->platform_data->lineout_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          enum adau1761_output_mode benchRet = adau1761_get_lineout_mode(component);
          for(int _aux = 0; _aux < _len_component0; _aux++) {
          free(component[_aux].dev);
          }
          free(component);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
