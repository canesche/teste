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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int pclk_khz; int mclk_khz; int nvclk_khz; int mem_page_miss; int mem_latency; int memory_width; int enable_video; int gr_during_vid; int pix_bpp; int mem_aligned; int enable_mp; scalar_t__ memory_type; } ;
typedef  TYPE_1__ nv10_sim_state ;
struct TYPE_6__ {int valid; int graphics_lwm; int graphics_burst_size; int video_lwm; int video_burst_size; } ;
typedef  TYPE_2__ nv10_fifo_info ;

/* Variables and functions */

__attribute__((used)) static void nv10CalcArbitration 
(
    nv10_fifo_info *fifo,
    nv10_sim_state *arb
)
{
    int data, pagemiss, cas,width, video_enable, color_key_enable, bpp, align;
    int nvclks, mclks, pclks, vpagemiss, crtpagemiss, vbs;
    int nvclk_fill, us_extra;
    int found, mclk_extra, mclk_loop, cbs, m1;
    int mclk_freq, pclk_freq, nvclk_freq, mp_enable;
    int us_m, us_m_min, us_n, us_p, video_drain_rate, crtc_drain_rate;
    int vus_m, vus_n, vus_p;
    int vpm_us, us_video, vlwm, cpm_us, us_crt,clwm;
    int clwm_rnd_down;
    int craw, m2us, us_pipe, us_pipe_min, vus_pipe, p1clk, p2;
    int pclks_2_top_fifo, min_mclk_extra;
    int us_min_mclk_extra;

    fifo->valid = 1;
    pclk_freq = arb->pclk_khz; /* freq in KHz */
    mclk_freq = arb->mclk_khz;
    nvclk_freq = arb->nvclk_khz;
    pagemiss = arb->mem_page_miss;
    cas = arb->mem_latency;
    width = arb->memory_width/64;
    video_enable = arb->enable_video;
    color_key_enable = arb->gr_during_vid;
    bpp = arb->pix_bpp;
    align = arb->mem_aligned;
    mp_enable = arb->enable_mp;
    clwm = 0;
    vlwm = 1024;

    cbs = 512;
    vbs = 512;

    pclks = 4; /* lwm detect. */

    nvclks = 3; /* lwm -> sync. */
    nvclks += 2; /* fbi bus cycles (1 req + 1 busy) */

    mclks  = 1;   /* 2 edge sync.  may be very close to edge so just put one. */

    mclks += 1;   /* arb_hp_req */
    mclks += 5;   /* ap_hp_req   tiling pipeline */

    mclks += 2;    /* tc_req     latency fifo */
    mclks += 2;    /* fb_cas_n_  memory request to fbio block */
    mclks += 7;    /* sm_d_rdv   data returned from fbio block */

    /* fb.rd.d.Put_gc   need to accumulate 256 bits for read */
    if (arb->memory_type == 0)
      if (arb->memory_width == 64) /* 64 bit bus */
        mclks += 4;
      else
        mclks += 2;
    else
      if (arb->memory_width == 64) /* 64 bit bus */
        mclks += 2;
      else
        mclks += 1;

    if ((!video_enable) && (arb->memory_width == 128))
    {  
      mclk_extra = (bpp == 32) ? 31 : 42; /* Margin of error */
      min_mclk_extra = 17;
    }
    else
    {
      mclk_extra = (bpp == 32) ? 8 : 4; /* Margin of error */
      /* mclk_extra = 4; */ /* Margin of error */
      min_mclk_extra = 18;
    }

    nvclks += 1; /* 2 edge sync.  may be very close to edge so just put one. */
    nvclks += 1; /* fbi_d_rdv_n */
    nvclks += 1; /* Fbi_d_rdata */
    nvclks += 1; /* crtfifo load */

    if(mp_enable)
      mclks+=4; /* Mp can get in with a burst of 8. */
    /* Extra clocks determined by heuristics */

    nvclks += 0;
    pclks += 0;
    found = 0;
    while(found != 1) {
      fifo->valid = 1;
      found = 1;
      mclk_loop = mclks+mclk_extra;
      us_m = mclk_loop *1000*1000 / mclk_freq; /* Mclk latency in us */
      us_m_min = mclks * 1000*1000 / mclk_freq; /* Minimum Mclk latency in us */
      us_min_mclk_extra = min_mclk_extra *1000*1000 / mclk_freq;
      us_n = nvclks*1000*1000 / nvclk_freq;/* nvclk latency in us */
      us_p = pclks*1000*1000 / pclk_freq;/* nvclk latency in us */
      us_pipe = us_m + us_n + us_p;
      us_pipe_min = us_m_min + us_n + us_p;
      us_extra = 0;

      vus_m = mclk_loop *1000*1000 / mclk_freq; /* Mclk latency in us */
      vus_n = (4)*1000*1000 / nvclk_freq;/* nvclk latency in us */
      vus_p = 0*1000*1000 / pclk_freq;/* pclk latency in us */
      vus_pipe = vus_m + vus_n + vus_p;

      if(video_enable) {
        video_drain_rate = pclk_freq * 4; /* MB/s */
        crtc_drain_rate = pclk_freq * bpp/8; /* MB/s */

        vpagemiss = 1; /* self generating page miss */
        vpagemiss += 1; /* One higher priority before */

        crtpagemiss = 2; /* self generating page miss */
        if(mp_enable)
            crtpagemiss += 1; /* if MA0 conflict */

        vpm_us = (vpagemiss * pagemiss)*1000*1000/mclk_freq;

        us_video = vpm_us + vus_m; /* Video has separate read return path */

        cpm_us = crtpagemiss  * pagemiss *1000*1000/ mclk_freq;
        us_crt =
          us_video  /* Wait for video */
          +cpm_us /* CRT Page miss */
          +us_m + us_n +us_p /* other latency */
          ;

        clwm = us_crt * crtc_drain_rate/(1000*1000);
        clwm++; /* fixed point <= float_point - 1.  Fixes that */
      } else {
        crtc_drain_rate = pclk_freq * bpp/8; /* bpp * pclk/8 */

        crtpagemiss = 1; /* self generating page miss */
        crtpagemiss += 1; /* MA0 page miss */
        if(mp_enable)
            crtpagemiss += 1; /* if MA0 conflict */
        cpm_us = crtpagemiss  * pagemiss *1000*1000/ mclk_freq;
        us_crt =  cpm_us + us_m + us_n + us_p ;
        clwm = us_crt * crtc_drain_rate/(1000*1000);
        clwm++; /* fixed point <= float_point - 1.  Fixes that */

  /*
          //
          // Another concern, only for high pclks so don't do this
          // with video:
          // What happens if the latency to fetch the cbs is so large that
          // fifo empties.  In that case we need to have an alternate clwm value
          // based off the total burst fetch
          //
          us_crt = (cbs * 1000 * 1000)/ (8*width)/mclk_freq ;
          us_crt = us_crt + us_m + us_n + us_p + (4 * 1000 * 1000)/mclk_freq;
          clwm_mt = us_crt * crtc_drain_rate/(1000*1000);
          clwm_mt ++;
          if(clwm_mt > clwm)
              clwm = clwm_mt;
  */
          /* Finally, a heuristic check when width == 64 bits */
          if(width == 1){
              nvclk_fill = nvclk_freq * 8;
              if(crtc_drain_rate * 100 >= nvclk_fill * 102)
                      clwm = 0xfff; /*Large number to fail */

              else if(crtc_drain_rate * 100  >= nvclk_fill * 98) {
                  clwm = 1024;
                  cbs = 512;
                  us_extra = (cbs * 1000 * 1000)/ (8*width)/mclk_freq ;
              }
          }
      }


      /*
        Overfill check:

        */

      clwm_rnd_down = ((int)clwm/8)*8;
      if (clwm_rnd_down < clwm)
          clwm += 8;

      m1 = clwm + cbs -  1024; /* Amount of overfill */
      m2us = us_pipe_min + us_min_mclk_extra;
      pclks_2_top_fifo = (1024-clwm)/(8*width);

      /* pclk cycles to drain */
      p1clk = m2us * pclk_freq/(1000*1000); 
      p2 = p1clk * bpp / 8; /* bytes drained. */

      if((p2 < m1) && (m1 > 0)) {
          fifo->valid = 0;
          found = 0;
          if(min_mclk_extra == 0)   {
            if(cbs <= 32) {
              found = 1; /* Can't adjust anymore! */
            } else {
              cbs = cbs/2;  /* reduce the burst size */
            }
          } else {
            min_mclk_extra--;
          }
      } else {
        if (clwm > 1023){ /* Have some margin */
          fifo->valid = 0;
          found = 0;
          if(min_mclk_extra == 0)   
              found = 1; /* Can't adjust anymore! */
          else 
              min_mclk_extra--;
        }
      }
      craw = clwm;

      if(clwm < (1024-cbs+8)) clwm = 1024-cbs+8;
      data = (int)(clwm);
      /*  printf("CRT LWM: %f bytes, prog: 0x%x, bs: 256\n", clwm, data ); */
      fifo->graphics_lwm = data;   fifo->graphics_burst_size = cbs;

      /*  printf("VID LWM: %f bytes, prog: 0x%x, bs: %d\n, ", vlwm, data, vbs ); */
      fifo->video_lwm = 1024;  fifo->video_burst_size = 512;
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
          int _len_fifo0 = 1;
          struct TYPE_6__ * fifo = (struct TYPE_6__ *) malloc(_len_fifo0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_fifo0; _i0++) {
            fifo[_i0].valid = ((-2 * (next_i()%2)) + 1) * next_i();
        fifo[_i0].graphics_lwm = ((-2 * (next_i()%2)) + 1) * next_i();
        fifo[_i0].graphics_burst_size = ((-2 * (next_i()%2)) + 1) * next_i();
        fifo[_i0].video_lwm = ((-2 * (next_i()%2)) + 1) * next_i();
        fifo[_i0].video_burst_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_arb0 = 1;
          struct TYPE_5__ * arb = (struct TYPE_5__ *) malloc(_len_arb0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_arb0; _i0++) {
            arb[_i0].pclk_khz = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].mclk_khz = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].nvclk_khz = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].mem_page_miss = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].mem_latency = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].memory_width = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].enable_video = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].gr_during_vid = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].pix_bpp = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].mem_aligned = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].enable_mp = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].memory_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nv10CalcArbitration(fifo,arb);
          free(fifo);
          free(arb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fifo0 = 65025;
          struct TYPE_6__ * fifo = (struct TYPE_6__ *) malloc(_len_fifo0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_fifo0; _i0++) {
            fifo[_i0].valid = ((-2 * (next_i()%2)) + 1) * next_i();
        fifo[_i0].graphics_lwm = ((-2 * (next_i()%2)) + 1) * next_i();
        fifo[_i0].graphics_burst_size = ((-2 * (next_i()%2)) + 1) * next_i();
        fifo[_i0].video_lwm = ((-2 * (next_i()%2)) + 1) * next_i();
        fifo[_i0].video_burst_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_arb0 = 65025;
          struct TYPE_5__ * arb = (struct TYPE_5__ *) malloc(_len_arb0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_arb0; _i0++) {
            arb[_i0].pclk_khz = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].mclk_khz = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].nvclk_khz = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].mem_page_miss = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].mem_latency = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].memory_width = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].enable_video = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].gr_during_vid = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].pix_bpp = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].mem_aligned = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].enable_mp = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].memory_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nv10CalcArbitration(fifo,arb);
          free(fifo);
          free(arb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fifo0 = 100;
          struct TYPE_6__ * fifo = (struct TYPE_6__ *) malloc(_len_fifo0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_fifo0; _i0++) {
            fifo[_i0].valid = ((-2 * (next_i()%2)) + 1) * next_i();
        fifo[_i0].graphics_lwm = ((-2 * (next_i()%2)) + 1) * next_i();
        fifo[_i0].graphics_burst_size = ((-2 * (next_i()%2)) + 1) * next_i();
        fifo[_i0].video_lwm = ((-2 * (next_i()%2)) + 1) * next_i();
        fifo[_i0].video_burst_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_arb0 = 100;
          struct TYPE_5__ * arb = (struct TYPE_5__ *) malloc(_len_arb0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_arb0; _i0++) {
            arb[_i0].pclk_khz = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].mclk_khz = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].nvclk_khz = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].mem_page_miss = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].mem_latency = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].memory_width = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].enable_video = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].gr_during_vid = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].pix_bpp = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].mem_aligned = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].enable_mp = ((-2 * (next_i()%2)) + 1) * next_i();
        arb[_i0].memory_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nv10CalcArbitration(fifo,arb);
          free(fifo);
          free(arb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
