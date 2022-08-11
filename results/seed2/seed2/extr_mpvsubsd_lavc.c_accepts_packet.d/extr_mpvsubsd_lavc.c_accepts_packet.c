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
struct sub {double pts; double endpts; int /*<<< orphan*/  valid; } ;
struct sd_lavc_priv {double current_pts; struct sub* subs; } ;
struct sd {struct sd_lavc_priv* priv; } ;

/* Variables and functions */
 int MAX_QUEUE ; 
 double MP_NOPTS_VALUE ; 

__attribute__((used)) static bool accepts_packet(struct sd *sd, double min_pts)
{
    struct sd_lavc_priv *priv = sd->priv;

    double pts = priv->current_pts;
    if (min_pts != MP_NOPTS_VALUE) {
        // guard against bogus rendering PTS in the future.
        if (pts == MP_NOPTS_VALUE || min_pts < pts)
            pts = min_pts;
        // Heuristic: we assume rendering cannot lag behind more than 1 second
        // behind decoding.
        if (pts + 1 < min_pts)
            pts = min_pts;
    }

    int last_needed = -1;
    for (int n = 0; n < MAX_QUEUE; n++) {
        struct sub *sub = &priv->subs[n];
        if (!sub->valid)
            continue;
        if (pts == MP_NOPTS_VALUE ||
            ((sub->pts == MP_NOPTS_VALUE || sub->pts >= pts) ||
             (sub->endpts == MP_NOPTS_VALUE || pts < sub->endpts)))
        {
            last_needed = n;
        }
    }
    // We can accept a packet if it wouldn't overflow the fixed subtitle queue.
    // We assume that get_bitmaps() never decreases the PTS.
    return last_needed + 1 < MAX_QUEUE;
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
          double min_pts = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_sd0 = 1;
          struct sd * sd = (struct sd *) malloc(_len_sd0*sizeof(struct sd));
          for(int _i0 = 0; _i0 < _len_sd0; _i0++) {
              int _len_sd__i0__priv0 = 1;
          sd[_i0].priv = (struct sd_lavc_priv *) malloc(_len_sd__i0__priv0*sizeof(struct sd_lavc_priv));
          for(int _j0 = 0; _j0 < _len_sd__i0__priv0; _j0++) {
            sd[_i0].priv->current_pts = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_sd__i0__priv_subs0 = 1;
          sd[_i0].priv->subs = (struct sub *) malloc(_len_sd__i0__priv_subs0*sizeof(struct sub));
          for(int _j0 = 0; _j0 < _len_sd__i0__priv_subs0; _j0++) {
            sd[_i0].priv->subs->pts = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        sd[_i0].priv->subs->endpts = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        sd[_i0].priv->subs->valid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = accepts_packet(sd,min_pts);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sd0; _aux++) {
          free(sd[_aux].priv);
          }
          free(sd);
        
        break;
    }
    // big-arr
    case 1:
    {
          double min_pts = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_sd0 = 65025;
          struct sd * sd = (struct sd *) malloc(_len_sd0*sizeof(struct sd));
          for(int _i0 = 0; _i0 < _len_sd0; _i0++) {
              int _len_sd__i0__priv0 = 1;
          sd[_i0].priv = (struct sd_lavc_priv *) malloc(_len_sd__i0__priv0*sizeof(struct sd_lavc_priv));
          for(int _j0 = 0; _j0 < _len_sd__i0__priv0; _j0++) {
            sd[_i0].priv->current_pts = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_sd__i0__priv_subs0 = 1;
          sd[_i0].priv->subs = (struct sub *) malloc(_len_sd__i0__priv_subs0*sizeof(struct sub));
          for(int _j0 = 0; _j0 < _len_sd__i0__priv_subs0; _j0++) {
            sd[_i0].priv->subs->pts = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        sd[_i0].priv->subs->endpts = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        sd[_i0].priv->subs->valid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = accepts_packet(sd,min_pts);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sd0; _aux++) {
          free(sd[_aux].priv);
          }
          free(sd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          double min_pts = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_sd0 = 100;
          struct sd * sd = (struct sd *) malloc(_len_sd0*sizeof(struct sd));
          for(int _i0 = 0; _i0 < _len_sd0; _i0++) {
              int _len_sd__i0__priv0 = 1;
          sd[_i0].priv = (struct sd_lavc_priv *) malloc(_len_sd__i0__priv0*sizeof(struct sd_lavc_priv));
          for(int _j0 = 0; _j0 < _len_sd__i0__priv0; _j0++) {
            sd[_i0].priv->current_pts = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_sd__i0__priv_subs0 = 1;
          sd[_i0].priv->subs = (struct sub *) malloc(_len_sd__i0__priv_subs0*sizeof(struct sub));
          for(int _j0 = 0; _j0 < _len_sd__i0__priv_subs0; _j0++) {
            sd[_i0].priv->subs->pts = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        sd[_i0].priv->subs->endpts = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        sd[_i0].priv->subs->valid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = accepts_packet(sd,min_pts);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sd0; _aux++) {
          free(sd[_aux].priv);
          }
          free(sd);
        
        break;
    }
    // linked
    case 3:
    {
          double min_pts = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_sd0 = 1;
          struct sd * sd = (struct sd *) malloc(_len_sd0*sizeof(struct sd));
          for(int _i0 = 0; _i0 < _len_sd0; _i0++) {
              int _len_sd__i0__priv0 = 1;
          sd[_i0].priv = (struct sd_lavc_priv *) malloc(_len_sd__i0__priv0*sizeof(struct sd_lavc_priv));
          for(int _j0 = 0; _j0 < _len_sd__i0__priv0; _j0++) {
            sd[_i0].priv->current_pts = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_sd__i0__priv_subs0 = 1;
          sd[_i0].priv->subs = (struct sub *) malloc(_len_sd__i0__priv_subs0*sizeof(struct sub));
          for(int _j0 = 0; _j0 < _len_sd__i0__priv_subs0; _j0++) {
            sd[_i0].priv->subs->pts = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        sd[_i0].priv->subs->endpts = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        sd[_i0].priv->subs->valid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = accepts_packet(sd,min_pts);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sd0; _aux++) {
          free(sd[_aux].priv);
          }
          free(sd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
