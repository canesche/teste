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
struct TYPE_2__ {int /*<<< orphan*/ * irq_attch; } ;
struct usbhsh_hpriv {TYPE_1__ mod; } ;

/* Variables and functions */

__attribute__((used)) static int usbhsh_is_running(struct usbhsh_hpriv *hpriv)
{
	/*
	 * we can decide some device is attached or not
	 * by checking mod.irq_attch
	 * see
	 *	usbhsh_irq_attch()
	 *	usbhsh_irq_dtch()
	 */
	return (hpriv->mod.irq_attch == NULL);
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
          int _len_hpriv0 = 1;
          struct usbhsh_hpriv * hpriv = (struct usbhsh_hpriv *) malloc(_len_hpriv0*sizeof(struct usbhsh_hpriv));
          for(int _i0 = 0; _i0 < _len_hpriv0; _i0++) {
              int _len_hpriv__i0__mod_irq_attch0 = 1;
          hpriv[_i0].mod.irq_attch = (int *) malloc(_len_hpriv__i0__mod_irq_attch0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hpriv__i0__mod_irq_attch0; _j0++) {
            hpriv[_i0].mod.irq_attch[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = usbhsh_is_running(hpriv);
          printf("%d\n", benchRet); 
          free(hpriv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hpriv0 = 65025;
          struct usbhsh_hpriv * hpriv = (struct usbhsh_hpriv *) malloc(_len_hpriv0*sizeof(struct usbhsh_hpriv));
          for(int _i0 = 0; _i0 < _len_hpriv0; _i0++) {
              int _len_hpriv__i0__mod_irq_attch0 = 1;
          hpriv[_i0].mod.irq_attch = (int *) malloc(_len_hpriv__i0__mod_irq_attch0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hpriv__i0__mod_irq_attch0; _j0++) {
            hpriv[_i0].mod.irq_attch[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = usbhsh_is_running(hpriv);
          printf("%d\n", benchRet); 
          free(hpriv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hpriv0 = 100;
          struct usbhsh_hpriv * hpriv = (struct usbhsh_hpriv *) malloc(_len_hpriv0*sizeof(struct usbhsh_hpriv));
          for(int _i0 = 0; _i0 < _len_hpriv0; _i0++) {
              int _len_hpriv__i0__mod_irq_attch0 = 1;
          hpriv[_i0].mod.irq_attch = (int *) malloc(_len_hpriv__i0__mod_irq_attch0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hpriv__i0__mod_irq_attch0; _j0++) {
            hpriv[_i0].mod.irq_attch[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = usbhsh_is_running(hpriv);
          printf("%d\n", benchRet); 
          free(hpriv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
