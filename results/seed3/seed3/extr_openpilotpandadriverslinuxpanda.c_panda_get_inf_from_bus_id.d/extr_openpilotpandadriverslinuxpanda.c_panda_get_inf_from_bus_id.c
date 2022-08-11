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
struct panda_inf_priv {int dummy; } ;
struct panda_dev_priv {struct panda_inf_priv** interfaces; } ;

/* Variables and functions */
 int PANDA_NUM_CAN_INTERFACES ; 
 int* can_numbering ; 

struct panda_inf_priv *
panda_get_inf_from_bus_id(struct panda_dev_priv *priv_dev, int bus_id){
  int inf_num;
  for(inf_num = 0; inf_num < PANDA_NUM_CAN_INTERFACES; inf_num++)
    if(can_numbering[inf_num] == bus_id)
      return priv_dev->interfaces[inf_num];
  return NULL;
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
          int bus_id = 100;
          int _len_priv_dev0 = 1;
          struct panda_dev_priv * priv_dev = (struct panda_dev_priv *) malloc(_len_priv_dev0*sizeof(struct panda_dev_priv));
          for(int _i0 = 0; _i0 < _len_priv_dev0; _i0++) {
              int _len_priv_dev__i0__interfaces0 = 1;
          priv_dev[_i0].interfaces = (struct panda_inf_priv **) malloc(_len_priv_dev__i0__interfaces0*sizeof(struct panda_inf_priv *));
          for(int _j0 = 0; _j0 < _len_priv_dev__i0__interfaces0; _j0++) {
            int _len_priv_dev__i0__interfaces1 = 1;
            priv_dev[_i0].interfaces[_j0] = (struct panda_inf_priv *) malloc(_len_priv_dev__i0__interfaces1*sizeof(struct panda_inf_priv));
            for(int _j1 = 0; _j1 < _len_priv_dev__i0__interfaces1; _j1++) {
              priv_dev[_i0].interfaces[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct panda_inf_priv * benchRet = panda_get_inf_from_bus_id(priv_dev,bus_id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_priv_dev0; _aux++) {
          free(*(priv_dev[_aux].interfaces));
        free(priv_dev[_aux].interfaces);
          }
          free(priv_dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int bus_id = 255;
          int _len_priv_dev0 = 65025;
          struct panda_dev_priv * priv_dev = (struct panda_dev_priv *) malloc(_len_priv_dev0*sizeof(struct panda_dev_priv));
          for(int _i0 = 0; _i0 < _len_priv_dev0; _i0++) {
              int _len_priv_dev__i0__interfaces0 = 1;
          priv_dev[_i0].interfaces = (struct panda_inf_priv **) malloc(_len_priv_dev__i0__interfaces0*sizeof(struct panda_inf_priv *));
          for(int _j0 = 0; _j0 < _len_priv_dev__i0__interfaces0; _j0++) {
            int _len_priv_dev__i0__interfaces1 = 1;
            priv_dev[_i0].interfaces[_j0] = (struct panda_inf_priv *) malloc(_len_priv_dev__i0__interfaces1*sizeof(struct panda_inf_priv));
            for(int _j1 = 0; _j1 < _len_priv_dev__i0__interfaces1; _j1++) {
              priv_dev[_i0].interfaces[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct panda_inf_priv * benchRet = panda_get_inf_from_bus_id(priv_dev,bus_id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_priv_dev0; _aux++) {
          free(*(priv_dev[_aux].interfaces));
        free(priv_dev[_aux].interfaces);
          }
          free(priv_dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bus_id = 10;
          int _len_priv_dev0 = 100;
          struct panda_dev_priv * priv_dev = (struct panda_dev_priv *) malloc(_len_priv_dev0*sizeof(struct panda_dev_priv));
          for(int _i0 = 0; _i0 < _len_priv_dev0; _i0++) {
              int _len_priv_dev__i0__interfaces0 = 1;
          priv_dev[_i0].interfaces = (struct panda_inf_priv **) malloc(_len_priv_dev__i0__interfaces0*sizeof(struct panda_inf_priv *));
          for(int _j0 = 0; _j0 < _len_priv_dev__i0__interfaces0; _j0++) {
            int _len_priv_dev__i0__interfaces1 = 1;
            priv_dev[_i0].interfaces[_j0] = (struct panda_inf_priv *) malloc(_len_priv_dev__i0__interfaces1*sizeof(struct panda_inf_priv));
            for(int _j1 = 0; _j1 < _len_priv_dev__i0__interfaces1; _j1++) {
              priv_dev[_i0].interfaces[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct panda_inf_priv * benchRet = panda_get_inf_from_bus_id(priv_dev,bus_id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_priv_dev0; _aux++) {
          free(*(priv_dev[_aux].interfaces));
        free(priv_dev[_aux].interfaces);
          }
          free(priv_dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
