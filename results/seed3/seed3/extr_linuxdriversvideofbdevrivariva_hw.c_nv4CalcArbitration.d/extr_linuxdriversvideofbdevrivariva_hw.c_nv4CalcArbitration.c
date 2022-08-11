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
struct TYPE_5__ {int pclk_khz; int mclk_khz; int nvclk_khz; int mem_page_miss; int mem_latency; int memory_width; int enable_video; int gr_during_vid; int pix_bpp; int mem_aligned; int enable_mp; } ;
typedef  TYPE_1__ nv4_sim_state ;
struct TYPE_6__ {int valid; int graphics_lwm; int graphics_burst_size; int video_lwm; int video_burst_size; } ;
typedef  TYPE_2__ nv4_fifo_info ;

/* Variables and functions */

__attribute__((used)) static void nv4CalcArbitration 
(
    nv4_fifo_info *fifo,
    nv4_sim_state *arb
)
{
    int data, pagemiss, cas,width, video_enable, color_key_enable, bpp, align;
    int nvclks, mclks, pclks, vpagemiss, crtpagemiss, vbs;
    int found, mclk_extra, mclk_loop, cbs, m1, p1;
    int mclk_freq, pclk_freq, nvclk_freq, mp_enable;
    int us_m, us_n, us_p, video_drain_rate, crtc_drain_rate;
    int vpm_us, us_video, vlwm, video_fill_us, cpm_us, us_crt,clwm;
    int craw, vraw;

    fifo->valid = 1;
    pclk_freq = arb->pclk_khz;
    mclk_freq = arb->mclk_khz;
    nvclk_freq = arb->nvclk_khz;
    pagemiss = arb->mem_page_miss;
    cas = arb->mem_latency;
    width = arb->memory_width >> 6;
    video_enable = arb->enable_video;
    color_key_enable = arb->gr_during_vid;
    bpp = arb->pix_bpp;
    align = arb->mem_aligned;
    mp_enable = arb->enable_mp;
    clwm = 0;
    vlwm = 0;
    cbs = 128;
    pclks = 2;
    nvclks = 2;
    nvclks += 2;
    nvclks += 1;
    mclks = 5;
    mclks += 3;
    mclks += 1;
    mclks += cas;
    mclks += 1;
    mclks += 1;
    mclks += 1;
    mclks += 1;
    mclk_extra = 3;
    nvclks += 2;
    nvclks += 1;
    nvclks += 1;
    nvclks += 1;
    if (mp_enable)
        mclks+=4;
    nvclks += 0;
    pclks += 0;
    found = 0;
    vbs = 0;
    while (found != 1)
    {
        fifo->valid = 1;
        found = 1;
        mclk_loop = mclks+mclk_extra;
        us_m = mclk_loop *1000*1000 / mclk_freq;
        us_n = nvclks*1000*1000 / nvclk_freq;
        us_p = nvclks*1000*1000 / pclk_freq;
        if (video_enable)
        {
            video_drain_rate = pclk_freq * 2;
            crtc_drain_rate = pclk_freq * bpp/8;
            vpagemiss = 2;
            vpagemiss += 1;
            crtpagemiss = 2;
            vpm_us = (vpagemiss * pagemiss)*1000*1000/mclk_freq;
            if (nvclk_freq * 2 > mclk_freq * width)
                video_fill_us = cbs*1000*1000 / 16 / nvclk_freq ;
            else
                video_fill_us = cbs*1000*1000 / (8 * width) / mclk_freq;
            us_video = vpm_us + us_m + us_n + us_p + video_fill_us;
            vlwm = us_video * video_drain_rate/(1000*1000);
            vlwm++;
            vbs = 128;
            if (vlwm > 128) vbs = 64;
            if (vlwm > (256-64)) vbs = 32;
            if (nvclk_freq * 2 > mclk_freq * width)
                video_fill_us = vbs *1000*1000/ 16 / nvclk_freq ;
            else
                video_fill_us = vbs*1000*1000 / (8 * width) / mclk_freq;
            cpm_us = crtpagemiss  * pagemiss *1000*1000/ mclk_freq;
            us_crt =
            us_video
            +video_fill_us
            +cpm_us
            +us_m + us_n +us_p
            ;
            clwm = us_crt * crtc_drain_rate/(1000*1000);
            clwm++;
        }
        else
        {
            crtc_drain_rate = pclk_freq * bpp/8;
            crtpagemiss = 2;
            crtpagemiss += 1;
            cpm_us = crtpagemiss  * pagemiss *1000*1000/ mclk_freq;
            us_crt =  cpm_us + us_m + us_n + us_p ;
            clwm = us_crt * crtc_drain_rate/(1000*1000);
            clwm++;
        }
        m1 = clwm + cbs - 512;
        p1 = m1 * pclk_freq / mclk_freq;
        p1 = p1 * bpp / 8;
        if ((p1 < m1) && (m1 > 0))
        {
            fifo->valid = 0;
            found = 0;
            if (mclk_extra ==0)   found = 1;
            mclk_extra--;
        }
        else if (video_enable)
        {
            if ((clwm > 511) || (vlwm > 255))
            {
                fifo->valid = 0;
                found = 0;
                if (mclk_extra ==0)   found = 1;
                mclk_extra--;
            }
        }
        else
        {
            if (clwm > 519)
            {
                fifo->valid = 0;
                found = 0;
                if (mclk_extra ==0)   found = 1;
                mclk_extra--;
            }
        }
        craw = clwm;
        vraw = vlwm;
        if (clwm < 384) clwm = 384;
        if (vlwm < 128) vlwm = 128;
        data = (int)(clwm);
        fifo->graphics_lwm = data;
        fifo->graphics_burst_size = 128;
        data = (int)((vlwm+15));
        fifo->video_lwm = data;
        fifo->video_burst_size = vbs;
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
          }
          nv4CalcArbitration(fifo,arb);
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
          }
          nv4CalcArbitration(fifo,arb);
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
          }
          nv4CalcArbitration(fifo,arb);
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
