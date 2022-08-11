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
typedef  int /*<<< orphan*/  int16_t ;
typedef  int /*<<< orphan*/  ToxAV ;

/* Variables and functions */

void t_toxav_receive_audio_frame_cb(ToxAV *av, uint32_t friend_number,
                                    int16_t const *pcm,
                                    size_t sample_count,
                                    uint8_t channels,
                                    uint32_t sampling_rate,
                                    void *user_data)
{
    (void) av;
    (void) friend_number;
    (void) pcm;
    (void) sample_count;
    (void) channels;
    (void) sampling_rate;
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
          unsigned long sample_count = 100;
          int channels = 100;
          int sampling_rate = 100;
          int _len_av0 = 1;
          int * av = (int *) malloc(_len_av0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_av0; _i0++) {
            av[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcm0 = 1;
          const int * pcm = (const int *) malloc(_len_pcm0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pcm0; _i0++) {
            pcm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * user_data;
          t_toxav_receive_audio_frame_cb(av,friend_number,pcm,sample_count,channels,sampling_rate,user_data);
          free(av);
          free(pcm);
        
        break;
    }
    // big-arr
    case 1:
    {
          int friend_number = 255;
          unsigned long sample_count = 255;
          int channels = 255;
          int sampling_rate = 255;
          int _len_av0 = 65025;
          int * av = (int *) malloc(_len_av0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_av0; _i0++) {
            av[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcm0 = 65025;
          const int * pcm = (const int *) malloc(_len_pcm0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pcm0; _i0++) {
            pcm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * user_data;
          t_toxav_receive_audio_frame_cb(av,friend_number,pcm,sample_count,channels,sampling_rate,user_data);
          free(av);
          free(pcm);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int friend_number = 10;
          unsigned long sample_count = 10;
          int channels = 10;
          int sampling_rate = 10;
          int _len_av0 = 100;
          int * av = (int *) malloc(_len_av0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_av0; _i0++) {
            av[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcm0 = 100;
          const int * pcm = (const int *) malloc(_len_pcm0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pcm0; _i0++) {
            pcm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * user_data;
          t_toxav_receive_audio_frame_cb(av,friend_number,pcm,sample_count,channels,sampling_rate,user_data);
          free(av);
          free(pcm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
