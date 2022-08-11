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
typedef  struct TYPE_20__   TYPE_9__ ;
typedef  struct TYPE_19__   TYPE_8__ ;
typedef  struct TYPE_18__   TYPE_7__ ;
typedef  struct TYPE_17__   TYPE_6__ ;
typedef  struct TYPE_16__   TYPE_5__ ;
typedef  struct TYPE_15__   TYPE_4__ ;
typedef  struct TYPE_14__   TYPE_3__ ;
typedef  struct TYPE_13__   TYPE_2__ ;
typedef  struct TYPE_12__   TYPE_1__ ;
typedef  struct TYPE_11__   TYPE_10__ ;

/* Type definitions */
struct TYPE_11__ {int len; TYPE_9__* stat; } ;
struct TYPE_19__ {int len; TYPE_7__* stat; } ;
struct TYPE_17__ {int len; TYPE_5__* stat; } ;
struct TYPE_15__ {int len; TYPE_3__* stat; } ;
struct TYPE_13__ {int len; TYPE_1__* stat; } ;
struct dtv_frontend_properties {TYPE_10__ post_bit_count; TYPE_8__ post_bit_error; TYPE_6__ block_error; TYPE_4__ cnr; TYPE_2__ strength; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; } ;
struct TYPE_20__ {void* scale; } ;
struct TYPE_18__ {void* scale; } ;
struct TYPE_16__ {void* scale; } ;
struct TYPE_14__ {void* scale; } ;
struct TYPE_12__ {int /*<<< orphan*/  scale; } ;

/* Variables and functions */
 void* FE_SCALE_NOT_AVAILABLE ; 
 int /*<<< orphan*/  FE_SCALE_RELATIVE ; 

