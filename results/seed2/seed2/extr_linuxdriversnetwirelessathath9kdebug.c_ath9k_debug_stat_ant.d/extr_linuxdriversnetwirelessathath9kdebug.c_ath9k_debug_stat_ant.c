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
struct TYPE_3__ {struct ath_antenna_stats* ant_stats; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;
struct ath_softc {TYPE_2__ debug; } ;
struct ath_hw_antcomb_conf {size_t main_lna_conf; size_t alt_lna_conf; } ;
struct ath_antenna_stats {int rssi_avg; int /*<<< orphan*/ * lna_attempt_cnt; } ;

/* Variables and functions */
 size_t ANT_ALT ; 
 size_t ANT_MAIN ; 

void ath9k_debug_stat_ant(struct ath_softc *sc,
			  struct ath_hw_antcomb_conf *div_ant_conf,
			  int main_rssi_avg, int alt_rssi_avg)
{
	struct ath_antenna_stats *as_main = &sc->debug.stats.ant_stats[ANT_MAIN];
	struct ath_antenna_stats *as_alt = &sc->debug.stats.ant_stats[ANT_ALT];

	as_main->lna_attempt_cnt[div_ant_conf->main_lna_conf]++;
	as_alt->lna_attempt_cnt[div_ant_conf->alt_lna_conf]++;

	as_main->rssi_avg = main_rssi_avg;
	as_alt->rssi_avg = alt_rssi_avg;
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
          int main_rssi_avg = 100;
          int alt_rssi_avg = 100;
          int _len_sc0 = 1;
          struct ath_softc * sc = (struct ath_softc *) malloc(_len_sc0*sizeof(struct ath_softc));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
              int _len_sc__i0__debug_stats_ant_stats0 = 1;
          sc[_i0].debug.stats.ant_stats = (struct ath_antenna_stats *) malloc(_len_sc__i0__debug_stats_ant_stats0*sizeof(struct ath_antenna_stats));
          for(int _j0 = 0; _j0 < _len_sc__i0__debug_stats_ant_stats0; _j0++) {
            sc[_i0].debug.stats.ant_stats->rssi_avg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sc__i0__debug_stats_ant_stats_lna_attempt_cnt0 = 1;
          sc[_i0].debug.stats.ant_stats->lna_attempt_cnt = (int *) malloc(_len_sc__i0__debug_stats_ant_stats_lna_attempt_cnt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sc__i0__debug_stats_ant_stats_lna_attempt_cnt0; _j0++) {
            sc[_i0].debug.stats.ant_stats->lna_attempt_cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_div_ant_conf0 = 1;
          struct ath_hw_antcomb_conf * div_ant_conf = (struct ath_hw_antcomb_conf *) malloc(_len_div_ant_conf0*sizeof(struct ath_hw_antcomb_conf));
          for(int _i0 = 0; _i0 < _len_div_ant_conf0; _i0++) {
            div_ant_conf[_i0].main_lna_conf = ((-2 * (next_i()%2)) + 1) * next_i();
        div_ant_conf[_i0].alt_lna_conf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath9k_debug_stat_ant(sc,div_ant_conf,main_rssi_avg,alt_rssi_avg);
          free(sc);
          free(div_ant_conf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int main_rssi_avg = 255;
          int alt_rssi_avg = 255;
          int _len_sc0 = 65025;
          struct ath_softc * sc = (struct ath_softc *) malloc(_len_sc0*sizeof(struct ath_softc));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
              int _len_sc__i0__debug_stats_ant_stats0 = 1;
          sc[_i0].debug.stats.ant_stats = (struct ath_antenna_stats *) malloc(_len_sc__i0__debug_stats_ant_stats0*sizeof(struct ath_antenna_stats));
          for(int _j0 = 0; _j0 < _len_sc__i0__debug_stats_ant_stats0; _j0++) {
            sc[_i0].debug.stats.ant_stats->rssi_avg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sc__i0__debug_stats_ant_stats_lna_attempt_cnt0 = 1;
          sc[_i0].debug.stats.ant_stats->lna_attempt_cnt = (int *) malloc(_len_sc__i0__debug_stats_ant_stats_lna_attempt_cnt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sc__i0__debug_stats_ant_stats_lna_attempt_cnt0; _j0++) {
            sc[_i0].debug.stats.ant_stats->lna_attempt_cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_div_ant_conf0 = 65025;
          struct ath_hw_antcomb_conf * div_ant_conf = (struct ath_hw_antcomb_conf *) malloc(_len_div_ant_conf0*sizeof(struct ath_hw_antcomb_conf));
          for(int _i0 = 0; _i0 < _len_div_ant_conf0; _i0++) {
            div_ant_conf[_i0].main_lna_conf = ((-2 * (next_i()%2)) + 1) * next_i();
        div_ant_conf[_i0].alt_lna_conf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath9k_debug_stat_ant(sc,div_ant_conf,main_rssi_avg,alt_rssi_avg);
          free(sc);
          free(div_ant_conf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int main_rssi_avg = 10;
          int alt_rssi_avg = 10;
          int _len_sc0 = 100;
          struct ath_softc * sc = (struct ath_softc *) malloc(_len_sc0*sizeof(struct ath_softc));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
              int _len_sc__i0__debug_stats_ant_stats0 = 1;
          sc[_i0].debug.stats.ant_stats = (struct ath_antenna_stats *) malloc(_len_sc__i0__debug_stats_ant_stats0*sizeof(struct ath_antenna_stats));
          for(int _j0 = 0; _j0 < _len_sc__i0__debug_stats_ant_stats0; _j0++) {
            sc[_i0].debug.stats.ant_stats->rssi_avg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sc__i0__debug_stats_ant_stats_lna_attempt_cnt0 = 1;
          sc[_i0].debug.stats.ant_stats->lna_attempt_cnt = (int *) malloc(_len_sc__i0__debug_stats_ant_stats_lna_attempt_cnt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sc__i0__debug_stats_ant_stats_lna_attempt_cnt0; _j0++) {
            sc[_i0].debug.stats.ant_stats->lna_attempt_cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_div_ant_conf0 = 100;
          struct ath_hw_antcomb_conf * div_ant_conf = (struct ath_hw_antcomb_conf *) malloc(_len_div_ant_conf0*sizeof(struct ath_hw_antcomb_conf));
          for(int _i0 = 0; _i0 < _len_div_ant_conf0; _i0++) {
            div_ant_conf[_i0].main_lna_conf = ((-2 * (next_i()%2)) + 1) * next_i();
        div_ant_conf[_i0].alt_lna_conf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath9k_debug_stat_ant(sc,div_ant_conf,main_rssi_avg,alt_rssi_avg);
          free(sc);
          free(div_ant_conf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
