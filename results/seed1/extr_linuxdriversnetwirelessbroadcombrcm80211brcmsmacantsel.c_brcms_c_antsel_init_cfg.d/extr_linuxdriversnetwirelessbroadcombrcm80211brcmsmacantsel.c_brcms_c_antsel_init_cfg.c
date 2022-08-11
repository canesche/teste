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
typedef  void* u8 ;
struct brcms_antselcfg {scalar_t__ num_antcfg; void** ant_config; } ;
struct antsel_info {scalar_t__ antsel_type; scalar_t__ antsel_avail; } ;

/* Variables and functions */
 scalar_t__ ANTSEL_2x3 ; 
 scalar_t__ ANTSEL_2x4 ; 
 int ANT_SELCFG_AUTO ; 
 void* ANT_SELCFG_DEF_2x2 ; 
 int ANT_SELCFG_DEF_2x3 ; 
 void* ANT_SELCFG_DEF_2x4 ; 
 scalar_t__ ANT_SELCFG_NUM_2x3 ; 
 scalar_t__ ANT_SELCFG_NUM_2x4 ; 
 size_t ANT_SELCFG_RX_DEF ; 
 size_t ANT_SELCFG_RX_UNICAST ; 
 size_t ANT_SELCFG_TX_DEF ; 
 size_t ANT_SELCFG_TX_UNICAST ; 

__attribute__((used)) static void
brcms_c_antsel_init_cfg(struct antsel_info *asi, struct brcms_antselcfg *antsel,
		    bool auto_sel)
{
	if (asi->antsel_type == ANTSEL_2x3) {
		u8 antcfg_def = ANT_SELCFG_DEF_2x3 |
		    ((asi->antsel_avail && auto_sel) ? ANT_SELCFG_AUTO : 0);
		antsel->ant_config[ANT_SELCFG_TX_DEF] = antcfg_def;
		antsel->ant_config[ANT_SELCFG_TX_UNICAST] = antcfg_def;
		antsel->ant_config[ANT_SELCFG_RX_DEF] = antcfg_def;
		antsel->ant_config[ANT_SELCFG_RX_UNICAST] = antcfg_def;
		antsel->num_antcfg = ANT_SELCFG_NUM_2x3;

	} else if (asi->antsel_type == ANTSEL_2x4) {

		antsel->ant_config[ANT_SELCFG_TX_DEF] = ANT_SELCFG_DEF_2x4;
		antsel->ant_config[ANT_SELCFG_TX_UNICAST] = ANT_SELCFG_DEF_2x4;
		antsel->ant_config[ANT_SELCFG_RX_DEF] = ANT_SELCFG_DEF_2x4;
		antsel->ant_config[ANT_SELCFG_RX_UNICAST] = ANT_SELCFG_DEF_2x4;
		antsel->num_antcfg = ANT_SELCFG_NUM_2x4;

	} else {		/* no antenna selection available */

		antsel->ant_config[ANT_SELCFG_TX_DEF] = ANT_SELCFG_DEF_2x2;
		antsel->ant_config[ANT_SELCFG_TX_UNICAST] = ANT_SELCFG_DEF_2x2;
		antsel->ant_config[ANT_SELCFG_RX_DEF] = ANT_SELCFG_DEF_2x2;
		antsel->ant_config[ANT_SELCFG_RX_UNICAST] = ANT_SELCFG_DEF_2x2;
		antsel->num_antcfg = 0;
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
          int auto_sel = 100;
          int _len_asi0 = 1;
          struct antsel_info * asi = (struct antsel_info *) malloc(_len_asi0*sizeof(struct antsel_info));
          for(int _i0 = 0; _i0 < _len_asi0; _i0++) {
            asi[_i0].antsel_type = ((-2 * (next_i()%2)) + 1) * next_i();
        asi[_i0].antsel_avail = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_antsel0 = 1;
          struct brcms_antselcfg * antsel = (struct brcms_antselcfg *) malloc(_len_antsel0*sizeof(struct brcms_antselcfg));
          for(int _i0 = 0; _i0 < _len_antsel0; _i0++) {
            antsel[_i0].num_antcfg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_antsel__i0__ant_config0 = 1;
          antsel[_i0].ant_config = (void **) malloc(_len_antsel__i0__ant_config0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_antsel__i0__ant_config0; _j0++) {
          }
          }
          brcms_c_antsel_init_cfg(asi,antsel,auto_sel);
          free(asi);
          free(antsel);
        
        break;
    }
    // big-arr
    case 1:
    {
          int auto_sel = 255;
          int _len_asi0 = 65025;
          struct antsel_info * asi = (struct antsel_info *) malloc(_len_asi0*sizeof(struct antsel_info));
          for(int _i0 = 0; _i0 < _len_asi0; _i0++) {
            asi[_i0].antsel_type = ((-2 * (next_i()%2)) + 1) * next_i();
        asi[_i0].antsel_avail = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_antsel0 = 65025;
          struct brcms_antselcfg * antsel = (struct brcms_antselcfg *) malloc(_len_antsel0*sizeof(struct brcms_antselcfg));
          for(int _i0 = 0; _i0 < _len_antsel0; _i0++) {
            antsel[_i0].num_antcfg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_antsel__i0__ant_config0 = 1;
          antsel[_i0].ant_config = (void **) malloc(_len_antsel__i0__ant_config0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_antsel__i0__ant_config0; _j0++) {
          }
          }
          brcms_c_antsel_init_cfg(asi,antsel,auto_sel);
          free(asi);
          free(antsel);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int auto_sel = 10;
          int _len_asi0 = 100;
          struct antsel_info * asi = (struct antsel_info *) malloc(_len_asi0*sizeof(struct antsel_info));
          for(int _i0 = 0; _i0 < _len_asi0; _i0++) {
            asi[_i0].antsel_type = ((-2 * (next_i()%2)) + 1) * next_i();
        asi[_i0].antsel_avail = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_antsel0 = 100;
          struct brcms_antselcfg * antsel = (struct brcms_antselcfg *) malloc(_len_antsel0*sizeof(struct brcms_antselcfg));
          for(int _i0 = 0; _i0 < _len_antsel0; _i0++) {
            antsel[_i0].num_antcfg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_antsel__i0__ant_config0 = 1;
          antsel[_i0].ant_config = (void **) malloc(_len_antsel__i0__ant_config0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_antsel__i0__ant_config0; _j0++) {
          }
          }
          brcms_c_antsel_init_cfg(asi,antsel,auto_sel);
          free(asi);
          free(antsel);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
