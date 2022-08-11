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
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {unsigned int num_pins; scalar_t__ pins; } ;

/* Variables and functions */
 TYPE_1__* artpec6_pin_groups ; 

__attribute__((used)) static int artpec6_get_group_pins(struct pinctrl_dev *pctldev,
				  unsigned int group,
				  const unsigned int **pins,
				  unsigned int *num_pins)
{
	*pins = (unsigned int *)artpec6_pin_groups[group].pins;
	*num_pins = artpec6_pin_groups[group].num_pins;
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
          unsigned int group = 100;
          int _len_pctldev0 = 1;
          struct pinctrl_dev * pctldev = (struct pinctrl_dev *) malloc(_len_pctldev0*sizeof(struct pinctrl_dev));
          for(int _i0 = 0; _i0 < _len_pctldev0; _i0++) {
            pctldev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pins0 = 1;
          const unsigned int ** pins = (const unsigned int **) malloc(_len_pins0*sizeof(const unsigned int *));
          for(int _i0 = 0; _i0 < _len_pins0; _i0++) {
            int _len_pins1 = 1;
            pins[_i0] = (const unsigned int *) malloc(_len_pins1*sizeof(const unsigned int));
            for(int _i1 = 0; _i1 < _len_pins1; _i1++) {
              pins[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_num_pins0 = 1;
          unsigned int * num_pins = (unsigned int *) malloc(_len_num_pins0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_num_pins0; _i0++) {
            num_pins[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = artpec6_get_group_pins(pctldev,group,pins,num_pins);
          printf("%d\n", benchRet); 
          free(pctldev);
          for(int i1 = 0; i1 < _len_pins0; i1++) {
            int _len_pins1 = 1;
              free(pins[i1]);
          }
          free(pins);
          free(num_pins);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int group = 255;
          int _len_pctldev0 = 65025;
          struct pinctrl_dev * pctldev = (struct pinctrl_dev *) malloc(_len_pctldev0*sizeof(struct pinctrl_dev));
          for(int _i0 = 0; _i0 < _len_pctldev0; _i0++) {
            pctldev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pins0 = 65025;
          const unsigned int ** pins = (const unsigned int **) malloc(_len_pins0*sizeof(const unsigned int *));
          for(int _i0 = 0; _i0 < _len_pins0; _i0++) {
            int _len_pins1 = 1;
            pins[_i0] = (const unsigned int *) malloc(_len_pins1*sizeof(const unsigned int));
            for(int _i1 = 0; _i1 < _len_pins1; _i1++) {
              pins[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_num_pins0 = 65025;
          unsigned int * num_pins = (unsigned int *) malloc(_len_num_pins0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_num_pins0; _i0++) {
            num_pins[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = artpec6_get_group_pins(pctldev,group,pins,num_pins);
          printf("%d\n", benchRet); 
          free(pctldev);
          for(int i1 = 0; i1 < _len_pins0; i1++) {
            int _len_pins1 = 1;
              free(pins[i1]);
          }
          free(pins);
          free(num_pins);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int group = 10;
          int _len_pctldev0 = 100;
          struct pinctrl_dev * pctldev = (struct pinctrl_dev *) malloc(_len_pctldev0*sizeof(struct pinctrl_dev));
          for(int _i0 = 0; _i0 < _len_pctldev0; _i0++) {
            pctldev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pins0 = 100;
          const unsigned int ** pins = (const unsigned int **) malloc(_len_pins0*sizeof(const unsigned int *));
          for(int _i0 = 0; _i0 < _len_pins0; _i0++) {
            int _len_pins1 = 1;
            pins[_i0] = (const unsigned int *) malloc(_len_pins1*sizeof(const unsigned int));
            for(int _i1 = 0; _i1 < _len_pins1; _i1++) {
              pins[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_num_pins0 = 100;
          unsigned int * num_pins = (unsigned int *) malloc(_len_num_pins0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_num_pins0; _i0++) {
            num_pins[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = artpec6_get_group_pins(pctldev,group,pins,num_pins);
          printf("%d\n", benchRet); 
          free(pctldev);
          for(int i1 = 0; i1 < _len_pins0; i1++) {
            int _len_pins1 = 1;
              free(pins[i1]);
          }
          free(pins);
          free(num_pins);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
