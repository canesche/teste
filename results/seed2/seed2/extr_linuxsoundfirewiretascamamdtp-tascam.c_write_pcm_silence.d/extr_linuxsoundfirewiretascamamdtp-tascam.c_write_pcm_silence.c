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
struct amdtp_tscm {unsigned int pcm_channels; } ;
struct amdtp_stream {int /*<<< orphan*/  data_block_quadlets; struct amdtp_tscm* protocol; } ;
typedef  int __be32 ;

/* Variables and functions */

__attribute__((used)) static void write_pcm_silence(struct amdtp_stream *s, __be32 *buffer,
			      unsigned int data_blocks)
{
	struct amdtp_tscm *p = s->protocol;
	unsigned int channels, i, c;

	channels = p->pcm_channels;

	for (i = 0; i < data_blocks; ++i) {
		for (c = 0; c < channels; ++c)
			buffer[c] = 0x00000000;
		buffer += s->data_block_quadlets;
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
          unsigned int data_blocks = 100;
          int _len_s0 = 1;
          struct amdtp_stream * s = (struct amdtp_stream *) malloc(_len_s0*sizeof(struct amdtp_stream));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].data_block_quadlets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__protocol0 = 1;
          s[_i0].protocol = (struct amdtp_tscm *) malloc(_len_s__i0__protocol0*sizeof(struct amdtp_tscm));
          for(int _j0 = 0; _j0 < _len_s__i0__protocol0; _j0++) {
            s[_i0].protocol->pcm_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buffer0 = 1;
          int * buffer = (int *) malloc(_len_buffer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          write_pcm_silence(s,buffer,data_blocks);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].protocol);
          }
          free(s);
          free(buffer);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int data_blocks = 255;
          int _len_s0 = 65025;
          struct amdtp_stream * s = (struct amdtp_stream *) malloc(_len_s0*sizeof(struct amdtp_stream));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].data_block_quadlets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__protocol0 = 1;
          s[_i0].protocol = (struct amdtp_tscm *) malloc(_len_s__i0__protocol0*sizeof(struct amdtp_tscm));
          for(int _j0 = 0; _j0 < _len_s__i0__protocol0; _j0++) {
            s[_i0].protocol->pcm_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buffer0 = 65025;
          int * buffer = (int *) malloc(_len_buffer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          write_pcm_silence(s,buffer,data_blocks);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].protocol);
          }
          free(s);
          free(buffer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int data_blocks = 10;
          int _len_s0 = 100;
          struct amdtp_stream * s = (struct amdtp_stream *) malloc(_len_s0*sizeof(struct amdtp_stream));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].data_block_quadlets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__protocol0 = 1;
          s[_i0].protocol = (struct amdtp_tscm *) malloc(_len_s__i0__protocol0*sizeof(struct amdtp_tscm));
          for(int _j0 = 0; _j0 < _len_s__i0__protocol0; _j0++) {
            s[_i0].protocol->pcm_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buffer0 = 100;
          int * buffer = (int *) malloc(_len_buffer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          write_pcm_silence(s,buffer,data_blocks);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].protocol);
          }
          free(s);
          free(buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
