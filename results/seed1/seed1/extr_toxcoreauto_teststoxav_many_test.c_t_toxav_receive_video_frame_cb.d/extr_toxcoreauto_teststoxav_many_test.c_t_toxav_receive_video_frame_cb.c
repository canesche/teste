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
typedef  int /*<<< orphan*/  uint8_t ;
typedef  int /*<<< orphan*/  uint32_t ;
typedef  int /*<<< orphan*/  uint16_t ;
typedef  int /*<<< orphan*/  int32_t ;
typedef  int /*<<< orphan*/  ToxAV ;

/* Variables and functions */

void t_toxav_receive_video_frame_cb(ToxAV *av, uint32_t friend_number,
                                    uint16_t width, uint16_t height,
                                    uint8_t const *y, uint8_t const *u, uint8_t const *v,
                                    int32_t ystride, int32_t ustride, int32_t vstride,
                                    void *user_data)
{
    (void) av;
    (void) friend_number;
    (void) width;
    (void) height;
    (void) y;
    (void) u;
    (void) v;
    (void) ystride;
    (void) ustride;
    (void) vstride;
    (void) user_data;
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
          int friend_number = 100;
          int width = 100;
          int height = 100;
          int ystride = 100;
          int ustride = 100;
          int vstride = 100;
          int _len_av0 = 1;
          int * av = (int *) malloc(_len_av0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_av0; _i0++) {
            av[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y0 = 1;
          const int * y = (const int *) malloc(_len_y0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_u0 = 1;
          const int * u = (const int *) malloc(_len_u0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_u0; _i0++) {
            u[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_v0 = 1;
          const int * v = (const int *) malloc(_len_v0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * user_data;
          t_toxav_receive_video_frame_cb(av,friend_number,width,height,y,u,v,ystride,ustride,vstride,user_data);
          free(av);
          free(y);
          free(u);
          free(v);
        
        break;
    }
    // big-arr
    case 1:
    {
          int friend_number = 255;
          int width = 255;
          int height = 255;
          int ystride = 255;
          int ustride = 255;
          int vstride = 255;
          int _len_av0 = 65025;
          int * av = (int *) malloc(_len_av0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_av0; _i0++) {
            av[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y0 = 65025;
          const int * y = (const int *) malloc(_len_y0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_u0 = 65025;
          const int * u = (const int *) malloc(_len_u0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_u0; _i0++) {
            u[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_v0 = 65025;
          const int * v = (const int *) malloc(_len_v0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * user_data;
          t_toxav_receive_video_frame_cb(av,friend_number,width,height,y,u,v,ystride,ustride,vstride,user_data);
          free(av);
          free(y);
          free(u);
          free(v);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int friend_number = 10;
          int width = 10;
          int height = 10;
          int ystride = 10;
          int ustride = 10;
          int vstride = 10;
          int _len_av0 = 100;
          int * av = (int *) malloc(_len_av0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_av0; _i0++) {
            av[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y0 = 100;
          const int * y = (const int *) malloc(_len_y0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_u0 = 100;
          const int * u = (const int *) malloc(_len_u0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_u0; _i0++) {
            u[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_v0 = 100;
          const int * v = (const int *) malloc(_len_v0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * user_data;
          t_toxav_receive_video_frame_cb(av,friend_number,width,height,y,u,v,ystride,ustride,vstride,user_data);
          free(av);
          free(y);
          free(u);
          free(v);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
