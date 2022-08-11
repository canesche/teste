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
struct uniphier_pinctrl_priv {int dummy; } ;
struct device {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int uniphier_pinctrl_pm_init(struct device *dev,
				    struct uniphier_pinctrl_priv *priv)
{
#ifdef CONFIG_PM_SLEEP
	const struct uniphier_pinctrl_socdata *socdata = priv->socdata;
	unsigned int num_drvctrl = 0;
	unsigned int num_drv2ctrl = 0;
	unsigned int num_drv3ctrl = 0;
	unsigned int num_pupdctrl = 0;
	unsigned int num_iectrl = 0;
	unsigned int iectrl, drvctrl, pupdctrl;
	enum uniphier_pin_drv_type drv_type;
	enum uniphier_pin_pull_dir pull_dir;
	int i, ret;

	for (i = 0; i < socdata->npins; i++) {
		void *drv_data = socdata->pins[i].drv_data;

		drvctrl = uniphier_pin_get_drvctrl(drv_data);
		drv_type = uniphier_pin_get_drv_type(drv_data);
		pupdctrl = uniphier_pin_get_pupdctrl(drv_data);
		pull_dir = uniphier_pin_get_pull_dir(drv_data);
		iectrl = uniphier_pin_get_iectrl(drv_data);

		switch (drv_type) {
		case UNIPHIER_PIN_DRV_1BIT:
			num_drvctrl = max(num_drvctrl, drvctrl + 1);
			break;
		case UNIPHIER_PIN_DRV_2BIT:
			num_drv2ctrl = max(num_drv2ctrl, drvctrl + 1);
			break;
		case UNIPHIER_PIN_DRV_3BIT:
			num_drv3ctrl = max(num_drv3ctrl, drvctrl + 1);
			break;
		default:
			break;
		}

		if (pull_dir == UNIPHIER_PIN_PULL_UP ||
		    pull_dir == UNIPHIER_PIN_PULL_DOWN)
			num_pupdctrl = max(num_pupdctrl, pupdctrl + 1);

		if (iectrl != UNIPHIER_PIN_IECTRL_NONE) {
			if (socdata->caps & UNIPHIER_PINCTRL_CAPS_PERPIN_IECTRL)
				iectrl = i;
			num_iectrl = max(num_iectrl, iectrl + 1);
		}
	}

	INIT_LIST_HEAD(&priv->reg_regions);

	ret = uniphier_pinctrl_add_reg_region(dev, priv,
					      UNIPHIER_PINCTRL_PINMUX_BASE,
					      socdata->npins, 8);
	if (ret)
		return ret;

	ret = uniphier_pinctrl_add_reg_region(dev, priv,
					      UNIPHIER_PINCTRL_DRVCTRL_BASE,
					      num_drvctrl, 1);
	if (ret)
		return ret;

	ret = uniphier_pinctrl_add_reg_region(dev, priv,
					      UNIPHIER_PINCTRL_DRV2CTRL_BASE,
					      num_drv2ctrl, 2);
	if (ret)
		return ret;

	ret = uniphier_pinctrl_add_reg_region(dev, priv,
					      UNIPHIER_PINCTRL_DRV3CTRL_BASE,
					      num_drv3ctrl, 3);
	if (ret)
		return ret;

	ret = uniphier_pinctrl_add_reg_region(dev, priv,
					      UNIPHIER_PINCTRL_PUPDCTRL_BASE,
					      num_pupdctrl, 1);
	if (ret)
		return ret;

	ret = uniphier_pinctrl_add_reg_region(dev, priv,
					      UNIPHIER_PINCTRL_IECTRL_BASE,
					      num_iectrl, 1);
	if (ret)
		return ret;
#endif
	return 0;
}


// ------------------------------------------------------------------------- //




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
          int _len_dev0 = 1;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv0 = 1;
          struct uniphier_pinctrl_priv * priv = (struct uniphier_pinctrl_priv *) malloc(_len_priv0*sizeof(struct uniphier_pinctrl_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uniphier_pinctrl_pm_init(dev,priv);
          printf("%d\n", benchRet); 
          free(dev);
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv0 = 65025;
          struct uniphier_pinctrl_priv * priv = (struct uniphier_pinctrl_priv *) malloc(_len_priv0*sizeof(struct uniphier_pinctrl_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uniphier_pinctrl_pm_init(dev,priv);
          printf("%d\n", benchRet); 
          free(dev);
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv0 = 100;
          struct uniphier_pinctrl_priv * priv = (struct uniphier_pinctrl_priv *) malloc(_len_priv0*sizeof(struct uniphier_pinctrl_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uniphier_pinctrl_pm_init(dev,priv);
          printf("%d\n", benchRet); 
          free(dev);
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
