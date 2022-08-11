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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {int nr_of_files; int curr_frame; TYPE_2__* sh; } ;
typedef  TYPE_3__ mf_t ;
struct TYPE_9__ {TYPE_3__* priv; } ;
typedef  TYPE_4__ demuxer_t ;
struct TYPE_7__ {TYPE_1__* codec; } ;
struct TYPE_6__ {double fps; } ;

/* Variables and functions */
 int SEEK_FACTOR ; 

__attribute__((used)) static void demux_seek_mf(demuxer_t *demuxer, double seek_pts, int flags)
{
    mf_t *mf = demuxer->priv;
    int newpos = seek_pts * mf->sh->codec->fps;
    if (flags & SEEK_FACTOR)
        newpos = seek_pts * (mf->nr_of_files - 1);
    if (newpos < 0)
        newpos = 0;
    if (newpos >= mf->nr_of_files)
        newpos = mf->nr_of_files;
    mf->curr_frame = newpos;
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
          double seek_pts = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int flags = 100;
          int _len_demuxer0 = 1;
          struct TYPE_9__ * demuxer = (struct TYPE_9__ *) malloc(_len_demuxer0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_demuxer0; _i0++) {
              int _len_demuxer__i0__priv0 = 1;
          demuxer[_i0].priv = (struct TYPE_8__ *) malloc(_len_demuxer__i0__priv0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_demuxer__i0__priv0; _j0++) {
            demuxer[_i0].priv->nr_of_files = ((-2 * (next_i()%2)) + 1) * next_i();
        demuxer[_i0].priv->curr_frame = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_demuxer__i0__priv_sh0 = 1;
          demuxer[_i0].priv->sh = (struct TYPE_7__ *) malloc(_len_demuxer__i0__priv_sh0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_demuxer__i0__priv_sh0; _j0++) {
              int _len_demuxer__i0__priv_sh_codec0 = 1;
          demuxer[_i0].priv->sh->codec = (struct TYPE_6__ *) malloc(_len_demuxer__i0__priv_sh_codec0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_demuxer__i0__priv_sh_codec0; _j0++) {
            demuxer[_i0].priv->sh->codec->fps = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          }
          }
          demux_seek_mf(demuxer,seek_pts,flags);
          for(int _aux = 0; _aux < _len_demuxer0; _aux++) {
          free(demuxer[_aux].priv);
          }
          free(demuxer);
        
        break;
    }
    // big-arr
    case 1:
    {
          double seek_pts = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int flags = 255;
          int _len_demuxer0 = 65025;
          struct TYPE_9__ * demuxer = (struct TYPE_9__ *) malloc(_len_demuxer0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_demuxer0; _i0++) {
              int _len_demuxer__i0__priv0 = 1;
          demuxer[_i0].priv = (struct TYPE_8__ *) malloc(_len_demuxer__i0__priv0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_demuxer__i0__priv0; _j0++) {
            demuxer[_i0].priv->nr_of_files = ((-2 * (next_i()%2)) + 1) * next_i();
        demuxer[_i0].priv->curr_frame = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_demuxer__i0__priv_sh0 = 1;
          demuxer[_i0].priv->sh = (struct TYPE_7__ *) malloc(_len_demuxer__i0__priv_sh0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_demuxer__i0__priv_sh0; _j0++) {
              int _len_demuxer__i0__priv_sh_codec0 = 1;
          demuxer[_i0].priv->sh->codec = (struct TYPE_6__ *) malloc(_len_demuxer__i0__priv_sh_codec0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_demuxer__i0__priv_sh_codec0; _j0++) {
            demuxer[_i0].priv->sh->codec->fps = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          }
          }
          demux_seek_mf(demuxer,seek_pts,flags);
          for(int _aux = 0; _aux < _len_demuxer0; _aux++) {
          free(demuxer[_aux].priv);
          }
          free(demuxer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          double seek_pts = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int flags = 10;
          int _len_demuxer0 = 100;
          struct TYPE_9__ * demuxer = (struct TYPE_9__ *) malloc(_len_demuxer0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_demuxer0; _i0++) {
              int _len_demuxer__i0__priv0 = 1;
          demuxer[_i0].priv = (struct TYPE_8__ *) malloc(_len_demuxer__i0__priv0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_demuxer__i0__priv0; _j0++) {
            demuxer[_i0].priv->nr_of_files = ((-2 * (next_i()%2)) + 1) * next_i();
        demuxer[_i0].priv->curr_frame = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_demuxer__i0__priv_sh0 = 1;
          demuxer[_i0].priv->sh = (struct TYPE_7__ *) malloc(_len_demuxer__i0__priv_sh0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_demuxer__i0__priv_sh0; _j0++) {
              int _len_demuxer__i0__priv_sh_codec0 = 1;
          demuxer[_i0].priv->sh->codec = (struct TYPE_6__ *) malloc(_len_demuxer__i0__priv_sh_codec0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_demuxer__i0__priv_sh_codec0; _j0++) {
            demuxer[_i0].priv->sh->codec->fps = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          }
          }
          demux_seek_mf(demuxer,seek_pts,flags);
          for(int _aux = 0; _aux < _len_demuxer0; _aux++) {
          free(demuxer[_aux].priv);
          }
          free(demuxer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
