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
struct serial_info {int multi; } ;
struct pcmcia_device {TYPE_1__** resource; struct serial_info* priv; } ;
struct TYPE_2__ {int end; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int serial_check_for_multi(struct pcmcia_device *p_dev,  void *priv_data)
{
	struct serial_info *info = p_dev->priv;

	if (!p_dev->resource[0]->end)
		return -EINVAL;

	if ((!p_dev->resource[1]->end) && (p_dev->resource[0]->end % 8 == 0))
		info->multi = p_dev->resource[0]->end >> 3;

	if ((p_dev->resource[1]->end) && (p_dev->resource[0]->end == 8)
		&& (p_dev->resource[1]->end == 8))
		info->multi = 2;

	return 0; /* break */
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
          int _len_p_dev0 = 1;
          struct pcmcia_device * p_dev = (struct pcmcia_device *) malloc(_len_p_dev0*sizeof(struct pcmcia_device));
          for(int _i0 = 0; _i0 < _len_p_dev0; _i0++) {
              int _len_p_dev__i0__resource0 = 1;
          p_dev[_i0].resource = (struct TYPE_2__ **) malloc(_len_p_dev__i0__resource0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_p_dev__i0__resource0; _j0++) {
            int _len_p_dev__i0__resource1 = 1;
            p_dev[_i0].resource[_j0] = (struct TYPE_2__ *) malloc(_len_p_dev__i0__resource1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_p_dev__i0__resource1; _j1++) {
              p_dev[_i0].resource[_j0]->end = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_p_dev__i0__priv0 = 1;
          p_dev[_i0].priv = (struct serial_info *) malloc(_len_p_dev__i0__priv0*sizeof(struct serial_info));
          for(int _j0 = 0; _j0 < _len_p_dev__i0__priv0; _j0++) {
            p_dev[_i0].priv->multi = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * priv_data;
          int benchRet = serial_check_for_multi(p_dev,priv_data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p_dev0; _aux++) {
          free(*(p_dev[_aux].resource));
        free(p_dev[_aux].resource);
          }
          for(int _aux = 0; _aux < _len_p_dev0; _aux++) {
          free(p_dev[_aux].priv);
          }
          free(p_dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_p_dev0 = 65025;
          struct pcmcia_device * p_dev = (struct pcmcia_device *) malloc(_len_p_dev0*sizeof(struct pcmcia_device));
          for(int _i0 = 0; _i0 < _len_p_dev0; _i0++) {
              int _len_p_dev__i0__resource0 = 1;
          p_dev[_i0].resource = (struct TYPE_2__ **) malloc(_len_p_dev__i0__resource0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_p_dev__i0__resource0; _j0++) {
            int _len_p_dev__i0__resource1 = 1;
            p_dev[_i0].resource[_j0] = (struct TYPE_2__ *) malloc(_len_p_dev__i0__resource1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_p_dev__i0__resource1; _j1++) {
              p_dev[_i0].resource[_j0]->end = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_p_dev__i0__priv0 = 1;
          p_dev[_i0].priv = (struct serial_info *) malloc(_len_p_dev__i0__priv0*sizeof(struct serial_info));
          for(int _j0 = 0; _j0 < _len_p_dev__i0__priv0; _j0++) {
            p_dev[_i0].priv->multi = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * priv_data;
          int benchRet = serial_check_for_multi(p_dev,priv_data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p_dev0; _aux++) {
          free(*(p_dev[_aux].resource));
        free(p_dev[_aux].resource);
          }
          for(int _aux = 0; _aux < _len_p_dev0; _aux++) {
          free(p_dev[_aux].priv);
          }
          free(p_dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_p_dev0 = 100;
          struct pcmcia_device * p_dev = (struct pcmcia_device *) malloc(_len_p_dev0*sizeof(struct pcmcia_device));
          for(int _i0 = 0; _i0 < _len_p_dev0; _i0++) {
              int _len_p_dev__i0__resource0 = 1;
          p_dev[_i0].resource = (struct TYPE_2__ **) malloc(_len_p_dev__i0__resource0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_p_dev__i0__resource0; _j0++) {
            int _len_p_dev__i0__resource1 = 1;
            p_dev[_i0].resource[_j0] = (struct TYPE_2__ *) malloc(_len_p_dev__i0__resource1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_p_dev__i0__resource1; _j1++) {
              p_dev[_i0].resource[_j0]->end = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_p_dev__i0__priv0 = 1;
          p_dev[_i0].priv = (struct serial_info *) malloc(_len_p_dev__i0__priv0*sizeof(struct serial_info));
          for(int _j0 = 0; _j0 < _len_p_dev__i0__priv0; _j0++) {
            p_dev[_i0].priv->multi = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * priv_data;
          int benchRet = serial_check_for_multi(p_dev,priv_data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p_dev0; _aux++) {
          free(*(p_dev[_aux].resource));
        free(p_dev[_aux].resource);
          }
          for(int _aux = 0; _aux < _len_p_dev0; _aux++) {
          free(p_dev[_aux].priv);
          }
          free(p_dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
