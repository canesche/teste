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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int /*<<< orphan*/ ** data; } ;
struct vlc_source {TYPE_1__ frame; } ;

/* Variables and functions */
 size_t MAX_AV_PLANES ; 

__attribute__((used)) static void *vlcs_video_lock(void *data, void **planes)
{
	struct vlc_source *c = data;
	for (size_t i = 0; i < MAX_AV_PLANES && c->frame.data[i] != NULL; i++)
		planes[i] = c->frame.data[i];
	return NULL;
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
          void * data;
          int _len_planes0 = 1;
          void ** planes = (void **) malloc(_len_planes0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_planes0; _i0++) {
          }
          void * benchRet = vlcs_video_lock(data,planes);
          for(int i1 = 0; i1 < _len_planes0; i1++) {
            int _len_planes1 = 1;
              }
          free(planes);
        
        break;
    }
    // big-arr
    case 1:
    {
          void * data;
          int _len_planes0 = 65025;
          void ** planes = (void **) malloc(_len_planes0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_planes0; _i0++) {
          }
          void * benchRet = vlcs_video_lock(data,planes);
          for(int i1 = 0; i1 < _len_planes0; i1++) {
            int _len_planes1 = 1;
              }
          free(planes);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * data;
          int _len_planes0 = 100;
          void ** planes = (void **) malloc(_len_planes0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_planes0; _i0++) {
          }
          void * benchRet = vlcs_video_lock(data,planes);
          for(int i1 = 0; i1 < _len_planes0; i1++) {
            int _len_planes1 = 1;
              }
          free(planes);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
