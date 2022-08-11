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
typedef  struct TYPE_5__   TYPE_3__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int uint32_t ;
struct TYPE_5__ {int CFGR; int CFGR2; int CFGR3; } ;
struct TYPE_4__ {int SYSCLK_Frequency; int HCLK_Frequency; int PCLK_Frequency; int ADCCLK_Frequency; int CECCLK_Frequency; int I2C1CLK_Frequency; int USART1CLK_Frequency; int USART2CLK_Frequency; int USBCLK_Frequency; } ;
typedef  TYPE_1__ RCC_ClocksTypeDef ;

/* Variables and functions */
 int* APBAHBPrescTable ; 
 int HSE_VALUE ; 
 int HSI14_VALUE ; 
 void* HSI48_VALUE ; 
 int HSI_VALUE ; 
 void* LSE_VALUE ; 
 TYPE_3__* RCC ; 
 int RCC_CFGR2_PREDIV1 ; 
 int RCC_CFGR3_ADCSW ; 
 int RCC_CFGR3_CECSW ; 
 int RCC_CFGR3_I2C1SW ; 
 int RCC_CFGR3_USART1SW ; 
 int RCC_CFGR3_USART1SW_0 ; 
 int RCC_CFGR3_USART1SW_1 ; 
 int RCC_CFGR3_USART2SW ; 
 int RCC_CFGR3_USART2SW_0 ; 
 int RCC_CFGR3_USART2SW_1 ; 
 int RCC_CFGR3_USBSW ; 
 int RCC_CFGR_ADCPRE ; 
 int RCC_CFGR_HPRE ; 
 int RCC_CFGR_PLLMULL ; 
 int RCC_CFGR_PLLSRC ; 
 int RCC_CFGR_PPRE ; 
 int RCC_CFGR_SWS ; 

