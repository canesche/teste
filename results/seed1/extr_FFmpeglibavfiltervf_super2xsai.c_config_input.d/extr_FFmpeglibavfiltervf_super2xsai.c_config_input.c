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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {int format; TYPE_1__* dst; } ;
struct TYPE_6__ {int hi_pixel_mask; int lo_pixel_mask; int q_hi_pixel_mask; int q_lo_pixel_mask; int bpp; int is_be; } ;
struct TYPE_5__ {TYPE_2__* priv; } ;
typedef  TYPE_2__ Super2xSaIContext ;
typedef  TYPE_3__ AVFilterLink ;

/* Variables and functions */
#define  AV_PIX_FMT_BGR24 137 
#define  AV_PIX_FMT_BGR555BE 136 
#define  AV_PIX_FMT_BGR555LE 135 
#define  AV_PIX_FMT_BGR565BE 134 
#define  AV_PIX_FMT_BGR565LE 133 
#define  AV_PIX_FMT_RGB24 132 
#define  AV_PIX_FMT_RGB555BE 131 
#define  AV_PIX_FMT_RGB555LE 130 
#define  AV_PIX_FMT_RGB565BE 129 
#define  AV_PIX_FMT_RGB565LE 128 

__attribute__((used)) static int config_input(AVFilterLink *inlink)
{
    Super2xSaIContext *s = inlink->dst->priv;

    s->hi_pixel_mask   = 0xFEFEFEFE;
    s->lo_pixel_mask   = 0x01010101;
    s->q_hi_pixel_mask = 0xFCFCFCFC;
    s->q_lo_pixel_mask = 0x03030303;
    s->bpp  = 4;

    switch (inlink->format) {
    case AV_PIX_FMT_RGB24:
    case AV_PIX_FMT_BGR24:
        s->bpp = 3;
        break;

    case AV_PIX_FMT_RGB565BE:
    case AV_PIX_FMT_BGR565BE:
        s->is_be = 1;
    case AV_PIX_FMT_RGB565LE:
    case AV_PIX_FMT_BGR565LE:
        s->hi_pixel_mask   = 0xF7DEF7DE;
        s->lo_pixel_mask   = 0x08210821;
        s->q_hi_pixel_mask = 0xE79CE79C;
        s->q_lo_pixel_mask = 0x18631863;
        s->bpp = 2;
        break;

    case AV_PIX_FMT_BGR555BE:
    case AV_PIX_FMT_RGB555BE:
        s->is_be = 1;
    case AV_PIX_FMT_BGR555LE:
    case AV_PIX_FMT_RGB555LE:
        s->hi_pixel_mask   = 0x7BDE7BDE;
        s->lo_pixel_mask   = 0x04210421;
        s->q_hi_pixel_mask = 0x739C739C;
        s->q_lo_pixel_mask = 0x0C630C63;
        s->bpp = 2;
        break;
    }

    return 0;
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
          int _len_inlink0 = 1;
          struct TYPE_7__ * inlink = (struct TYPE_7__ *) malloc(_len_inlink0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_inlink0; _i0++) {
            inlink[_i0].format = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_inlink__i0__dst0 = 1;
          inlink[_i0].dst = (struct TYPE_5__ *) malloc(_len_inlink__i0__dst0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_inlink__i0__dst0; _j0++) {
              int _len_inlink__i0__dst_priv0 = 1;
          inlink[_i0].dst->priv = (struct TYPE_6__ *) malloc(_len_inlink__i0__dst_priv0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_inlink__i0__dst_priv0; _j0++) {
            inlink[_i0].dst->priv->hi_pixel_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        inlink[_i0].dst->priv->lo_pixel_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        inlink[_i0].dst->priv->q_hi_pixel_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        inlink[_i0].dst->priv->q_lo_pixel_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        inlink[_i0].dst->priv->bpp = ((-2 * (next_i()%2)) + 1) * next_i();
        inlink[_i0].dst->priv->is_be = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = config_input(inlink);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_inlink0; _aux++) {
          free(inlink[_aux].dst);
          }
          free(inlink);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_inlink0 = 65025;
          struct TYPE_7__ * inlink = (struct TYPE_7__ *) malloc(_len_inlink0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_inlink0; _i0++) {
            inlink[_i0].format = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_inlink__i0__dst0 = 1;
          inlink[_i0].dst = (struct TYPE_5__ *) malloc(_len_inlink__i0__dst0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_inlink__i0__dst0; _j0++) {
              int _len_inlink__i0__dst_priv0 = 1;
          inlink[_i0].dst->priv = (struct TYPE_6__ *) malloc(_len_inlink__i0__dst_priv0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_inlink__i0__dst_priv0; _j0++) {
            inlink[_i0].dst->priv->hi_pixel_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        inlink[_i0].dst->priv->lo_pixel_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        inlink[_i0].dst->priv->q_hi_pixel_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        inlink[_i0].dst->priv->q_lo_pixel_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        inlink[_i0].dst->priv->bpp = ((-2 * (next_i()%2)) + 1) * next_i();
        inlink[_i0].dst->priv->is_be = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = config_input(inlink);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_inlink0; _aux++) {
          free(inlink[_aux].dst);
          }
          free(inlink);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_inlink0 = 100;
          struct TYPE_7__ * inlink = (struct TYPE_7__ *) malloc(_len_inlink0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_inlink0; _i0++) {
            inlink[_i0].format = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_inlink__i0__dst0 = 1;
          inlink[_i0].dst = (struct TYPE_5__ *) malloc(_len_inlink__i0__dst0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_inlink__i0__dst0; _j0++) {
              int _len_inlink__i0__dst_priv0 = 1;
          inlink[_i0].dst->priv = (struct TYPE_6__ *) malloc(_len_inlink__i0__dst_priv0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_inlink__i0__dst_priv0; _j0++) {
            inlink[_i0].dst->priv->hi_pixel_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        inlink[_i0].dst->priv->lo_pixel_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        inlink[_i0].dst->priv->q_hi_pixel_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        inlink[_i0].dst->priv->q_lo_pixel_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        inlink[_i0].dst->priv->bpp = ((-2 * (next_i()%2)) + 1) * next_i();
        inlink[_i0].dst->priv->is_be = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = config_input(inlink);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_inlink0; _aux++) {
          free(inlink[_aux].dst);
          }
          free(inlink);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
