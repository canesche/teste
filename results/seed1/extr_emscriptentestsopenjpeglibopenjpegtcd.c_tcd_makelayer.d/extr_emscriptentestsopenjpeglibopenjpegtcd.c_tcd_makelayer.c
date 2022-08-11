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
typedef  struct TYPE_21__   TYPE_9__ ;
typedef  struct TYPE_20__   TYPE_8__ ;
typedef  struct TYPE_19__   TYPE_7__ ;
typedef  struct TYPE_18__   TYPE_6__ ;
typedef  struct TYPE_17__   TYPE_5__ ;
typedef  struct TYPE_16__   TYPE_4__ ;
typedef  struct TYPE_15__   TYPE_3__ ;
typedef  struct TYPE_14__   TYPE_2__ ;
typedef  struct TYPE_13__   TYPE_1__ ;
typedef  struct TYPE_12__   TYPE_10__ ;

/* Type definitions */
struct TYPE_14__ {int numresolutions; TYPE_5__* resolutions; } ;
typedef  TYPE_2__ opj_tcd_tilecomp_t ;
struct TYPE_15__ {double* distolayer; int numcomps; TYPE_2__* comps; } ;
typedef  TYPE_3__ opj_tcd_tile_t ;
struct TYPE_16__ {TYPE_3__* tcd_tile; } ;
typedef  TYPE_4__ opj_tcd_t ;
struct TYPE_17__ {int numbands; int pw; int ph; TYPE_10__* bands; } ;
typedef  TYPE_5__ opj_tcd_resolution_t ;
struct TYPE_13__ {TYPE_9__* enc; } ;
struct TYPE_18__ {int cw; int ch; TYPE_1__ cblks; } ;
typedef  TYPE_6__ opj_tcd_precinct_t ;
struct TYPE_19__ {int rate; double distortiondec; } ;
typedef  TYPE_7__ opj_tcd_pass_t ;
struct TYPE_20__ {int numpasses; double disto; int len; int data; } ;
typedef  TYPE_8__ opj_tcd_layer_t ;
struct TYPE_21__ {int numpassesinlayers; int totalpasses; int data; TYPE_7__* passes; TYPE_8__* layers; } ;
typedef  TYPE_9__ opj_tcd_cblk_enc_t ;
struct TYPE_12__ {TYPE_6__* precincts; } ;
typedef  TYPE_10__ opj_tcd_band_t ;

/* Variables and functions */

