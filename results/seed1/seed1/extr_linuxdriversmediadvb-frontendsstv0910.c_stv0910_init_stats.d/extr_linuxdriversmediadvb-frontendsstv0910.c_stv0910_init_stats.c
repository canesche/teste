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
typedef  struct TYPE_18__   TYPE_9__ ;
typedef  struct TYPE_17__   TYPE_8__ ;
typedef  struct TYPE_16__   TYPE_7__ ;
typedef  struct TYPE_15__   TYPE_6__ ;
typedef  struct TYPE_14__   TYPE_5__ ;
typedef  struct TYPE_13__   TYPE_4__ ;
typedef  struct TYPE_12__   TYPE_3__ ;
typedef  struct TYPE_11__   TYPE_2__ ;
typedef  struct TYPE_10__   TYPE_1__ ;

/* Type definitions */
struct TYPE_18__ {int len; TYPE_8__* stat; } ;
struct TYPE_16__ {int len; TYPE_6__* stat; } ;
struct TYPE_14__ {int len; TYPE_4__* stat; } ;
struct TYPE_12__ {int len; TYPE_2__* stat; } ;
struct dtv_frontend_properties {TYPE_9__ pre_bit_count; TYPE_7__ pre_bit_error; TYPE_5__ cnr; TYPE_3__ strength; } ;
struct TYPE_10__ {struct dtv_frontend_properties dtv_property_cache; } ;
struct stv {TYPE_1__ fe; } ;
struct TYPE_17__ {void* scale; } ;
struct TYPE_15__ {void* scale; } ;
struct TYPE_13__ {void* scale; } ;
struct TYPE_11__ {void* scale; } ;

/* Variables and functions */
 void* FE_SCALE_NOT_AVAILABLE ; 

