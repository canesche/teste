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
struct gpio_chip {int dummy; } ;
struct mtk_pinctrl {struct gpio_chip chip; } ;

/* Variables and functions */

__attribute__((used)) static int mtk_xt_get_gpio_n(void *data, unsigned long eint_n,
			     unsigned int *gpio_n,
			     struct gpio_chip **gpio_chip)
{
	struct mtk_pinctrl *hw = (struct mtk_pinctrl *)data;

	*gpio_chip = &hw->chip;
	*gpio_n = eint_n;

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
          unsigned long eint_n = 100;
          void * data;
          int _len_gpio_n0 = 1;
          unsigned int * gpio_n = (unsigned int *) malloc(_len_gpio_n0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_gpio_n0; _i0++) {
            gpio_n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gpio_chip0 = 1;
          struct gpio_chip ** gpio_chip = (struct gpio_chip **) malloc(_len_gpio_chip0*sizeof(struct gpio_chip *));
          for(int _i0 = 0; _i0 < _len_gpio_chip0; _i0++) {
            int _len_gpio_chip1 = 1;
            gpio_chip[_i0] = (struct gpio_chip *) malloc(_len_gpio_chip1*sizeof(struct gpio_chip));
            for(int _i1 = 0; _i1 < _len_gpio_chip1; _i1++) {
              gpio_chip[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = mtk_xt_get_gpio_n(data,eint_n,gpio_n,gpio_chip);
          printf("%d\n", benchRet); 
          free(gpio_n);
          for(int i1 = 0; i1 < _len_gpio_chip0; i1++) {
            int _len_gpio_chip1 = 1;
              free(gpio_chip[i1]);
          }
          free(gpio_chip);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long eint_n = 255;
          void * data;
          int _len_gpio_n0 = 65025;
          unsigned int * gpio_n = (unsigned int *) malloc(_len_gpio_n0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_gpio_n0; _i0++) {
            gpio_n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gpio_chip0 = 65025;
          struct gpio_chip ** gpio_chip = (struct gpio_chip **) malloc(_len_gpio_chip0*sizeof(struct gpio_chip *));
          for(int _i0 = 0; _i0 < _len_gpio_chip0; _i0++) {
            int _len_gpio_chip1 = 1;
            gpio_chip[_i0] = (struct gpio_chip *) malloc(_len_gpio_chip1*sizeof(struct gpio_chip));
            for(int _i1 = 0; _i1 < _len_gpio_chip1; _i1++) {
              gpio_chip[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = mtk_xt_get_gpio_n(data,eint_n,gpio_n,gpio_chip);
          printf("%d\n", benchRet); 
          free(gpio_n);
          for(int i1 = 0; i1 < _len_gpio_chip0; i1++) {
            int _len_gpio_chip1 = 1;
              free(gpio_chip[i1]);
          }
          free(gpio_chip);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long eint_n = 10;
          void * data;
          int _len_gpio_n0 = 100;
          unsigned int * gpio_n = (unsigned int *) malloc(_len_gpio_n0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_gpio_n0; _i0++) {
            gpio_n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gpio_chip0 = 100;
          struct gpio_chip ** gpio_chip = (struct gpio_chip **) malloc(_len_gpio_chip0*sizeof(struct gpio_chip *));
          for(int _i0 = 0; _i0 < _len_gpio_chip0; _i0++) {
            int _len_gpio_chip1 = 1;
            gpio_chip[_i0] = (struct gpio_chip *) malloc(_len_gpio_chip1*sizeof(struct gpio_chip));
            for(int _i1 = 0; _i1 < _len_gpio_chip1; _i1++) {
              gpio_chip[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = mtk_xt_get_gpio_n(data,eint_n,gpio_n,gpio_chip);
          printf("%d\n", benchRet); 
          free(gpio_n);
          for(int i1 = 0; i1 < _len_gpio_chip0; i1++) {
            int _len_gpio_chip1 = 1;
              free(gpio_chip[i1]);
          }
          free(gpio_chip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
