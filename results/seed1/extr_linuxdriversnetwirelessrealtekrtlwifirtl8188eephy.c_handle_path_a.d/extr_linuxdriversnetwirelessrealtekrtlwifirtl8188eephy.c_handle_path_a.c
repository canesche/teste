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
typedef  size_t u8 ;
struct rtl_efuse {size_t** txpwrlevel_cck; int** txpwr_ht20diff; size_t** txpwrlevel_ht40_1s; int** txpwr_legacyhtdiff; } ;

/* Variables and functions */
 size_t RF90_PATH_A ; 

__attribute__((used)) static void handle_path_a(struct rtl_efuse *rtlefuse, u8 index,
			  u8 *cckpowerlevel, u8 *ofdmpowerlevel,
			  u8 *bw20powerlevel, u8 *bw40powerlevel)
{
	cckpowerlevel[RF90_PATH_A] =
	    rtlefuse->txpwrlevel_cck[RF90_PATH_A][index];
		/*-8~7 */
	if (rtlefuse->txpwr_ht20diff[RF90_PATH_A][index] > 0x0f)
		bw20powerlevel[RF90_PATH_A] =
		  rtlefuse->txpwrlevel_ht40_1s[RF90_PATH_A][index] -
		  (~(rtlefuse->txpwr_ht20diff[RF90_PATH_A][index]) + 1);
	else
		bw20powerlevel[RF90_PATH_A] =
		  rtlefuse->txpwrlevel_ht40_1s[RF90_PATH_A][index] +
		  rtlefuse->txpwr_ht20diff[RF90_PATH_A][index];
	if (rtlefuse->txpwr_legacyhtdiff[RF90_PATH_A][index] > 0xf)
		ofdmpowerlevel[RF90_PATH_A] =
		  rtlefuse->txpwrlevel_ht40_1s[RF90_PATH_A][index] -
		  (~(rtlefuse->txpwr_legacyhtdiff[RF90_PATH_A][index])+1);
	else
		ofdmpowerlevel[RF90_PATH_A] =
		rtlefuse->txpwrlevel_ht40_1s[RF90_PATH_A][index] +
		  rtlefuse->txpwr_legacyhtdiff[RF90_PATH_A][index];
	bw40powerlevel[RF90_PATH_A] =
	  rtlefuse->txpwrlevel_ht40_1s[RF90_PATH_A][index];
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
          unsigned long index = 100;
          int _len_rtlefuse0 = 1;
          struct rtl_efuse * rtlefuse = (struct rtl_efuse *) malloc(_len_rtlefuse0*sizeof(struct rtl_efuse));
          for(int _i0 = 0; _i0 < _len_rtlefuse0; _i0++) {
              int _len_rtlefuse__i0__txpwrlevel_cck0 = 1;
          rtlefuse[_i0].txpwrlevel_cck = (unsigned long **) malloc(_len_rtlefuse__i0__txpwrlevel_cck0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_rtlefuse__i0__txpwrlevel_cck0; _j0++) {
            int _len_rtlefuse__i0__txpwrlevel_cck1 = 1;
            rtlefuse[_i0].txpwrlevel_cck[_j0] = (unsigned long *) malloc(_len_rtlefuse__i0__txpwrlevel_cck1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_rtlefuse__i0__txpwrlevel_cck1; _j1++) {
              rtlefuse[_i0].txpwrlevel_cck[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_rtlefuse__i0__txpwr_ht20diff0 = 1;
          rtlefuse[_i0].txpwr_ht20diff = (int **) malloc(_len_rtlefuse__i0__txpwr_ht20diff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_rtlefuse__i0__txpwr_ht20diff0; _j0++) {
            int _len_rtlefuse__i0__txpwr_ht20diff1 = 1;
            rtlefuse[_i0].txpwr_ht20diff[_j0] = (int *) malloc(_len_rtlefuse__i0__txpwr_ht20diff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_rtlefuse__i0__txpwr_ht20diff1; _j1++) {
              rtlefuse[_i0].txpwr_ht20diff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_rtlefuse__i0__txpwrlevel_ht40_1s0 = 1;
          rtlefuse[_i0].txpwrlevel_ht40_1s = (unsigned long **) malloc(_len_rtlefuse__i0__txpwrlevel_ht40_1s0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_rtlefuse__i0__txpwrlevel_ht40_1s0; _j0++) {
            int _len_rtlefuse__i0__txpwrlevel_ht40_1s1 = 1;
            rtlefuse[_i0].txpwrlevel_ht40_1s[_j0] = (unsigned long *) malloc(_len_rtlefuse__i0__txpwrlevel_ht40_1s1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_rtlefuse__i0__txpwrlevel_ht40_1s1; _j1++) {
              rtlefuse[_i0].txpwrlevel_ht40_1s[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_rtlefuse__i0__txpwr_legacyhtdiff0 = 1;
          rtlefuse[_i0].txpwr_legacyhtdiff = (int **) malloc(_len_rtlefuse__i0__txpwr_legacyhtdiff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_rtlefuse__i0__txpwr_legacyhtdiff0; _j0++) {
            int _len_rtlefuse__i0__txpwr_legacyhtdiff1 = 1;
            rtlefuse[_i0].txpwr_legacyhtdiff[_j0] = (int *) malloc(_len_rtlefuse__i0__txpwr_legacyhtdiff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_rtlefuse__i0__txpwr_legacyhtdiff1; _j1++) {
              rtlefuse[_i0].txpwr_legacyhtdiff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_cckpowerlevel0 = 1;
          unsigned long * cckpowerlevel = (unsigned long *) malloc(_len_cckpowerlevel0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_cckpowerlevel0; _i0++) {
            cckpowerlevel[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ofdmpowerlevel0 = 1;
          unsigned long * ofdmpowerlevel = (unsigned long *) malloc(_len_ofdmpowerlevel0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_ofdmpowerlevel0; _i0++) {
            ofdmpowerlevel[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bw20powerlevel0 = 1;
          unsigned long * bw20powerlevel = (unsigned long *) malloc(_len_bw20powerlevel0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_bw20powerlevel0; _i0++) {
            bw20powerlevel[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bw40powerlevel0 = 1;
          unsigned long * bw40powerlevel = (unsigned long *) malloc(_len_bw40powerlevel0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_bw40powerlevel0; _i0++) {
            bw40powerlevel[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          handle_path_a(rtlefuse,index,cckpowerlevel,ofdmpowerlevel,bw20powerlevel,bw40powerlevel);
          for(int _aux = 0; _aux < _len_rtlefuse0; _aux++) {
          free(*(rtlefuse[_aux].txpwrlevel_cck));
        free(rtlefuse[_aux].txpwrlevel_cck);
          }
          for(int _aux = 0; _aux < _len_rtlefuse0; _aux++) {
          free(*(rtlefuse[_aux].txpwr_ht20diff));
        free(rtlefuse[_aux].txpwr_ht20diff);
          }
          for(int _aux = 0; _aux < _len_rtlefuse0; _aux++) {
          free(*(rtlefuse[_aux].txpwrlevel_ht40_1s));
        free(rtlefuse[_aux].txpwrlevel_ht40_1s);
          }
          for(int _aux = 0; _aux < _len_rtlefuse0; _aux++) {
          free(*(rtlefuse[_aux].txpwr_legacyhtdiff));
        free(rtlefuse[_aux].txpwr_legacyhtdiff);
          }
          free(rtlefuse);
          free(cckpowerlevel);
          free(ofdmpowerlevel);
          free(bw20powerlevel);
          free(bw40powerlevel);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long index = 255;
          int _len_rtlefuse0 = 65025;
          struct rtl_efuse * rtlefuse = (struct rtl_efuse *) malloc(_len_rtlefuse0*sizeof(struct rtl_efuse));
          for(int _i0 = 0; _i0 < _len_rtlefuse0; _i0++) {
              int _len_rtlefuse__i0__txpwrlevel_cck0 = 1;
          rtlefuse[_i0].txpwrlevel_cck = (unsigned long **) malloc(_len_rtlefuse__i0__txpwrlevel_cck0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_rtlefuse__i0__txpwrlevel_cck0; _j0++) {
            int _len_rtlefuse__i0__txpwrlevel_cck1 = 1;
            rtlefuse[_i0].txpwrlevel_cck[_j0] = (unsigned long *) malloc(_len_rtlefuse__i0__txpwrlevel_cck1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_rtlefuse__i0__txpwrlevel_cck1; _j1++) {
              rtlefuse[_i0].txpwrlevel_cck[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_rtlefuse__i0__txpwr_ht20diff0 = 1;
          rtlefuse[_i0].txpwr_ht20diff = (int **) malloc(_len_rtlefuse__i0__txpwr_ht20diff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_rtlefuse__i0__txpwr_ht20diff0; _j0++) {
            int _len_rtlefuse__i0__txpwr_ht20diff1 = 1;
            rtlefuse[_i0].txpwr_ht20diff[_j0] = (int *) malloc(_len_rtlefuse__i0__txpwr_ht20diff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_rtlefuse__i0__txpwr_ht20diff1; _j1++) {
              rtlefuse[_i0].txpwr_ht20diff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_rtlefuse__i0__txpwrlevel_ht40_1s0 = 1;
          rtlefuse[_i0].txpwrlevel_ht40_1s = (unsigned long **) malloc(_len_rtlefuse__i0__txpwrlevel_ht40_1s0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_rtlefuse__i0__txpwrlevel_ht40_1s0; _j0++) {
            int _len_rtlefuse__i0__txpwrlevel_ht40_1s1 = 1;
            rtlefuse[_i0].txpwrlevel_ht40_1s[_j0] = (unsigned long *) malloc(_len_rtlefuse__i0__txpwrlevel_ht40_1s1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_rtlefuse__i0__txpwrlevel_ht40_1s1; _j1++) {
              rtlefuse[_i0].txpwrlevel_ht40_1s[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_rtlefuse__i0__txpwr_legacyhtdiff0 = 1;
          rtlefuse[_i0].txpwr_legacyhtdiff = (int **) malloc(_len_rtlefuse__i0__txpwr_legacyhtdiff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_rtlefuse__i0__txpwr_legacyhtdiff0; _j0++) {
            int _len_rtlefuse__i0__txpwr_legacyhtdiff1 = 1;
            rtlefuse[_i0].txpwr_legacyhtdiff[_j0] = (int *) malloc(_len_rtlefuse__i0__txpwr_legacyhtdiff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_rtlefuse__i0__txpwr_legacyhtdiff1; _j1++) {
              rtlefuse[_i0].txpwr_legacyhtdiff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_cckpowerlevel0 = 65025;
          unsigned long * cckpowerlevel = (unsigned long *) malloc(_len_cckpowerlevel0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_cckpowerlevel0; _i0++) {
            cckpowerlevel[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ofdmpowerlevel0 = 65025;
          unsigned long * ofdmpowerlevel = (unsigned long *) malloc(_len_ofdmpowerlevel0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_ofdmpowerlevel0; _i0++) {
            ofdmpowerlevel[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bw20powerlevel0 = 65025;
          unsigned long * bw20powerlevel = (unsigned long *) malloc(_len_bw20powerlevel0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_bw20powerlevel0; _i0++) {
            bw20powerlevel[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bw40powerlevel0 = 65025;
          unsigned long * bw40powerlevel = (unsigned long *) malloc(_len_bw40powerlevel0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_bw40powerlevel0; _i0++) {
            bw40powerlevel[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          handle_path_a(rtlefuse,index,cckpowerlevel,ofdmpowerlevel,bw20powerlevel,bw40powerlevel);
          for(int _aux = 0; _aux < _len_rtlefuse0; _aux++) {
          free(*(rtlefuse[_aux].txpwrlevel_cck));
        free(rtlefuse[_aux].txpwrlevel_cck);
          }
          for(int _aux = 0; _aux < _len_rtlefuse0; _aux++) {
          free(*(rtlefuse[_aux].txpwr_ht20diff));
        free(rtlefuse[_aux].txpwr_ht20diff);
          }
          for(int _aux = 0; _aux < _len_rtlefuse0; _aux++) {
          free(*(rtlefuse[_aux].txpwrlevel_ht40_1s));
        free(rtlefuse[_aux].txpwrlevel_ht40_1s);
          }
          for(int _aux = 0; _aux < _len_rtlefuse0; _aux++) {
          free(*(rtlefuse[_aux].txpwr_legacyhtdiff));
        free(rtlefuse[_aux].txpwr_legacyhtdiff);
          }
          free(rtlefuse);
          free(cckpowerlevel);
          free(ofdmpowerlevel);
          free(bw20powerlevel);
          free(bw40powerlevel);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long index = 10;
          int _len_rtlefuse0 = 100;
          struct rtl_efuse * rtlefuse = (struct rtl_efuse *) malloc(_len_rtlefuse0*sizeof(struct rtl_efuse));
          for(int _i0 = 0; _i0 < _len_rtlefuse0; _i0++) {
              int _len_rtlefuse__i0__txpwrlevel_cck0 = 1;
          rtlefuse[_i0].txpwrlevel_cck = (unsigned long **) malloc(_len_rtlefuse__i0__txpwrlevel_cck0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_rtlefuse__i0__txpwrlevel_cck0; _j0++) {
            int _len_rtlefuse__i0__txpwrlevel_cck1 = 1;
            rtlefuse[_i0].txpwrlevel_cck[_j0] = (unsigned long *) malloc(_len_rtlefuse__i0__txpwrlevel_cck1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_rtlefuse__i0__txpwrlevel_cck1; _j1++) {
              rtlefuse[_i0].txpwrlevel_cck[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_rtlefuse__i0__txpwr_ht20diff0 = 1;
          rtlefuse[_i0].txpwr_ht20diff = (int **) malloc(_len_rtlefuse__i0__txpwr_ht20diff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_rtlefuse__i0__txpwr_ht20diff0; _j0++) {
            int _len_rtlefuse__i0__txpwr_ht20diff1 = 1;
            rtlefuse[_i0].txpwr_ht20diff[_j0] = (int *) malloc(_len_rtlefuse__i0__txpwr_ht20diff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_rtlefuse__i0__txpwr_ht20diff1; _j1++) {
              rtlefuse[_i0].txpwr_ht20diff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_rtlefuse__i0__txpwrlevel_ht40_1s0 = 1;
          rtlefuse[_i0].txpwrlevel_ht40_1s = (unsigned long **) malloc(_len_rtlefuse__i0__txpwrlevel_ht40_1s0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_rtlefuse__i0__txpwrlevel_ht40_1s0; _j0++) {
            int _len_rtlefuse__i0__txpwrlevel_ht40_1s1 = 1;
            rtlefuse[_i0].txpwrlevel_ht40_1s[_j0] = (unsigned long *) malloc(_len_rtlefuse__i0__txpwrlevel_ht40_1s1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_rtlefuse__i0__txpwrlevel_ht40_1s1; _j1++) {
              rtlefuse[_i0].txpwrlevel_ht40_1s[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_rtlefuse__i0__txpwr_legacyhtdiff0 = 1;
          rtlefuse[_i0].txpwr_legacyhtdiff = (int **) malloc(_len_rtlefuse__i0__txpwr_legacyhtdiff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_rtlefuse__i0__txpwr_legacyhtdiff0; _j0++) {
            int _len_rtlefuse__i0__txpwr_legacyhtdiff1 = 1;
            rtlefuse[_i0].txpwr_legacyhtdiff[_j0] = (int *) malloc(_len_rtlefuse__i0__txpwr_legacyhtdiff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_rtlefuse__i0__txpwr_legacyhtdiff1; _j1++) {
              rtlefuse[_i0].txpwr_legacyhtdiff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_cckpowerlevel0 = 100;
          unsigned long * cckpowerlevel = (unsigned long *) malloc(_len_cckpowerlevel0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_cckpowerlevel0; _i0++) {
            cckpowerlevel[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ofdmpowerlevel0 = 100;
          unsigned long * ofdmpowerlevel = (unsigned long *) malloc(_len_ofdmpowerlevel0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_ofdmpowerlevel0; _i0++) {
            ofdmpowerlevel[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bw20powerlevel0 = 100;
          unsigned long * bw20powerlevel = (unsigned long *) malloc(_len_bw20powerlevel0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_bw20powerlevel0; _i0++) {
            bw20powerlevel[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bw40powerlevel0 = 100;
          unsigned long * bw40powerlevel = (unsigned long *) malloc(_len_bw40powerlevel0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_bw40powerlevel0; _i0++) {
            bw40powerlevel[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          handle_path_a(rtlefuse,index,cckpowerlevel,ofdmpowerlevel,bw20powerlevel,bw40powerlevel);
          for(int _aux = 0; _aux < _len_rtlefuse0; _aux++) {
          free(*(rtlefuse[_aux].txpwrlevel_cck));
        free(rtlefuse[_aux].txpwrlevel_cck);
          }
          for(int _aux = 0; _aux < _len_rtlefuse0; _aux++) {
          free(*(rtlefuse[_aux].txpwr_ht20diff));
        free(rtlefuse[_aux].txpwr_ht20diff);
          }
          for(int _aux = 0; _aux < _len_rtlefuse0; _aux++) {
          free(*(rtlefuse[_aux].txpwrlevel_ht40_1s));
        free(rtlefuse[_aux].txpwrlevel_ht40_1s);
          }
          for(int _aux = 0; _aux < _len_rtlefuse0; _aux++) {
          free(*(rtlefuse[_aux].txpwr_legacyhtdiff));
        free(rtlefuse[_aux].txpwr_legacyhtdiff);
          }
          free(rtlefuse);
          free(cckpowerlevel);
          free(ofdmpowerlevel);
          free(bw20powerlevel);
          free(bw40powerlevel);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