__attribute__((used)) static void stv0910_init_stats(struct stv *state)
{
	struct dtv_frontend_properties *p = &state->fe.dtv_property_cache;

	p->strength.len = 1;
	p->strength.stat[0].scale = FE_SCALE_NOT_AVAILABLE;
	p->cnr.len = 1;
	p->cnr.stat[0].scale = FE_SCALE_NOT_AVAILABLE;
	p->pre_bit_error.len = 1;
	p->pre_bit_error.stat[0].scale = FE_SCALE_NOT_AVAILABLE;
	p->pre_bit_count.len = 1;
	p->pre_bit_count.stat[0].scale = FE_SCALE_NOT_AVAILABLE;
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
          int _len_state0 = 1;
          struct stv * state = (struct stv *) malloc(_len_state0*sizeof(struct stv));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].fe.dtv_property_cache.pre_bit_count.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__fe_dtv_property_cache_pre_bit_count_stat0 = 1;
          state[_i0].fe.dtv_property_cache.pre_bit_count.stat = (struct TYPE_17__ *) malloc(_len_state__i0__fe_dtv_property_cache_pre_bit_count_stat0*sizeof(struct TYPE_17__));
          for(int _j0 = 0; _j0 < _len_state__i0__fe_dtv_property_cache_pre_bit_count_stat0; _j0++) {
              }
        state[_i0].fe.dtv_property_cache.pre_bit_error.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__fe_dtv_property_cache_pre_bit_error_stat0 = 1;
          state[_i0].fe.dtv_property_cache.pre_bit_error.stat = (struct TYPE_15__ *) malloc(_len_state__i0__fe_dtv_property_cache_pre_bit_error_stat0*sizeof(struct TYPE_15__));
          for(int _j0 = 0; _j0 < _len_state__i0__fe_dtv_property_cache_pre_bit_error_stat0; _j0++) {
              }
        state[_i0].fe.dtv_property_cache.cnr.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__fe_dtv_property_cache_cnr_stat0 = 1;
          state[_i0].fe.dtv_property_cache.cnr.stat = (struct TYPE_13__ *) malloc(_len_state__i0__fe_dtv_property_cache_cnr_stat0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_state__i0__fe_dtv_property_cache_cnr_stat0; _j0++) {
              }
        state[_i0].fe.dtv_property_cache.strength.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__fe_dtv_property_cache_strength_stat0 = 1;
          state[_i0].fe.dtv_property_cache.strength.stat = (struct TYPE_11__ *) malloc(_len_state__i0__fe_dtv_property_cache_strength_stat0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_state__i0__fe_dtv_property_cache_strength_stat0; _j0++) {
              }
          }
          stv0910_init_stats(state);
          free(state);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_state0 = 65025;
          struct stv * state = (struct stv *) malloc(_len_state0*sizeof(struct stv));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].fe.dtv_property_cache.pre_bit_count.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__fe_dtv_property_cache_pre_bit_count_stat0 = 1;
          state[_i0].fe.dtv_property_cache.pre_bit_count.stat = (struct TYPE_17__ *) malloc(_len_state__i0__fe_dtv_property_cache_pre_bit_count_stat0*sizeof(struct TYPE_17__));
          for(int _j0 = 0; _j0 < _len_state__i0__fe_dtv_property_cache_pre_bit_count_stat0; _j0++) {
              }
        state[_i0].fe.dtv_property_cache.pre_bit_error.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__fe_dtv_property_cache_pre_bit_error_stat0 = 1;
          state[_i0].fe.dtv_property_cache.pre_bit_error.stat = (struct TYPE_15__ *) malloc(_len_state__i0__fe_dtv_property_cache_pre_bit_error_stat0*sizeof(struct TYPE_15__));
          for(int _j0 = 0; _j0 < _len_state__i0__fe_dtv_property_cache_pre_bit_error_stat0; _j0++) {
              }
        state[_i0].fe.dtv_property_cache.cnr.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__fe_dtv_property_cache_cnr_stat0 = 1;
          state[_i0].fe.dtv_property_cache.cnr.stat = (struct TYPE_13__ *) malloc(_len_state__i0__fe_dtv_property_cache_cnr_stat0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_state__i0__fe_dtv_property_cache_cnr_stat0; _j0++) {
              }
        state[_i0].fe.dtv_property_cache.strength.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__fe_dtv_property_cache_strength_stat0 = 1;
          state[_i0].fe.dtv_property_cache.strength.stat = (struct TYPE_11__ *) malloc(_len_state__i0__fe_dtv_property_cache_strength_stat0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_state__i0__fe_dtv_property_cache_strength_stat0; _j0++) {
              }
          }
          stv0910_init_stats(state);
          free(state);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_state0 = 100;
          struct stv * state = (struct stv *) malloc(_len_state0*sizeof(struct stv));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].fe.dtv_property_cache.pre_bit_count.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__fe_dtv_property_cache_pre_bit_count_stat0 = 1;
          state[_i0].fe.dtv_property_cache.pre_bit_count.stat = (struct TYPE_17__ *) malloc(_len_state__i0__fe_dtv_property_cache_pre_bit_count_stat0*sizeof(struct TYPE_17__));
          for(int _j0 = 0; _j0 < _len_state__i0__fe_dtv_property_cache_pre_bit_count_stat0; _j0++) {
              }
        state[_i0].fe.dtv_property_cache.pre_bit_error.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__fe_dtv_property_cache_pre_bit_error_stat0 = 1;
          state[_i0].fe.dtv_property_cache.pre_bit_error.stat = (struct TYPE_15__ *) malloc(_len_state__i0__fe_dtv_property_cache_pre_bit_error_stat0*sizeof(struct TYPE_15__));
          for(int _j0 = 0; _j0 < _len_state__i0__fe_dtv_property_cache_pre_bit_error_stat0; _j0++) {
              }
        state[_i0].fe.dtv_property_cache.cnr.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__fe_dtv_property_cache_cnr_stat0 = 1;
          state[_i0].fe.dtv_property_cache.cnr.stat = (struct TYPE_13__ *) malloc(_len_state__i0__fe_dtv_property_cache_cnr_stat0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_state__i0__fe_dtv_property_cache_cnr_stat0; _j0++) {
              }
        state[_i0].fe.dtv_property_cache.strength.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__fe_dtv_property_cache_strength_stat0 = 1;
          state[_i0].fe.dtv_property_cache.strength.stat = (struct TYPE_11__ *) malloc(_len_state__i0__fe_dtv_property_cache_strength_stat0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_state__i0__fe_dtv_property_cache_strength_stat0; _j0++) {
              }
          }
          stv0910_init_stats(state);
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
