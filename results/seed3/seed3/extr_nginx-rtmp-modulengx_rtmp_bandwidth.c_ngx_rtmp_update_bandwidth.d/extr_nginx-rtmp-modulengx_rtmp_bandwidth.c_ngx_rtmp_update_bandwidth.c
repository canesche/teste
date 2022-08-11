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
typedef  struct TYPE_5__   TYPE_3__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ intl_end; int bandwidth; int intl_bytes; int /*<<< orphan*/  bytes; } ;
typedef  TYPE_1__ ngx_rtmp_bandwidth_t ;
struct TYPE_5__ {scalar_t__ sec; } ;

/* Variables and functions */
 int NGX_RTMP_BANDWIDTH_INTERVAL ; 
 TYPE_3__* ngx_cached_time ; 

void
ngx_rtmp_update_bandwidth(ngx_rtmp_bandwidth_t *bw, uint32_t bytes)
{
    if (ngx_cached_time->sec > bw->intl_end) {
        bw->bandwidth = ngx_cached_time->sec >
            bw->intl_end + NGX_RTMP_BANDWIDTH_INTERVAL
            ? 0
            : bw->intl_bytes / NGX_RTMP_BANDWIDTH_INTERVAL;
        bw->intl_bytes = 0;
        bw->intl_end = ngx_cached_time->sec + NGX_RTMP_BANDWIDTH_INTERVAL;
    }

    bw->bytes += bytes;
    bw->intl_bytes += bytes;
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
          long bytes = 100;
          int _len_bw0 = 1;
          struct TYPE_4__ * bw = (struct TYPE_4__ *) malloc(_len_bw0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_bw0; _i0++) {
            bw[_i0].intl_end = ((-2 * (next_i()%2)) + 1) * next_i();
        bw[_i0].bandwidth = ((-2 * (next_i()%2)) + 1) * next_i();
        bw[_i0].intl_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        bw[_i0].bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ngx_rtmp_update_bandwidth(bw,bytes);
          free(bw);
        
        break;
    }
    // big-arr
    case 1:
    {
          long bytes = 255;
          int _len_bw0 = 65025;
          struct TYPE_4__ * bw = (struct TYPE_4__ *) malloc(_len_bw0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_bw0; _i0++) {
            bw[_i0].intl_end = ((-2 * (next_i()%2)) + 1) * next_i();
        bw[_i0].bandwidth = ((-2 * (next_i()%2)) + 1) * next_i();
        bw[_i0].intl_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        bw[_i0].bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ngx_rtmp_update_bandwidth(bw,bytes);
          free(bw);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long bytes = 10;
          int _len_bw0 = 100;
          struct TYPE_4__ * bw = (struct TYPE_4__ *) malloc(_len_bw0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_bw0; _i0++) {
            bw[_i0].intl_end = ((-2 * (next_i()%2)) + 1) * next_i();
        bw[_i0].bandwidth = ((-2 * (next_i()%2)) + 1) * next_i();
        bw[_i0].intl_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        bw[_i0].bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ngx_rtmp_update_bandwidth(bw,bytes);
          free(bw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
