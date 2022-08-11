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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int /*<<< orphan*/ * handler; } ;
typedef  TYPE_1__ zbar_decoder_t ;
typedef  int /*<<< orphan*/  zbar_decoder_handler_t ;

/* Variables and functions */

zbar_decoder_handler_t *
zbar_decoder_set_handler (zbar_decoder_t *dcode,
                          zbar_decoder_handler_t *handler)
{
    zbar_decoder_handler_t *result = dcode->handler;
    dcode->handler = handler;
    return(result);
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
          int _len_dcode0 = 1;
          struct TYPE_3__ * dcode = (struct TYPE_3__ *) malloc(_len_dcode0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dcode0; _i0++) {
              int _len_dcode__i0__handler0 = 1;
          dcode[_i0].handler = (int *) malloc(_len_dcode__i0__handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dcode__i0__handler0; _j0++) {
            dcode[_i0].handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_handler0 = 1;
          int * handler = (int *) malloc(_len_handler0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_handler0; _i0++) {
            handler[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = zbar_decoder_set_handler(dcode,handler);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_dcode0; _aux++) {
          free(dcode[_aux].handler);
          }
          free(dcode);
          free(handler);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dcode0 = 65025;
          struct TYPE_3__ * dcode = (struct TYPE_3__ *) malloc(_len_dcode0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dcode0; _i0++) {
              int _len_dcode__i0__handler0 = 1;
          dcode[_i0].handler = (int *) malloc(_len_dcode__i0__handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dcode__i0__handler0; _j0++) {
            dcode[_i0].handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_handler0 = 65025;
          int * handler = (int *) malloc(_len_handler0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_handler0; _i0++) {
            handler[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = zbar_decoder_set_handler(dcode,handler);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_dcode0; _aux++) {
          free(dcode[_aux].handler);
          }
          free(dcode);
          free(handler);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dcode0 = 100;
          struct TYPE_3__ * dcode = (struct TYPE_3__ *) malloc(_len_dcode0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dcode0; _i0++) {
              int _len_dcode__i0__handler0 = 1;
          dcode[_i0].handler = (int *) malloc(_len_dcode__i0__handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dcode__i0__handler0; _j0++) {
            dcode[_i0].handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_handler0 = 100;
          int * handler = (int *) malloc(_len_handler0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_handler0; _i0++) {
            handler[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = zbar_decoder_set_handler(dcode,handler);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_dcode0; _aux++) {
          free(dcode[_aux].handler);
          }
          free(dcode);
          free(handler);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
