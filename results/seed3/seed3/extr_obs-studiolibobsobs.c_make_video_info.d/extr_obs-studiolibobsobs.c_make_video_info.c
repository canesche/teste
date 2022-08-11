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
struct video_output_info {char* name; int cache_size; int /*<<< orphan*/  colorspace; int /*<<< orphan*/  range; int /*<<< orphan*/  height; int /*<<< orphan*/  width; int /*<<< orphan*/  fps_den; int /*<<< orphan*/  fps_num; int /*<<< orphan*/  format; } ;
struct obs_video_info {int /*<<< orphan*/  colorspace; int /*<<< orphan*/  range; int /*<<< orphan*/  output_height; int /*<<< orphan*/  output_width; int /*<<< orphan*/  fps_den; int /*<<< orphan*/  fps_num; int /*<<< orphan*/  output_format; } ;

/* Variables and functions */

__attribute__((used)) static inline void make_video_info(struct video_output_info *vi,
		struct obs_video_info *ovi)
{
	vi->name    = "video";
	vi->format  = ovi->output_format;
	vi->fps_num = ovi->fps_num;
	vi->fps_den = ovi->fps_den;
	vi->width   = ovi->output_width;
	vi->height  = ovi->output_height;
	vi->range   = ovi->range;
	vi->colorspace = ovi->colorspace;
	vi->cache_size = 6;
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
          int _len_vi0 = 1;
          struct video_output_info * vi = (struct video_output_info *) malloc(_len_vi0*sizeof(struct video_output_info));
          for(int _i0 = 0; _i0 < _len_vi0; _i0++) {
              int _len_vi__i0__name0 = 1;
          vi[_i0].name = (char *) malloc(_len_vi__i0__name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_vi__i0__name0; _j0++) {
            vi[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vi[_i0].cache_size = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].range = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].fps_den = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].fps_num = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ovi0 = 1;
          struct obs_video_info * ovi = (struct obs_video_info *) malloc(_len_ovi0*sizeof(struct obs_video_info));
          for(int _i0 = 0; _i0 < _len_ovi0; _i0++) {
            ovi[_i0].colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        ovi[_i0].range = ((-2 * (next_i()%2)) + 1) * next_i();
        ovi[_i0].output_height = ((-2 * (next_i()%2)) + 1) * next_i();
        ovi[_i0].output_width = ((-2 * (next_i()%2)) + 1) * next_i();
        ovi[_i0].fps_den = ((-2 * (next_i()%2)) + 1) * next_i();
        ovi[_i0].fps_num = ((-2 * (next_i()%2)) + 1) * next_i();
        ovi[_i0].output_format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          make_video_info(vi,ovi);
          for(int _aux = 0; _aux < _len_vi0; _aux++) {
          free(vi[_aux].name);
          }
          free(vi);
          free(ovi);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vi0 = 65025;
          struct video_output_info * vi = (struct video_output_info *) malloc(_len_vi0*sizeof(struct video_output_info));
          for(int _i0 = 0; _i0 < _len_vi0; _i0++) {
              int _len_vi__i0__name0 = 1;
          vi[_i0].name = (char *) malloc(_len_vi__i0__name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_vi__i0__name0; _j0++) {
            vi[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vi[_i0].cache_size = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].range = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].fps_den = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].fps_num = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ovi0 = 65025;
          struct obs_video_info * ovi = (struct obs_video_info *) malloc(_len_ovi0*sizeof(struct obs_video_info));
          for(int _i0 = 0; _i0 < _len_ovi0; _i0++) {
            ovi[_i0].colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        ovi[_i0].range = ((-2 * (next_i()%2)) + 1) * next_i();
        ovi[_i0].output_height = ((-2 * (next_i()%2)) + 1) * next_i();
        ovi[_i0].output_width = ((-2 * (next_i()%2)) + 1) * next_i();
        ovi[_i0].fps_den = ((-2 * (next_i()%2)) + 1) * next_i();
        ovi[_i0].fps_num = ((-2 * (next_i()%2)) + 1) * next_i();
        ovi[_i0].output_format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          make_video_info(vi,ovi);
          for(int _aux = 0; _aux < _len_vi0; _aux++) {
          free(vi[_aux].name);
          }
          free(vi);
          free(ovi);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vi0 = 100;
          struct video_output_info * vi = (struct video_output_info *) malloc(_len_vi0*sizeof(struct video_output_info));
          for(int _i0 = 0; _i0 < _len_vi0; _i0++) {
              int _len_vi__i0__name0 = 1;
          vi[_i0].name = (char *) malloc(_len_vi__i0__name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_vi__i0__name0; _j0++) {
            vi[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vi[_i0].cache_size = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].range = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].fps_den = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].fps_num = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ovi0 = 100;
          struct obs_video_info * ovi = (struct obs_video_info *) malloc(_len_ovi0*sizeof(struct obs_video_info));
          for(int _i0 = 0; _i0 < _len_ovi0; _i0++) {
            ovi[_i0].colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        ovi[_i0].range = ((-2 * (next_i()%2)) + 1) * next_i();
        ovi[_i0].output_height = ((-2 * (next_i()%2)) + 1) * next_i();
        ovi[_i0].output_width = ((-2 * (next_i()%2)) + 1) * next_i();
        ovi[_i0].fps_den = ((-2 * (next_i()%2)) + 1) * next_i();
        ovi[_i0].fps_num = ((-2 * (next_i()%2)) + 1) * next_i();
        ovi[_i0].output_format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          make_video_info(vi,ovi);
          for(int _aux = 0; _aux < _len_vi0; _aux++) {
          free(vi[_aux].name);
          }
          free(vi);
          free(ovi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
