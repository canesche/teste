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
       3            linked\n\
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
struct regmap {int dummy; } ;
struct atmel_hlcdc_layer_desc {int dummy; } ;
struct atmel_hlcdc_layer {struct regmap* regmap; struct atmel_hlcdc_layer_desc const* desc; } ;

/* Variables and functions */

__attribute__((used)) static inline void atmel_hlcdc_layer_init(struct atmel_hlcdc_layer *layer,
				const struct atmel_hlcdc_layer_desc *desc,
				struct regmap *regmap)
{
	layer->desc = desc;
	layer->regmap = regmap;
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
          int _len_layer0 = 1;
          struct atmel_hlcdc_layer * layer = (struct atmel_hlcdc_layer *) malloc(_len_layer0*sizeof(struct atmel_hlcdc_layer));
          for(int _i0 = 0; _i0 < _len_layer0; _i0++) {
              int _len_layer__i0__regmap0 = 1;
          layer[_i0].regmap = (struct regmap *) malloc(_len_layer__i0__regmap0*sizeof(struct regmap));
          for(int _j0 = 0; _j0 < _len_layer__i0__regmap0; _j0++) {
            layer[_i0].regmap->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_layer__i0__desc0 = 1;
          layer[_i0].desc = (const struct atmel_hlcdc_layer_desc *) malloc(_len_layer__i0__desc0*sizeof(const struct atmel_hlcdc_layer_desc));
          for(int _j0 = 0; _j0 < _len_layer__i0__desc0; _j0++) {
              }
          }
          int _len_desc0 = 1;
          const struct atmel_hlcdc_layer_desc * desc = (const struct atmel_hlcdc_layer_desc *) malloc(_len_desc0*sizeof(const struct atmel_hlcdc_layer_desc));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
              }
          int _len_regmap0 = 1;
          struct regmap * regmap = (struct regmap *) malloc(_len_regmap0*sizeof(struct regmap));
          for(int _i0 = 0; _i0 < _len_regmap0; _i0++) {
            regmap[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          atmel_hlcdc_layer_init(layer,desc,regmap);
          for(int _aux = 0; _aux < _len_layer0; _aux++) {
          free(layer[_aux].regmap);
          }
          for(int _aux = 0; _aux < _len_layer0; _aux++) {
          free(layer[_aux].desc);
          }
          free(layer);
          free(desc);
          free(regmap);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_layer0 = 65025;
          struct atmel_hlcdc_layer * layer = (struct atmel_hlcdc_layer *) malloc(_len_layer0*sizeof(struct atmel_hlcdc_layer));
          for(int _i0 = 0; _i0 < _len_layer0; _i0++) {
              int _len_layer__i0__regmap0 = 1;
          layer[_i0].regmap = (struct regmap *) malloc(_len_layer__i0__regmap0*sizeof(struct regmap));
          for(int _j0 = 0; _j0 < _len_layer__i0__regmap0; _j0++) {
            layer[_i0].regmap->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_layer__i0__desc0 = 1;
          layer[_i0].desc = (const struct atmel_hlcdc_layer_desc *) malloc(_len_layer__i0__desc0*sizeof(const struct atmel_hlcdc_layer_desc));
          for(int _j0 = 0; _j0 < _len_layer__i0__desc0; _j0++) {
              }
          }
          int _len_desc0 = 65025;
          const struct atmel_hlcdc_layer_desc * desc = (const struct atmel_hlcdc_layer_desc *) malloc(_len_desc0*sizeof(const struct atmel_hlcdc_layer_desc));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
              }
          int _len_regmap0 = 65025;
          struct regmap * regmap = (struct regmap *) malloc(_len_regmap0*sizeof(struct regmap));
          for(int _i0 = 0; _i0 < _len_regmap0; _i0++) {
            regmap[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          atmel_hlcdc_layer_init(layer,desc,regmap);
          for(int _aux = 0; _aux < _len_layer0; _aux++) {
          free(layer[_aux].regmap);
          }
          for(int _aux = 0; _aux < _len_layer0; _aux++) {
          free(layer[_aux].desc);
          }
          free(layer);
          free(desc);
          free(regmap);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_layer0 = 100;
          struct atmel_hlcdc_layer * layer = (struct atmel_hlcdc_layer *) malloc(_len_layer0*sizeof(struct atmel_hlcdc_layer));
          for(int _i0 = 0; _i0 < _len_layer0; _i0++) {
              int _len_layer__i0__regmap0 = 1;
          layer[_i0].regmap = (struct regmap *) malloc(_len_layer__i0__regmap0*sizeof(struct regmap));
          for(int _j0 = 0; _j0 < _len_layer__i0__regmap0; _j0++) {
            layer[_i0].regmap->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_layer__i0__desc0 = 1;
          layer[_i0].desc = (const struct atmel_hlcdc_layer_desc *) malloc(_len_layer__i0__desc0*sizeof(const struct atmel_hlcdc_layer_desc));
          for(int _j0 = 0; _j0 < _len_layer__i0__desc0; _j0++) {
              }
          }
          int _len_desc0 = 100;
          const struct atmel_hlcdc_layer_desc * desc = (const struct atmel_hlcdc_layer_desc *) malloc(_len_desc0*sizeof(const struct atmel_hlcdc_layer_desc));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
              }
          int _len_regmap0 = 100;
          struct regmap * regmap = (struct regmap *) malloc(_len_regmap0*sizeof(struct regmap));
          for(int _i0 = 0; _i0 < _len_regmap0; _i0++) {
            regmap[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          atmel_hlcdc_layer_init(layer,desc,regmap);
          for(int _aux = 0; _aux < _len_layer0; _aux++) {
          free(layer[_aux].regmap);
          }
          for(int _aux = 0; _aux < _len_layer0; _aux++) {
          free(layer[_aux].desc);
          }
          free(layer);
          free(desc);
          free(regmap);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_layer0 = 1;
          struct atmel_hlcdc_layer * layer = (struct atmel_hlcdc_layer *) malloc(_len_layer0*sizeof(struct atmel_hlcdc_layer));
          for(int _i0 = 0; _i0 < _len_layer0; _i0++) {
              int _len_layer__i0__regmap0 = 1;
          layer[_i0].regmap = (struct regmap *) malloc(_len_layer__i0__regmap0*sizeof(struct regmap));
          for(int _j0 = 0; _j0 < _len_layer__i0__regmap0; _j0++) {
            layer[_i0].regmap->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_layer__i0__desc0 = 1;
          layer[_i0].desc = (const struct atmel_hlcdc_layer_desc *) malloc(_len_layer__i0__desc0*sizeof(const struct atmel_hlcdc_layer_desc));
          for(int _j0 = 0; _j0 < _len_layer__i0__desc0; _j0++) {
              }
          }
          int _len_desc0 = 1;
          const struct atmel_hlcdc_layer_desc * desc = (const struct atmel_hlcdc_layer_desc *) malloc(_len_desc0*sizeof(const struct atmel_hlcdc_layer_desc));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
              }
          int _len_regmap0 = 1;
          struct regmap * regmap = (struct regmap *) malloc(_len_regmap0*sizeof(struct regmap));
          for(int _i0 = 0; _i0 < _len_regmap0; _i0++) {
            regmap[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          atmel_hlcdc_layer_init(layer,desc,regmap);
          for(int _aux = 0; _aux < _len_layer0; _aux++) {
          free(layer[_aux].regmap);
          }
          for(int _aux = 0; _aux < _len_layer0; _aux++) {
          free(layer[_aux].desc);
          }
          free(layer);
          free(desc);
          free(regmap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