void RCC_GetClocksFreq(RCC_ClocksTypeDef* RCC_Clocks)
{
  uint32_t tmp = 0, pllmull = 0, pllsource = 0, prediv1factor = 0, presc = 0, pllclk = 0;

  /* Get SYSCLK source -------------------------------------------------------*/
  tmp = RCC->CFGR & RCC_CFGR_SWS;
  
  switch (tmp)
  {
    case 0x00:  /* HSI used as system clock */
      RCC_Clocks->SYSCLK_Frequency = HSI_VALUE;
      break;
    case 0x04:  /* HSE used as system clock */
      RCC_Clocks->SYSCLK_Frequency = HSE_VALUE;
      break;
    case 0x08:  /* PLL used as system clock */
      /* Get PLL clock source and multiplication factor ----------------------*/
      pllmull = RCC->CFGR & RCC_CFGR_PLLMULL;
      pllsource = RCC->CFGR & RCC_CFGR_PLLSRC;
      pllmull = ( pllmull >> 18) + 2;
      
      if (pllsource == 0x00)
      {
        /* HSI oscillator clock divided by 2 selected as PLL clock entry */
        pllclk = (HSI_VALUE >> 1) * pllmull;
      }
      else
      {
        prediv1factor = (RCC->CFGR2 & RCC_CFGR2_PREDIV1) + 1;
        /* HSE oscillator clock selected as PREDIV1 clock entry */
        pllclk = (HSE_VALUE / prediv1factor) * pllmull; 
      }
      RCC_Clocks->SYSCLK_Frequency = pllclk;      
      break;
    case 0x0C:  /* HSI48 used as system clock */
      RCC_Clocks->SYSCLK_Frequency = HSI48_VALUE;
      break;
    default: /* HSI used as system clock */
      RCC_Clocks->SYSCLK_Frequency = HSI_VALUE;
      break;
  }
  /* Compute HCLK, PCLK clocks frequencies -----------------------------------*/
  /* Get HCLK prescaler */
  tmp = RCC->CFGR & RCC_CFGR_HPRE;
  tmp = tmp >> 4;
  presc = APBAHBPrescTable[tmp]; 
  /* HCLK clock frequency */
  RCC_Clocks->HCLK_Frequency = RCC_Clocks->SYSCLK_Frequency >> presc;

  /* Get PCLK prescaler */
  tmp = RCC->CFGR & RCC_CFGR_PPRE;
  tmp = tmp >> 8;
  presc = APBAHBPrescTable[tmp];
  /* PCLK clock frequency */
  RCC_Clocks->PCLK_Frequency = RCC_Clocks->HCLK_Frequency >> presc;

  /* ADCCLK clock frequency */
  if((RCC->CFGR3 & RCC_CFGR3_ADCSW) != RCC_CFGR3_ADCSW)
  {
    /* ADC Clock is HSI14 Osc. */
    RCC_Clocks->ADCCLK_Frequency = HSI14_VALUE;
  }
  else
  {
    if((RCC->CFGR & RCC_CFGR_ADCPRE) != RCC_CFGR_ADCPRE)
    {
      /* ADC Clock is derived from PCLK/2 */
      RCC_Clocks->ADCCLK_Frequency = RCC_Clocks->PCLK_Frequency >> 1;
    }
    else
    {
      /* ADC Clock is derived from PCLK/4 */
      RCC_Clocks->ADCCLK_Frequency = RCC_Clocks->PCLK_Frequency >> 2;
    }
    
  }

  /* CECCLK clock frequency */
  if((RCC->CFGR3 & RCC_CFGR3_CECSW) != RCC_CFGR3_CECSW)
  {
    /* CEC Clock is HSI/244 */
    RCC_Clocks->CECCLK_Frequency = HSI_VALUE / 244;
  }
  else
  {
    /* CECC Clock is LSE Osc. */
    RCC_Clocks->CECCLK_Frequency = LSE_VALUE;
  }

  /* I2C1CLK clock frequency */
  if((RCC->CFGR3 & RCC_CFGR3_I2C1SW) != RCC_CFGR3_I2C1SW)
  {
    /* I2C1 Clock is HSI Osc. */
    RCC_Clocks->I2C1CLK_Frequency = HSI_VALUE;
  }
  else
  {
    /* I2C1 Clock is System Clock */
    RCC_Clocks->I2C1CLK_Frequency = RCC_Clocks->SYSCLK_Frequency;
  }

  /* USART1CLK clock frequency */
  if((RCC->CFGR3 & RCC_CFGR3_USART1SW) == 0x0)
  {
    /* USART1 Clock is PCLK */
    RCC_Clocks->USART1CLK_Frequency = RCC_Clocks->PCLK_Frequency;
  }
  else if((RCC->CFGR3 & RCC_CFGR3_USART1SW) == RCC_CFGR3_USART1SW_0)
  {
    /* USART1 Clock is System Clock */
    RCC_Clocks->USART1CLK_Frequency = RCC_Clocks->SYSCLK_Frequency;
  }
  else if((RCC->CFGR3 & RCC_CFGR3_USART1SW) == RCC_CFGR3_USART1SW_1)
  {
    /* USART1 Clock is LSE Osc. */
    RCC_Clocks->USART1CLK_Frequency = LSE_VALUE;
  }
  else if((RCC->CFGR3 & RCC_CFGR3_USART1SW) == RCC_CFGR3_USART1SW)
  {
    /* USART1 Clock is HSI Osc. */
    RCC_Clocks->USART1CLK_Frequency = HSI_VALUE;
  }
  
  /* USART2CLK clock frequency */
  if((RCC->CFGR3 & RCC_CFGR3_USART2SW) == 0x0)
  {
    /* USART Clock is PCLK */
    RCC_Clocks->USART2CLK_Frequency = RCC_Clocks->PCLK_Frequency;
  }
  else if((RCC->CFGR3 & RCC_CFGR3_USART2SW) == RCC_CFGR3_USART2SW_0)
  {
    /* USART Clock is System Clock */
    RCC_Clocks->USART2CLK_Frequency = RCC_Clocks->SYSCLK_Frequency;
  }
  else if((RCC->CFGR3 & RCC_CFGR3_USART2SW) == RCC_CFGR3_USART2SW_1)
  {
    /* USART Clock is LSE Osc. */
    RCC_Clocks->USART2CLK_Frequency = LSE_VALUE;
  }
  else if((RCC->CFGR3 & RCC_CFGR3_USART2SW) == RCC_CFGR3_USART2SW)
  {
    /* USART Clock is HSI Osc. */
    RCC_Clocks->USART2CLK_Frequency = HSI_VALUE;
  }
  
  /* USBCLK clock frequency */
  if((RCC->CFGR3 & RCC_CFGR3_USBSW) != RCC_CFGR3_USBSW)
  {
    /* USB Clock is HSI48 */
    RCC_Clocks->USBCLK_Frequency = HSI48_VALUE;
  }
  else
  {
    /* USB Clock is PLL clock */
    RCC_Clocks->USBCLK_Frequency = pllclk;
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
          int _len_RCC_Clocks0 = 1;
          struct TYPE_4__ * RCC_Clocks = (struct TYPE_4__ *) malloc(_len_RCC_Clocks0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_RCC_Clocks0; _i0++) {
            RCC_Clocks[_i0].SYSCLK_Frequency = ((-2 * (next_i()%2)) + 1) * next_i();
        RCC_Clocks[_i0].HCLK_Frequency = ((-2 * (next_i()%2)) + 1) * next_i();
        RCC_Clocks[_i0].PCLK_Frequency = ((-2 * (next_i()%2)) + 1) * next_i();
        RCC_Clocks[_i0].ADCCLK_Frequency = ((-2 * (next_i()%2)) + 1) * next_i();
        RCC_Clocks[_i0].CECCLK_Frequency = ((-2 * (next_i()%2)) + 1) * next_i();
        RCC_Clocks[_i0].I2C1CLK_Frequency = ((-2 * (next_i()%2)) + 1) * next_i();
        RCC_Clocks[_i0].USART1CLK_Frequency = ((-2 * (next_i()%2)) + 1) * next_i();
        RCC_Clocks[_i0].USART2CLK_Frequency = ((-2 * (next_i()%2)) + 1) * next_i();
        RCC_Clocks[_i0].USBCLK_Frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          RCC_GetClocksFreq(RCC_Clocks);
          free(RCC_Clocks);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_RCC_Clocks0 = 65025;
          struct TYPE_4__ * RCC_Clocks = (struct TYPE_4__ *) malloc(_len_RCC_Clocks0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_RCC_Clocks0; _i0++) {
            RCC_Clocks[_i0].SYSCLK_Frequency = ((-2 * (next_i()%2)) + 1) * next_i();
        RCC_Clocks[_i0].HCLK_Frequency = ((-2 * (next_i()%2)) + 1) * next_i();
        RCC_Clocks[_i0].PCLK_Frequency = ((-2 * (next_i()%2)) + 1) * next_i();
        RCC_Clocks[_i0].ADCCLK_Frequency = ((-2 * (next_i()%2)) + 1) * next_i();
        RCC_Clocks[_i0].CECCLK_Frequency = ((-2 * (next_i()%2)) + 1) * next_i();
        RCC_Clocks[_i0].I2C1CLK_Frequency = ((-2 * (next_i()%2)) + 1) * next_i();
        RCC_Clocks[_i0].USART1CLK_Frequency = ((-2 * (next_i()%2)) + 1) * next_i();
        RCC_Clocks[_i0].USART2CLK_Frequency = ((-2 * (next_i()%2)) + 1) * next_i();
        RCC_Clocks[_i0].USBCLK_Frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          RCC_GetClocksFreq(RCC_Clocks);
          free(RCC_Clocks);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_RCC_Clocks0 = 100;
          struct TYPE_4__ * RCC_Clocks = (struct TYPE_4__ *) malloc(_len_RCC_Clocks0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_RCC_Clocks0; _i0++) {
            RCC_Clocks[_i0].SYSCLK_Frequency = ((-2 * (next_i()%2)) + 1) * next_i();
        RCC_Clocks[_i0].HCLK_Frequency = ((-2 * (next_i()%2)) + 1) * next_i();
        RCC_Clocks[_i0].PCLK_Frequency = ((-2 * (next_i()%2)) + 1) * next_i();
        RCC_Clocks[_i0].ADCCLK_Frequency = ((-2 * (next_i()%2)) + 1) * next_i();
        RCC_Clocks[_i0].CECCLK_Frequency = ((-2 * (next_i()%2)) + 1) * next_i();
        RCC_Clocks[_i0].I2C1CLK_Frequency = ((-2 * (next_i()%2)) + 1) * next_i();
        RCC_Clocks[_i0].USART1CLK_Frequency = ((-2 * (next_i()%2)) + 1) * next_i();
        RCC_Clocks[_i0].USART2CLK_Frequency = ((-2 * (next_i()%2)) + 1) * next_i();
        RCC_Clocks[_i0].USBCLK_Frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          RCC_GetClocksFreq(RCC_Clocks);
          free(RCC_Clocks);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
