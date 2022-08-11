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
typedef  size_t uint8_t ;
struct dc_info_packet {size_t* sb; scalar_t__ valid; } ;

/* Variables and functions */

__attribute__((used)) static void patch_gamut_packet_checksum(
		struct dc_info_packet *gamut_packet)
{
	/* For gamut we recalc checksum */
	if (gamut_packet->valid) {
		uint8_t chk_sum = 0;
		uint8_t *ptr;
		uint8_t i;

		/*start of the Gamut data. */
		ptr = &gamut_packet->sb[3];

		for (i = 0; i <= gamut_packet->sb[1]; i++)
			chk_sum += ptr[i];

		gamut_packet->sb[2] = (uint8_t) (0x100 - chk_sum);
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
          int _len_gamut_packet0 = 1;
          struct dc_info_packet * gamut_packet = (struct dc_info_packet *) malloc(_len_gamut_packet0*sizeof(struct dc_info_packet));
          for(int _i0 = 0; _i0 < _len_gamut_packet0; _i0++) {
              int _len_gamut_packet__i0__sb0 = 1;
          gamut_packet[_i0].sb = (unsigned long *) malloc(_len_gamut_packet__i0__sb0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_gamut_packet__i0__sb0; _j0++) {
            gamut_packet[_i0].sb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        gamut_packet[_i0].valid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          patch_gamut_packet_checksum(gamut_packet);
          for(int _aux = 0; _aux < _len_gamut_packet0; _aux++) {
          free(gamut_packet[_aux].sb);
          }
          free(gamut_packet);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_gamut_packet0 = 65025;
          struct dc_info_packet * gamut_packet = (struct dc_info_packet *) malloc(_len_gamut_packet0*sizeof(struct dc_info_packet));
          for(int _i0 = 0; _i0 < _len_gamut_packet0; _i0++) {
              int _len_gamut_packet__i0__sb0 = 1;
          gamut_packet[_i0].sb = (unsigned long *) malloc(_len_gamut_packet__i0__sb0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_gamut_packet__i0__sb0; _j0++) {
            gamut_packet[_i0].sb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        gamut_packet[_i0].valid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          patch_gamut_packet_checksum(gamut_packet);
          for(int _aux = 0; _aux < _len_gamut_packet0; _aux++) {
          free(gamut_packet[_aux].sb);
          }
          free(gamut_packet);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_gamut_packet0 = 100;
          struct dc_info_packet * gamut_packet = (struct dc_info_packet *) malloc(_len_gamut_packet0*sizeof(struct dc_info_packet));
          for(int _i0 = 0; _i0 < _len_gamut_packet0; _i0++) {
              int _len_gamut_packet__i0__sb0 = 1;
          gamut_packet[_i0].sb = (unsigned long *) malloc(_len_gamut_packet__i0__sb0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_gamut_packet__i0__sb0; _j0++) {
            gamut_packet[_i0].sb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        gamut_packet[_i0].valid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          patch_gamut_packet_checksum(gamut_packet);
          for(int _aux = 0; _aux < _len_gamut_packet0; _aux++) {
          free(gamut_packet[_aux].sb);
          }
          free(gamut_packet);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
