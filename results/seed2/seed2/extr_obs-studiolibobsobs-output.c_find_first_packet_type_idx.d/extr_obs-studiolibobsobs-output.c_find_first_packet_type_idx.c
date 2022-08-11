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
struct TYPE_2__ {size_t num; struct encoder_packet* array; } ;
struct obs_output {TYPE_1__ interleaved_packets; } ;
struct encoder_packet {int type; size_t track_idx; } ;
typedef  enum obs_encoder_type { ____Placeholder_obs_encoder_type } obs_encoder_type ;

/* Variables and functions */
 int OBS_ENCODER_AUDIO ; 

__attribute__((used)) static int find_first_packet_type_idx(struct obs_output *output,
		enum obs_encoder_type type, size_t audio_idx)
{
	for (size_t i = 0; i < output->interleaved_packets.num; i++) {
		struct encoder_packet *packet =
			&output->interleaved_packets.array[i];

		if (packet->type == type) {
			if (type == OBS_ENCODER_AUDIO &&
			    packet->track_idx != audio_idx) {
				continue;
			}

			return (int)i;
		}
	}

	return -1;
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
          enum obs_encoder_type type = 0;
          unsigned long audio_idx = 100;
          int _len_output0 = 1;
          struct obs_output * output = (struct obs_output *) malloc(_len_output0*sizeof(struct obs_output));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0].interleaved_packets.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_output__i0__interleaved_packets_array0 = 1;
          output[_i0].interleaved_packets.array = (struct encoder_packet *) malloc(_len_output__i0__interleaved_packets_array0*sizeof(struct encoder_packet));
          for(int _j0 = 0; _j0 < _len_output__i0__interleaved_packets_array0; _j0++) {
            output[_i0].interleaved_packets.array->type = ((-2 * (next_i()%2)) + 1) * next_i();
        output[_i0].interleaved_packets.array->track_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = find_first_packet_type_idx(output,type,audio_idx);
          printf("%d\n", benchRet); 
          free(output);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum obs_encoder_type type = 0;
          unsigned long audio_idx = 255;
          int _len_output0 = 65025;
          struct obs_output * output = (struct obs_output *) malloc(_len_output0*sizeof(struct obs_output));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0].interleaved_packets.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_output__i0__interleaved_packets_array0 = 1;
          output[_i0].interleaved_packets.array = (struct encoder_packet *) malloc(_len_output__i0__interleaved_packets_array0*sizeof(struct encoder_packet));
          for(int _j0 = 0; _j0 < _len_output__i0__interleaved_packets_array0; _j0++) {
            output[_i0].interleaved_packets.array->type = ((-2 * (next_i()%2)) + 1) * next_i();
        output[_i0].interleaved_packets.array->track_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = find_first_packet_type_idx(output,type,audio_idx);
          printf("%d\n", benchRet); 
          free(output);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum obs_encoder_type type = 0;
          unsigned long audio_idx = 10;
          int _len_output0 = 100;
          struct obs_output * output = (struct obs_output *) malloc(_len_output0*sizeof(struct obs_output));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0].interleaved_packets.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_output__i0__interleaved_packets_array0 = 1;
          output[_i0].interleaved_packets.array = (struct encoder_packet *) malloc(_len_output__i0__interleaved_packets_array0*sizeof(struct encoder_packet));
          for(int _j0 = 0; _j0 < _len_output__i0__interleaved_packets_array0; _j0++) {
            output[_i0].interleaved_packets.array->type = ((-2 * (next_i()%2)) + 1) * next_i();
        output[_i0].interleaved_packets.array->track_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = find_first_packet_type_idx(output,type,audio_idx);
          printf("%d\n", benchRet); 
          free(output);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
