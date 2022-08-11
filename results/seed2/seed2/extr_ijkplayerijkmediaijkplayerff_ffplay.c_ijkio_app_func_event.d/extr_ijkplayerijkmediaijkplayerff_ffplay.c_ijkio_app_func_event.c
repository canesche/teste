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
struct TYPE_6__ {int /*<<< orphan*/  logical_file_size; int /*<<< orphan*/  cache_count_bytes; int /*<<< orphan*/  cache_file_pos; int /*<<< orphan*/  cache_file_forwards; int /*<<< orphan*/  cache_physical_pos; } ;
struct TYPE_9__ {TYPE_1__ stat; int /*<<< orphan*/  ijkio_inject_opaque; } ;
struct TYPE_8__ {int /*<<< orphan*/  logical_file_size; int /*<<< orphan*/  cache_count_bytes; int /*<<< orphan*/  cache_file_pos; int /*<<< orphan*/  cache_file_forwards; int /*<<< orphan*/  cache_physical_pos; } ;
struct TYPE_7__ {scalar_t__ opaque; } ;
typedef  TYPE_2__ IjkIOApplicationContext ;
typedef  TYPE_3__ IjkIOAppCacheStatistic ;
typedef  TYPE_4__ FFPlayer ;

/* Variables and functions */
 int IJKIOAPP_EVENT_CACHE_STATISTIC ; 

__attribute__((used)) static int ijkio_app_func_event(IjkIOApplicationContext *h, int message ,void *data, size_t size)
{
    if (!h || !h->opaque || !data)
        return 0;

    FFPlayer *ffp = (FFPlayer *)h->opaque;
    if (!ffp->ijkio_inject_opaque)
        return 0;

    if (message == IJKIOAPP_EVENT_CACHE_STATISTIC && sizeof(IjkIOAppCacheStatistic) == size) {
        IjkIOAppCacheStatistic *statistic =  (IjkIOAppCacheStatistic *) (intptr_t)data;
        ffp->stat.cache_physical_pos      = statistic->cache_physical_pos;
        ffp->stat.cache_file_forwards     = statistic->cache_file_forwards;
        ffp->stat.cache_file_pos          = statistic->cache_file_pos;
        ffp->stat.cache_count_bytes       = statistic->cache_count_bytes;
        ffp->stat.logical_file_size       = statistic->logical_file_size;
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
          int message = 100;
          unsigned long size = 100;
          int _len_h0 = 1;
          struct TYPE_7__ * h = (struct TYPE_7__ *) malloc(_len_h0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].opaque = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = ijkio_app_func_event(h,message,data,size);
          printf("%d\n", benchRet); 
          free(h);
        
        break;
    }
    // big-arr
    case 1:
    {
          int message = 255;
          unsigned long size = 255;
          int _len_h0 = 65025;
          struct TYPE_7__ * h = (struct TYPE_7__ *) malloc(_len_h0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].opaque = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = ijkio_app_func_event(h,message,data,size);
          printf("%d\n", benchRet); 
          free(h);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int message = 10;
          unsigned long size = 10;
          int _len_h0 = 100;
          struct TYPE_7__ * h = (struct TYPE_7__ *) malloc(_len_h0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].opaque = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = ijkio_app_func_event(h,message,data,size);
          printf("%d\n", benchRet); 
          free(h);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