__attribute__((used)) static void cxd2841er_init_stats(struct dvb_frontend *fe)
{
	struct dtv_frontend_properties *p = &fe->dtv_property_cache;

	p->strength.len = 1;
	p->strength.stat[0].scale = FE_SCALE_RELATIVE;
	p->cnr.len = 1;
	p->cnr.stat[0].scale = FE_SCALE_NOT_AVAILABLE;
	p->block_error.len = 1;
	p->block_error.stat[0].scale = FE_SCALE_NOT_AVAILABLE;
	p->post_bit_error.len = 1;
	p->post_bit_error.stat[0].scale = FE_SCALE_NOT_AVAILABLE;
	p->post_bit_count.len = 1;
	p->post_bit_count.stat[0].scale = FE_SCALE_NOT_AVAILABLE;
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
            fe[_i0].dtv_property_cache.post_bit_count.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__dtv_property_cache_post_bit_count_stat0 = 1;
          fe[_i0].dtv_property_cache.post_bit_count.stat = (struct TYPE_20__ *) malloc(_len_fe__i0__dtv_property_cache_post_bit_count_stat0*sizeof(struct TYPE_20__));
          for(int _j0 = 0; _j0 < _len_fe__i0__dtv_property_cache_post_bit_count_stat0; _j0++) {
              }
        fe[_i0].dtv_property_cache.post_bit_error.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__dtv_property_cache_post_bit_error_stat0 = 1;
          fe[_i0].dtv_property_cache.post_bit_error.stat = (struct TYPE_18__ *) malloc(_len_fe__i0__dtv_property_cache_post_bit_error_stat0*sizeof(struct TYPE_18__));
          for(int _j0 = 0; _j0 < _len_fe__i0__dtv_property_cache_post_bit_error_stat0; _j0++) {
              }
        fe[_i0].dtv_property_cache.block_error.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__dtv_property_cache_block_error_stat0 = 1;
          fe[_i0].dtv_property_cache.block_error.stat = (struct TYPE_16__ *) malloc(_len_fe__i0__dtv_property_cache_block_error_stat0*sizeof(struct TYPE_16__));
          for(int _j0 = 0; _j0 < _len_fe__i0__dtv_property_cache_block_error_stat0; _j0++) {
              }
        fe[_i0].dtv_property_cache.cnr.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__dtv_property_cache_cnr_stat0 = 1;
          fe[_i0].dtv_property_cache.cnr.stat = (struct TYPE_14__ *) malloc(_len_fe__i0__dtv_property_cache_cnr_stat0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_fe__i0__dtv_property_cache_cnr_stat0; _j0++) {
              }
        fe[_i0].dtv_property_cache.strength.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__dtv_property_cache_strength_stat0 = 1;
          fe[_i0].dtv_property_cache.strength.stat = (struct TYPE_12__ *) malloc(_len_fe__i0__dtv_property_cache_strength_stat0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_fe__i0__dtv_property_cache_strength_stat0; _j0++) {
            fe[_i0].dtv_property_cache.strength.stat->scale = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          cxd2841er_init_stats(fe);
          free(fe);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fe0 = 65025;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
            fe[_i0].dtv_property_cache.post_bit_count.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__dtv_property_cache_post_bit_count_stat0 = 1;
          fe[_i0].dtv_property_cache.post_bit_count.stat = (struct TYPE_20__ *) malloc(_len_fe__i0__dtv_property_cache_post_bit_count_stat0*sizeof(struct TYPE_20__));
          for(int _j0 = 0; _j0 < _len_fe__i0__dtv_property_cache_post_bit_count_stat0; _j0++) {
              }
        fe[_i0].dtv_property_cache.post_bit_error.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__dtv_property_cache_post_bit_error_stat0 = 1;
          fe[_i0].dtv_property_cache.post_bit_error.stat = (struct TYPE_18__ *) malloc(_len_fe__i0__dtv_property_cache_post_bit_error_stat0*sizeof(struct TYPE_18__));
          for(int _j0 = 0; _j0 < _len_fe__i0__dtv_property_cache_post_bit_error_stat0; _j0++) {
              }
        fe[_i0].dtv_property_cache.block_error.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__dtv_property_cache_block_error_stat0 = 1;
          fe[_i0].dtv_property_cache.block_error.stat = (struct TYPE_16__ *) malloc(_len_fe__i0__dtv_property_cache_block_error_stat0*sizeof(struct TYPE_16__));
          for(int _j0 = 0; _j0 < _len_fe__i0__dtv_property_cache_block_error_stat0; _j0++) {
              }
        fe[_i0].dtv_property_cache.cnr.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__dtv_property_cache_cnr_stat0 = 1;
          fe[_i0].dtv_property_cache.cnr.stat = (struct TYPE_14__ *) malloc(_len_fe__i0__dtv_property_cache_cnr_stat0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_fe__i0__dtv_property_cache_cnr_stat0; _j0++) {
              }
        fe[_i0].dtv_property_cache.strength.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__dtv_property_cache_strength_stat0 = 1;
          fe[_i0].dtv_property_cache.strength.stat = (struct TYPE_12__ *) malloc(_len_fe__i0__dtv_property_cache_strength_stat0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_fe__i0__dtv_property_cache_strength_stat0; _j0++) {
            fe[_i0].dtv_property_cache.strength.stat->scale = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          cxd2841er_init_stats(fe);
          free(fe);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fe0 = 100;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
            fe[_i0].dtv_property_cache.post_bit_count.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__dtv_property_cache_post_bit_count_stat0 = 1;
          fe[_i0].dtv_property_cache.post_bit_count.stat = (struct TYPE_20__ *) malloc(_len_fe__i0__dtv_property_cache_post_bit_count_stat0*sizeof(struct TYPE_20__));
          for(int _j0 = 0; _j0 < _len_fe__i0__dtv_property_cache_post_bit_count_stat0; _j0++) {
              }
        fe[_i0].dtv_property_cache.post_bit_error.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__dtv_property_cache_post_bit_error_stat0 = 1;
          fe[_i0].dtv_property_cache.post_bit_error.stat = (struct TYPE_18__ *) malloc(_len_fe__i0__dtv_property_cache_post_bit_error_stat0*sizeof(struct TYPE_18__));
          for(int _j0 = 0; _j0 < _len_fe__i0__dtv_property_cache_post_bit_error_stat0; _j0++) {
              }
        fe[_i0].dtv_property_cache.block_error.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__dtv_property_cache_block_error_stat0 = 1;
          fe[_i0].dtv_property_cache.block_error.stat = (struct TYPE_16__ *) malloc(_len_fe__i0__dtv_property_cache_block_error_stat0*sizeof(struct TYPE_16__));
          for(int _j0 = 0; _j0 < _len_fe__i0__dtv_property_cache_block_error_stat0; _j0++) {
              }
        fe[_i0].dtv_property_cache.cnr.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__dtv_property_cache_cnr_stat0 = 1;
          fe[_i0].dtv_property_cache.cnr.stat = (struct TYPE_14__ *) malloc(_len_fe__i0__dtv_property_cache_cnr_stat0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_fe__i0__dtv_property_cache_cnr_stat0; _j0++) {
              }
        fe[_i0].dtv_property_cache.strength.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__dtv_property_cache_strength_stat0 = 1;
          fe[_i0].dtv_property_cache.strength.stat = (struct TYPE_12__ *) malloc(_len_fe__i0__dtv_property_cache_strength_stat0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_fe__i0__dtv_property_cache_strength_stat0; _j0++) {
            fe[_i0].dtv_property_cache.strength.stat->scale = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          cxd2841er_init_stats(fe);
          free(fe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
