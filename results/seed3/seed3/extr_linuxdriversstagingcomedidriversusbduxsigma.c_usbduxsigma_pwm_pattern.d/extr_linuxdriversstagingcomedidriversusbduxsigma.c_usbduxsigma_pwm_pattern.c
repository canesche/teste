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
struct usbduxsigma_private {int pwm_buf_sz; TYPE_1__* pwm_urb; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct usbduxsigma_private* private; } ;
struct TYPE_2__ {scalar_t__ transfer_buffer; } ;

/* Variables and functions */

__attribute__((used)) static void usbduxsigma_pwm_pattern(struct comedi_device *dev,
				    struct comedi_subdevice *s,
				    unsigned int chan,
				    unsigned int value,
				    unsigned int sign)
{
	struct usbduxsigma_private *devpriv = dev->private;
	char pwm_mask = (1 << chan);	/* DIO bit for the PWM data */
	char sgn_mask = (16 << chan);	/* DIO bit for the sign */
	char *buf = (char *)(devpriv->pwm_urb->transfer_buffer);
	int szbuf = devpriv->pwm_buf_sz;
	int i;

	for (i = 0; i < szbuf; i++) {
		char c = *buf;

		c &= ~pwm_mask;
		if (i < value)
			c |= pwm_mask;
		if (!sign)
			c &= ~sgn_mask;
		else
			c |= sgn_mask;
		*buf++ = c;
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
          unsigned int chan = 100;
          unsigned int value = 100;
          unsigned int sign = 100;
          int _len_dev0 = 1;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__private0 = 1;
          dev[_i0].private = (struct usbduxsigma_private *) malloc(_len_dev__i0__private0*sizeof(struct usbduxsigma_private));
          for(int _j0 = 0; _j0 < _len_dev__i0__private0; _j0++) {
            dev[_i0].private->pwm_buf_sz = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__private_pwm_urb0 = 1;
          dev[_i0].private->pwm_urb = (struct TYPE_2__ *) malloc(_len_dev__i0__private_pwm_urb0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__private_pwm_urb0; _j0++) {
            dev[_i0].private->pwm_urb->transfer_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_s0 = 1;
          struct comedi_subdevice * s = (struct comedi_subdevice *) malloc(_len_s0*sizeof(struct comedi_subdevice));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          usbduxsigma_pwm_pattern(dev,s,chan,value,sign);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].private);
          }
          free(dev);
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int chan = 255;
          unsigned int value = 255;
          unsigned int sign = 255;
          int _len_dev0 = 65025;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__private0 = 1;
          dev[_i0].private = (struct usbduxsigma_private *) malloc(_len_dev__i0__private0*sizeof(struct usbduxsigma_private));
          for(int _j0 = 0; _j0 < _len_dev__i0__private0; _j0++) {
            dev[_i0].private->pwm_buf_sz = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__private_pwm_urb0 = 1;
          dev[_i0].private->pwm_urb = (struct TYPE_2__ *) malloc(_len_dev__i0__private_pwm_urb0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__private_pwm_urb0; _j0++) {
            dev[_i0].private->pwm_urb->transfer_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_s0 = 65025;
          struct comedi_subdevice * s = (struct comedi_subdevice *) malloc(_len_s0*sizeof(struct comedi_subdevice));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          usbduxsigma_pwm_pattern(dev,s,chan,value,sign);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].private);
          }
          free(dev);
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int chan = 10;
          unsigned int value = 10;
          unsigned int sign = 10;
          int _len_dev0 = 100;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__private0 = 1;
          dev[_i0].private = (struct usbduxsigma_private *) malloc(_len_dev__i0__private0*sizeof(struct usbduxsigma_private));
          for(int _j0 = 0; _j0 < _len_dev__i0__private0; _j0++) {
            dev[_i0].private->pwm_buf_sz = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__private_pwm_urb0 = 1;
          dev[_i0].private->pwm_urb = (struct TYPE_2__ *) malloc(_len_dev__i0__private_pwm_urb0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__private_pwm_urb0; _j0++) {
            dev[_i0].private->pwm_urb->transfer_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_s0 = 100;
          struct comedi_subdevice * s = (struct comedi_subdevice *) malloc(_len_s0*sizeof(struct comedi_subdevice));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          usbduxsigma_pwm_pattern(dev,s,chan,value,sign);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].private);
          }
          free(dev);
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
