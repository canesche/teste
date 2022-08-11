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
typedef  int uint32_t ;
struct TYPE_2__ {int AHBxENR; } ;
typedef  int /*<<< orphan*/  GPIO_TypeDef ;

/* Variables and functions */
 int AHBxENR_GPIOAEN_Pos ; 
 int GPIOA_BASE ; 
 int GPIOB_BASE ; 
 TYPE_1__* RCC ; 

void mp_hal_gpio_clock_enable(GPIO_TypeDef *gpio) {
    #if defined(STM32L476xx) || defined(STM32L496xx)
    if (gpio == GPIOG) {
        // Port G pins 2 thru 15 are powered using VddIO2 on these MCUs.
        HAL_PWREx_EnableVddIO2();
    }
    #endif

    // This logic assumes that all the GPIOx_EN bits are adjacent and ordered in one register

    #if defined(STM32F0)
    #define AHBxENR AHBENR
    #define AHBxENR_GPIOAEN_Pos RCC_AHBENR_GPIOAEN_Pos
    #elif defined(STM32F4) || defined(STM32F7)
    #define AHBxENR AHB1ENR
    #define AHBxENR_GPIOAEN_Pos RCC_AHB1ENR_GPIOAEN_Pos
    #elif defined(STM32H7)
    #define AHBxENR AHB4ENR
    #define AHBxENR_GPIOAEN_Pos RCC_AHB4ENR_GPIOAEN_Pos
    #elif defined(STM32L4)
    #define AHBxENR AHB2ENR
    #define AHBxENR_GPIOAEN_Pos RCC_AHB2ENR_GPIOAEN_Pos
    #endif

    uint32_t gpio_idx = ((uint32_t)gpio - GPIOA_BASE) / (GPIOB_BASE - GPIOA_BASE);
    RCC->AHBxENR |= 1 << (AHBxENR_GPIOAEN_Pos + gpio_idx);
    volatile uint32_t tmp = RCC->AHBxENR; // Delay after enabling clock
    (void)tmp;
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
          int _len_gpio0 = 1;
          int * gpio = (int *) malloc(_len_gpio0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_gpio0; _i0++) {
            gpio[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mp_hal_gpio_clock_enable(gpio);
          free(gpio);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_gpio0 = 65025;
          int * gpio = (int *) malloc(_len_gpio0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_gpio0; _i0++) {
            gpio[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mp_hal_gpio_clock_enable(gpio);
          free(gpio);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_gpio0 = 100;
          int * gpio = (int *) malloc(_len_gpio0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_gpio0; _i0++) {
            gpio[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mp_hal_gpio_clock_enable(gpio);
          free(gpio);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