void tcd_makelayer(opj_tcd_t *tcd, int layno, double thresh, int final) {
	int compno, resno, bandno, precno, cblkno, passno;
	
	opj_tcd_tile_t *tcd_tile = tcd->tcd_tile;

	tcd_tile->distolayer[layno] = 0;	/* fixed_quality */
	
	for (compno = 0; compno < tcd_tile->numcomps; compno++) {
		opj_tcd_tilecomp_t *tilec = &tcd_tile->comps[compno];
		for (resno = 0; resno < tilec->numresolutions; resno++) {
			opj_tcd_resolution_t *res = &tilec->resolutions[resno];
			for (bandno = 0; bandno < res->numbands; bandno++) {
				opj_tcd_band_t *band = &res->bands[bandno];
				for (precno = 0; precno < res->pw * res->ph; precno++) {
					opj_tcd_precinct_t *prc = &band->precincts[precno];
					for (cblkno = 0; cblkno < prc->cw * prc->ch; cblkno++) {
						opj_tcd_cblk_enc_t *cblk = &prc->cblks.enc[cblkno];
						opj_tcd_layer_t *layer = &cblk->layers[layno];
						
						int n;
						if (layno == 0) {
							cblk->numpassesinlayers = 0;
						}
						n = cblk->numpassesinlayers;
						for (passno = cblk->numpassesinlayers; passno < cblk->totalpasses; passno++) {
							int dr;
							double dd;
							opj_tcd_pass_t *pass = &cblk->passes[passno];
							if (n == 0) {
								dr = pass->rate;
								dd = pass->distortiondec;
							} else {
								dr = pass->rate - cblk->passes[n - 1].rate;
								dd = pass->distortiondec - cblk->passes[n - 1].distortiondec;
							}
							if (!dr) {
								if (dd != 0)
									n = passno + 1;
								continue;
							}
							if (dd / dr >= thresh)
								n = passno + 1;
						}
						layer->numpasses = n - cblk->numpassesinlayers;
						
						if (!layer->numpasses) {
							layer->disto = 0;
							continue;
						}
						if (cblk->numpassesinlayers == 0) {
							layer->len = cblk->passes[n - 1].rate;
							layer->data = cblk->data;
							layer->disto = cblk->passes[n - 1].distortiondec;
						} else {
							layer->len = cblk->passes[n - 1].rate -	cblk->passes[cblk->numpassesinlayers - 1].rate;
							layer->data = cblk->data + cblk->passes[cblk->numpassesinlayers - 1].rate;
							layer->disto = cblk->passes[n - 1].distortiondec - cblk->passes[cblk->numpassesinlayers - 1].distortiondec;
						}
						
						tcd_tile->distolayer[layno] += layer->disto;	/* fixed_quality */
						
						if (final)
							cblk->numpassesinlayers = n;
					}
				}
			}
		}
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
          int layno = 100;
          double thresh = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int final = 100;
          int _len_tcd0 = 1;
          struct TYPE_16__ * tcd = (struct TYPE_16__ *) malloc(_len_tcd0*sizeof(struct TYPE_16__));
          for(int _i0 = 0; _i0 < _len_tcd0; _i0++) {
              int _len_tcd__i0__tcd_tile0 = 1;
          tcd[_i0].tcd_tile = (struct TYPE_15__ *) malloc(_len_tcd__i0__tcd_tile0*sizeof(struct TYPE_15__));
          for(int _j0 = 0; _j0 < _len_tcd__i0__tcd_tile0; _j0++) {
              int _len_tcd__i0__tcd_tile_distolayer0 = 1;
          tcd[_i0].tcd_tile->distolayer = (double *) malloc(_len_tcd__i0__tcd_tile_distolayer0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_tcd__i0__tcd_tile_distolayer0; _j0++) {
            tcd[_i0].tcd_tile->distolayer[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        tcd[_i0].tcd_tile->numcomps = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tcd__i0__tcd_tile_comps0 = 1;
          tcd[_i0].tcd_tile->comps = (struct TYPE_14__ *) malloc(_len_tcd__i0__tcd_tile_comps0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_tcd__i0__tcd_tile_comps0; _j0++) {
            tcd[_i0].tcd_tile->comps->numresolutions = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tcd__i0__tcd_tile_comps_resolutions0 = 1;
          tcd[_i0].tcd_tile->comps->resolutions = (struct TYPE_17__ *) malloc(_len_tcd__i0__tcd_tile_comps_resolutions0*sizeof(struct TYPE_17__));
          for(int _j0 = 0; _j0 < _len_tcd__i0__tcd_tile_comps_resolutions0; _j0++) {
            tcd[_i0].tcd_tile->comps->resolutions->numbands = ((-2 * (next_i()%2)) + 1) * next_i();
        tcd[_i0].tcd_tile->comps->resolutions->pw = ((-2 * (next_i()%2)) + 1) * next_i();
        tcd[_i0].tcd_tile->comps->resolutions->ph = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tcd__i0__tcd_tile_comps_resolutions_bands0 = 1;
          tcd[_i0].tcd_tile->comps->resolutions->bands = (struct TYPE_12__ *) malloc(_len_tcd__i0__tcd_tile_comps_resolutions_bands0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_tcd__i0__tcd_tile_comps_resolutions_bands0; _j0++) {
              int _len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts0 = 1;
          tcd[_i0].tcd_tile->comps->resolutions->bands->precincts = (struct TYPE_18__ *) malloc(_len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts0*sizeof(struct TYPE_18__));
          for(int _j0 = 0; _j0 < _len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts0; _j0++) {
            tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cw = ((-2 * (next_i()%2)) + 1) * next_i();
        tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->ch = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts_cblks_enc0 = 1;
          tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc = (struct TYPE_21__ *) malloc(_len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts_cblks_enc0*sizeof(struct TYPE_21__));
          for(int _j0 = 0; _j0 < _len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts_cblks_enc0; _j0++) {
            tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->numpassesinlayers = ((-2 * (next_i()%2)) + 1) * next_i();
        tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->totalpasses = ((-2 * (next_i()%2)) + 1) * next_i();
        tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->data = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts_cblks_enc_passes0 = 1;
          tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->passes = (struct TYPE_19__ *) malloc(_len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts_cblks_enc_passes0*sizeof(struct TYPE_19__));
          for(int _j0 = 0; _j0 < _len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts_cblks_enc_passes0; _j0++) {
            tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->passes->rate = ((-2 * (next_i()%2)) + 1) * next_i();
        tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->passes->distortiondec = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts_cblks_enc_layers0 = 1;
          tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->layers = (struct TYPE_20__ *) malloc(_len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts_cblks_enc_layers0*sizeof(struct TYPE_20__));
          for(int _j0 = 0; _j0 < _len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts_cblks_enc_layers0; _j0++) {
            tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->layers->numpasses = ((-2 * (next_i()%2)) + 1) * next_i();
        tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->layers->disto = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->layers->len = ((-2 * (next_i()%2)) + 1) * next_i();
        tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->layers->data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          }
          }
          }
          tcd_makelayer(tcd,layno,thresh,final);
          for(int _aux = 0; _aux < _len_tcd0; _aux++) {
          free(tcd[_aux].tcd_tile);
          }
          free(tcd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int layno = 255;
          double thresh = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int final = 255;
          int _len_tcd0 = 65025;
          struct TYPE_16__ * tcd = (struct TYPE_16__ *) malloc(_len_tcd0*sizeof(struct TYPE_16__));
          for(int _i0 = 0; _i0 < _len_tcd0; _i0++) {
              int _len_tcd__i0__tcd_tile0 = 1;
          tcd[_i0].tcd_tile = (struct TYPE_15__ *) malloc(_len_tcd__i0__tcd_tile0*sizeof(struct TYPE_15__));
          for(int _j0 = 0; _j0 < _len_tcd__i0__tcd_tile0; _j0++) {
              int _len_tcd__i0__tcd_tile_distolayer0 = 1;
          tcd[_i0].tcd_tile->distolayer = (double *) malloc(_len_tcd__i0__tcd_tile_distolayer0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_tcd__i0__tcd_tile_distolayer0; _j0++) {
            tcd[_i0].tcd_tile->distolayer[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        tcd[_i0].tcd_tile->numcomps = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tcd__i0__tcd_tile_comps0 = 1;
          tcd[_i0].tcd_tile->comps = (struct TYPE_14__ *) malloc(_len_tcd__i0__tcd_tile_comps0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_tcd__i0__tcd_tile_comps0; _j0++) {
            tcd[_i0].tcd_tile->comps->numresolutions = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tcd__i0__tcd_tile_comps_resolutions0 = 1;
          tcd[_i0].tcd_tile->comps->resolutions = (struct TYPE_17__ *) malloc(_len_tcd__i0__tcd_tile_comps_resolutions0*sizeof(struct TYPE_17__));
          for(int _j0 = 0; _j0 < _len_tcd__i0__tcd_tile_comps_resolutions0; _j0++) {
            tcd[_i0].tcd_tile->comps->resolutions->numbands = ((-2 * (next_i()%2)) + 1) * next_i();
        tcd[_i0].tcd_tile->comps->resolutions->pw = ((-2 * (next_i()%2)) + 1) * next_i();
        tcd[_i0].tcd_tile->comps->resolutions->ph = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tcd__i0__tcd_tile_comps_resolutions_bands0 = 1;
          tcd[_i0].tcd_tile->comps->resolutions->bands = (struct TYPE_12__ *) malloc(_len_tcd__i0__tcd_tile_comps_resolutions_bands0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_tcd__i0__tcd_tile_comps_resolutions_bands0; _j0++) {
              int _len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts0 = 1;
          tcd[_i0].tcd_tile->comps->resolutions->bands->precincts = (struct TYPE_18__ *) malloc(_len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts0*sizeof(struct TYPE_18__));
          for(int _j0 = 0; _j0 < _len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts0; _j0++) {
            tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cw = ((-2 * (next_i()%2)) + 1) * next_i();
        tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->ch = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts_cblks_enc0 = 1;
          tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc = (struct TYPE_21__ *) malloc(_len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts_cblks_enc0*sizeof(struct TYPE_21__));
          for(int _j0 = 0; _j0 < _len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts_cblks_enc0; _j0++) {
            tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->numpassesinlayers = ((-2 * (next_i()%2)) + 1) * next_i();
        tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->totalpasses = ((-2 * (next_i()%2)) + 1) * next_i();
        tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->data = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts_cblks_enc_passes0 = 1;
          tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->passes = (struct TYPE_19__ *) malloc(_len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts_cblks_enc_passes0*sizeof(struct TYPE_19__));
          for(int _j0 = 0; _j0 < _len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts_cblks_enc_passes0; _j0++) {
            tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->passes->rate = ((-2 * (next_i()%2)) + 1) * next_i();
        tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->passes->distortiondec = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts_cblks_enc_layers0 = 1;
          tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->layers = (struct TYPE_20__ *) malloc(_len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts_cblks_enc_layers0*sizeof(struct TYPE_20__));
          for(int _j0 = 0; _j0 < _len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts_cblks_enc_layers0; _j0++) {
            tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->layers->numpasses = ((-2 * (next_i()%2)) + 1) * next_i();
        tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->layers->disto = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->layers->len = ((-2 * (next_i()%2)) + 1) * next_i();
        tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->layers->data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          }
          }
          }
          tcd_makelayer(tcd,layno,thresh,final);
          for(int _aux = 0; _aux < _len_tcd0; _aux++) {
          free(tcd[_aux].tcd_tile);
          }
          free(tcd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int layno = 10;
          double thresh = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int final = 10;
          int _len_tcd0 = 100;
          struct TYPE_16__ * tcd = (struct TYPE_16__ *) malloc(_len_tcd0*sizeof(struct TYPE_16__));
          for(int _i0 = 0; _i0 < _len_tcd0; _i0++) {
              int _len_tcd__i0__tcd_tile0 = 1;
          tcd[_i0].tcd_tile = (struct TYPE_15__ *) malloc(_len_tcd__i0__tcd_tile0*sizeof(struct TYPE_15__));
          for(int _j0 = 0; _j0 < _len_tcd__i0__tcd_tile0; _j0++) {
              int _len_tcd__i0__tcd_tile_distolayer0 = 1;
          tcd[_i0].tcd_tile->distolayer = (double *) malloc(_len_tcd__i0__tcd_tile_distolayer0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_tcd__i0__tcd_tile_distolayer0; _j0++) {
            tcd[_i0].tcd_tile->distolayer[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        tcd[_i0].tcd_tile->numcomps = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tcd__i0__tcd_tile_comps0 = 1;
          tcd[_i0].tcd_tile->comps = (struct TYPE_14__ *) malloc(_len_tcd__i0__tcd_tile_comps0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_tcd__i0__tcd_tile_comps0; _j0++) {
            tcd[_i0].tcd_tile->comps->numresolutions = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tcd__i0__tcd_tile_comps_resolutions0 = 1;
          tcd[_i0].tcd_tile->comps->resolutions = (struct TYPE_17__ *) malloc(_len_tcd__i0__tcd_tile_comps_resolutions0*sizeof(struct TYPE_17__));
          for(int _j0 = 0; _j0 < _len_tcd__i0__tcd_tile_comps_resolutions0; _j0++) {
            tcd[_i0].tcd_tile->comps->resolutions->numbands = ((-2 * (next_i()%2)) + 1) * next_i();
        tcd[_i0].tcd_tile->comps->resolutions->pw = ((-2 * (next_i()%2)) + 1) * next_i();
        tcd[_i0].tcd_tile->comps->resolutions->ph = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tcd__i0__tcd_tile_comps_resolutions_bands0 = 1;
          tcd[_i0].tcd_tile->comps->resolutions->bands = (struct TYPE_12__ *) malloc(_len_tcd__i0__tcd_tile_comps_resolutions_bands0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_tcd__i0__tcd_tile_comps_resolutions_bands0; _j0++) {
              int _len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts0 = 1;
          tcd[_i0].tcd_tile->comps->resolutions->bands->precincts = (struct TYPE_18__ *) malloc(_len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts0*sizeof(struct TYPE_18__));
          for(int _j0 = 0; _j0 < _len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts0; _j0++) {
            tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cw = ((-2 * (next_i()%2)) + 1) * next_i();
        tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->ch = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts_cblks_enc0 = 1;
          tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc = (struct TYPE_21__ *) malloc(_len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts_cblks_enc0*sizeof(struct TYPE_21__));
          for(int _j0 = 0; _j0 < _len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts_cblks_enc0; _j0++) {
            tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->numpassesinlayers = ((-2 * (next_i()%2)) + 1) * next_i();
        tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->totalpasses = ((-2 * (next_i()%2)) + 1) * next_i();
        tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->data = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts_cblks_enc_passes0 = 1;
          tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->passes = (struct TYPE_19__ *) malloc(_len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts_cblks_enc_passes0*sizeof(struct TYPE_19__));
          for(int _j0 = 0; _j0 < _len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts_cblks_enc_passes0; _j0++) {
            tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->passes->rate = ((-2 * (next_i()%2)) + 1) * next_i();
        tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->passes->distortiondec = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts_cblks_enc_layers0 = 1;
          tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->layers = (struct TYPE_20__ *) malloc(_len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts_cblks_enc_layers0*sizeof(struct TYPE_20__));
          for(int _j0 = 0; _j0 < _len_tcd__i0__tcd_tile_comps_resolutions_bands_precincts_cblks_enc_layers0; _j0++) {
            tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->layers->numpasses = ((-2 * (next_i()%2)) + 1) * next_i();
        tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->layers->disto = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->layers->len = ((-2 * (next_i()%2)) + 1) * next_i();
        tcd[_i0].tcd_tile->comps->resolutions->bands->precincts->cblks.enc->layers->data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          }
          }
          }
          tcd_makelayer(tcd,layno,thresh,final);
          for(int _aux = 0; _aux < _len_tcd0; _aux++) {
          free(tcd[_aux].tcd_tile);
          }
          free(tcd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
