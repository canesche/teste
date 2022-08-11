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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u32 ;
struct TYPE_4__ {TYPE_1__* stat; } ;
struct dtv_frontend_properties {TYPE_2__ block_error; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; } ;
struct TYPE_3__ {scalar_t__ scale; int /*<<< orphan*/  uvalue; } ;

/* Variables and functions */
 scalar_t__ FE_SCALE_COUNTER ; 

__attribute__((used)) static int tda10071_read_ucblocks(struct dvb_frontend *fe, u32 *ucblocks)
{
	struct dtv_frontend_properties *c = &fe->dtv_property_cache;

	if (c->block_error.stat[0].scale == FE_SCALE_COUNTER)
		*ucblocks = c->block_error.stat[0].uvalue;
	else
		*ucblocks = 0;
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
          int _len_fe0 = 1;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              int _len_fe__i0__dtv_property_cache_block_error_stat0 = 1;
          fe[_i0].dtv_property_cache.block_error.stat = (struct TYPE_3__ *) malloc(_len_fe__i0__dtv_property_cache_block_error_stat0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_fe__i0__dtv_property_cache_block_error_stat0; _j0++) {
            fe[_i0].dtv_property_cache.block_error.stat->scale = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].dtv_property_cache.block_error.stat->uvalue = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ucblocks0 = 1;
          int * ucblocks = (int *) malloc(_len_ucblocks0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ucblocks0; _i0++) {
            ucblocks[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tda10071_read_ucblocks(fe,ucblocks);
          printf("%d\n", benchRet); 
          free(fe);
          free(ucblocks);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fe0 = 65025;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              int _len_fe__i0__dtv_property_cache_block_error_stat0 = 1;
          fe[_i0].dtv_property_cache.block_error.stat = (struct TYPE_3__ *) malloc(_len_fe__i0__dtv_property_cache_block_error_stat0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_fe__i0__dtv_property_cache_block_error_stat0; _j0++) {
            fe[_i0].dtv_property_cache.block_error.stat->scale = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].dtv_property_cache.block_error.stat->uvalue = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ucblocks0 = 65025;
          int * ucblocks = (int *) malloc(_len_ucblocks0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ucblocks0; _i0++) {
            ucblocks[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tda10071_read_ucblocks(fe,ucblocks);
          printf("%d\n", benchRet); 
          free(fe);
          free(ucblocks);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fe0 = 100;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              int _len_fe__i0__dtv_property_cache_block_error_stat0 = 1;
          fe[_i0].dtv_property_cache.block_error.stat = (struct TYPE_3__ *) malloc(_len_fe__i0__dtv_property_cache_block_error_stat0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_fe__i0__dtv_property_cache_block_error_stat0; _j0++) {
            fe[_i0].dtv_property_cache.block_error.stat->scale = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].dtv_property_cache.block_error.stat->uvalue = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ucblocks0 = 100;
          int * ucblocks = (int *) malloc(_len_ucblocks0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ucblocks0; _i0++) {
            ucblocks[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tda10071_read_ucblocks(fe,ucblocks);
          printf("%d\n", benchRet); 
          free(fe);
          free(ucblocks);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
